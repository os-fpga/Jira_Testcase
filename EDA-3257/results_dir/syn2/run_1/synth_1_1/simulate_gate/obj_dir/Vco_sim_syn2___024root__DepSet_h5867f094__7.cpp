// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_syn2.h for the primary calling header

#include "Vco_sim_syn2__pch.h"
#include "Vco_sim_syn2___024root.h"

VL_INLINE_OPT void Vco_sim_syn2___024root___nba_sequent__TOP__12(Vco_sim_syn2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_syn2___024root___nba_sequent__TOP__12\n"); );
    // Body
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02efract_out_d__05b10__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15871__02eC__05b10__05d) 
           ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15871__02eS__05b10__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15871__02eC__05b11__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15871__02eS__05b10__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15871__02eC__05b10__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b10__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02efract_out_d__05b10__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15919__02eC__05b10__05d) 
           ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15919__02eS__05b10__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15919__02eC__05b11__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15919__02eS__05b10__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15919__02eC__05b10__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b10__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15773__02eC__05b14__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15773__02eS__05b13__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15773__02eC__05b13__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b13__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8637___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15773__02eS__05b9__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717483__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717483__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10370___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719276__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719276__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719219__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719219__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719276__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719276__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719219__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719219__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10392___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719259__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719259__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719243__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719243__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719259__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719259__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719243__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719243__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719188__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10339___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719188__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719188__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10352___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10380___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719226__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10356___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719202__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10380___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719226__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10356___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719202__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1943_li1943) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10387___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719233__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10335___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719181__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10387___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719233__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10335___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719181__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10379___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10363___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719225__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719225__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10364___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10360___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719210__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719210__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1790_li1790 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5775___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714637__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714637__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10174___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719114__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719114__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10182___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719028__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719114__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719114__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10182___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719028__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718993__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b19__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718993__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718993__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b18__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719123__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719123__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719118__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719118__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719123__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719123__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719118__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719118__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10191___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b22__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719037__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719037__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1945_li1945) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719041__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719041__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719003__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719003__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719041__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719041__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719003__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719003__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719107__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10203___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719107__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719107__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719010__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10163___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719010__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719010__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10184___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10151___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719030__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719030__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10224___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10227___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719073__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719099__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10226___05F)
                ? 6U : 9U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10227___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719073__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719099__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10226___05F)
                ? 9U : 6U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15739__02eC__05b14__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15739__02eS__05b13__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15739__02eC__05b13__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b13__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10390___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10341___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719236__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719236__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15705__02eC__05b15__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15705__02eS__05b14__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15705__02eC__05b14__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b14__05d));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7743___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7732___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716914__DOT__s1 = 2U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716904__DOT__s4 = 0x1000U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716914__DOT__s1 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716904__DOT__s4 = 0U;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716906__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716906__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716590__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716590__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716914__DOT__s1 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716906__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716906__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716904__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716590__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716590__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10210___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719057__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10208___05F)
                ? 0U : 1U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10260___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719106__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10257___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719103__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719057__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10208___05F)
                ? 1U : 3U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10260___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719106__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10257___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719103__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0086_li0086 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b21__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719151__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719151__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10246___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10241___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719092__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719092__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719109__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10199___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719109__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719109__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15682__02eC__05b14__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15682__02eS__05b13__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15682__02eC__05b13__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b13__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15807__02eC__05b14__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15807__02eS__05b13__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15807__02eC__05b13__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b13__05d));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1727_li1727) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719548__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719548__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10606___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719452__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10621___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719467__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10632___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719478__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719548__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719548__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10606___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719452__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10621___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719467__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10632___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719478__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719534__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10681___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719534__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719534__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10611___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b20__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719457__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719457__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719536__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10616___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719536__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719536__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10674___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719561__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719561__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719524__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719524__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719561__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719561__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719524__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719524__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10650___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b20__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719496__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719496__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10664___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10660___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719510__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719510__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719487__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10633___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719487__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719487__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7484___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716491__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716491__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716494__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716494__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1338_li1338 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716496__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716491__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716491__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716494__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716494__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1338_li1338 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716496__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10507___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719439__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719439__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719362__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719362__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719439__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719439__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719362__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719362__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718495__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9566___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718495__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718495__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718449__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9602___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718449__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718449__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1029_li1029) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717321__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717321__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717322__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717322__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717323__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717323__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717318__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717318__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717049__DOT__s4 = 0x5555U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717324__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717324__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717325__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717325__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717326__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717326__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717321__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717321__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717322__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717322__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717323__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717323__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717318__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717318__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717049__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3486___05F)
                ? 0x445U : 0x5555U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717324__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717324__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717325__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717325__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717326__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717326__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0141_li0141 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9924___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718834__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718834__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9931___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9930___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718777__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718777__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714622__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b30__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5775___05F)
                ? 2U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5775___05F)
                               ? 0U : 1U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714625__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b30__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5775___05F)
                ? 7U : 0x77U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5775___05F)
                                  ? 0x77U : 0x74U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714625__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b30__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714625__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714625__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1792_li1792 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b30__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714622__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714622__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10180___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10183___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719029__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719114__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719114__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10183___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719029__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719114__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719114__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b20__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10168___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719014__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10147___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718993__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10168___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719014__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10147___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718993__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718672__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9750___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718672__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718672__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718665__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9736___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718665__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718665__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718622__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9769___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718622__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718622__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9764___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9757___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718610__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718610__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9317___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9316___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718163__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718163__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9345___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eexp_r__05b6__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718191__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718191__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717763__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8915___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717763__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717763__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eexp_r__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717126__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717126__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717112__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717112__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717126__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717126__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717112__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717112__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b22__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719546__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719546__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10702___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719548__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719546__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719546__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10702___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719548__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b29__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716325__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716325__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716313__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716313__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716325__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716325__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716313__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716313__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719367__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10489___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719367__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719367__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9915___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1729_li1729)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718761__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718761__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718696__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9847___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9836___05F)
                ? 0xe9U : 0x7fU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9836___05F)
                                     ? 0xfeU : 0x17U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10562___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719414__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719414__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719410__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10563___05F)
                ? 0xe8U : 0x17U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719414__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719414__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719410__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10563___05F)
                ? 0x17U : 0xe8U);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9840___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718690__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718690__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718809__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9841___05F)
                ? 0xe8U : 0x17U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718690__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718690__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718809__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9841___05F)
                ? 0x17U : 0xe8U);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10554___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10557___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719427__DOT__s4 = 0x8e18U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719404__DOT__s4 = 0xfffbU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719427__DOT__s4 = 0x71e7U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719404__DOT__s4 = 0xb220U;
        }
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10557___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719427__DOT__s4 = 0x1871U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719404__DOT__s4 = 0xfbb2U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719427__DOT__s4 = 0xe78eU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719404__DOT__s4 = 0x2000U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719429__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10463___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719429__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719429__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718804__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9953___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718804__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718804__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719431__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10472___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719431__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719431__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718795__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9943___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718795__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718795__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718740__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9879___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718740__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718740__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719379__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10475___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719379__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719379__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9882___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9876___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718728__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718728__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718739__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9891___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718739__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718739__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718738__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9886___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718738__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718738__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718757__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9901___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718757__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718757__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7880___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716744__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7897___05F)
                ? 0xfffeU : 2U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716736__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7887___05F)
                ? 0xfffdU : 1U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716744__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7897___05F)
                ? 0xffffU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716736__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7887___05F)
                ? 0xffffU : 0U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718897__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10050___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718897__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718897__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9771___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718669__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718669__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9776___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718622__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718669__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718669__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9776___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718622__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718911__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10056___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718911__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718911__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0113_li0113 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10058___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718984__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718984__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718964__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10006___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718964__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718964__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718277__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eexp_r__05b1__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718277__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718277__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718158__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9300___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718158__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718158__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718158__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eexp_r__05b1__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718158__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718158__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718966__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10011___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718966__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718966__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718947__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10019___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10100___05F)
                ? 0x7fffU : 0x117U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10100___05F)
                                        ? 0x177fU : 1U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10483___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719340__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719340__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10521___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719367__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719340__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719340__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10521___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719367__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10094___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10095___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718970__DOT__s3 = 0x4fU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718943__DOT__s3 = 0x75U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718970__DOT__s3 = 0xb0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718943__DOT__s3 = 0U;
        }
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10095___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718970__DOT__s3 = 0xb0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718943__DOT__s3 = 0xffU;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718970__DOT__s3 = 0x4fU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718943__DOT__s3 = 0x75U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718976__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10087___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10040___05F)
                ? 0x8777U : 0x7888U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10040___05F)
                                         ? 0xf000U : 0xfffU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eexp_r__05b2__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717574__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717574__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717565__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717565__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717574__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717574__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717565__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717565__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717657__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02efract_out_q__05b27__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717657__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717657__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712659__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b27__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712659__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712659__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b24__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712650__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712650__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712652__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712652__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712650__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712650__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712652__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712652__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712649__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b23__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712649__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712649__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8285___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02efract_out_q__05b9__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717131__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717131__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10474___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10528___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719374__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719379__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719379__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10528___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719374__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719379__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719379__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8264___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02efract_out_q__05b9__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717110__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717110__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8247___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717122__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717122__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8270___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717116__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717122__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717122__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8270___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717116__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713754__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b30__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713754__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713754__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10040___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10086___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718932__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718934__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10087___05F)
                ? 0U : 0xfU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10051___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718897__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10086___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718932__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718934__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10087___05F)
                ? 0U : 8U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10051___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718897__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713749__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2010_li2010)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4893___05F)
                ? 0U : 0x7fU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4893___05F)
                                  ? 0x1fU : 0xe0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718981__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10076___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718981__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718981__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718926__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10077___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718926__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718926__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10080___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10076___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718926__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718926__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713756__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2010_li2010)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713756__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713756__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10099___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718968__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10100___05F)
                ? 0x8e18U : 0x71e7U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718947__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718947__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718968__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10100___05F)
                ? 0x1871U : 0xe78eU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718947__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718947__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713750__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2010_li2010)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4891___05F)
                ? 0x80U : 0x7fU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4891___05F)
                                     ? 0x1fU : 0xe0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718939__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10033___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10092___05F)
                ? 0x7fffU : 0x117U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10092___05F)
                                        ? 0x177fU : 1U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718971__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10091___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10092___05F)
                ? 0x81e8U : 0x7e17U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10092___05F)
                                         ? 0x1781U : 0xe87eU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718971__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10033___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718971__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718971__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718939__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10091___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718939__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718939__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b17__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8559___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717405__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8515___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717361__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8559___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717405__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8515___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717361__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8711___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717564__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717564__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717574__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717574__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717564__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717564__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717574__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717574__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b6__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3845___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712691__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8573___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717419__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3845___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712691__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8573___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717419__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712677__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3830___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3820___05F)
                     ? 3U : 5U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8499___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b21__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717345__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717345__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717342__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b21__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717342__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717342__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8496___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b21__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717342__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717342__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8614___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b1__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717460__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717460__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8615___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b3__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717461__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717461__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8567___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b9__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717413__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717413__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8579___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b5__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717425__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717425__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8566___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b7__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717412__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717412__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8556___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b8__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717402__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717402__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8547___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b10__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717393__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717393__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8522___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b15__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717368__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717368__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8529___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b13__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717375__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717375__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8512___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b18__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717358__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717358__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b30__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713752__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713752__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2016_li2016 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713754__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713752__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713752__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2016_li2016 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713754__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3853___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b12__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712699__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712699__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8502___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b20__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717348__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717348__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8508___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b19__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717354__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717354__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3849___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b14__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3850___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b16__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712696__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712696__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716717__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7869___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716717__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716717__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716723__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7851___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716723__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716723__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716731__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7848___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716731__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716731__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716837__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eexp_r__05b2__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716837__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716837__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716837__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7848___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716837__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716837__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714590__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5185___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714590__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714590__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714260__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5412___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714260__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714260__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5191___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714500__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714500__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5633___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714479__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714603__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714603__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714045__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714045__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714039__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714039__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714053__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5206___05F)
                ? 0xf5fU : 0U);
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5276___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714446__DOT__s3 = 0xaU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714123__DOT__s3 = 3U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714446__DOT__s3 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714123__DOT__s3 = 0U;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714412__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5205___05F)
                ? 3U : 0xfU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714087__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714087__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714439__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714439__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714413__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5188___05F)
                ? 0xffU : 0xf0fU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714146__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5299___05F)
                ? 0xf55U : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714500__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714500__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5633___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714479__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714603__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714603__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714045__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714045__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714039__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714039__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714053__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5206___05F)
                ? 0xf3fU : 0U);
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5276___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714446__DOT__s3 = 0xcU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714123__DOT__s3 = 5U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714446__DOT__s3 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714123__DOT__s3 = 0U;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714412__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5205___05F)
                ? 0x33U : 0x55U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714087__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714087__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714439__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714439__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714413__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5188___05F)
                ? 0xffU : 0xbbbbU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714146__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5299___05F)
                ? 0xff33U : 0U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714372__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5436___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5191___05F)
                     ? 0xccU : 0xfaU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714463__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5094___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714463__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714463__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714460__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02einf_mul2)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714460__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714460__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3592___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3588___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712438__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712438__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b2__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9624___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718470__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712717__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712717__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9624___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718470__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712717__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712717__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3630___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712476__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712508__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712508__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3630___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712476__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712508__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712508__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3662___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b2__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712508__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712508__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7695___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b11__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716541__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716541__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b7__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3623___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712469__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712492__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712492__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712630__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712630__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3623___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712469__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712492__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712492__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712630__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712630__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712707__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b6__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712707__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712707__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3861___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b7__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712707__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712707__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712472__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3624___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712472__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712472__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b3__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716608__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716608__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3714___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712560__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3871___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712717__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716608__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716608__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3714___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712560__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3871___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712717__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712493__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b5__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712493__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712493__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3647___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b6__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712493__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712493__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712716__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712716__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712716__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3870___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b5__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712716__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712716__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712500__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b9__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712500__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712500__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b20__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718671__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718671__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7692___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716538__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712714__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712714__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718561__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718561__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0166_li0166 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718672__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718671__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718671__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7692___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716538__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712714__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712714__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718561__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718561__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0166_li0166 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718672__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718618__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b6__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718618__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718618__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718618__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b20__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718618__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718618__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716514__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b19__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716514__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716514__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7668___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b20__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716514__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716514__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712710__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b14__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712710__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712710__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712463__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b13__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712463__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712463__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3617___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b14__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712463__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712463__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b15__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712501__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712501__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3864___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712710__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712501__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712501__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3864___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712710__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b16__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712719__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712719__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3655___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712501__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712719__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712719__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3655___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712501__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716520__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b18__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716520__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716520__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7674___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b19__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716520__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716520__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712490__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b21__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712490__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712490__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b22__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3867___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712713__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3644___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712490__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3867___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712713__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3644___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712490__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3868___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b21__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712714__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712714__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712431__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b17__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712431__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712431__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3585___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b18__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712431__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712431__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3873___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b17__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712719__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712719__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712452__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b26__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712452__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712452__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712460__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3604___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712460__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712460__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3601___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3584___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712447__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712447__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712451__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3604___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3601___05F)
                ? 0U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3601___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712445__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b24__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712445__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712445__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713639__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4791___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713639__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713639__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718651__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9700___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718651__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718651__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718653__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9710___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9793___05F)
                ? 0x42d4U : 0xbd2bU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9793___05F)
                                         ? 0x2b42U : 0xd4bdU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718636__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9720___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9789___05F)
                ? 0x117U : 0x7fffU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9789___05F)
                                        ? 1U : 0x177fU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718659__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9724___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718659__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718659__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718664__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9783___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9817___05F)
                ? 1U : 0xeU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9817___05F)
                                 ? 0xeU : 1U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716490__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b30__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716490__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716490__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1344_li1344 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7643___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716493__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716493__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2088_li2088 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b29__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713640__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713640__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3694___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3692___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712540__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712540__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712545__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3693___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712545__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712545__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3699___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3692___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712545__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712545__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712554__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3693___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712554__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712554__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3708___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3692___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712554__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712554__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3688___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712546__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712546__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712535__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b27__05d)
                ? 6U : 0xb00U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712546__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712546__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712535__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b27__05d)
                ? 0x300U : 3U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712551__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b27__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3688___05F)
                ? 2U : 1U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3688___05F)
                               ? 1U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716492__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b28__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716492__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716492__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b6__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712601__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712601__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718029__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718029__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712601__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712601__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718029__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718029__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712620__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b5__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712620__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712620__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3774___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b6__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712620__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712620__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716396__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b5__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716396__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716396__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7550___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b6__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716396__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716396__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712588__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3717___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712588__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712588__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712588__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b1__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712588__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712588__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712597__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712597__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712597__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712599__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b2__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712599__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712599__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b3__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712621__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712621__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3753___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712599__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712621__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712621__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3753___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712599__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712631__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b1__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712631__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712631__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3785___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b2__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712631__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712631__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712613__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712613__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712613__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b5__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718671__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718671__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3767___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712613__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718671__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718671__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3767___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712613__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3775___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712621__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712621__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712598__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b8__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712598__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712598__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712612__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b10__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712612__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712612__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b9__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712587__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712587__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718022__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718022__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3752___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712598__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712587__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712587__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718022__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718022__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3752___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712598__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b13__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3707___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712553__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712579__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712579__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3707___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712553__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712579__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712579__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712604__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b12__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712604__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712604__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b10__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712272__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712272__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3741___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712587__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9176___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718022__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712272__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712272__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3741___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712587__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9176___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718022__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b7__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719652__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719652__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3784___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712630__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3755___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712601__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9183___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718029__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719652__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719652__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3784___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712630__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3755___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712601__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9183___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718029__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717993__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b12__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717993__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717993__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712618__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b11__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712618__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712618__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3772___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b12__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712618__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712618__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712306__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b11__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712306__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712306__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3460___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b12__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712306__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712306__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b13__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712225__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712225__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3758___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712604__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9147___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717993__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712225__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712225__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3758___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712604__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9147___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717993__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b11__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3766___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712612__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3426___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712272__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3766___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712612__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3426___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712272__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712578__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b15__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712578__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712578__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b18__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716340__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716340__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712289__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712289__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716340__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716340__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712289__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712289__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b14__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9264___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718110__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712606__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712606__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718006__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718006__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3733___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712579__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3379___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712225__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9264___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718110__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712606__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712606__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718006__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718006__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3733___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712579__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3379___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712225__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718473__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b18__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9624___05F)
                ? 0xbfffU : 0x22bU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9624___05F)
                                        ? 0xffffU : 0x2b2bU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712623__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b17__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712623__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712623__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3777___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b18__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712623__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712623__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717981__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b17__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717981__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717981__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9135___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b18__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717981__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717981__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9715___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b17__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718561__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718561__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b16__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3696___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712542__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712605__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712605__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3696___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712542__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712605__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712605__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3759___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b17__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712605__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712605__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717986__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b16__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717986__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717986__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9140___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b17__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717986__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717986__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712224__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b15__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712224__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712224__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b16__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3732___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712578__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3378___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712224__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3732___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712578__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3378___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712224__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b15__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3760___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712606__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9160___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718006__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3760___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712606__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9160___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718006__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b19__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717969__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717969__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717969__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717969__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b20__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9619___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718465__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716335__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716335__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9540___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718386__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712288__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712288__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3711___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9123___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717969__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9619___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718465__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716335__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716335__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9540___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718386__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712288__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712288__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3711___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9123___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717969__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b19__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7494___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716340__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3443___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712289__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7494___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716340__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3443___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712289__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b21__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712626__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712626__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718401__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718401__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712626__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712626__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718401__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718401__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718401__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b13__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718401__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718401__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b21__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712302__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712302__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7489___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716335__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3442___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712288__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712302__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712302__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7489___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716335__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3442___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712288__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718648__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9698___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718648__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718648__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b22__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3765___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712611__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718381__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718381__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3765___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712611__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718381__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718381__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9539___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9536___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718385__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718385__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9659___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9546___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718505__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718505__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718499__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9551___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9556___05F)
                ? 0xb2U : 0x4dU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9556___05F)
                                     ? 0x4dU : 0xb2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718421__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9574___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9572___05F)
                ? 0x37U : 1U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9572___05F)
                                  ? 0x7fU : 0x13U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718492__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9569___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9572___05F)
                ? 0xe8U : 0x17U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9572___05F)
                                     ? 0x17U : 0xe8U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718492__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9574___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718492__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718492__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718443__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9591___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718443__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718443__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9590___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718487__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718487__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718443__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718443__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718487__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718487__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718443__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718443__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9635___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9630___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718481__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718481__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718479__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9611___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9632___05F)
                ? 0x177fU : 0x101U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9632___05F)
                                        ? 0x7fffU : 0x117U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3498___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b23__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712344__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712344__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3485___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3490___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712336__DOT__s1) 
                     >> 1U));
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3490___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712390__DOT__s4 = 0xff55U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716982__DOT__s4 = 0xffffU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716939__DOT__s3 = 0xf0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716990__DOT__s4 = 0xf0fU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716934__DOT__s3 = 0xaaU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712390__DOT__s4 = 0xffffU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716982__DOT__s4 = 0xf0fU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716939__DOT__s3 = 0xaaU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716990__DOT__s4 = 0x3355U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716934__DOT__s3 = 0xf0U;
        }
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3490___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712336__DOT__s1));
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3490___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712390__DOT__s4 = 0xffffU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716982__DOT__s4 = 0x3355U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716939__DOT__s3 = 0xf0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716990__DOT__s4 = 0xf0fU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716934__DOT__s3 = 0xccU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712390__DOT__s4 = 0x330fU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716982__DOT__s4 = 0xffffU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716939__DOT__s3 = 0xccU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716990__DOT__s4 = 0xffffU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716934__DOT__s3 = 0xf0U;
        }
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b24__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712321__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712321__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712290__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712290__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712321__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712321__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712290__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712290__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712325__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b26__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712325__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712325__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712243__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3394___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712243__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712243__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3391___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3388___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712237__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712237__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b23__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712528__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712528__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3354___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712200__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712226__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712226__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712528__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712528__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3354___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712200__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712226__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712226__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712254__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3405___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712254__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712254__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712257__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3347___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712257__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712257__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712257__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3405___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712257__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712257__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0351_li0351) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718367__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718367__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718368__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718368__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718369__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718369__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718370__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718370__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718367__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718367__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718368__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718368__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718369__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718369__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718370__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718370__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3368___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712218__DOT__s1 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712228__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3367___05F)
                ? 2U : 1U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712218__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3371___05F)
                ? 0U : 1U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712228__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3367___05F)
                ? 3U : 0U);
    }
    if (vlSelf->__VdfgRegularize_hd87f99a1_0_8) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712260__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712260__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3382___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712228__DOT__s1));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712260__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712260__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3382___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712228__DOT__s1) 
                     >> 1U));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3371___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712221__DOT__s3 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712231__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712276__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3367___05F)
                ? 0x80U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718046__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3354___05F)
                ? 0x1000U : 0U);
    } else {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3360___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712221__DOT__s3 = 0x41U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712231__DOT__s4 = 0xeeefU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712221__DOT__s3 = 0xbeU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712231__DOT__s4 = 0x130U;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712276__DOT__s3 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718046__DOT__s4 = 0U;
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02eadd_d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0230_li0230 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718363__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0228_li0228 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718364__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0226_li0226 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718365__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0224_li0224 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718366__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0222_li0222 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718367__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0220_li0220 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718368__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0218_li0218 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718369__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0216_li0216 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718370__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0230_li0230 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718363__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0228_li0228 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718364__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0226_li0226 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718365__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0224_li0224 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718366__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0222_li0222 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718367__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0220_li0220 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718368__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0218_li0218 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718369__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0216_li0216 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718370__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3374___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3349___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712220__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712220__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712212__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3365___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712212__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712212__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714602__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5748___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714602__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714602__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714180__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5191___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714180__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714180__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714230__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5381___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714230__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714230__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714292__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5441___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714292__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714292__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714377__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5528___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5530___05F)
                ? 0xff0fU : 0xbb0bU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5530___05F)
                                         ? 0xff0fU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713989__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5116___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu4__02eop_mul)
                ? 0x40U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu4__02eop_mul)
                                  ? 0xfU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713974__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5105___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5127___05F)
                ? 0U : 0x7fffU) : 0U);
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b2__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3523___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712369__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3569___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712415__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3523___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712369__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3569___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712415__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3527___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b13__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712373__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712373__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712403__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3478___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712403__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712403__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3496___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3493___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712342__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712342__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b6__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3517___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712363__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3562___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712408__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3517___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712363__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3562___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712408__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3559___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b22__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712405__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712405__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b20__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8081___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716927__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3560___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712406__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8081___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716927__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3560___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712406__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3535___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b1__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712381__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712381__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3554___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b8__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712400__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712400__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3563___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712409__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712409__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3547___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b3__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712393__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712393__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8152___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b5__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716998__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716998__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3546___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b9__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712392__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712392__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3540___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b7__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712386__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712386__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3553___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b10__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712399__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712399__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3505___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b12__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712351__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712351__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3549___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b11__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712395__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712395__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3506___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b14__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712352__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712352__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3534___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b13__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712380__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712380__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8092___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b17__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716938__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716938__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3504___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b16__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3543___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b15__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712389__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712389__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3565___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b18__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712411__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712411__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713068__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4213___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4221___05F)
                ? 0xff0fU : 0xee0eU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4221___05F)
                                         ? 0xff0fU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4064___05F 
        = (1U & (((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b47__05d) 
                  | (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3966___05F))
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712910__DOT__s1)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712910__DOT__s1) 
                     >> 1U)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b45__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6939___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715785__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715720__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715720__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6939___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715785__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715720__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715720__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716074__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7224___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7227___05F)
                ? 0xef00U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7227___05F)
                                    ? 0xefefU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716101__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7252___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7254___05F)
                ? 0x7f0fU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7254___05F)
                                    ? 0xf0fU : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b0__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5476___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714322__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713916__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713916__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713953__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713953__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5476___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714322__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713916__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713916__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713953__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713953__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714579__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5727___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714579__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714579__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5191___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714169__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714169__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714204__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714204__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714250__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714250__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714350__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714350__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714283__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5436___05F)
                ? 0xff00U : 0xf0f0U);
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5188___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714318__DOT__s2 = 3U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714397__DOT__s4 = 0xccccU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714318__DOT__s2 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714397__DOT__s4 = 0xff00U;
        }
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714169__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714169__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714204__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714204__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714250__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714250__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714350__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714350__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714283__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5436___05F)
                ? 0xaaaaU : 0xccccU);
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5188___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714318__DOT__s2 = 5U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714397__DOT__s4 = 0xf0f0U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714318__DOT__s2 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714397__DOT__s4 = 0xaaaaU;
        }
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5375___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b38__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714221__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714221__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714222__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5191___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5375___05F)
                ? 0x33U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5375___05F)
                                  ? 0xf5U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719149__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10237___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10238___05F)
                ? 0x42dcU : 0xbd23U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10238___05F)
                                         ? 0x2b02U : 0xd4fdU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714185__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5338___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714185__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714185__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715833__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6986___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715833__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715833__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715912__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7064___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715912__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715912__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7123___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b33__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715969__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715969__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7343___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6984___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716189__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716189__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7313___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b27__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716159__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716159__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7302___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b5__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716148__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716148__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7220___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b28__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716066__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716066__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716175__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7327___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7328___05F)
                     ? 0U : 0xcfafU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715929__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6938___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715929__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715929__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715954__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7102___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7107___05F)
                ? 0xefefU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7107___05F)
                                    ? 0xef00U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7241___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6870___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716087__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716087__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716014__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6936___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7167___05F)
                ? 0xaaf0U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7167___05F)
                                    ? 0xccffU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716014__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6870___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716014__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716014__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7023___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715869__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715869__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716139__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7291___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7292___05F)
                     ? 0U : 0xf7fU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713121__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4273___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4274___05F)
                ? 0xd00U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4739___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b34__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713585__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713585__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713482__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4635___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4120___05F)
                ? 0xbU : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4752___05F 
        = (1U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_96)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713598__DOT__s1)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713598__DOT__s1) 
                     >> 1U)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713612__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4216___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713612__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713612__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4188___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4106___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713034__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713034__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713220__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b41__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713220__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713220__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b0__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713138__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713138__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4374___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713220__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713138__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713138__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4374___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713220__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4265___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4343___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713189__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713612__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713612__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4343___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713189__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713612__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713612__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713423__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4215___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713423__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713423__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713493__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b46__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713493__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713493__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713487__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4638___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713487__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713487__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713244__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4394___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713244__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713244__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713607__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4184___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713607__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713607__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713830__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4934___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713830__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713830__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713794__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4933___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713794__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713794__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0063) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713781__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713781__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4948___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713794__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713781__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713781__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4948___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713794__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4918___05F 
        = (1U & ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx2_mul__02e____VhshRrFaYytnw6nIQuniAWQqJkW5QVsD3bb3eiMl2E4p__DOT__z_out_reg 
                                >> 0x1cU))) ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713764__DOT__s1) 
                                               >> 1U)
                  : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713764__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4929___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0059)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713775__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713775__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4931___05F 
        = (1U & ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx2_mul__02e____VhshRrFaYytnw6nIQuniAWQqJkW5QVsD3bb3eiMl2E4p__DOT__z_out_reg 
                                >> 0x19U))) ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713777__DOT__s1) 
                                               >> 1U)
                  : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713777__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713836__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4939___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713836__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713836__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713835__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4937___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713835__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713835__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713788__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0057)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713788__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713788__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719015__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10154___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719015__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719015__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713835__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0057)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713835__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713835__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715306__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6457___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6459___05F)
                     ? 0xfeabU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715282__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6427___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6435___05F)
                ? 0xf77U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715502__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6266___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5977___05F)
                ? 0x4000U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5977___05F)
                                    ? 0xbfffU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715193__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6341___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715193__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715193__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b35__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6145___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714991__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6501___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715347__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6145___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714991__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6501___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715347__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b36__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6072___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714918__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714998__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714998__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715255__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715255__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6072___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714918__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714998__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714998__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715255__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715255__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6409___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b35__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715255__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715255__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6421___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b16__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715267__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715267__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6419___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b13__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715265__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715265__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715315__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b30__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715315__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715315__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715382__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6535___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6345___05F)
                     ? 0xfffU : 0x7700U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715411__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b38__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715411__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715411__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b39__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6327___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715173__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715429__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715429__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715232__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715232__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6565___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715411__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6327___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715173__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715429__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715429__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715232__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715232__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6565___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715411__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b38__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715287__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715287__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6152___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714998__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715287__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715287__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6152___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714998__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715159__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b42__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715159__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715159__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719440__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10496___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10507___05F)
                ? 0x96U : 0x69U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10507___05F)
                                     ? 0x69U : 0x96U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6050___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b41__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714896__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714896__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717133__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eexp_r__05b0__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717133__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717133__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6313___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b41__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715159__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715159__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b42__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715130__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715130__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715017__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715017__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715130__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715130__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715017__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715017__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b43__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6299___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715145__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714886__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714886__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714962__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714962__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6284___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715130__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6171___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715017__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6299___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715145__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714886__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714886__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714962__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714962__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6284___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715130__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6171___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715017__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713665__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0116)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4810___05F)
                ? 0xedU : 0xdbU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4810___05F)
                                     ? 0xdbU : 0xb7U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9960___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9951___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718806__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718806__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713681__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4810___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4818___05F)
                ? 0x3335U : 0x5ff3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4818___05F)
                                         ? 0x355fU : 0xf333U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713657__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0146)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4810___05F)
                ? 0xfcU : 0xe8U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4810___05F)
                                     ? 0xe8U : 0xc0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9955___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9944___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718801__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718801__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0146) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713665__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713665__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713681__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713681__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713665__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713665__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713681__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713681__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713675__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0112)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713675__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713675__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4831___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0114)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713677__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713677__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713672__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0111)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713672__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713672__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0110) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2061_li2061 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713721__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4826___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713672__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2061_li2061 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713721__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4826___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713672__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715313__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6463___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715313__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715313__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715319__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6472___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715319__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715319__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b23__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712586__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712586__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3685___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712531__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713646__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2088_li2088)
                ? 0x55baU : 0xaa0fU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712586__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712586__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3685___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712531__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713646__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2088_li2088)
                ? 0x1d0fU : 0xaae2U);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9307___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718168__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9321___05F)
                ? 9U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718169__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718169__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718168__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9321___05F)
                ? 6U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718169__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718169__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3682___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b23__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712528__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712528__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716497__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b23__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716494__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716494__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1336_li1336 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b23__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716497__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716497__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718270__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02efract_out_q__05b27__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718270__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718270__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6167___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6165___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715013__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715013__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b37__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6541___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715387__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6386___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715232__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6541___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715387__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6386___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715232__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714997__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6077___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714997__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714997__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715215__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6342___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715215__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715215__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7762___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716608__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716608__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9300___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718277__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718277__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718270__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718270__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718277__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718277__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718270__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718270__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719423__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10439___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10567___05F)
                ? 0x5a0U : 0xfa5fU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10567___05F)
                                        ? 0x93c9U : 0x6c36U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719418__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10567___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719418__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719418__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718473__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b4__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718473__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718473__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6369___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6077___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715215__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715215__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715234__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6146___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715234__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715234__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6342___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715382__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715382__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6388___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715234__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715382__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715382__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6388___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715234__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5944___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714795__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714795__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714800__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714800__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714795__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714795__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714800__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714800__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715299__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6452___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715299__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715299__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b28__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6403___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715249__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6469___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715315__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715299__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715299__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6403___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715249__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6469___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715315__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715299__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715299__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6425___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b9__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715271__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715271__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715655__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6806___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715655__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715655__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02einf_mul2) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715671__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715671__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715655__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715655__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715671__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715671__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715655__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715655__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715672__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu4__02eop_mul)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715672__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715672__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715672__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02einf_mul2)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715672__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715672__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715620__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6771___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715620__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715620__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715649__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6802___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6768___05F)
                ? 0xfcf0U : 0xfae8U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6768___05F)
                                         ? 0xc0ffU : 0xfffcU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715618__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6768___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715618__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715618__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713955__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b2__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713955__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713955__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eexp_r__05b0__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9319___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718165__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9431___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718277__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9319___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718165__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9431___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718277__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718670__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9766___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718670__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718670__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9312___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eexp_r__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718158__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718158__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718669__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9766___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718669__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718669__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5399___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714245__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713918__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713918__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5399___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714245__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713918__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713918__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713918__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b2__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713918__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713918__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5816___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5819___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714703__DOT__s2 = 1U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714700__DOT__s3 = 0xfcU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714703__DOT__s2 = 0xeU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714700__DOT__s3 = 0xaaU;
        }
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5819___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714703__DOT__s2 = 7U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714700__DOT__s3 = 0xc0U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714703__DOT__s2 = 8U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714700__DOT__s3 = 0xaaU;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5798___05F 
        = (1U & ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx1_mul__02e____VhshBxuRHTityI6iNNr10ryRBgO0QSIwvuCbCbbMbmoS__DOT__z_out_reg 
                                >> 0x1aU))) ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714644__DOT__s1) 
                                               >> 1U)
                  : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714644__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5813___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0002)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714659__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714659__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0164) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2203_li2203 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712795__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712748__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712748__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2203_li2203 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712795__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712748__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712748__DOT__s2));
    }
    if ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx4_mul__02e____VhshiHk0hBnMBg5YmEz4uFPvtCA3Y2PVaOtAj79meNrc__DOT__z_out_reg 
                       >> 0x1bU)))) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712751__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712751__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712755__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712755__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712753__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712753__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712751__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712751__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712755__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712755__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712753__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712753__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3885___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712758__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712758__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712732__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712732__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712758__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712758__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712732__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712732__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712689__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3820___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3829___05F)
                ? 0U : 0x3fU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3829___05F)
                                  ? 0U : 0x5fU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3846___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3795___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712692__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712692__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717459__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3820___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3846___05F)
                ? 0xffccU : 0xf0f0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3846___05F)
                                         ? 0xffaaU : 0xf0f0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5120___05F 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5042___05F)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5047___05F));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6752___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6737___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715598__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715598__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715663__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6754___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6790___05F)
                     ? 0xbU : 4U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712902__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4040___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4055___05F)
                ? 0x80U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4055___05F)
                                  ? 0x7fU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6448___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6117___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715294__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715294__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5913___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5928___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714774__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714809__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714809__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714816__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5969___05F)
                ? 0x40U : 0xffbfU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714775__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714775__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714795__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714795__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714800__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714800__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5928___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714774__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714809__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714809__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714816__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5969___05F)
                ? 0xf003U : 0xffeU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714775__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714775__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714795__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714795__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714800__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714800__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4033___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4020___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712879__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712879__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4897___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4899___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713745__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713749__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713749__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4899___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713745__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713749__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713749__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4016___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b15__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712862__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712862__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712843__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3986___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3996___05F)
                ? 0xbfU : 0U) : 0U);
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3996___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713465__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4017___05F)
                ? 0xe87eU : 0x1781U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712898__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4051___05F)
                ? 2U : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713465__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4017___05F)
                ? 0x1781U : 0xe87eU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712898__DOT__s1 = 0U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4052___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3986___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712898__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712898__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714844__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5976___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714844__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714844__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714832__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5960___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714832__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714832__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7875___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716836__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7852___05F)
                ? 4U : 0xbU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716768__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7876___05F)
                ? 0x3fU : 0xeaU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716836__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7852___05F)
                ? 1U : 0xeU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716768__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7876___05F)
                ? 3U : 0xfeU);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715111__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b47__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6264___05F)
                ? 0U : 0xbfU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6264___05F)
                                  ? 0U : 0xffU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b46__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6298___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715144__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715377__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715377__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6298___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715144__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715377__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715377__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713751__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b28__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2010_li2010)
                ? 0x17e8U : 0x8e71U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2010_li2010)
                                         ? 0xe817U : 0x718eU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b47__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6531___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715377__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5986___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714832__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6531___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715377__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5986___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714832__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5953___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5934___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714799__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714799__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15967__02eS__05b15__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efractb_out__05b15__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719936__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719936__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719937__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efractb_out__05b16__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15862__02eC__05b16__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719937__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719937__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15862__02eC__05b17__05d 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efractb_out__05b16__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15862__02eC__05b16__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15943__02eS__05b15__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efractb_out__05b15__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719867__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719867__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719868__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efractb_out__05b16__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15853__02eC__05b16__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719868__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719868__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15853__02eC__05b17__05d 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efractb_out__05b16__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15853__02eC__05b16__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15871__02eS__05b15__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efractb_out__05b15__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719744__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719744__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3806___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3795___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712652__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712652__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8601___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b2__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717447__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717447__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3803___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3795___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712649__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712649__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8587___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717433__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717433__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719745__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efractb_out__05b16__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15841__02eC__05b16__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719745__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719745__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15841__02eC__05b17__05d 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efractb_out__05b16__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15841__02eC__05b16__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15919__02eS__05b15__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efractb_out__05b15__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719819__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719819__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719820__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efractb_out__05b16__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15844__02eC__05b16__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719820__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719820__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15844__02eC__05b17__05d 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efractb_out__05b16__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15844__02eC__05b16__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15895__02eS__05b15__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efractb_out__05b15__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719770__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719770__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719771__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efractb_out__05b16__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15856__02eC__05b16__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719771__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719771__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15856__02eC__05b17__05d 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efractb_out__05b16__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15856__02eC__05b16__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02efract_out_d__05b11__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15943__02eC__05b11__05d) 
           ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15943__02eS__05b11__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15943__02eC__05b12__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15943__02eS__05b11__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15943__02eC__05b11__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b11__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02efract_out_d__05b11__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15967__02eC__05b11__05d) 
           ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15967__02eS__05b11__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15967__02eC__05b12__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15967__02eS__05b11__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15967__02eC__05b11__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b11__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02efract_out_d__05b11__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15895__02eC__05b11__05d) 
           ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15895__02eS__05b11__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15895__02eC__05b12__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15895__02eS__05b11__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15895__02eC__05b11__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b11__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02efract_out_d__05b11__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15871__02eC__05b11__05d) 
           ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15871__02eS__05b11__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15871__02eC__05b12__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15871__02eS__05b11__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15871__02eC__05b11__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b11__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02efract_out_d__05b11__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15919__02eC__05b11__05d) 
           ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15919__02eS__05b11__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15919__02eC__05b12__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15919__02eS__05b11__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15919__02eC__05b11__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b11__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15773__02eC__05b15__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15773__02eS__05b14__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15773__02eC__05b14__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b14__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714328__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5186___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5191___05F)
                ? 0xfU : 0xffU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5191___05F)
                                    ? 0xf0fU : 0xbbbbU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714266__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5188___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5191___05F)
                ? 0xfcf0U : 0xffffU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5191___05F)
                                         ? 0xccccU : 0xffaaU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5186___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714266__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714266__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714372__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714372__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714266__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714266__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714372__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714372__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717491__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8637___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8644___05F)
                ? 0x90U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0058_li0058 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b3__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719276__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719276__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10373___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10369___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719219__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719219__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719259__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10393___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719259__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719259__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719188__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10338___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719188__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719188__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719227__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10380___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719227__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719227__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719234__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10386___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10387___05F)
                ? 0x2bbfU : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10387___05F)
                                    ? 0xbfffU : 0x22bU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719182__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10334___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10335___05F)
                ? 0x80U : 0xfeU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10335___05F)
                                     ? 0xe8U : 0xffU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5188___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714356__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5191___05F)
                ? 0xaaaaU : 0xf0f0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714314__DOT__s4 = 0xff00U;
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5191___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714356__DOT__s4 = 0xccccU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714314__DOT__s4 = 0xf000U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714356__DOT__s4 = 0xff00U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714314__DOT__s4 = 0xbb00U;
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10333___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719235__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10335___05F)
                ? 0xbfU : 2U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719182__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719182__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719235__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10335___05F)
                ? 0xffU : 0x2bU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719182__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719182__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719271__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10364___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10380___05F)
                ? 0x4bbbU : 0xb444U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10380___05F)
                                         ? 0xf000U : 0xfffU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714603__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5188___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714603__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714603__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b19__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10277___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719123__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10272___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719118__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10277___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719123__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10272___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719118__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10195___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10192___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719041__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719041__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714053__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5188___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714053__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714053__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719107__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10202___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719107__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719107__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714446__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5188___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714446__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714446__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10157___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10155___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719003__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719003__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10164___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10162___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719010__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719010__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714087__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5188___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714087__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714087__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719120__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10172___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10184___05F)
                ? 0x80U : 0xfeU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10184___05F)
                                     ? 0xe8U : 0xffU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10183___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719031__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10184___05F)
                ? 0xbfU : 2U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719120__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719120__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719031__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10184___05F)
                ? 0xffU : 0x2bU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719120__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719120__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714123__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5188___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714123__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714123__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719099__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10215___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719099__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719099__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714146__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5188___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714146__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714146__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15739__02eC__05b15__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15739__02eS__05b14__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15739__02eC__05b14__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b14__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15705__02eC__05b16__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15705__02eS__05b15__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15705__02eC__05b15__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b15__05d));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15705__02eS__05b4__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1280_li1280 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716914__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8060___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716906__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716904__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716904__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7744___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716590__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1280_li1280 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716914__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8060___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716906__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716904__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716904__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7744___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716590__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10211___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10207___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719057__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719057__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10169___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10152___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719015__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719015__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719150__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10246___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10248___05F)
                ? 0x96U : 0x69U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10248___05F)
                                     ? 0x69U : 0x96U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719150__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10237___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719150__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719150__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10263___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10197___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719109__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719109__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719149__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10248___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719149__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719149__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5241___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5186___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714087__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714087__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10246___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719095__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10248___05F)
                ? 0xf4d0U : 0xf4d4U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719149__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719149__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719095__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10248___05F)
                ? 0xd040U : 0xf4d0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719149__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719149__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15682__02eC__05b15__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15682__02eS__05b14__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15682__02eC__05b14__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b14__05d));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b37__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5419___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714265__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714180__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714180__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5419___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714265__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714180__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714180__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15807__02eC__05b15__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15807__02eS__05b14__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15807__02eC__05b14__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b14__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719553__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10606___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10692___05F)
                ? 0xe8U : 0x17U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10692___05F)
                                     ? 0x17U : 0xe8U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719534__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10680___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719534__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719534__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10619___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10607___05F)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10611___05F)
                  : (~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10611___05F))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719536__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10615___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719536__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719536__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10650___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719570__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719570__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719571__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719571__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719500__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719500__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719570__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719570__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719571__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719571__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719500__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719500__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719511__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10662___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10664___05F)
                ? 0x8fU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10664___05F)
                                  ? 0xffU : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10640___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10632___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719568__DOT__s4 = 0xd442U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719509__DOT__s3 = 0xbfU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719568__DOT__s4 = 0x2bbdU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719509__DOT__s3 = 2U;
        }
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10632___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719568__DOT__s4 = 0x422bU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719509__DOT__s3 = 0xffU;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719568__DOT__s4 = 0xbdd4U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719509__DOT__s3 = 0x2bU;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10641___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10632___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719487__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719487__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0336_li0336 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b22__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9264___05F));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3584___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716548__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3592___05F)
                ? 0x100U : 0U);
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3601___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716597__DOT__s3 = 0xf0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716632__DOT__s4 = 0xaaaaU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716597__DOT__s3 = 0xaaU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716632__DOT__s4 = 0xf0f0U;
        }
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716548__DOT__s4 = 0U;
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3601___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716597__DOT__s3 = 0xf0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716632__DOT__s4 = 0xccccU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716597__DOT__s3 = 0xccU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716632__DOT__s4 = 0xff00U;
        }
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024auto_295495__DOT__R_nD_SDFCHK 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b22__05d) 
           | (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9264___05F));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718121__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9264___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0332_li0332)
                ? 2U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0332_li0332)
                               ? 3U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716491__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b29__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716491__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716491__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1348_li1348 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b29__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716491__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716491__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716494__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b26__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716494__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716494__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10511___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719439__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719439__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719440__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719440__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719439__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719439__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719440__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719440__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10510___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719362__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719362__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719439__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719439__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719440__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719440__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719362__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719362__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719439__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719439__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719440__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719440__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718534__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9625___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9624___05F)
                ? 0x42U : 0xbdU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9624___05F)
                                     ? 0xbbU : 0x44U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3605___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3584___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712451__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712451__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718472__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9624___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9625___05F)
                ? 4U : 0xcfU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9625___05F)
                                  ? 0xdfU : 0xffU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9649___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9564___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718495__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718495__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9603___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9599___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718449__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718449__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3474___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716926__DOT__s4 = 0xccccU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717321__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717321__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716926__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3548___05F)
                ? 0xcaaaU : 0xcccaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717321__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717321__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3751___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b1__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712597__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712597__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717322__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3474___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717322__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717322__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717319__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3486___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1029_li1029)
                ? 1U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717319__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3474___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717319__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717319__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717323__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02eadd_d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717323__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717323__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0725_li0725 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3474___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717323__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717323__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717318__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3486___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717318__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717318__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717318__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3474___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717318__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717318__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9764___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0168_li0168 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718670__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0169_li0169 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718669__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0168_li0168 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718670__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0169_li0169 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718669__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9311___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718168__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718168__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9323___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718169__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718168__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718168__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9323___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718169__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718164__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9315___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9317___05F)
                ? 0xabaaU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9317___05F)
                                    ? 0xfeffU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718164__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9300___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718164__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718164__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717763__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8916___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717763__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717763__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b29__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1539_li1539 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716325__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1541_li1541 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716313__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1539_li1539 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716325__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1541_li1541 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716313__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10494___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10482___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719340__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719340__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719423__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10569___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719423__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719423__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718696__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9846___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718696__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718696__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719410__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10444___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719410__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719410__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718809__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9843___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718809__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718809__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10550___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719427__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719427__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719404__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719404__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719427__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719427__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719404__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719404__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9960___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9961___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718821__DOT__s4 = 0x8e18U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718808__DOT__s4 = 0xfffbU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718821__DOT__s4 = 0x71e7U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718808__DOT__s4 = 0xb220U;
        }
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9961___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718821__DOT__s4 = 0x1871U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718808__DOT__s4 = 0xfbb2U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718821__DOT__s4 = 0xe78eU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718808__DOT__s4 = 0x2000U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718804__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9952___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718804__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718804__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9958___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9951___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718804__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718804__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719431__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10538___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719431__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719431__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718824__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9954___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9955___05F)
                ? 0x69U : 0x96U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9955___05F)
                                     ? 0x96U : 0x69U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718795__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9945___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718795__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718795__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9949___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9944___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718795__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718795__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712588__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b1__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712588__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712588__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9894___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9877___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718740__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718740__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719375__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10522___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10528___05F)
                ? 0x2b02U : 0xffbfU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10528___05F)
                                         ? 0x200U : 0xbf2bU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719435__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10520___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10528___05F)
                ? 0x244dU : 0xdbb2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10528___05F)
                                         ? 0xb224U : 0x4ddbU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719435__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10522___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719435__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719435__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b22__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9094___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717940__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9134___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717980__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3780___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712626__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9094___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717940__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9134___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717980__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3780___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712626__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718512__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0331_li0331)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718512__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718512__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b22__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9666___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718512__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3456___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712302__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0338_li0338 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718121__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9555___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718401__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9666___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718512__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3456___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712302__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0338_li0338 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718121__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9555___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718401__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9885___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718739__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718739__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718738__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718738__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718739__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718739__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718738__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718738__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9911___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9907___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718757__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718757__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718981__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10078___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718981__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718981__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10135___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10077___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718981__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718981__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718911__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10053___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718911__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718911__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718970__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10096___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718970__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718970__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10031___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718943__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718943__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718970__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718970__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718943__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718943__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718970__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718970__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b9__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718976__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718976__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718934__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718934__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718976__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718976__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718934__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718934__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3486___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716984__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3490___05F)
                ? 0xf0U : 0xccU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716982__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716982__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716990__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716990__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716984__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3490___05F)
                ? 0xf0U : 0xaaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716982__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716982__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716990__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716990__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8718___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8705___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717564__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717564__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eexp_r__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717657__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717657__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717574__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717574__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717657__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717657__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717574__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717574__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717565__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8716___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717565__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717565__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717565__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eexp_r__05b1__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717565__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717565__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717455__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3846___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3815___05F)
                     ? 0xf0f0U : 0xccaaU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3820___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717455__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717455__DOT__s4) 
                        >> 8U));
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3803___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717387__DOT__s3 = 0xccU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717449__DOT__s4 = 0xff33U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717387__DOT__s3 = 0xf0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717449__DOT__s4 = 0xf0fU;
        }
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717455__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717455__DOT__s4));
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3803___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717387__DOT__s3 = 0xaaU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717449__DOT__s4 = 0xff55U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717387__DOT__s3 = 0xf0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717449__DOT__s4 = 0xf0fU;
        }
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712701__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3854___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3846___05F)
                ? 0xffffU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3846___05F)
                                    ? 0x1000U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3813___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3808___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712659__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712659__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3804___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3794___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712650__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712650__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717132__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8285___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8275___05F)
                ? 0x8241U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8275___05F)
                                    ? 0x4128U : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8264___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717225__DOT__s2 = 0xcU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8280___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717126__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717133__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717133__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717112__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717112__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717225__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8278___05F)
                ? 0xcU : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8280___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717126__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717133__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717133__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717112__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717112__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8266___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eexp_r__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717112__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717112__DOT__s1)));
    vlSelf->__VdfgRegularize_hd87f99a1_0_728 = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8264___05F) 
                                                | (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8278___05F));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8284___05F 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02efract_out_q__05b27__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8264___05F));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718488__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0331_li0331)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718488__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718488__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717122__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8267___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717122__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717122__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8276___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8264___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717122__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717122__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9535___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0331_li0331)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718381__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718381__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8270___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717150__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eexp_r__05b0__05d)
                ? 0U : 0xeefeU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717139__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8292___05F)
                ? 0U : 0xeefeU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717150__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eexp_r__05b0__05d)
                ? 0U : 0xfaeeU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717139__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8292___05F)
                ? 0U : 0xfaeeU);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713756__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2012_li2012)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713756__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713756__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713751__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b28__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713751__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713751__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713750__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4896___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713750__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713750__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4898___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713752__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713752__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713749__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713749__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713750__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713750__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713752__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713752__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713749__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713749__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713750__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713750__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713746__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4899___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713746__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713746__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713746__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4897___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713746__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713746__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712677__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3829___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712677__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712677__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716731__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7870___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716731__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716731__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716731__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eexp_r__05b2__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716731__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716731__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7877___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7876___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716723__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716723__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716724__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7875___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7877___05F)
                ? 3U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7877___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714590__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5272___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714590__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714590__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3380___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3347___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712226__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712226__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5360___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b41__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714206__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714206__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714039__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b40__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714039__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714039__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714039__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b41__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714039__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714039__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714169__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b40__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714169__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714169__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714169__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b37__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714169__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714169__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714412__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b44__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714412__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714412__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714439__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5203___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714439__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714439__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714439__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b44__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714439__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714439__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714413__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5336___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714413__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714413__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714204__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b35__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714204__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714204__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b38__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714180__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714180__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714204__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714204__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714180__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714180__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714204__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714204__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b35__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714350__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714350__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5744___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714590__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714123__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714123__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714350__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714350__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5744___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714590__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714123__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714123__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5403___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714250__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714250__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714328__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714328__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714250__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714250__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714328__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714328__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b29__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714356__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714356__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714283__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714283__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714356__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714356__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714283__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714283__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b27__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714318__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714318__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714250__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714250__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714283__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714283__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714318__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714318__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714250__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714250__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714283__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714283__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714314__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5198___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714314__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714314__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b39__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714397__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714397__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714185__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714185__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714397__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714397__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714185__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714185__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714185__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5198___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714185__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714185__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714460__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b7__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714460__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714460__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3593___05F 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3584___05F)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3592___05F));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712472__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3623___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712472__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712472__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3654___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b10__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712500__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712500__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3646___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b8__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712492__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712492__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b26__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3606___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712452__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1342_li1342 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716494__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3606___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712452__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1342_li1342 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716494__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716604__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3601___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3584___05F)
                ? 0xf0U : 0xaaU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3584___05F)
                                     ? 0xf0U : 0xccU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715382__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b46__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715382__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715382__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3601___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3584___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716601__DOT__s4 = 0x8888U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716545__DOT__s4 = 0xccccU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716601__DOT__s4 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716545__DOT__s4 = 0xf0f0U;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716615__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3866___05F)
                ? 0x40U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716555__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3593___05F)
                ? 0xaaU : 0U);
    } else {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3584___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716601__DOT__s4 = 0xf000U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716545__DOT__s4 = 0xaaaaU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716601__DOT__s4 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716545__DOT__s4 = 0xff00U;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716615__DOT__s3 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716555__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3593___05F)
                ? 0xccU : 0xf0U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716542__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7695___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3601___05F)
                     ? 0xf5U : 0xccU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716512__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3867___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3601___05F)
                ? 1U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3601___05F)
                               ? 1U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7661___05F 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3867___05F)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3601___05F));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3599___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3597___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712445__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712445__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712453__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3596___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3592___05F)
                ? 0x4fU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3592___05F)
                                  ? 0xffU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713997__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5085___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713997__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713997__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3596___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712481__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3592___05F)
                ? 4U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712455__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3599___05F)
                ? 0xffU : 0x55U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712481__DOT__s2 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712455__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3599___05F)
                ? 0xe3U : 0x3eU);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3592___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716517__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7670___05F)
                ? 1U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712498__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3584___05F)
                ? 1U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712448__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3601___05F)
                ? 1U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712504__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3606___05F)
                ? 0xf4U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716615__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716615__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716506__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3599___05F)
                ? 0x10U : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716517__DOT__s3 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712498__DOT__s3 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712448__DOT__s1 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712504__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716615__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716615__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716506__DOT__s3 = 0U;
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b30__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2102_li2102 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713639__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1350_li1350 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716490__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2102_li2102 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713639__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1350_li1350 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716490__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2088_li2088) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713648__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3680___05F)
                ? 0x8eU : 0x71U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713645__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3676___05F)
                ? 0x20afU : 0xdf00U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713648__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3680___05F)
                ? 0x10U : 0xefU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713645__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3676___05F)
                ? 0x8f00U : 0x70ffU);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713642__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2090_li2090)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2088_li2088)
                ? 0xd7U : 0x28U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2088_li2088)
                                     ? 0xffU : 0xaaU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b23__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713646__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713646__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713642__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713642__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713646__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713646__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713642__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713642__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712575__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3714___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                     ? 0x101U : 0xff00U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b27__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6496___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715342__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715299__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715299__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6496___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715342__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715299__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715299__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b47__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7390___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716236__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715833__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715833__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715720__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715720__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6809___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715655__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7390___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716236__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715833__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715833__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715720__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715720__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6809___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715655__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712586__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3680___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712586__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712586__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712586__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3693___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712586__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712586__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716431__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3737___05F)
            ? 0xbU : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3685___05F)
                       ? 0U : 0xbU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713941__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5042___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713941__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713941__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713927__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5047___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713927__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713927__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5081___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5042___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713927__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713927__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712589__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3685___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                ? 0xaaU : 0xccU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                                     ? 0xa0U : 0xc0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716386__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3694___05F)
                ? 0xaaU : 0xf0U);
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3682___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712632__DOT__s4 = 0xff55U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716410__DOT__s3 = 0xf0U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712632__DOT__s4 = 0xf0fU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716410__DOT__s3 = 0xaaU;
        }
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716386__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3694___05F)
                ? 0xccU : 0xf0U);
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3682___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712632__DOT__s4 = 0xff33U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716410__DOT__s3 = 0xf0U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712632__DOT__s4 = 0xf0fU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716410__DOT__s3 = 0xccU;
        }
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713932__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5047___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713932__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713932__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5086___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5042___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713932__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713932__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713953__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5047___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713953__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713953__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713953__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5042___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713953__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713953__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713917__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713917__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713916__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713916__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713917__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713917__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713916__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713916__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5047___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713916__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713916__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713918__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713918__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713916__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713916__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713918__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713918__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713933__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5085___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5086___05F)
                ? 7U : 0xfU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5086___05F)
                                 ? 7U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3700___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3675___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712546__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712546__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3690___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712541__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3694___05F)
                ? 0xee00U : 0xff00U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712569__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3700___05F)
                ? 0xbU : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712541__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3694___05F)
                ? 0xe000U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712569__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3700___05F)
                ? 0xfU : 0U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3705___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b27__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712551__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712551__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3683___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712622__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3694___05F)
                ? 0xaaccU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716413__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3705___05F)
                ? 0xaU : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712622__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3694___05F)
                ? 0xf000U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716413__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3705___05F)
                ? 0xfU : 0xcU);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712535__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b27__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712535__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712535__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1346_li1346 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02eadd_d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716492__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716492__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716333__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3765___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7484___05F)
                ? 7U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7484___05F)
                               ? 1U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714587__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5382___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714587__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714587__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716336__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3765___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3682___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3682___05F)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718509__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9548___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9659___05F)
                ? 1U : 0x57U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9659___05F)
                                  ? 0x15U : 0x7fU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718499__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9553___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718499__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718499__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9573___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718421__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718421__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718492__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718492__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718421__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718421__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718492__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718492__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718421__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9569___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718421__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718421__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9642___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9585___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718488__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718488__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718487__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9592___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718487__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718487__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718479__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9610___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718479__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718479__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9094___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717965__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717965__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717941__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3380___05F)
                ? 0xbU : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717965__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717965__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717941__DOT__s3 = 0U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712371__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3498___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3486___05F)
                ? 0xffccU : 0xfafaU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3486___05F)
                                         ? 0xff00U : 0xf0f0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716968__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3490___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3485___05F)
                ? 0xfU : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3485___05F)
                                 ? 5U : 0xfU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716105__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7045___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716105__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716105__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3492___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716931__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3490___05F)
                ? 2U : 3U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712343__DOT__s4 = 0U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716931__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3490___05F)
                ? 2U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712343__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3496___05F)
                ? 0xcf05U : 0U);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3548___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3490___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8076___05F = 1U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716928__DOT__s1 = 2U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8076___05F = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716928__DOT__s1 = 3U;
        }
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8076___05F = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716928__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3490___05F)
                ? 2U : 0U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3475___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b24__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712321__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712321__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3479___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b26__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712325__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712325__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712254__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3404___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712254__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712254__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712290__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b24__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712290__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712290__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712205__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3354___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3358___05F)
                ? 0U : 1U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3358___05F)
                               ? 0U : 3U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3372___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3367___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712218__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712218__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718055__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3347___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3372___05F)
                ? 0x4100U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712221__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b25__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712221__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712221__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b25__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716495__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716491__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712221__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712221__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716495__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716491__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712221__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712221__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b25__05d) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3475___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712354__DOT__s4 = 0x82U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712322__DOT__s1 = 2U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712354__DOT__s4 = 0x8200U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712322__DOT__s1 = 1U;
        }
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3475___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712354__DOT__s4 = 0x8200U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712322__DOT__s1 = 1U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712354__DOT__s4 = 0x82U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712322__DOT__s1 = 2U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712231__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3344___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712231__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712231__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712231__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0331_li0331)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712231__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712231__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712212__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3364___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712212__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712212__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714602__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5747___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714602__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714602__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714602__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5382___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714602__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714602__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714248__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5399___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714248__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714248__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714230__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5378___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714230__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714230__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b47__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5274___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714120__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714260__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714260__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5274___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714120__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714260__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714260__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714260__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5378___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714260__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714260__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714377__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5279___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714377__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714377__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713989__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5084___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713989__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713989__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712370__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3523___05F)
            ? 0xf0f0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3486___05F)
                          ? 0xf0c0U : 0xf0a0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712372__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3517___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712372__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712372__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3514___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712364__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3517___05F)
                ? 0U : 0xf0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712372__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712372__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712364__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3517___05F)
                ? 0U : 0xfbU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712372__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712372__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712410__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3562___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3490___05F)
                ? 1U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3490___05F)
                               ? 1U : 3U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716965__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3505___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3490___05F)
                ? 1U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3490___05F)
                               ? 1U : 3U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712412__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3565___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3490___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3490___05F)
                               ? 2U : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4064___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712946__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4099___05F)
                ? 0U : 0x4fU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712957__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712957__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712933__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712933__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712946__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4099___05F)
                ? 0U : 0xffU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712957__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712957__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712933__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712933__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716074__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7221___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716074__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716074__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7251___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716101__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716101__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716139__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716139__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716101__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716101__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716139__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716139__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714323__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5473___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5476___05F)
                ? 3U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5476___05F)
                               ? 1U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6339___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b33__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715185__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715185__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5269___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714292__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714292__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714377__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714377__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5477___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714323__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714292__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714292__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714377__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714377__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5477___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714323__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714579__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5728___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714579__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714579__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714207__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5360___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5198___05F)
                ? 0xef00U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5198___05F)
                                    ? 0xefefU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6468___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b26__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715314__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715314__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5741___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5053___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714587__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714587__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5515___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b36__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714361__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714361__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714364__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5515___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714364__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714364__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715251__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6047___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6404___05F)
                     ? 5U : 0xf3U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715912__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6867___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715912__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715912__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715970__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7115___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7123___05F)
                ? 0xefffU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7123___05F)
                                    ? 0xffffU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716191__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7343___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7344___05F)
                ? 0xbfU : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716090__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7241___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716090__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716090__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716090__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6936___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716090__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716090__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716149__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b11__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7302___05F)
                ? 0xf0U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7302___05F)
                                  ? 0x44ffU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7083___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6995___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715929__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715929__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716105__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716105__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716105__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715954__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6866___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715954__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715954__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715954__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7045___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715954__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715954__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715870__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7023___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6995___05F)
                ? 0xfU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6995___05F)
                                 ? 0xbfU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713138__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4181___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713138__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713138__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713121__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4120___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713121__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713121__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713599__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4114___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4752___05F)
                ? 0xf0fU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4752___05F)
                                   ? 0xfefU : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b47__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4577___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713423__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713493__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713493__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4577___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713423__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713493__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713493__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4335___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713487__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713487__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713244__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713244__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713487__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713487__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713244__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713244__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713607__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4755___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713607__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713607__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713781__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0061)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713781__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713781__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715375__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6038___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715375__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715375__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0061) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4931___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713832__DOT__s4 = 0xaafcU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713829__DOT__s4 = 0xffffU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713832__DOT__s4 = 0x5503U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713829__DOT__s4 = 0xaaa8U;
        }
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4931___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713832__DOT__s4 = 0x5503U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713829__DOT__s4 = 0xaaa8U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713832__DOT__s4 = 0xaafcU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713829__DOT__s4 = 0U;
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4918___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713798__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713798__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713765__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713765__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713798__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713798__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713765__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713765__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0094) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713793__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4918___05F)
                ? 1U : 2U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713798__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713798__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713793__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4918___05F)
                ? 2U : 1U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713798__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713798__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0056) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1983_li1983 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713836__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4942___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713788__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1984_li1984 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713835__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1983_li1983 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713836__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4942___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713788__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1984_li1984 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713835__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715306__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b25__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715306__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715306__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6429___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715282__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715282__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715306__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715306__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715282__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715282__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715306__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715306__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715111__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6039___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715111__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715111__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6347___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6340___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715193__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715193__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715146__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6299___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715146__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715146__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b44__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6040___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714886__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6151___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714997__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6116___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714962__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6040___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714886__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6151___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714997__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6116___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714962__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715179__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6327___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715179__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715179__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6583___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b40__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715429__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715429__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714919__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6072___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714919__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714919__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715344__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6496___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715344__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715344__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715266__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6400___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6419___05F)
                ? 0U : 0xff44U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6419___05F)
                                    ? 0U : 0xfff0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715251__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6048___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715251__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715251__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715251__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b26__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715251__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715251__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713657__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0147)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713657__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713657__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4831___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4832___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713719__DOT__s3 = 7U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713679__DOT__s4 = 0x707U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713719__DOT__s3 = 0xf8U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713679__DOT__s4 = 0xffU;
        }
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4832___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713719__DOT__s3 = 0xffU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713679__DOT__s4 = 0xffffU;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713719__DOT__s3 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713679__DOT__s4 = 0xffU;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6441___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6438___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715287__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715287__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715313__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6121___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715313__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715313__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715319__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b32__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715319__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715319__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02eadd_d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0723_li0723 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717324__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0721_li0721 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717325__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0719_li0719 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717326__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0729_li0729 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717321__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0727_li0727 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717322__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8473___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717319__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0733_li0733 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717318__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0723_li0723 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717324__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0721_li0721 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717325__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0719_li0719 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717326__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0729_li0729 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717321__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0727_li0727 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717322__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8473___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717319__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0733_li0733 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717318__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6473___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b33__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715319__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715319__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715375__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6069___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715375__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715375__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715014__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6118___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6167___05F)
                ? 0xff0fU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6167___05F)
                                    ? 0xddU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715014__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6047___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715014__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715014__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715388__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6537___05F)
            ? 0x3233U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6541___05F)
                          ? 0x3000U : 0x3233U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718164__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9307___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718164__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718164__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715388__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6118___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715388__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715388__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715348__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6501___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715348__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715348__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b36__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715375__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715375__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715348__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715348__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715375__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715375__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715348__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715348__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6825___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6824___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715671__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715671__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715620__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b7__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715620__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715620__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715618__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6769___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715618__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715618__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5109___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5096___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713955__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713955__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5071___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5069___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713917__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713917__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714667__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5798___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5817___05F)
                ? 0xcccfU : 0xfaacU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5817___05F)
                                         ? 0xcffaU : 0xacccU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714664__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0008)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5798___05F)
                ? 0xedU : 0xdbU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5798___05F)
                                     ? 0xdbU : 0xb7U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0038) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714645__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5798___05F)
                ? 0xfcU : 0xe8U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714667__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714667__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714664__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714664__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714645__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5798___05F)
                ? 0xe8U : 0xc0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714667__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714667__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714664__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714664__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5813___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5814___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714705__DOT__s2 = 1U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714661__DOT__s3 = 0xfcU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714705__DOT__s2 = 0xeU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714661__DOT__s3 = 0xaaU;
        }
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5814___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714705__DOT__s2 = 7U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714661__DOT__s3 = 0xc0U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714705__DOT__s2 = 8U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714661__DOT__s3 = 0xaaU;
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5808___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714706__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5813___05F)
                ? 2U : 1U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714705__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714705__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714661__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714661__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714706__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5813___05F)
                ? 1U : 2U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714705__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714705__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714661__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714661__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6816___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6790___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715662__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715662__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3902___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0165)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712748__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712748__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712753__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3904___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712753__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712753__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0199) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712751__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712751__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712755__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712755__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712753__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712753__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712751__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712751__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712755__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712755__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712753__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712753__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712758__DOT__s1 
        = (3U & ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx4_mul__02e____VhshiHk0hBnMBg5YmEz4uFPvtCA3Y2PVaOtAj79meNrc__DOT__z_out_reg 
                                >> 0x1eU))) ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712758__DOT__s2) 
                                               >> 2U)
                  : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712758__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0202) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712732__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712732__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3912___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712758__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712732__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712732__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3912___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712758__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6752___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715798__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6798___05F)
                ? 0x23ffU : 0xfc00U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715650__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715650__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715798__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6798___05F)
                ? 0xfffcU : 0x23U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715650__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715650__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716175__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b1__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716175__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716175__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4057___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4003___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712903__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712903__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715734__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b1__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6752___05F)
                ? 0xdccU : 0xf2ccU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6752___05F)
                                        ? 0xf2ccU : 0xdccU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712858__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4011___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712858__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712858__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4012___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4003___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712858__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712858__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6874___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715720__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715798__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715798__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715650__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715650__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6874___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715720__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715798__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715798__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715650__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715650__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6752___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6798___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715645__DOT__s4 = 0x2f0fU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715646__DOT__s1 = 2U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715645__DOT__s4 = 0x77a8U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715646__DOT__s1 = 0U;
        }
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715645__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6798___05F)
                ? 0x77feU : 0x7600U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715646__DOT__s1 = 0U;
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3996___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4035___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712881__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712882__DOT__s2 = 0U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4035___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712881__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712882__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4017___05F)
                ? 0U : 0xdU);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6790___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6800___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715646__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6840___05F 
            = vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6752___05F;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6800___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715646__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6840___05F = 0U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715295__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6445___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6448___05F)
                     ? 0x7ff7U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715295__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6038___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715295__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715295__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5927___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714809__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714809__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714795__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714795__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714800__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714800__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714809__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714809__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714795__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714795__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714800__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714800__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714816__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b0__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714816__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714816__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5984___05F 
            = (1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5913___05F)));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715216__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6369___05F)
                ? 0x5fffU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714816__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714816__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5984___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5913___05F));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715216__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6369___05F)
                ? 0xf3fU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714816__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714816__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5929___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714775__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714775__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4033___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713517__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4019___05F)
                ? 0xfU : 9U);
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4050___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713053__DOT__s4 = 0x4100U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712922__DOT__s1 = 2U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713053__DOT__s4 = 0xc3c3U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712922__DOT__s1 = 3U;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712951__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4104___05F)
                ? 0x75U : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713517__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4019___05F)
                ? 6U : 0xfU);
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4050___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713053__DOT__s4 = 0x41U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712922__DOT__s1 = 2U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713053__DOT__s4 = 0xc3c3U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712922__DOT__s1 = 0U;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712951__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4104___05F)
                ? 0xdfU : 0U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4076___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu4__02eop_mul)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712922__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712922__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712904__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4033___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4055___05F)
                ? 0x70U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4055___05F)
                                  ? 7U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4497___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b1__05d)
                  ? (~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4033___05F))
                  : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4033___05F)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3793___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712689__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712689__DOT__s3) 
                       >> 4U));
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3803___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717380__DOT__s4 = 0xffffU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717386__DOT__s3 = 0xf0U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717380__DOT__s4 = 0xf0fU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717386__DOT__s3 = 0xaaU;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717449__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717449__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712689__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712689__DOT__s3));
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3803___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717380__DOT__s4 = 0x3355U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717386__DOT__s3 = 0xf0U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717380__DOT__s4 = 0xffffU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717386__DOT__s3 = 0xccU;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717449__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717449__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713517__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713517__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712904__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712904__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713517__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713517__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712904__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712904__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4033___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712906__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4019___05F)
                ? 0x4000U : 0xbfffU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712902__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712902__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712906__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4019___05F)
                ? 0xbf0U : 0xf40fU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712902__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712902__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712902__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3996___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712902__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712902__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4033___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712883__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4011___05F)
                ? 1U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712887__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4040___05F)
                ? 0xbfffU : 0x4000U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712883__DOT__s1 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712887__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4040___05F)
                ? 0xffffU : 0U);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4011___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713053__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713053__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712951__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712951__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712887__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712887__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713053__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713053__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712951__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712951__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712887__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712887__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712880__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4019___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4033___05F)
                ? 0U : 0x77U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4033___05F)
                                  ? 7U : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4003___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712880__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712880__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4037___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712883__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712880__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712880__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4037___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712883__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712882__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4019___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712882__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712882__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712843__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b3__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712843__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712843__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5998___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5956___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714844__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714844__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5953___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714839__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu4__02eop_mul)
                ? 0xeU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714833__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5986___05F)
                ? 1U : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714839__DOT__s3 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714833__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5986___05F)
                ? 0x10U : 0U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714811__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5964___05F)
            ? 0xf0f0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5953___05F)
                          ? 0xf0a0U : 0xf030U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15967__02eS__05b16__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efractb_out__05b16__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719937__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719937__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719938__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efractb_out__05b17__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15862__02eC__05b17__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719938__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719938__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15862__02eC__05b18__05d 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efractb_out__05b17__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15862__02eC__05b17__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15943__02eS__05b16__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efractb_out__05b16__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719868__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719868__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719869__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efractb_out__05b17__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15853__02eC__05b17__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719869__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719869__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15853__02eC__05b18__05d 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efractb_out__05b17__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15853__02eC__05b17__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15871__02eS__05b16__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efractb_out__05b16__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719745__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719745__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719746__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efractb_out__05b17__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15841__02eC__05b17__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719746__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719746__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15841__02eC__05b18__05d 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efractb_out__05b17__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15841__02eC__05b17__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15919__02eS__05b16__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efractb_out__05b16__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719820__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719820__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719821__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efractb_out__05b17__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15844__02eC__05b17__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719821__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719821__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15844__02eC__05b18__05d 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efractb_out__05b17__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15844__02eC__05b17__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15895__02eS__05b16__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efractb_out__05b16__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719771__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719771__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716768__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7852___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716768__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716768__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eexp_r__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716717__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716717__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7991___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716837__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716717__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716717__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7991___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716837__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716852__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7852___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7991___05F)
                ? 0xbeU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7991___05F)
                                  ? 0x41U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7885___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eexp_r__05b1__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716731__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716731__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719772__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efractb_out__05b17__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15856__02eC__05b17__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719772__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719772__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15856__02eC__05b18__05d 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efractb_out__05b17__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15856__02eC__05b17__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02efract_out_d__05b12__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15943__02eC__05b12__05d) 
           ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15943__02eS__05b12__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5414___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b1__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714260__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714260__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15943__02eC__05b13__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15943__02eS__05b12__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15943__02eC__05b12__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b12__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02efract_out_d__05b12__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15967__02eC__05b12__05d) 
           ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15967__02eS__05b12__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15967__02eC__05b13__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15967__02eS__05b12__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15967__02eC__05b12__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b12__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02efract_out_d__05b12__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15895__02eC__05b12__05d) 
           ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15895__02eS__05b12__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15895__02eC__05b13__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15895__02eS__05b12__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15895__02eC__05b12__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b12__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02efract_out_d__05b12__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15871__02eC__05b12__05d) 
           ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15871__02eS__05b12__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15871__02eC__05b13__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15871__02eS__05b12__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15871__02eC__05b12__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b12__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02efract_out_d__05b12__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15919__02eC__05b12__05d) 
           ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15919__02eS__05b12__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15919__02eC__05b13__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15919__02eS__05b12__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15919__02eC__05b12__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b12__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714088__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5188___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5241___05F)
                ? 0xaaf0U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5241___05F)
                                    ? 0xccffU : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b45__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714500__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714500__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5593___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714439__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714500__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714500__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5593___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714439__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15773__02eS__05b15__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15773__02eC__05b16__05d 
            = vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15773__02eC__05b15__05d;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717491__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717491__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15773__02eC__05b16__05d 
            = vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b15__05d;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717491__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717491__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717491__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b21__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717491__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717491__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719274__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10373___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10377___05F)
                ? 0x4d24U : 0xb2dbU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10377___05F)
                                         ? 0x24b2U : 0xdb4dU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b36__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714146__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714146__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5334___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714180__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714146__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714146__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5334___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714180__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b39__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5193___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714039__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5323___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714169__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5193___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714039__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5323___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714169__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719144__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10260___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10212___05F)
                ? 0x69U : 0x96U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10212___05F)
                                     ? 0x96U : 0x69U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719224__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10373___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10377___05F)
                ? 0x7110U : 0xfff7U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10377___05F)
                                         ? 0x1010U : 0xf771U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10368___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719275__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10373___05F)
                ? 0x69U : 0x96U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719274__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719274__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719224__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719224__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719275__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10373___05F)
                ? 0x96U : 0x69U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719274__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719274__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719224__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719224__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719227__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10379___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719227__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719227__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719234__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10385___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719234__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719234__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10332___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719235__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719235__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719182__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719182__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719235__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719235__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719182__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719182__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719271__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b9__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719271__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719271__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714625__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5778___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714625__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714625__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1792_li1792) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714636__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5767___05F)
                ? 0x8eU : 0x79U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714635__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5788___05F)
                ? 0x5400U : 0xabffU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714636__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5767___05F)
                ? 0x18U : 0xefU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714635__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5788___05F)
                ? 0xc2bfU : 0x3d40U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714623__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b25__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1792_li1792)
                ? 0xffbfU : 0xc4U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1792_li1792)
                                       ? 0xbfffU : 0xc400U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10268___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10158___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719114__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719114__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10277___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719132__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719132__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719128__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719128__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719132__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719132__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719128__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719128__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10261___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10201___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719107__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719107__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719108__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10260___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10261___05F)
                ? 0xb220U : 0xfffbU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10261___05F)
                                         ? 0x2000U : 0xfbb2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719134__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10157___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10164___05F)
                ? 0x708fU : 0x8f70U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10164___05F)
                                         ? 0x8f70U : 0x708fU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719134__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10154___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719134__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719134__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10182___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719031__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719031__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719120__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719120__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719031__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719031__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719120__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719120__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10253___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10214___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719099__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719099__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15739__02eC__05b16__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15739__02eS__05b15__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15739__02eC__05b15__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b15__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15705__02eC__05b17__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15705__02eS__05b16__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15705__02eC__05b16__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b16__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716907__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8060___05F)
                ? 0x80U : 0xf0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8060___05F)
                                     ? 0xccU : 0xffU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716908__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b28__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716907__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716907__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716904__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716904__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716904__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719144__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10259___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719144__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719144__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10169___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10170___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719119__DOT__s1 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719017__DOT__s1 = 1U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719119__DOT__s1 = 2U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719017__DOT__s1 = 2U;
        }
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10170___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719119__DOT__s1 = 2U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719017__DOT__s1 = 2U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719119__DOT__s1 = 3U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719017__DOT__s1 = 1U;
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10240___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719095__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719095__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719150__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719150__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719149__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719149__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719095__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719095__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719150__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719150__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719149__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719149__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10263___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10269___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719115__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10265___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719111__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10269___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719115__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10265___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719111__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15682__02eC__05b16__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15682__02eS__05b15__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15682__02eC__05b15__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b15__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15807__02eC__05b16__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15807__02eS__05b15__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15807__02eC__05b15__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b15__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719466__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10618___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10619___05F)
                ? 0x7f97U : 0xff7fU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10619___05F)
                                         ? 0xe9feU : 0x1701U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10690___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10612___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719536__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719536__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10649___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0006_li0006 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719570__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0005_li0005 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719571__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10654___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719500__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0006_li0006 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719570__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0005_li0005 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719571__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10654___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719500__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9619___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718535__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9625___05F)
                ? 1U : 0xeU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718472__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718472__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718535__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9625___05F)
                ? 4U : 0xbU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718472__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718472__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10635___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719568__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719568__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719509__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719509__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719568__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719568__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719509__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719509__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1340_li1340 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b25__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716495__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716495__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719362__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10498___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719362__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719362__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10516___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10496___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719362__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719362__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10498___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0034_li0034 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719439__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0033_li0033 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719440__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0034_li0034 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719439__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0033_li0033 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719440__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718534__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9615___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718534__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718534__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718534__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9619___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718534__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718534__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718833__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9916___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9931___05F)
                ? 0x69U : 0x96U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9931___05F)
                                     ? 0x96U : 0x69U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718535__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9616___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718535__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718535__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0194_li0194 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9615___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718535__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718535__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718472__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9616___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718472__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718472__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9649___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9654___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718500__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9651___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718497__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9654___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718500__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9651___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718497__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718451__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9603___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718451__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718451__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718483__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9604___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9603___05F)
                ? 0x96U : 0x69U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9603___05F)
                                     ? 0x69U : 0x96U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718833__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9932___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718833__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718833__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718671__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9763___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718671__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718671__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9776___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718667__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718667__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718624__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9777___05F)
                ? 0U : 0xd0fdU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718667__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718667__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718624__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9777___05F)
                ? 0U : 0xf0U);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9915___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718784__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718784__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718782__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718782__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718784__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718784__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718782__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718782__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718618__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9768___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718618__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718618__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10568___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10442___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719414__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719414__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9772___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9766___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718618__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718618__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9844___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9837___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718690__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718690__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9322___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eexp_r__05b2__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718168__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718168__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9424___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9291___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718270__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718270__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8917___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02efract_out_q__05b10__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717763__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717763__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1541_li1541) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716323__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716323__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716321__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7458___05F)
                ? 0xcU : 0xf3U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716316__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716316__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716315__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716315__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716323__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716323__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716321__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7458___05F)
                ? 0x75U : 0x8aU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716316__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716316__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716315__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716315__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716320__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7462___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1541_li1541)
                ? 0xcfffU : 0xa200U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1541_li1541)
                                         ? 0x3000U : 0x5dffU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716314__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7463___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1541_li1541)
                ? 0xfcffU : 0x2200U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1541_li1541)
                                         ? 0xffffU : 0x200U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10521___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719436__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719436__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719375__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719375__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719436__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719436__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719375__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719375__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719375__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10520___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719375__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719375__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719435__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10521___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719435__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719435__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719437__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10494___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10518___05F)
                ? 0x8eU : 0x71U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10518___05F)
                                     ? 0x71U : 0x8eU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9914___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718784__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718784__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9936___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718782__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718784__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718784__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9936___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718782__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718783__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9915___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9936___05F)
                ? 0xbfffU : 0x22bU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9936___05F)
                                        ? 0x2bbfU : 0x202U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718832__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9916___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9936___05F)
                ? 0x7110U : 0x8eefU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9936___05F)
                                         ? 0x188eU : 0xe771U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10568___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719423__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719423__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719424__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10569___05F)
                ? 9U : 6U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719423__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719423__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719424__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10569___05F)
                ? 6U : 9U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719424__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10439___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719424__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719424__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719416__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10568___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10569___05F)
                ? 0xfc40U : 0xffc0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10569___05F)
                                         ? 0xc400U : 0xfc40U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719416__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10567___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719416__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719416__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719410__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10443___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719410__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719410__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10564___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10442___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719410__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719410__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9844___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718694__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718694__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718696__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718696__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718694__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718694__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718696__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718696__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718809__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9842___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718809__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718809__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9963___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9837___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718809__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718809__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719427__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10459___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719427__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719427__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718824__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9872___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718824__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718824__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10533___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10526___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719379__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719379__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9884___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9893___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718739__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9892___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718738__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9893___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718739__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9892___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718738__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10080___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718979__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718979__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718931__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10084___05F)
                ? 0xef0eU : 0x1f01U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718979__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718979__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718931__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10084___05F)
                ? 0xf00U : 0xff0fU);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10065___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b1__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718911__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718911__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718947__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10098___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718947__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718947__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10090___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718971__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718971__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718939__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718939__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718971__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718971__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718939__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718939__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b22__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718976__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718976__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10088___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718934__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718976__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718976__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10088___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718934__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8718___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717690__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717690__DOT__s2) 
                     >> 2U));
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8725___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717689__DOT__s2 = 0xeU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717655__DOT__s3 = 0xafU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717689__DOT__s2 = 1U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717655__DOT__s3 = 0x8eU;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717651__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717651__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717569__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717569__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717573__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717573__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717690__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717690__DOT__s2));
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8725___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717689__DOT__s2 = 0xbU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717655__DOT__s3 = 0x8eU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717689__DOT__s2 = 4U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717655__DOT__s3 = 0xaU;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717651__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717651__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717569__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717569__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717573__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717573__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717657__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eexp_r__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717657__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717657__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8811___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8716___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717657__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717657__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eexp_r__05b0__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8728___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717574__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8719___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717565__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8728___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717574__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8719___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717565__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718280__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9323___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9433___05F)
                ? 3U : 0xfcU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9433___05F)
                                  ? 5U : 0xfaU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718280__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02efract_out_q__05b27__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718280__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718280__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718172__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9325___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9323___05F)
                ? 0x888U : 0xccccU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9323___05F)
                                        ? 0xcfffU : 0xffffU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712701__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3838___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712701__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712701__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3811___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3813___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717442__DOT__s4 = 0xf3ffU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712665__DOT__s2 = 0xbU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717442__DOT__s4 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712665__DOT__s2 = 0U;
        }
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3813___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717442__DOT__s4 = 2U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712665__DOT__s2 = 4U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717442__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712665__DOT__s2 = 0U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712698__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3813___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3811___05F)
                ? 0xf7U : 0U) : 0U);
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3804___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712683__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3813___05F)
                ? 0xaaa8U : 0xaaaaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717377__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3803___05F)
                ? 0xcf3fU : 0x55ffU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712683__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3813___05F)
                ? 0xa8aaU : 0xaaaaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717377__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3803___05F)
                ? 0xffcfU : 0xff55U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712653__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3806___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712653__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712653__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b25__05d) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3804___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712688__DOT__s3 = 0x45U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712651__DOT__s2 = 8U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712688__DOT__s3 = 0x5fU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712651__DOT__s2 = 0xfU;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712683__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712683__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3807___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712653__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717377__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717377__DOT__s4) 
                        >> 8U));
    } else {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3804___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712688__DOT__s3 = 0x1fU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712651__DOT__s2 = 7U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712688__DOT__s3 = 0x45U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712651__DOT__s2 = 8U;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712683__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712683__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3807___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712653__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717377__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717377__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3803___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3815___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719590__DOT__s4 = 0xaaU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717417__DOT__s3 = 0x30U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719590__DOT__s4 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717417__DOT__s3 = 0U;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717381__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3793___05F)
                ? 0xfU : 0xffffU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717438__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717438__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717448__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3813___05F)
                ? 0xaU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712660__DOT__s2 = 0U;
    } else {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3815___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719590__DOT__s4 = 0xccf0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717417__DOT__s3 = 1U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719590__DOT__s4 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717417__DOT__s3 = 0U;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717381__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3793___05F)
                ? 0xffffU : 0x3355U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717438__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717438__DOT__s3));
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3813___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717448__DOT__s2 = 0xcU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712660__DOT__s2 = 0xdU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717448__DOT__s2 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712660__DOT__s2 = 0U;
        }
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8502___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717406__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3846___05F)
                ? 2U : 3U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717349__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3803___05F)
                ? 2U : 3U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717406__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3846___05F)
                ? 2U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717349__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3803___05F)
                ? 2U : 0U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5199___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b42__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714045__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714045__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3803___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712688__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712688__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712651__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712651__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712688__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712688__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712651__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712651__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717359__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8512___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3803___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3803___05F)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8513___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8502___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717359__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717359__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717448__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8512___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717448__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717448__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8529___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717376__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3803___05F)
                ? 1U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717386__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717386__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717376__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3803___05F)
                ? 1U : 3U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717386__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717386__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717355__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8508___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3803___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3803___05F)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717343__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8496___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3803___05F)
                ? 0xbU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3803___05F)
                                 ? 0xbU : 0xfU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717343__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3795___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717343__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717343__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8503___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8496___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717349__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717349__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8499___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717346__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3803___05F)
                ? 2U : 3U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8509___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717355__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717346__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3803___05F)
                ? 2U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8509___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717355__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712697__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3849___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3803___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3803___05F)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717132__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8265___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717132__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717132__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717225__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02efract_out_q__05b23__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717225__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717225__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717127__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8279___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8280___05F)
                ? 0U : 0x75U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8280___05F)
                                  ? 0x75U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8287___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02efract_out_q__05b27__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717133__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717133__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717151__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8284___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8278___05F)
                     ? 0U : 0x3513U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4894___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4906___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713752__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2024_li2024 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713749__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2020_li2020 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713750__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713746__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713746__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4906___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713752__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2024_li2024 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713749__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2020_li2020 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713750__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713746__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713746__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713756__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1266_li1266)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713756__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713756__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712677__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712677__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712677__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3831___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712677__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712677__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712689__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b2__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712689__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712689__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714397__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b40__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714397__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714397__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3843___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b2__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712689__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712689__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8560___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3840___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717406__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717406__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7871___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eexp_r__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716717__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716717__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716725__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7862___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7877___05F)
                     ? 0x4f44U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716725__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7876___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716725__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716725__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b46__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714500__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714500__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714446__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714446__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714500__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714500__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714446__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714446__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b47__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5095___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713941__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714412__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714412__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714468__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5081___05F)
                ? 0xfU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5654___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714500__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5600___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714446__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5095___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713941__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714412__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714412__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714468__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5081___05F)
                ? 8U : 7U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5654___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714500__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5600___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714446__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714603__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b1__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714603__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714603__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714046__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5187___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5199___05F)
                ? 2U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5199___05F)
                               ? 3U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714053__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5202___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714053__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714053__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714053__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b40__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714053__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714053__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714413__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b43__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714413__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714413__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714413__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b42__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714413__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714413__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5566___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b43__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714412__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714412__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b34__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714266__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714266__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5277___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714123__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714266__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714266__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5277___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714123__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5192___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714372__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714372__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714591__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5744___05F)
                ? 0xff10U : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714372__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714372__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714591__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5744___05F)
                ? 0xffffU : 0U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714350__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b32__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714350__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714350__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714356__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b31__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714356__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714356__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714314__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b25__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714314__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714314__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b26__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5472___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714318__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714328__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714328__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5472___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714318__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714328__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714328__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714460__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5090___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714460__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714460__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716548__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3608___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716548__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716548__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712706__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3593___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F)
                ? 0xccccU : 0xff00U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F)
                                         ? 0xaaaaU : 0xf0f0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712472__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3621___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712472__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712472__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712718__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3870___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3601___05F)
                ? 1U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3601___05F)
                               ? 1U : 3U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712494__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3646___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3601___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3601___05F)
                               ? 2U : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3868___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716529__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3601___05F)
                ? 2U : 3U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7666___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716512__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716529__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3601___05F)
                ? 2U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7666___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716512__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3644___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3601___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716515__DOT__s1 = 2U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716510__DOT__s1 = 3U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716515__DOT__s1 = 3U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716510__DOT__s1 = 2U;
        }
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3601___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716515__DOT__s1 = 2U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716510__DOT__s1 = 0U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716515__DOT__s1 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716510__DOT__s1 = 2U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712502__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3585___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3601___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3601___05F)
                               ? 2U : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3606___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716517__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716517__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712453__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712453__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712474__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3592___05F)
                ? 0x10U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712498__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712498__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716519__DOT__s3 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712478__DOT__s1 = 0U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716517__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716517__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712453__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712453__DOT__s3));
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3592___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712474__DOT__s3 = 0xffU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716519__DOT__s3 = 7U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712478__DOT__s1 = 1U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712474__DOT__s3 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716519__DOT__s3 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712478__DOT__s1 = 0U;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712498__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712498__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716597__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3654___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716597__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716597__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716604__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3625___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716604__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716604__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716632__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3618___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716632__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716632__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3620___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716542__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716542__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716545__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716545__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716542__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716542__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716545__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716545__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716560__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3599___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3601___05F)
                ? 0x14U : 0U) : 0U);
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b25__05d) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3599___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712480__DOT__s1 = 2U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712446__DOT__s4 = 0x28U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712480__DOT__s1 = 1U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712446__DOT__s4 = 0x2800U;
        }
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3599___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712480__DOT__s1 = 1U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712446__DOT__s4 = 0x2800U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712480__DOT__s1 = 2U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712446__DOT__s4 = 0x28U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713648__DOT__s2 
        = (0xfU & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_76)
                    ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713648__DOT__s3)
                    : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713648__DOT__s3) 
                       >> 4U)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713645__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4787___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713645__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713645__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718655__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9715___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718655__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718655__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718656__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9713___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9715___05F)
                ? 0x69U : 0x96U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9715___05F)
                                     ? 0x96U : 0x69U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712575__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3622___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712575__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712575__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3699___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719700__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3685___05F)
                ? 8U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712589__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712589__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712547__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3700___05F)
                ? 0xaU : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719700__DOT__s2 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712589__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712589__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712547__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3700___05F)
                ? 3U : 0U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716344__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3694___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3682___05F)
                ? 0xaaU : 0xffU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3682___05F)
                                     ? 0xccU : 0xf0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3682___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716353__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3690___05F)
                ? 0xff55U : 0xf0f0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716356__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3694___05F)
                ? 0xaaU : 0xf0U);
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3699___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716352__DOT__s4 = 0xf0fU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716423__DOT__s4 = 0xf3a2U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716434__DOT__s4 = 0x5555U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712627__DOT__s2 = 5U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716352__DOT__s4 = 0xffU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716423__DOT__s4 = 0xf3f3U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716434__DOT__s4 = 0xf0fU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712627__DOT__s2 = 0U;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716431__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716431__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712625__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3778___05F)
                ? 4U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716369__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3708___05F)
                ? 2U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712622__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712622__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712561__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3700___05F)
                ? 7U : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716353__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3690___05F)
                ? 0xffffU : 0xf030U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716356__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3694___05F)
                ? 0xccU : 0xf0U);
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3699___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716352__DOT__s4 = 0x7777U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716423__DOT__s4 = 0xf3U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716434__DOT__s4 = 0x3333U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712627__DOT__s2 = 3U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716352__DOT__s4 = 0xffffU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716423__DOT__s4 = 0xf3f3U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716434__DOT__s4 = 0xffU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712627__DOT__s2 = 0U;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716431__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716431__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712625__DOT__s2 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716369__DOT__s1 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712622__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712622__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712561__DOT__s2 = 0U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3704___05F 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3682___05F)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3703___05F));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3700___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3699___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716425__DOT__s4 = 0xfc0aU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712552__DOT__s1 = 2U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716425__DOT__s4 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712552__DOT__s1 = 0U;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712555__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3708___05F)
                ? 0x53U : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716425__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712552__DOT__s1 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712555__DOT__s3 = 0U;
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3705___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3700___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712608__DOT__s3 = 0xfU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712580__DOT__s2 = 1U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712608__DOT__s3 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712580__DOT__s2 = 0U;
        }
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712608__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3700___05F)
                ? 0x44U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712580__DOT__s2 = 0U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712535__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3687___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712535__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712535__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716386__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3741___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716386__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716386__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712607__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3759___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3682___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3682___05F)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718514__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9666___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9667___05F)
                ? 0xfeU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9667___05F)
                                  ? 0xffU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718509__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9547___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718509__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718509__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718493__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9643___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9642___05F)
                ? 0x7eU : 0x17U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9642___05F)
                                     ? 0xe8U : 0x7eU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718490__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9642___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9643___05F)
                ? 0x96U : 0x69U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9643___05F)
                                     ? 0x69U : 0x96U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9589___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718443__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718443__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718487__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718487__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718443__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718443__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718487__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718487__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712371__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b10__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712371__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712371__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716968__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3502___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716968__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716968__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716984__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3549___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716984__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716984__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8085___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3560___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716931__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716931__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716939__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8092___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716939__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716939__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8081___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8082___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716928__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716934__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716934__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8082___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716928__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716934__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716934__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712335__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3475___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1054_li1054)
                ? 6U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1054_li1054)
                               ? 9U : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3479___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3557___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712403__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716993__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3477___05F)
                ? 0U : 0xacU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3481___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712327__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3557___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712403__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716993__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3477___05F)
                ? 0xacU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3481___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712327__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712254__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3403___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712254__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712254__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3444___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3401___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712290__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712290__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3359___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3357___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712205__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712205__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3380___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718066__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3347___05F)
                ? 0xaaaaU : 0xf0f0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712243__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712243__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712268__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024auto_295522__DOT__R_nD_SDFCHK)
                ? 0xffU : 0x88U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718066__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3347___05F)
                ? 0xccccU : 0xff00U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712243__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712243__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712268__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024auto_295522__DOT__R_nD_SDFCHK)
                ? 0xfU : 8U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718004__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9147___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3380___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3380___05F)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712298__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3407___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3380___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3380___05F)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718010__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9123___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3380___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3380___05F)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717943__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9096___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3380___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3380___05F)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712227__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3378___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3380___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3380___05F)
                               ? 2U : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3382___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024auto_295522__DOT__R_nD_SDFCHK) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717939__DOT__s3 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712239__DOT__s1 = 0U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717939__DOT__s3 = 0xbfU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712239__DOT__s1 = 1U;
        }
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024auto_295522__DOT__R_nD_SDFCHK) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717939__DOT__s3 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712239__DOT__s1 = 0U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717939__DOT__s3 = 0xffU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712239__DOT__s1 = 3U;
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b30__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712212__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712212__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717320__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8473___05F)
                ? 0U : 0xf8U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712212__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712212__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717320__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8473___05F)
                ? 0U : 0xdcU);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714248__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5397___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714248__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714248__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714230__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5377___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714230__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714230__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3564___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3563___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712410__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712410__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8119___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3553___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716965__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716965__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3566___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3504___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712412__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712412__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712946__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4070___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712946__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712946__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712957__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4099___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712957__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712957__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712933__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4021___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712933__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712933__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716074__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7220___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716074__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716074__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716101__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7250___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716101__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716101__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5733___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5032___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714579__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714579__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714222__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5201___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714222__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714222__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6987___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6981___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715833__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715833__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7066___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b34__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715912__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715912__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715970__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7121___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715970__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715970__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716191__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7339___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716191__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716191__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716149__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7300___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716149__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716149__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716175__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7116___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716175__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716175__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7259___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b36__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716105__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716105__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716014__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b39__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716014__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716014__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715870__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7017___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715870__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715870__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716139__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7287___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716139__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716139__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b38__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713138__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713138__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4766___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713612__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713138__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713138__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4766___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713612__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713121__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4270___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713121__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713121__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713487__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b45__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713487__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713487__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4398___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4093___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713244__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713244__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4761___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4267___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713607__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713607__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713781__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4931___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713781__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713781__DOT__s2)));
    if ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx2_mul__02e____VhshRrFaYytnw6nIQuniAWQqJkW5QVsD3bb3eiMl2E4p__DOT__z_out_reg 
                       >> 0x1eU)))) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4947___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713793__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713765__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713765__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4947___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713793__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713765__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713765__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4944___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713832__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713832__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713829__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713829__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713832__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713832__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713829__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713829__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4942___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1985_li1985 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713833__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713792__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4945___05F)
                ? 0U : 0x1111U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1985_li1985 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713833__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713792__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4945___05F)
                ? 0U : 0x1117U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715282__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6426___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715282__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715282__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715111__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6044___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715111__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715111__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715194__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6339___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6347___05F)
                ? 0xffU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6347___05F)
                                  ? 0xf4U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715146__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6070___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715146__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715146__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714897__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6040___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6050___05F)
                ? 0U : 0xffU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6050___05F)
                                  ? 0U : 0x4fU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715179__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5994___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715179__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715179__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715431__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6583___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715431__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715431__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714919__DOT__s1 
        = (3U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_1015)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714919__DOT__s2)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714919__DOT__s2) 
                     >> 2U)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714999__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6152___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6124___05F)
                     ? 0xff4fU : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6071___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6498___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715344__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715316__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6469___05F)
                ? 0U : 0xbf00U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6498___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715344__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715316__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6469___05F)
                ? 0U : 0xbfbfU);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715266__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6418___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715266__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715266__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715160__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6313___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5977___05F)
                     ? 0xf7U : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6116___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714971__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714971__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715253__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6121___05F)
                ? 0xf4f4U : 0xffffU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714971__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714971__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715253__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6121___05F)
                ? 0x44f4U : 0xffU);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715132__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6284___05F)
            ? 0xf0ffU : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6285___05F)
                          ? 0xf0ffU : 0x8000U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715378__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6531___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6124___05F)
                ? 0x4fU : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713665__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4818___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713665__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713665__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713681__DOT__s2 
        = (0xfU & ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx3_mul__02e____VhshWScOvPjVsHc5N4LU1a7DMLFW9Mbt76PiveC4emTC__DOT__z_out_reg 
                                  >> 0x1cU))) ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713681__DOT__s3) 
                                                 >> 4U)
                    : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713681__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713657__DOT__s1 
        = (3U & ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx3_mul__02e____VhshWScOvPjVsHc5N4LU1a7DMLFW9Mbt76PiveC4emTC__DOT__z_out_reg 
                                >> 0x1dU))) ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713657__DOT__s2) 
                                               >> 2U)
                  : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713657__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713679__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0115)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713679__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713679__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713720__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4828___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4826___05F)
                ? 0x69U : 0x96U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4826___05F)
                                     ? 0x96U : 0x69U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713717__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4827___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4826___05F)
                ? 0xebbeU : 0x7dd7U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4826___05F)
                                         ? 0x1441U : 0x8228U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4829___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4826___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713675__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713675__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715313__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6042___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715313__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715313__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715238__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6388___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6391___05F)
                ? 0xf080U : 0xf0f0U) : 0xf0f0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6826___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_ovf_r__05b1__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715672__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715672__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715620__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6734___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715620__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715620__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6772___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6770___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715618__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715618__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5081___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5076___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714469__DOT__s4 = 0x3fU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713928__DOT__s4 = 0xffffU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714469__DOT__s4 = 0xffc0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713928__DOT__s4 = 0x77U;
        }
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5076___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714469__DOT__s4 = 0xaaU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713928__DOT__s4 = 0xff8fU;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714469__DOT__s4 = 0xff55U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713928__DOT__s4 = 0xfff8U;
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5109___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713963__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713963__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713974__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713974__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713963__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713963__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713974__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713974__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5086___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5151___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713997__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713960__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5097___05F)
                ? 0xc03fU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713956__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5109___05F)
                ? 2U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713945__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5098___05F)
                ? 0x3fc0U : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5151___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713997__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713960__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5097___05F)
                ? 0x55aaU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713956__DOT__s1 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713945__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5098___05F)
                ? 0xaa55U : 0U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713996__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5097___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5086___05F)
                ? 0x87U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714645__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0039)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714645__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714645__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1766_li1766 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0004)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714706__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714706__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3896___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3902___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712793__DOT__s1 = 1U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712749__DOT__s3 = 0x8eU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712793__DOT__s1 = 2U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712749__DOT__s3 = 0xcU;
        }
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3902___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712793__DOT__s1 = 2U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712749__DOT__s3 = 0xcfU;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712793__DOT__s1 = 1U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712749__DOT__s3 = 0x8eU;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712794__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3902___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712794__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712794__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712751__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0170)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712751__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712751__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3909___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0200)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712755__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712755__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3886___05F 
        = (1U & ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx4_mul__02e____VhshiHk0hBnMBg5YmEz4uFPvtCA3Y2PVaOtAj79meNrc__DOT__z_out_reg 
                                >> 0x1fU))) ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712732__DOT__s1) 
                                               >> 1U)
                  : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712732__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715645__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b2__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715645__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715645__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5963___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5961___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714809__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714809__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712906__DOT__s3 
        = (0xffU & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_1037)
                     ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712906__DOT__s4)
                     : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712906__DOT__s4) 
                        >> 8U)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b2__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712843__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712843__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4036___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712882__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712843__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712843__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4036___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712882__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714845__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5981___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5998___05F)
                ? 0U : 0xeU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5998___05F)
                                 ? 0U : 0xfU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714839__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5974___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714839__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714839__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15967__02eS__05b17__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efractb_out__05b17__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719938__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719938__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719939__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efractb_out__05b18__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15862__02eC__05b18__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719939__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719939__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15862__02eC__05b19__05d 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efractb_out__05b18__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15862__02eC__05b18__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15943__02eS__05b17__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efractb_out__05b17__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719869__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719869__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719870__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efractb_out__05b18__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15853__02eC__05b18__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719870__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719870__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15853__02eC__05b19__05d 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efractb_out__05b18__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15853__02eC__05b18__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15871__02eS__05b17__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efractb_out__05b17__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719746__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719746__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719747__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efractb_out__05b18__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15841__02eC__05b18__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719747__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719747__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15841__02eC__05b19__05d 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efractb_out__05b18__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15841__02eC__05b18__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15919__02eS__05b17__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efractb_out__05b17__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719821__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719821__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719822__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efractb_out__05b18__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15844__02eC__05b18__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719822__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719822__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15844__02eC__05b19__05d 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efractb_out__05b18__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15844__02eC__05b18__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15895__02eS__05b17__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efractb_out__05b17__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719772__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719772__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719773__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efractb_out__05b18__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15856__02eC__05b18__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719773__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719773__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15856__02eC__05b19__05d 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efractb_out__05b18__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15856__02eC__05b18__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02efract_out_d__05b13__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15943__02eC__05b13__05d) 
           ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15943__02eS__05b13__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15943__02eC__05b14__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15943__02eS__05b13__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15943__02eC__05b13__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b13__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02efract_out_d__05b13__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15967__02eC__05b13__05d) 
           ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15967__02eS__05b13__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15967__02eC__05b14__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15967__02eS__05b13__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15967__02eC__05b13__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b13__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02efract_out_d__05b13__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15895__02eC__05b13__05d) 
           ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15895__02eS__05b13__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15895__02eC__05b14__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15895__02eS__05b13__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15895__02eC__05b13__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b13__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02efract_out_d__05b13__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15871__02eC__05b13__05d) 
           ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15871__02eS__05b13__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15871__02eC__05b14__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15871__02eS__05b13__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15871__02eC__05b13__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b13__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02efract_out_d__05b13__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15919__02eC__05b13__05d) 
           ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15919__02eS__05b13__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15919__02eC__05b14__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15919__02eS__05b13__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15919__02eC__05b13__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b13__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15773__02eC__05b17__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15773__02eS__05b16__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15773__02eC__05b16__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b16__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719275__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10376___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719275__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719275__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719234__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10384___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719234__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719234__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719235__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10331___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719235__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719235__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719271__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b20__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719271__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719271__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714636__DOT__s2 
        = (0xfU & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_345)
                    ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714636__DOT__s3)
                    : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714636__DOT__s3) 
                       >> 4U)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714635__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5767___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714635__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714635__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714623__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b25__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714623__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714623__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719139__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10267___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10268___05F)
                ? 0xee78U : 0x1187U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10268___05F)
                                         ? 0x771eU : 0x88e1U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719143__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10212___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10261___05F)
                ? 0x7ee8U : 0x8117U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10261___05F)
                                         ? 0x177eU : 0xe881U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719031__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10173___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719031__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719031__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719147__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10252___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10253___05F)
                ? 0x42d4U : 0xbd2bU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10253___05F)
                                         ? 0x2b42U : 0xd4bdU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15739__02eC__05b17__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15739__02eS__05b16__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15739__02eC__05b16__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b16__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15705__02eC__05b18__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15705__02eS__05b17__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15705__02eC__05b17__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b17__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716907__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b29__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716907__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716907__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716909__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b27__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716907__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716907__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716904__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3598___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716904__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716904__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10168___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10273___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719119__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10171___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719017__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10273___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719119__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10171___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719017__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719095__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10238___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719095__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719095__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719140__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10269___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10267___05F)
                ? 9U : 6U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10267___05F)
                               ? 6U : 9U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719116__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10268___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10269___05F)
                ? 0xff3fU : 0x7f57U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10269___05F)
                                         ? 0x300U : 0x1501U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15682__02eC__05b17__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15682__02eS__05b16__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15682__02eC__05b16__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b16__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15807__02eC__05b17__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15807__02eS__05b16__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15807__02eC__05b16__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b16__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719466__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10617___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719466__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719466__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719537__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10689___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10690___05F)
                ? 0xf47U : 0xf0f4U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10690___05F)
                                        ? 0x4755U : 0xf4f5U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719569__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10654___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719569__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719569__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10634___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719568__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719568__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719509__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719509__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719568__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719568__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719509__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719509__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718473__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9621___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718473__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718473__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9598___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9605___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718451__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718483__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718483__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9605___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718451__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718483__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718483__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718833__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9923___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718833__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718833__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0167_li0167 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9761___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718671__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718671__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718624__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9774___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718624__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718624__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9431___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718328__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718328__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718278__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9424___05F)
                ? 0xcb3U : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718328__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718328__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718278__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9424___05F)
                ? 0xa0a0U : 0U);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9312___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718275__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9323___05F)
                ? 2U : 1U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718159__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9293___05F)
                ? 0U : 0xefU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718275__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9323___05F)
                ? 3U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718159__DOT__s3 = 0xefU;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717853__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eexp_r__05b1__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8917___05F)
                ? 0x41U : 0U) : 0U);
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8917___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8924___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717770__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717773__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717773__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717765__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717765__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8924___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717770__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717773__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717773__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717765__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717765__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717764__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8909___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8917___05F)
                ? 0xfff0U : 0xffffU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8917___05F)
                                         ? 0x7778U : 0x7777U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1545_li1545 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1543_li1543)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716323__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716323__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716321__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7460___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716321__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716321__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7458___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716320__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716320__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716314__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716314__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716320__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716320__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716314__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716314__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719437__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10517___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719437__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719437__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9938___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9934___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718784__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718784__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719423__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10576___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719423__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719423__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9848___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9836___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718694__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718694__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9850___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9845___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718696__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718696__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9955___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9958___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718823__DOT__s4 = 0x8e18U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718805__DOT__s4 = 0xfffbU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718823__DOT__s4 = 0x71e7U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718805__DOT__s4 = 0xb220U;
        }
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9958___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718823__DOT__s4 = 0x1871U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718805__DOT__s4 = 0xfbb2U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718823__DOT__s4 = 0xe78eU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718805__DOT__s4 = 0x2000U;
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9946___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9949___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718825__DOT__s4 = 0x8e18U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718796__DOT__s4 = 0xfffbU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718825__DOT__s4 = 0x71e7U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718796__DOT__s4 = 0xb220U;
        }
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9949___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718825__DOT__s4 = 0x1871U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718796__DOT__s4 = 0xfbb2U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718825__DOT__s4 = 0xe78eU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718796__DOT__s4 = 0x2000U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719433__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10533___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10532___05F)
                ? 0x1188U : 0xee77U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10532___05F)
                                         ? 0x781eU : 0x87e1U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719380__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10532___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10533___05F)
                ? 0xfff3U : 0xf775U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10533___05F)
                                         ? 0x3000U : 0x5110U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718827__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9892___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9894___05F)
                ? 0x71U : 0x8eU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9894___05F)
                                     ? 0x8eU : 0x71U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718931__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10083___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718931__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718931__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10065___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718979__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718979__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718927__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718927__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718979__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718979__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718927__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718927__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718982__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10070___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10065___05F)
                ? 0xaU : 0xcU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10065___05F)
                                   ? 0xaU : 3U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718935__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10086___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10088___05F)
                ? 0U : 0xaaaaU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10088___05F)
                                    ? 0U : 0xbfabU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8703___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717655__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717655__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717573__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717573__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717655__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717655__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717573__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717573__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718172__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9322___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718172__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718172__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717455__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8515___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717455__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717455__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712701__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3815___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712701__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712701__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712665__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3809___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712665__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712665__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8491___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717387__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717387__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8500___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717346__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717387__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717387__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8500___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717346__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717438__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b3__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717438__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717438__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717380__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3801___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717380__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717380__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8530___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8522___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717376__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717376__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3851___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3850___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712697__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712697__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717132__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8254___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717132__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717132__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8379___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02efract_out_q__05b22__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717225__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717225__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8278___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717127__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717127__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717134__DOT__s4 = 0U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717127__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717127__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717134__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8287___05F)
                ? 0x3513U : 0U);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8266___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717114__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717114__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717151__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717151__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717150__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717150__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717139__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717139__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717140__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717140__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717142__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8278___05F)
                ? 0U : 0x35U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717114__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717114__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717151__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717151__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717150__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717150__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717139__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717139__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717140__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717140__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717142__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8278___05F)
                ? 0U : 0x13U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717237__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8276___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8278___05F)
                ? 0U : 4U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8278___05F)
                               ? 0U : 0xfU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713753__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4890___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4906___05F)
                ? 9U : 6U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4906___05F)
                               ? 6U : 9U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2014_li2014 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b23__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713756__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713756__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7871___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716836__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716836__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716768__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716768__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716724__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716724__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716836__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716836__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716768__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716768__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716724__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716724__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716838__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7991___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7880___05F)
                ? 1U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5757___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b2__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714603__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714603__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714146__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b33__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714146__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714146__DOT__s2)));
}
