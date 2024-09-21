// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_syn2.h for the primary calling header

#include "Vco_sim_syn2__pch.h"
#include "Vco_sim_syn2___024root.h"

VL_INLINE_OPT void Vco_sim_syn2___024root___nba_sequent__TOP__8(Vco_sim_syn2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_syn2___024root___nba_sequent__TOP__8\n"); );
    // Body
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716174__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7119___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6753___05F)
                     ? 0x30fU : 0x3355U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716135__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6796___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716135__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716135__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716064__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b30__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6937___05F)
                ? 0U : 0xbbU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6937___05F)
                                  ? 0U : 0xbU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715618__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6761___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6771___05F)
                ? 4U : 0xfU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6771___05F)
                                 ? 0x44U : 0xffU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b39__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714358__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714358__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713892__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713892__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714358__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714358__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713892__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713892__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b5__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5320___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714166__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5443___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714289__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5188___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714034__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5320___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714166__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5443___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714289__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5188___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714034__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5763___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu2__02eexp_out__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714609__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714609__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5747___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b19__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714593__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714593__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4888___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu2__02eexp_out__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713734__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713734__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716153__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b22__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7306___05F)
                ? 0xf0U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7306___05F)
                                  ? 0xccfeU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715889__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7042___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715889__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715889__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b19__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7305___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716151__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6791___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715637__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7305___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716151__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6791___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715637__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b35__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7253___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716099__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6749___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715595__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6741___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715587__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7253___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716099__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6749___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715595__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6741___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715587__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716190__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7062___05F)
            ? 0xb0bbU : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7165___05F)
                          ? 0U : 0xb0bbU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716150__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b13__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716150__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716150__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5050___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b9__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713896__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713896__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6776___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b9__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715622__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715622__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4784___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu2__02eexp_out__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713630__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713630__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b5__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4219___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713065__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4265___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713111__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4181___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713027__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4117___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712963__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4267___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713113__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4219___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713065__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4265___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713111__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4181___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713027__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4117___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712963__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4267___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713113__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4185___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713617__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713617__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713219__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b2__05d)
                ? 0xf0cU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713105__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4107___05F)
                ? 0xf0cU : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713617__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713617__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713219__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b2__05d)
                ? 0xddccU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713105__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4107___05F)
                ? 0xddccU : 0U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713480__DOT__s4 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_1037)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4185___05F)
                ? 0xbb0bU : 0xff0fU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4185___05F)
                                         ? 0U : 0xff0fU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712965__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4118___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712965__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712965__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b47__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4532___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713378__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4251___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713097__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3991___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712837__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4532___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713378__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4251___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713097__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3991___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712837__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4102___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4745___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713591__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713485__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713485__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713055__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713055__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713171__DOT__s2 = 0xcU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712949__DOT__s1 = 0U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4745___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713591__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713485__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713485__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713055__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713055__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713171__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4324___05F)
                ? 0xaU : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712949__DOT__s1 
            = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_1038)
                ? 0U : 1U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5048___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713894__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713894__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5062___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713908__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713908__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b39__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4395___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713241__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4029___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712875__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4395___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713241__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4029___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712875__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b3__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5024___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713870__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5026___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713872__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714603__DOT__s4 = 0U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5024___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713870__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5026___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713872__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714603__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5275___05F)
                ? 0U : 0xf351U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4022___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712868__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712868__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3998___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b1__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712844__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712844__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712885__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b15__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712885__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712885__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7059___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715964__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7117___05F)
                ? 0x7fU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716172__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716172__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715964__DOT__s3 = 0x7fU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716172__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716172__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712833__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712833__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712833__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713791__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0092)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713791__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713791__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713761__DOT__s2 
        = (0xfU & ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx2_mul__02e____VhshRrFaYytnw6nIQuniAWQqJkW5QVsD3bb3eiMl2E4p__DOT__z_out_reg 
                                  >> 0x19U))) ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713761__DOT__s3) 
                                                 >> 4U)
                    : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713761__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713763__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0090)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713763__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713763__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713758__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0086)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713758__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713758__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713760__DOT__s2 
        = (0xfU & ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx2_mul__02e____VhshRrFaYytnw6nIQuniAWQqJkW5QVsD3bb3eiMl2E4p__DOT__z_out_reg 
                                  >> 0x15U))) ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713760__DOT__s3) 
                                                 >> 4U)
                    : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713760__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713759__DOT__s2 
        = (0xfU & ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx2_mul__02e____VhshRrFaYytnw6nIQuniAWQqJkW5QVsD3bb3eiMl2E4p__DOT__z_out_reg 
                                  >> 0x13U))) ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713759__DOT__s3) 
                                                 >> 4U)
                    : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713759__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713663__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0152)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713663__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713663__DOT__s3)));
    if ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx3_mul__02e____VhshWScOvPjVsHc5N4LU1a7DMLFW9Mbt76PiveC4emTC__DOT__z_out_reg 
                       >> 0x16U)))) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4821___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713667__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713653__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713653__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4821___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713667__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713653__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713653__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713673__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0112)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713673__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713673__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4805___05F 
        = (1U & ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx3_mul__02e____VhshWScOvPjVsHc5N4LU1a7DMLFW9Mbt76PiveC4emTC__DOT__z_out_reg 
                                >> 0x15U))) ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713651__DOT__s1) 
                                               >> 1U)
                  : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713651__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713650__DOT__s2 
        = (0xfU & ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx3_mul__02e____VhshWScOvPjVsHc5N4LU1a7DMLFW9Mbt76PiveC4emTC__DOT__z_out_reg 
                                  >> 0x13U))) ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713650__DOT__s3) 
                                                 >> 4U)
                    : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713650__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6733___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b11__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715579__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715579__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716128__DOT__s4 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_1008)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6738___05F)
                     ? 0xac00U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6755___05F 
        = ((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_1008)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6738___05F));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7455___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu2__02eexp_out__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716301__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716301__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b5__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6169___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715015__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6165___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715011__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6047___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714893__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6169___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715015__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6165___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715011__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6047___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714893__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5029___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713877__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5030___05F)
                ? 4U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713920__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713920__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713877__DOT__s2 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713920__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713920__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5038___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b17__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713884__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713884__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714584__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5066___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714584__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714584__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713914__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5065___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713914__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713914__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715248__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b32__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6401___05F)
                ? 0U : 0xbbU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6401___05F)
                                  ? 0U : 0xbU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6045___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714892__DOT__s2 = 0xcU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714917__DOT__s1 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714964__DOT__s2 = 0U;
    } else if (vlSelf->__VdfgRegularize_hd87f99a1_0_1015) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714892__DOT__s2 = 0xcU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714917__DOT__s1 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714964__DOT__s2 = 0U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714892__DOT__s2 = 0xaU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714917__DOT__s1 = 1U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714964__DOT__s2 = 1U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716144__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b2__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716144__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716144__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b44__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715926__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715926__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716010__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716010__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715926__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715926__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716010__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716010__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6746___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b20__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715592__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715592__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5900___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714746__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5930___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714776__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5900___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714746__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5930___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714776__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b47__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6037___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714883__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6076___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714922__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6037___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714883__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6076___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714922__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6328___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b46__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715174__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715174__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b7__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6430___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715276__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5950___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714796__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6430___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715276__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5950___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714796__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6747___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b27__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715593__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715593__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5724___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b40__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714570__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714570__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5204___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5205___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714085__DOT__s2 = 0xaU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714183__DOT__s4 = 0x555U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714165__DOT__s4 = 0xfffU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714284__DOT__s4 = 0xaa0aU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714085__DOT__s2 = 0xcU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714183__DOT__s4 = 0xfffU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714165__DOT__s4 = 0x333U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714284__DOT__s4 = 0xff0fU;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714313__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5192___05F)
                ? 0U : 0x550fU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714249__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b0__05d)
                ? 0xaaU : 0xf0U);
    } else {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5205___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714085__DOT__s2 = 0xcU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714183__DOT__s4 = 0x333U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714165__DOT__s4 = 0x555U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714284__DOT__s4 = 0xcc0cU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714085__DOT__s2 = 0xfU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714183__DOT__s4 = 0xfffU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714165__DOT__s4 = 0xfffU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714284__DOT__s4 = 0xff0fU;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714313__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5192___05F)
                ? 0U : 0x33ffU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714249__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b0__05d)
                ? 0xccU : 0xf0U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714359__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5205___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5192___05F)
                ? 0U : 0x550fU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5192___05F)
                                    ? 0U : 0x33ffU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714359__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5204___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714359__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714359__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5512___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b40__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714358__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714358__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5034___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5079___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713925__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713915__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713915__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5079___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713925__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713915__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713915__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5902___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b8__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714748__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714748__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5044___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5043___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713890__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713890__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5184___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b2__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714030__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714030__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5055___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b21__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713901__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713901__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5033___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713900__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713900__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713882__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713882__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713900__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713900__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713882__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713882__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7294___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b17__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716140__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716140__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5205___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5204___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714596__DOT__s4 = 0x3030U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714052__DOT__s3 = 0xfU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714247__DOT__s3 = 0xccU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714596__DOT__s4 = 0x3322U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714052__DOT__s3 = 0x33U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714247__DOT__s3 = 0xf0U;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714313__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714313__DOT__s4) 
                        >> 8U));
    } else {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5204___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714596__DOT__s4 = 0x3330U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714052__DOT__s3 = 0x55U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714247__DOT__s3 = 0xaaU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714596__DOT__s4 = 0x3333U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714052__DOT__s3 = 0xffU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714247__DOT__s3 = 0xffU;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714313__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714313__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4000___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b9__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712846__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712846__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b10__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4747___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713593__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4023___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712869__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4747___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713593__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4023___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712869__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5730___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b11__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714576__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714576__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715635__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6788___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b47__05d)
                ? 0U : 0x10U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b47__05d)
                                  ? 0U : 0xffU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b17__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3974___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712820__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4025___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712871__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3974___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712820__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4025___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712871__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1761_li1761 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0028)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714711__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714711__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714642__DOT__s2 
        = (0xfU & ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx1_mul__02e____VhshBxuRHTityI6iNNr10ryRBgO0QSIwvuCbCbbMbmoS__DOT__z_out_reg 
                                  >> 0x18U))) ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714642__DOT__s3) 
                                                 >> 4U)
                    : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714642__DOT__s3)));
    if ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx1_mul__02e____VhshBxuRHTityI6iNNr10ryRBgO0QSIwvuCbCbbMbmoS__DOT__z_out_reg 
                       >> 0x16U)))) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5793___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714639__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5794___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714640__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5793___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714639__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5794___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714640__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714638__DOT__s2 
        = (0xfU & ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx1_mul__02e____VhshBxuRHTityI6iNNr10ryRBgO0QSIwvuCbCbbMbmoS__DOT__z_out_reg 
                                  >> 0x13U))) ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714638__DOT__s3) 
                                                 >> 4U)
                    : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714638__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6442___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b10__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715288__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715288__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715906__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b41__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715906__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715906__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b0__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715868__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715868__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6824___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715670__DOT__s1) 
                     >> 1U));
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7045___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715892__DOT__s4 = 0x333U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715961__DOT__s4 = 0x555U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716187__DOT__s2 = 5U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715892__DOT__s4 = 0xfffU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715961__DOT__s4 = 0xfffU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716187__DOT__s2 = 0U;
        }
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715868__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715868__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6824___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715670__DOT__s1));
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7045___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715892__DOT__s4 = 0x555U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715961__DOT__s4 = 0x333U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716187__DOT__s2 = 3U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715892__DOT__s4 = 0xfffU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715961__DOT__s4 = 0xfffU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716187__DOT__s2 = 0U;
        }
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715291__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b3__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715291__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715291__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2199_li2199 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0190)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712799__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712799__DOT__s1)));
    if ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx4_mul__02e____VhshiHk0hBnMBg5YmEz4uFPvtCA3Y2PVaOtAj79meNrc__DOT__z_out_reg 
                       >> 0x1cU)))) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712755__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3908___05F)
                ? 0x115U : 0xfeeaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712730__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712730__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712755__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3908___05F)
                ? 0x577fU : 0xa880U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712730__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712730__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712727__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0194)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712727__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712727__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712725__DOT__s2 
        = (0xfU & ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx4_mul__02e____VhshiHk0hBnMBg5YmEz4uFPvtCA3Y2PVaOtAj79meNrc__DOT__z_out_reg 
                                  >> 0x13U))) ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712725__DOT__s3) 
                                                 >> 4U)
                    : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712725__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712864__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3988___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4017___05F)
                ? 0xbU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4017___05F)
                                 ? 0xfU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716138__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7251___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716138__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716138__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6935___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716029__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7165___05F)
                ? 0U : 7U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715964__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715964__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716029__DOT__s2 = 7U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715964__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715964__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6867___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b2__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715713__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715713__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7101___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b1__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715947__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715947__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716103__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b2__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7101___05F)
                ? 0U : 0x5fU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7101___05F)
                                  ? 0U : 0x3fU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715952__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6866___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7105___05F)
                ? 0x3dcU : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715952__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b2__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715952__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715952__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715613__DOT__s3 
        = (0xffU & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_1007)
                     ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715613__DOT__s4)
                     : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715613__DOT__s4) 
                        >> 8U)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5037___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b23__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713883__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713883__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713887__DOT__s4 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_236)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5040___05F)
                ? 0U : 0xf0fU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5040___05F)
                                   ? 0U : 0xf7fU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5057___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b28__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713903__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713903__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712818__DOT__s3 
        = (0xffU & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_1039)
                     ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712818__DOT__s4)
                     : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712818__DOT__s4) 
                        >> 8U)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4004___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b23__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712850__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712850__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712878__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4031___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712878__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712878__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3983___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712860__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712860__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712831__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712831__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712860__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712860__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712831__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712831__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6432___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715278__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715278__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714752__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5903___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714752__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714752__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b37__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7286___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716132__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6787___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715633__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716084__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716084__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7304___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716150__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7286___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716132__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6787___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715633__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716084__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716084__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7304___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716150__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b25__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4026___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712872__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3989___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712835__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4026___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712872__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3989___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712835__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714772__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5921___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714772__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714772__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5892___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b28__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714738__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714738__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712853__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4006___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b37__05d)
                ? 0U : 0x1000U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b37__05d)
                                    ? 0U : 0xffffU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b41__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4009___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712855__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713480__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713480__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4009___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712855__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713480__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713480__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714745__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5891___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5898___05F)
                ? 0x40U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5907___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b26__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714753__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714753__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714782__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b36__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714782__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714782__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715574__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu0__02esnan)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6727___05F)
                     ? 1U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713868__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu0__02esnan)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5021___05F)
                     ? 1U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714735__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu0__02esnan)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5888___05F)
                     ? 1U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2169_li2169 
        = ((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_93)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3962___05F));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716328__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu0__02eopa_nan)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716328__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716328__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715482__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5890___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6600___05F)
                ? 0U : 0xbfffU) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716242__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7359___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6729___05F)
                     ? 0xbU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714509__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5023___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5613___05F)
                ? 0U : 0xbfffU) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713519__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3965___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4623___05F)
                ? 0U : 0xefffU) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15862__02eC__05b7__05d 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efractb_out__05b6__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15862__02eC__05b6__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15853__02eC__05b7__05d 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efractb_out__05b6__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15853__02eC__05b6__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15841__02eC__05b7__05d 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efractb_out__05b6__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15841__02eC__05b6__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713335__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4107___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4488___05F)
                ? 0xafcfU : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15844__02eC__05b7__05d 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efractb_out__05b6__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15844__02eC__05b6__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15856__02eC__05b7__05d 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efractb_out__05b6__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15856__02eC__05b6__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15943__02eS__05b0__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_348600)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719878__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719878__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15943__02eS__05b1__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efractb_out__05b1__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719879__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719879__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15943__02eS__05b2__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_348604)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719880__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719880__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719858__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efractb_out__05b6__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15853__02eC__05b6__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719858__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719858__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719857__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efractb_out__05b5__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15853__02eC__05b5__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719857__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719857__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719856__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efractb_out__05b4__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15853__02eC__05b4__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719856__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719856__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4107___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713592__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713592__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713219__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713219__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713592__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713592__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713219__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713219__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4108___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b40__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712954__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712954__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712955__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4107___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4108___05F)
                ? 0xafcfU : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719855__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efractb_out__05b3__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15853__02eC__05b3__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719855__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719855__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5941___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b41__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714787__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714787__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715343__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6042___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715343__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715343__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715343__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b41__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715343__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715343__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715312__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b3__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6042___05F)
                ? 0x700U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6042___05F)
                                   ? 7U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15967__02eS__05b0__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_348608)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719947__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719947__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15967__02eS__05b1__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_348612)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719948__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719948__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15967__02eS__05b2__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_348616)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719949__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719949__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719927__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efractb_out__05b6__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15862__02eC__05b6__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719927__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719927__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719926__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efractb_out__05b5__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15862__02eC__05b5__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719926__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719926__DOT__s2)));
    if ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx2_mul__02e____VhshRrFaYytnw6nIQuniAWQqJkW5QVsD3bb3eiMl2E4p__DOT__z_out_reg 
                       >> 0x1cU)))) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713779__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713779__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713791__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713791__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713779__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713779__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713791__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713791__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719925__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efractb_out__05b4__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15862__02eC__05b4__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719925__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719925__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719924__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efractb_out__05b3__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15862__02eC__05b3__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719924__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719924__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0422_li0422 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eout__05b31__05d)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eout__05b31__05d)
                  : (~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eout__05b31__05d))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15895__02eS__05b0__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efractb_out__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719781__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719781__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0083) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713784__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713784__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713759__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713759__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713784__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713784__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713759__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713759__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5933___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b25__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714779__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714779__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b0__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6426___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715272__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6048___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714894__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6070___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714916__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6426___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715272__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6048___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714894__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6070___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714916__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715300__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b25__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6070___05F)
                ? 0xffU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6070___05F)
                                  ? 0xfeU : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b22__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5893___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714739__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5910___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714756__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5893___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714739__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5910___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714756__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5960___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714806__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6400___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715246__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5960___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714806__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6400___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715246__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715264__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b22__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6400___05F)
                ? 0xf0f0U : 0xfff3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6400___05F)
                                         ? 0x5000U : 0xfff3U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15895__02eS__05b1__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_348580)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719782__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719782__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15895__02eS__05b2__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_348584)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719783__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719783__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719761__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efractb_out__05b6__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15856__02eC__05b6__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719761__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719761__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719760__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efractb_out__05b5__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15856__02eC__05b5__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719760__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719760__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719759__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efractb_out__05b4__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15856__02eC__05b4__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719759__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719759__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719758__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efractb_out__05b3__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15856__02eC__05b3__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719758__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719758__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15871__02eS__05b0__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_348568)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719755__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719755__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15871__02eS__05b1__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_348572)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719756__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719756__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15871__02eS__05b2__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_348576)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719757__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719757__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719735__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efractb_out__05b6__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15841__02eC__05b6__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719735__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719735__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719734__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efractb_out__05b5__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15841__02eC__05b5__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719734__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719734__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719733__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efractb_out__05b4__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15841__02eC__05b4__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719733__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719733__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719732__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efractb_out__05b3__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15841__02eC__05b3__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719732__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719732__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15919__02eS__05b0__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_348588)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719830__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719830__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15919__02eS__05b1__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_348592)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719831__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719831__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15919__02eS__05b2__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_348596)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719832__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719832__DOT__s1)));
    if ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx3_mul__02e____VhshWScOvPjVsHc5N4LU1a7DMLFW9Mbt76PiveC4emTC__DOT__z_out_reg 
                       >> 0x18U)))) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713654__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713654__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713673__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713673__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713654__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713654__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713673__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713673__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719810__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efractb_out__05b6__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15844__02eC__05b6__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719810__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719810__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719809__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efractb_out__05b5__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15844__02eC__05b5__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719809__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719809__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0137) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713669__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713669__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713650__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713650__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713669__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713669__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713650__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713650__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719808__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efractb_out__05b4__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15844__02eC__05b4__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719808__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719808__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6734___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715583__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715583__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715638__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6738___05F)
                ? 0xb0U : 0xffU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716128__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716128__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715583__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715583__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715638__DOT__s4 = 0xffU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716128__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716128__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719807__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efractb_out__05b3__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15844__02eC__05b3__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719807__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719807__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713845__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4997___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4998___05F)
                ? 1U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713850__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5002___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5003___05F)
                ? 1U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713851__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5001___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b22__05d)
                ? 0U : 0xbU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b22__05d)
                                 ? 0U : 0xfU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15773__02eC__05b5__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15773__02eS__05b4__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15773__02eC__05b4__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b4__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717482__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15773__02eS__05b7__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8635___05F)
                ? 0x8000U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717523__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b3__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717523__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717523__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717490__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15773__02eS__05b19__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8643___05F)
                ? 0x8000U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714722__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5872___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b22__05d)
                ? 0U : 0xbU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b22__05d)
                                 ? 0U : 0xfU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717520__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8670___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b22__05d)
                ? 0U : 0xbU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b22__05d)
                                 ? 0U : 0xfU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716578__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7730___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7731___05F)
                ? 0x8000U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713864__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b29__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713864__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713864__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714617__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b24__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714617__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714617__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714612__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5765___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714612__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714612__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714620__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5773___05F)
            ? 0xfea8U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5765___05F)
                          ? 0xea80U : 0xfea8U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____Vcellinp____024abc__024712188__024auto_714615__A 
        = (((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5768___05F) 
            << 2U) | (((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b27__05d) 
                       << 1U) | (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b29__05d)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5768___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719024__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b10__05d)
                ? 0xeU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719069__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719069__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719024__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b10__05d)
                ? 0xfU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719069__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719069__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6431___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5968___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715277__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715277__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6149___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714995__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6078___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714924__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6121___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714967__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5973___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714819__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5958___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714804__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715346__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715346__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6342___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715188__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6117___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714963__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6039___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714885__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6149___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714995__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6078___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714924__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6121___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714967__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5973___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714819__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5958___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714804__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715346__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715346__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6342___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715188__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6117___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714963__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6039___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714885__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715144__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5968___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6039___05F)
                ? 0x555U : 0xfffU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6039___05F)
                                       ? 0x333U : 0xfffU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15739__02eC__05b5__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15739__02eS__05b4__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15739__02eC__05b4__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b4__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717524__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8675___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b22__05d)
                ? 0U : 0xefffU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b22__05d)
                                    ? 0U : 0xffffU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717519__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8671___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8672___05F)
                ? 1U : 0U) : 0U);
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b8__05d) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10345___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719232__DOT__s4 = 0x3faaU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719192__DOT__s4 = 0xa017U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719232__DOT__s4 = 0xaa3fU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719192__DOT__s4 = 0x5fe8U;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10348___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719194__DOT__s1) 
                     >> 1U));
    } else {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10345___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719232__DOT__s4 = 0x3f3fU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719192__DOT__s4 = 0xc0U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719232__DOT__s4 = 0xffaaU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719192__DOT__s4 = 0xff3fU;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10348___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719194__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719214__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b1__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10367___05F)
                ? 0x3faaU : 0xaa3fU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10367___05F)
                                         ? 0x3f3fU : 0xaaaaU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b3__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6071___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714917__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714964__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714964__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6071___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714917__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714964__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714964__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719218__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b1__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10367___05F)
                ? 0xa017U : 0x5fe8U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10367___05F)
                                         ? 0xc0U : 0xff3fU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719173__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10324___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10326___05F)
                ? 0xa500U : 0x5affU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10326___05F)
                                         ? 0x30cU : 0xfcf3U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10358___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719206__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719206__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719205__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b3__05d)
                ? 0xff17U : 0xffffU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719206__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719206__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719205__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b3__05d)
                ? 0x5fffU : 0xff3fU);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b5__05d) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10351___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719201__DOT__s4 = 0xfeffU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719198__DOT__s4 = 0xa017U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719201__DOT__s4 = 0x100U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719198__DOT__s4 = 0x5fe8U;
        }
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10351___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719201__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719198__DOT__s4 = 0xc0U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719201__DOT__s4 = 0xffffU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719198__DOT__s4 = 0xff3fU;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15705__02eC__05b6__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15705__02eS__05b5__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15705__02eC__05b5__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b5__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716588__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15705__02eS__05b13__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7741___05F)
                ? 0x8000U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716663__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7815___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7816___05F)
                ? 0x1000U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713846__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4996___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b22__05d)
                ? 0U : 0xbU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b22__05d)
                                 ? 0U : 0xfU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10264___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10189___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719115__DOT__s3 = 0x2bU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719111__DOT__s3 = 0x96U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719115__DOT__s3 = 0xbdU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719111__DOT__s3 = 0x69U;
        }
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10189___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719115__DOT__s3 = 0xbdU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719111__DOT__s3 = 0x69U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719115__DOT__s3 = 0xd4U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719111__DOT__s3 = 0x96U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719046__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10194___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10192___05F)
                ? 2U : 1U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10192___05F)
                               ? 1U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713904__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5035___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713904__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713904__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714582__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5382___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5735___05F)
                ? 0xeU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5735___05F)
                                 ? 0xfU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714582__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5035___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714582__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714582__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719051__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10203___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10204___05F)
                ? 1U : 0x57U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10204___05F)
                                  ? 0x15U : 0x7fU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719152__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10242___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10243___05F)
                ? 0xc0U : 0x3fU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10243___05F)
                                     ? 0xb7U : 0x48U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719072__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10216___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10225___05F)
                ? 0xef00U : 0x10ffU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10225___05F)
                                         ? 0x10ffU : 0xef00U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719055__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b7__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10208___05F)
                ? 0x78U : 0x87U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10208___05F)
                                     ? 0x88U : 0x77U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719084__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10234___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10232___05F)
                ? 0x4bb4U : 0xb44bU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10232___05F)
                                         ? 0xb44bU : 0x4bb4U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718999__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b16__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10152___05F)
                ? 0x78U : 0x87U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10152___05F)
                                     ? 0x88U : 0x77U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10239___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719094__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10247___05F)
                ? 0xefffU : 0x8aaaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719091__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10244___05F)
                ? 0x7888U : 0x8777U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719094__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10247___05F)
                ? 0x8aaaU : 0xefffU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719091__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10244___05F)
                ? 0x8777U : 0x7888U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719044__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b10__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10197___05F)
                ? 0x78U : 0x87U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10197___05F)
                                     ? 0x88U : 0x77U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0034) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714641__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714641__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714642__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714642__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714641__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714641__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714642__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714642__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15682__02eC__05b5__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15682__02eS__05b4__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15682__02eC__05b4__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b4__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15807__02eC__05b5__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15807__02eS__05b4__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15807__02eC__05b4__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b4__05d));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0029) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714656__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714656__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714638__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714638__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714656__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714656__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714638__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714638__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717040__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15739__02eS__05b11__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8193___05F)
                ? 9U : 0U) : 0U);
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b28__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714731__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714731__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716324__DOT__s1 = 0U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714731__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714731__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716324__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7459___05F)
                ? 1U : 0U);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0200) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712724__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712724__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712730__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712730__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712724__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712724__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712730__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712730__DOT__s2));
    }
    if ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx4_mul__02e____VhshiHk0hBnMBg5YmEz4uFPvtCA3Y2PVaOtAj79meNrc__DOT__z_out_reg 
                       >> 0x16U)))) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712726__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712726__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712727__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712727__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712726__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712726__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712727__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712727__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714716__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5868___05F)
            ? (((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b20__05d) 
                | (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b21__05d))
                ? 0U : 0x1000U) : 0U);
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0191) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712743__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712743__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712725__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712725__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712743__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712743__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712725__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712725__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718115__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9267___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9268___05F)
                ? 0x1000U : 0U) : 0U);
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b10__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719177__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719177__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719179__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719179__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719177__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719177__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719179__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719179__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719171__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b12__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719171__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719171__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714721__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5873___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5874___05F)
                ? 1U : 0U) : 0U);
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b13__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719532__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10685___05F)
                ? 0xefU : 0x10U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718864__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718864__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719532__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10685___05F)
                ? 0U : 0xffU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718864__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718864__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719573__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10647___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10642___05F)
                ? 0x4bbbU : 0xb444U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10642___05F)
                                         ? 0xb444U : 0x4bbbU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b33__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7279___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716125__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715631__DOT__s4 = 0U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7279___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716125__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715631__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6741___05F)
                ? 0xfbf0U : 0U);
    }
    if (vlSelf->__VdfgRegularize_hd87f99a1_0_96) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713615__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713615__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712838__DOT__s3 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712867__DOT__s4 = 0U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713615__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713615__DOT__s2) 
                     >> 2U));
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3991___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712838__DOT__s3 = 0x80U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712867__DOT__s4 = 0x8000U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712838__DOT__s3 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712867__DOT__s4 = 0U;
        }
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10670___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719522__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719522__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719521__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b9__05d)
                ? 0xff17U : 0xffffU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719522__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719522__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719521__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b9__05d)
                ? 0x5fffU : 0xff3fU);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b16__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715556__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715556__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714764__DOT__s4 = 0U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715556__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715556__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714764__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5893___05F)
                ? 0xbf0fU : 0U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719503__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b7__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10656___05F)
                ? 0xa017U : 0x5fe8U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10656___05F)
                                         ? 0xc0U : 0xff3fU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3982___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4015___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712861__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712831__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712831__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4015___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712861__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712831__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712831__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716665__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b14__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716665__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716665__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717963__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15807__02eS__05b15__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9116___05F)
                ? 0x9000U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718996__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b19__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718996__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718996__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716452__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15682__02eS__05b3__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7605___05F)
                ? 0x8000U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716445__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15682__02eS__05b1__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7598___05F)
                ? 0x8000U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717951__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15807__02eS__05b13__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9104___05F)
                ? 0x8000U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717958__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15807__02eS__05b1__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9111___05F)
                ? 0x8000U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718109__DOT__s4 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_1041)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3728___05F)
                     ? 1U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716457__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15682__02eS__05b6__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7610___05F)
                ? 0x9000U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719446__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b22__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719446__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719446__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b15__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719461__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719461__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718861__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718861__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719461__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719461__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718861__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718861__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b0__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719490__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719490__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718986__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10054___05F)
                ? 0x8777U : 0x7888U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719490__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719490__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718986__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10054___05F)
                ? 0xf000U : 0xfffU);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719504__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b5__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719504__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719504__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5897___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714778__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714778__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714769__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714769__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714772__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714772__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714745__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714745__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714778__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714778__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714769__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714769__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714772__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714772__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714745__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714745__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10503___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10499___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719349__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719349__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b1__05d) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10497___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719344__DOT__s3 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719351__DOT__s3 = 0x78U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719344__DOT__s3 = 0x78U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719351__DOT__s3 = 0x87U;
        }
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10497___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719344__DOT__s3 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719351__DOT__s3 = 0x88U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719344__DOT__s3 = 0x88U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719351__DOT__s3 = 0x77U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718950__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b16__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10103___05F)
                ? 7U : 8U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10103___05F)
                               ? 0U : 0xfU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718874__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b12__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10027___05F)
                ? 7U : 8U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10027___05F)
                               ? 0U : 0xfU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b7__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6876___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715722__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715691__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715691__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6876___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715722__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715691__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715691__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718892__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10044___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10045___05F)
                ? 7U : 8U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10045___05F)
                               ? 0U : 0xfU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718870__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b10__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718870__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718870__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718882__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10034___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10035___05F)
                ? 7U : 8U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10035___05F)
                               ? 0U : 0xfU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9857___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9858___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718810__DOT__s3 = 0x2bU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718705__DOT__s3 = 0xffU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718807__DOT__s3 = 0x96U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718810__DOT__s3 = 0xbfU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718705__DOT__s3 = 0xfdU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718807__DOT__s3 = 0x69U;
        }
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9858___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718810__DOT__s3 = 0xbfU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718705__DOT__s3 = 0xfdU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718807__DOT__s3 = 0x69U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718810__DOT__s3 = 0xffU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718705__DOT__s3 = 0xd4U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718807__DOT__s3 = 0x96U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718778__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9918___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718778__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718778__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718765__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9917___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9918___05F)
                ? 0x9c5fU : 0x63a0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9918___05F)
                                         ? 0x93a0U : 0x6c5fU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10506___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719352__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719352__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719443__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10500___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10596___05F)
                ? 6U : 9U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10596___05F)
                               ? 9U : 6U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719393__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10457___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10454___05F)
                ? 0x96U : 0x69U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10454___05F)
                                     ? 0x69U : 0x96U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718836__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9928___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9927___05F)
                ? 0x78U : 0x87U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9927___05F)
                                     ? 0x87U : 0x78U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10470___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10471___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719389__DOT__s3 = 0xffU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719318__DOT__s3 = 0x2bU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719389__DOT__s3 = 0xfdU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719318__DOT__s3 = 0xbfU;
        }
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10471___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719389__DOT__s3 = 0xfdU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719318__DOT__s3 = 0xbfU;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719389__DOT__s3 = 0xd4U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719318__DOT__s3 = 0xffU;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714594__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5267___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b14__05d)
                ? 0U : 0xbbU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b14__05d)
                                  ? 0U : 0xb0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719378__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10470___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10471___05F)
                ? 0x96U : 0x69U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10471___05F)
                                     ? 0x69U : 0x96U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718876__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b21__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718876__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718876__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718902__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10054___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10055___05F)
                ? 0x7888U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10055___05F)
                                    ? 0x8777U : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9560___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9650___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718500__DOT__s3 = 0x2bU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718497__DOT__s3 = 0x96U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718500__DOT__s3 = 0xbdU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718497__DOT__s3 = 0x69U;
        }
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9650___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718500__DOT__s3 = 0xbdU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718497__DOT__s3 = 0x69U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718500__DOT__s3 = 0xd4U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718497__DOT__s3 = 0x96U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718477__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9629___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9630___05F)
                ? 0x4bU : 0xb4U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9630___05F)
                                     ? 0xb4U : 0x4bU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718459__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9612___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718459__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718459__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718469__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9622___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9612___05F)
                ? 0xf880U : 0x77fU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9612___05F)
                                        ? 0x7ff8U : 0xc007U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9614___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718537__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9690___05F)
                ? 8U : 7U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9615___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718461__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718464__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b0__05d)
                ? 0x1777U : 0xffffU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718537__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9690___05F)
                ? 7U : 8U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9615___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718461__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718464__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b0__05d)
                ? 0x4dddU : 0x5fffU);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718441__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b7__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9594___05F)
                ? 0xb4U : 0x4bU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9594___05F)
                                     ? 0x44U : 0xbbU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718411__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b12__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9564___05F)
                ? 0x78U : 0x87U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9564___05F)
                                     ? 0x88U : 0x77U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718447__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b5__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9599___05F)
                ? 0x78U : 0x87U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9599___05F)
                                     ? 0x88U : 0x77U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718954__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b18__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10107___05F)
                ? 7U : 8U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10107___05F)
                               ? 0U : 0xfU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b42__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7202___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716048__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7285___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716131__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6750___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715596__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7202___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716048__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7285___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716131__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6750___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715596__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719450__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b19__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719450__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719450__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717047__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8199___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8200___05F)
                ? 0x8000U : 0U) : 0U);
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b34__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5473___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714319__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5441___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714287__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5473___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714319__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5441___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714287__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718768__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9921___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9920___05F)
                ? 0xffffU : 0x7fffU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9920___05F)
                                         ? 0x8000U : 0x777U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719324__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b5__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719324__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719324__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719359__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b2__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719359__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719359__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718471__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718471__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718471__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718556__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b19__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718556__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718556__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718562__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b17__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718562__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718562__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718568__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b15__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718568__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718568__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b20__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718550__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9701___05F)
                ? 0x8aefU : 0x20baU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718592__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9739___05F)
                ? 0x8aefU : 0x20baU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718550__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9701___05F)
                ? 0xefefU : 0xbabaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718592__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9739___05F)
                ? 0xefefU : 0xbabaU);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b27__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714615__DOT__s1 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719069__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719069__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714615__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5768___05F)
                ? 1U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719069__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719069__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b29__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713862__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713862__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719024__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719024__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1945_li1945 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714615__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713862__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713862__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719024__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719024__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1945_li1945 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714615__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718563__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b14__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718563__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718563__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15739__02eS__05b5__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8191___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717037__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15739__02eC__05b6__05d 
            = vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15739__02eC__05b5__05d;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8191___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717037__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15739__02eC__05b6__05d 
            = vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b5__05d;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718558__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b14__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9711___05F)
                ? 0x7777U : 0xf000U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9711___05F)
                                         ? 0x7777U : 0xffffU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718573__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b13__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718573__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718573__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718578__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b11__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718578__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718578__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b13__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719186__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10326___05F)
                ? 0x3faaU : 0xaa3fU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719173__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719173__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719186__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10326___05F)
                ? 0x3f3fU : 0xffaaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719173__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719173__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b3__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719223__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10358___05F)
                ? 0xa017U : 0x5fe8U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719206__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719206__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719223__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10358___05F)
                ? 0xc0U : 0xff3fU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719206__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719206__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718572__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b12__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718572__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718572__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718596__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9748___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9749___05F)
                ? 7U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9749___05F)
                               ? 8U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718576__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b10__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718576__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718576__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10233___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719081__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10234___05F)
                ? 0xe8eeU : 0x8e88U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719084__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719084__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719081__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10234___05F)
                ? 0x8e88U : 0xe8eeU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719084__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719084__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718607__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9760___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b2__05d)
                ? 0x770U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b2__05d)
                                   ? 0x8800U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718613__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b6__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718613__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718613__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718586__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b5__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9739___05F)
                ? 0x7777U : 0xf000U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9739___05F)
                                         ? 0x7777U : 0xffffU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718616__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9762___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b2__05d)
                ? 8U : 0xfU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b2__05d)
                                 ? 7U : 8U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719163__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b22__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719163__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719163__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719086__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10239___05F)
                ? 0U : 0x78U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719076__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10229___05F)
                ? 2U : 1U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719086__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10239___05F)
                ? 0U : 0x88U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719076__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10229___05F)
                ? 0U : 3U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10230___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b22__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719076__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719076__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716095__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6875___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716095__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716095__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717579__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eexp_r__05b1__05d)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8732___05F)
                     ? 1U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717675__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02efract_out_q__05b27__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717675__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717675__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717568__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eexp_r__05b5__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717568__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717568__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9291___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9376___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718222__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9327___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718173__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718185__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9310___05F)
                ? 8U : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9376___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718222__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9327___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718173__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718185__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9310___05F)
                ? 0xfU : 0U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718170__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9320___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718170__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718170__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718139__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eexp_r__05b7__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9292___05F)
                ? 4U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717772__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eexp_r__05b0__05d)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8925___05F)
                     ? 1U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717795__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8903___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8902___05F)
                     ? 0U : 1U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716707__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eexp_r__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716707__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716707__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eexp_r__05b7__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717123__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8273___05F)
                ? 0x40U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717120__DOT__s1 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717129__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717129__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717123__DOT__s3 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717120__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8273___05F)
                ? 0U : 1U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717129__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717129__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717087__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8236___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717087__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717087__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8272___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eexp_r__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717118__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717118__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718136__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9288___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9289___05F)
                ? 0x8000U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718142__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9295___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718142__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718142__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719494__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10642___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10647___05F)
                ? 0xb4U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10647___05F)
                                  ? 0x4bU : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b9__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719517__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10670___05F)
                ? 0xa017U : 0x5fe8U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719522__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719522__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719517__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10670___05F)
                ? 0xc0U : 0xff3fU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719522__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719522__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718152__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9304___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718152__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718152__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716733__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7854___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eexp_r__05b0__05d)
                ? 0U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eexp_r__05b0__05d)
                               ? 0U : 3U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717757__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02efract_out_q__05b2__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717757__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717757__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8257___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8256___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717103__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717103__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719098__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10233___05F)
                ? 0x5cU : 0xc5U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719091__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719091__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719081__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719081__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719098__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10233___05F)
                ? 0xffU : 0xccU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719091__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719091__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719081__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719081__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717117__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8243___05F)
            ? ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_709)
                ? 0U : 2U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717096__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8249___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02efract_out_q__05b14__05d)
                ? 0U : 0x100U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02efract_out_q__05b14__05d)
                                   ? 0U : 0xffffU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8890___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717755__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717755__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717737__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717737__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717755__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717755__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717737__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717737__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717754__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8904___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717754__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717754__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717743__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8894___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717743__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717743__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8915___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8914___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717761__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717761__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b2__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0164_li0164 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718675__DOT__s1) 
                     >> 1U));
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9762___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718615__DOT__s4 = 0xfffU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718609__DOT__s4 = 7U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718615__DOT__s4 = 0x8888U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718609__DOT__s4 = 0x7088U;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718109__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718109__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0164_li0164 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718675__DOT__s1));
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9762___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718615__DOT__s4 = 0xfffU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718609__DOT__s4 = 0x7000U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718615__DOT__s4 = 0xffffU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718609__DOT__s4 = 0x8fffU;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718109__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718109__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717796__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8896___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717796__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717796__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717076__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b29__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717076__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717076__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716310__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7458___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7463___05F)
                ? 6U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____Vcellinp____024abc__024712188__024auto_712330__A 
        = (((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3465___05F) 
            << 1U) | (1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_24))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719490__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10642___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719490__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719490__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3465___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713755__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713755__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719447__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b20__05d)
                ? 1U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718848__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718848__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719284__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719284__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719354__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719354__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719407__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719407__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713755__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713755__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719447__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b20__05d)
                ? 3U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718848__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718848__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719284__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719284__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719354__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719354__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719407__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719407__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b21__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718772__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9925___05F)
                ? 0x78U : 0x87U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9912___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718758__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719344__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719344__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719351__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719351__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718772__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9925___05F)
                ? 0x88U : 0x77U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9912___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718758__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719344__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719344__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719351__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719351__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714595__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b2__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714595__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714595__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718778__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b21__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718778__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718778__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6984___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b47__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715830__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715830__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3465___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718678__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718678__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718684__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718684__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718678__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718678__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718684__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718684__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7164___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b47__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716010__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716010__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b0__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5380___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714226__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5378___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714224__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5269___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714115__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5380___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714226__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5378___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714224__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5269___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714115__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714116__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b2__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5269___05F)
                ? 0xaU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5269___05F)
                                 ? 0xcU : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9924___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718775__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9928___05F)
                ? 0x7fU : 0x57U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718836__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718836__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718775__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9928___05F)
                ? 0x57U : 0xc0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718836__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718836__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b11__05d) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10623___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719471__DOT__s4 = 0x3faaU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719470__DOT__s4 = 0xa017U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719471__DOT__s4 = 0xaa3fU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719470__DOT__s4 = 0x5fe8U;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718876__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718876__DOT__s2) 
                     >> 2U));
    } else {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10623___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719471__DOT__s4 = 0x3f3fU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719470__DOT__s4 = 0xc0U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719471__DOT__s4 = 0xffaaU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719470__DOT__s4 = 0xff3fU;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718876__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718876__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b3__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719484__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10637___05F)
                ? 0xa017U : 0x5fe8U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719494__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719494__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718986__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718986__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719484__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10637___05F)
                ? 0xc0U : 0xff3fU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719494__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719494__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718986__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718986__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719358__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3465___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719358__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719358__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1979_li1979 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0082)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713840__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713840__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3465___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718779__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718779__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719337__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719337__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718744__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718744__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719332__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719332__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719333__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719333__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718751__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718751__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718752__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718752__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719324__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719324__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718779__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718779__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719337__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719337__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718744__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718744__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719332__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719332__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719333__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719333__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718751__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718751__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718752__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718752__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719324__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719324__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b0__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5186___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714032__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5474___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714320__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5186___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714032__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5474___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714320__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719359__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3465___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719359__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719359__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b18__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718553__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718553__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718548__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9701___05F)
                ? 0x7777U : 0xf000U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718464__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718464__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718553__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718553__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718548__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9701___05F)
                ? 0x7777U : 0xffffU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718464__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718464__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5397___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b38__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714243__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714243__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6743___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b28__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715589__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715589__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b38__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5279___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714125__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714284__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714284__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5279___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714125__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714284__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714284__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9625___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b18__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718471__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718471__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718542__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b22__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718542__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718542__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718642__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b21__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718642__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718642__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9796___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b22__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718642__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718642__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2057_li2057 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0136)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713725__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713725__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b21__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718459__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718459__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718441__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718441__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718411__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718411__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718447__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718447__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718459__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718459__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718441__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718441__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718411__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718411__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718447__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718447__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4806___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0143)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713652__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713652__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718550__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b21__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718550__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718550__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b0__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9754___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718600__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718601__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9754___05F)
                ? 0xd515U : 0x7f40U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9754___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718600__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718601__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9754___05F)
                ? 0xff00U : 0x5555U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718584__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b9__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718584__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718584__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b33__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6433___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715279__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5908___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714754__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5939___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714785__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6433___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715279__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5908___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714754__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5939___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714785__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718587__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b8__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718587__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718587__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9741___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b9__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718587__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718587__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1729_li1729 
        = ((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_24)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3465___05F));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718592__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b8__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718592__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718592__DOT__s4)));
    if (vlSelf->__VdfgRegularize_hd87f99a1_0_1042) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718591__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718591__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718548__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718548__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718558__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718558__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718596__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718596__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718586__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718586__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718616__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718616__DOT__s2));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718591__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718591__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718548__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718548__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718558__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718558__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718596__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718596__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718586__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718586__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718616__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718616__DOT__s2) 
                     >> 2U));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716710__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7863___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716710__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716710__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716687__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7837___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716687__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716687__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7856___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716719__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716719__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716704__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7857___05F)
                ? 0x8000U : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716719__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716719__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716704__DOT__s4 = 0U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718149__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9302___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718149__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718149__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718144__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9297___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718144__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718144__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eexp_r__05b7__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717767__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8920___05F)
                ? 4U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8926___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717772__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717767__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8920___05F)
                ? 0U : 1U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8926___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717772__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716311__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7461___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716311__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716311__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717566__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8692___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717566__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717566__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8245___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8238___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717091__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717091__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715309__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b43__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715309__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715309__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717100__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8238___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717100__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717100__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717555__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8708___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717555__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717555__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716671__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b24__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7824___05F)
                ? 2U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713742__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b26__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4895___05F)
                ? 1U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4895___05F)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____Vcellinp____024abc__024712188__024auto_712483__A 
        = (((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3583___05F) 
            << 1U) | (1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_1043))));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8900___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717747__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8890___05F)
                ? 2U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717755__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717755__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717747__DOT__s1 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717755__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717755__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716098__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b39__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716098__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716098__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717751__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8893___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717751__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717751__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715906__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b39__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715906__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715906__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717743__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8893___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717743__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717743__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b26__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716308__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7461___05F)
                ? 2U : 1U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716310__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716310__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716308__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7461___05F)
                ? 1U : 2U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716310__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716310__DOT__s2));
    }
    if (vlSelf->__VdfgRegularize_hd87f99a1_0_24) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718759__DOT__s4 = 0xffc8U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712334__DOT__s3 = 0xffU;
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3465___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718759__DOT__s4 = 0x888U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712334__DOT__s3 = 0xefU;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718759__DOT__s4 = 0xffc8U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712334__DOT__s3 = 0xffU;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716187__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b39__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716187__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716187__DOT__s2)));
    if (vlSelf->__VdfgRegularize_hd87f99a1_0_24) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712313__DOT__s3 = 0xefU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10601___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719447__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718848__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718848__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10438___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719284__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10508___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719354__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10561___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719407__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9832___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718678__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9838___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718684__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719358__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719358__DOT__s2));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712313__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3465___05F)
                ? 0U : 0xefU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10601___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719447__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718848__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718848__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10438___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719284__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10508___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719354__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10561___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719407__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9832___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718678__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9838___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718684__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719358__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719358__DOT__s2) 
                     >> 2U));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7002___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715928__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7045___05F)
                ? 0U : 7U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716153__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716153__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715889__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715889__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715928__DOT__s2 = 7U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716153__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716153__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715889__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715889__DOT__s2));
    }
    if (vlSelf->__VdfgRegularize_hd87f99a1_0_24) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9933___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718779__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10491___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719337__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718744__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718744__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10486___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719332__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10487___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719333__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9905___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718751__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9906___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718752__DOT__s1));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9933___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718779__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10491___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719337__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718744__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718744__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10486___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719332__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10487___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719333__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9905___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718751__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9906___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718752__DOT__s1) 
                     >> 1U));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1266_li1266 
        = ((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_1043)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3583___05F));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8702___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8701___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717548__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717548__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8700___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8696___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717546__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717546__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715558__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b20__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715558__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715558__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717560__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02efract_out_q__05b7__05d)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8695___05F)
                     ? 0xeU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717109__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02efract_out_q__05b15__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717109__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717109__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717556__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02efract_out_q__05b19__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717556__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717556__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717558__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02efract_out_q__05b17__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717558__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717558__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713619__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b32__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4772___05F)
                ? 0x55U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4772___05F)
                                  ? 0x3fU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716729__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7846___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716729__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716729__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718147__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9285___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718147__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718147__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712845__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b11__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712845__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712845__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718140__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9285___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718140__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718140__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717529__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b29__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717529__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717529__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3789___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712639__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712639__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712637__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3790___05F)
                ? 0xfffeU : 0xffffU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712639__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712639__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712637__DOT__s4 = 0xffffU;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717108__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8260___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8261___05F)
                     ? 0xfe00U : 0xffffU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717111__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8251___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8252___05F)
                ? 0xdfU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8252___05F)
                                  ? 0xfU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713737__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4890___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713737__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713737__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712656__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3798___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712656__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712656__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716742__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7852___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716742__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716742__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b35__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3980___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712826__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3978___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712824__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3980___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712826__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3978___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712824__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b33__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4336___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713182__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713605__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4265___05F)
                ? 0xeU : 0xfU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4336___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713182__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713605__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4265___05F)
                ? 0xeU : 0U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7847___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02efract_out_q__05b18__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716693__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716693__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02efract_out_q__05b26__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716690__DOT__s1 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716714__DOT__s4 = 0xffU;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716690__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7843___05F)
                ? 0U : 1U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716714__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7867___05F)
                ? 0xffU : 0xb0U);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5101___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5112___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713958__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5129___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713975__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714145__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5201___05F)
                ? 0U : 0x7fU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5112___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713958__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5129___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713975__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714145__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5201___05F)
                ? 0U : 0xffU);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713950__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5103___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu4__02eop_mul)
                ? 0xbfU : 0U) : 0xbfU);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712436__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3575___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712436__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712436__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3686___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713637__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4790___05F)
                ? 0x14U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712546__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3687___05F)
                ? 0U : 0xc5acU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713637__DOT__s3 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712546__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3687___05F)
                ? 0U : 0x3af3U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713634__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b23__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713634__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713634__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____Vcellinp____024abc__024712188__024auto_712482__A 
        = ((2U & ((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_1042)) 
                  << 1U)) | (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3581___05F));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3581___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9766___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718612__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718597__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718597__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712712__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712712__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712440__DOT__s2 
            = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_1042)
                ? 0xfU : 7U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9766___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718612__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718597__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718597__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712712__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712712__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712440__DOT__s2 = 0xfU;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5911___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b40__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714757__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714757__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3581___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712443__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712443__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712430__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712430__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9745___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718591__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1264_li1264 
            = (1U & (~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_1042)));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712443__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712443__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712430__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712430__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9745___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718591__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1264_li1264 = 0U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712419__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b29__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3572___05F)
                ? 2U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3572___05F)
                               ? 1U : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7840___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716716__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716716__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716704__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716704__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716716__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716716__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716704__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716704__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713641__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4787___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b26__05d)
                ? 2U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b26__05d)
                               ? 3U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718123__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b28__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9276___05F)
                ? 2U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712190__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b29__05d)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3343___05F)
                     ? 1U : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3471___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712324__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712324__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712332__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3470___05F)
                ? 0xa220U : 0xaaaaU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712324__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712324__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712332__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3470___05F)
                ? 0xa2a2U : 0xaaaaU);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712520__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3672___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3673___05F)
                ? 0x8aefU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3673___05F)
                                    ? 0x8aeU : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3675___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712536__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3676___05F)
                ? 0xcaU : 0x35U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712529__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712529__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712539__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712539__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712524__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3677___05F)
                ? 1U : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712536__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3676___05F)
                ? 0xccU : 0x33U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712529__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712529__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712539__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712539__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712524__DOT__s1 = 0U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712192__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b23__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712192__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712192__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715625__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6777___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6778___05F)
                ? 0x4545U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6778___05F)
                                    ? 0x45cfU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716070__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7223___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6875___05F)
                ? 0xbfU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6875___05F)
                                  ? 0xbfbfU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716206__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6758___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02einf_mul2)
                ? 0x3fU : 0xc5U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02einf_mul2)
                                     ? 0xf3U : 0x5dU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b3__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713187__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4340___05F)
                ? 0xb0ffU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713066__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713066__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713596__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4267___05F)
                ? 0U : 0xfeffU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4103___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712949__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713187__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4340___05F)
                ? 0xffb0U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713066__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713066__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713596__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4267___05F)
                ? 0U : 0xffffU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4103___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712949__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716199__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6758___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b6__05d)
                ? 0xfcffU : 0x300U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b6__05d)
                                        ? 0xef8cU : 0x1073U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715605__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02einf_mul2)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6758___05F)
                     ? 0U : 1U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715603__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6756___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02einf_mul2)
                ? 0x3000U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02einf_mul2)
                                    ? 0xc555U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712198__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3351___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b30__05d)
                ? 1U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b30__05d)
                               ? 3U : 1U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714143__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5296___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714143__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714143__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714327__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5480___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714327__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714327__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714600__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b7__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5185___05F)
                ? 0xfU : 7U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5185___05F)
                                 ? 0U : 7U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714589__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b6__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5205___05F)
                ? 0xffffU : 0xaaaaU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5205___05F)
                                         ? 0xffa8U : 0xaa8aU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714589__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b7__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714589__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714589__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714044__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5197___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu4__02eop_mul)
                ? 0x40U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714575__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5436___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5063___05F)
                ? 3U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5063___05F)
                               ? 0x54U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713946__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5090___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713946__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713946__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6423___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b2__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715269__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715269__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713064__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4217___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4191___05F)
                     ? 0xc0ccU : 0xf0aaU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715312__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b2__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715312__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715312__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4217___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713216__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713110__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713099__DOT__s4 = 0U;
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4191___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713216__DOT__s4 = 0xc0f0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713110__DOT__s4 = 0x30fU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713099__DOT__s4 = 0x333U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713216__DOT__s4 = 0xccaaU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713110__DOT__s4 = 0x3355U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713099__DOT__s4 = 0xf55U;
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3966___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712907__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712907__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712909__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu4__02eop_mul)
                ? 0xaaaaU : 0x2222U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712907__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712907__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712909__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu4__02eop_mul)
                ? 0xaaafU : 0x2223U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714563__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5030___05F)
            ? 0xf0fU : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5711___05F)
                         ? 0xf04U : 0xf0fU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716127__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6753___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716127__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716127__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715868__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7021___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715868__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715868__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b0__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716158__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7045___05F)
                ? 0xcc0cU : 0xff0fU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716012__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7165___05F)
                ? 0xcccU : 0xfffU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716158__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7045___05F)
                ? 0xaa0aU : 0xff0fU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716012__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7165___05F)
                ? 0xaaaU : 0xfffU);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716012__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7021___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716012__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716012__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8695___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717550__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8692___05F)
                ? 8U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717566__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717566__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717556__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717556__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717550__DOT__s2 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717566__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717566__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717556__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717556__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7845___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7850___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716696__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7883___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716729__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7850___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716696__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7883___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716729__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715723__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6876___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6813___05F)
                ? 0x41U : 0U) : 0U);
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02efract_out_q__05b20__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718184__DOT__s3 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718155__DOT__s1 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718146__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9299___05F)
                ? 0U : 0x1515U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718147__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718147__DOT__s2) 
                     >> 2U));
    } else {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9285___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718184__DOT__s3 = 0xbU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718155__DOT__s1 = 1U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718184__DOT__s3 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718155__DOT__s1 = 0U;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718146__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9299___05F)
                ? 0U : 0x153fU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718147__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718147__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715841__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6813___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6876___05F)
                ? 0x4bU : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714610__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu2__02eexp_out__05b7__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5763___05F)
                ? 0x80U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714290__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5203___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5443___05F)
                ? 0U : 0xbfU) : 0xbfU);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712666__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b30__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3800___05F)
                ? 0xcf00U : 0x5500U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3800___05F)
                                         ? 0xffcfU : 0xff55U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717533__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b27__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717533__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717533__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0649_li0649 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b30__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717533__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717533__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5203___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714398__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5184___05F)
                ? 0U : 7U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714052__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714052__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714398__DOT__s2 = 7U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714052__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714052__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5272___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b1__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714118__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714118__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714220__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5195___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5186___05F)
                     ? 0U : 0x153fU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5502___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b37__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714348__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714348__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714349__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5502___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5320___05F)
                     ? 0x5533U : 0xf0f0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5194___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b46__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714040__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714040__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5194___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714205__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5269___05F)
                ? 0U : 0x777U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714246__DOT__s4 = 0xb0bbU;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714205__DOT__s4 = 0x777U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714246__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5378___05F)
                ? 0U : 0xb0bbU);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b26__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712655__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712655__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712645__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3798___05F)
                ? 3U : 1U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712656__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712656__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712655__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712655__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712645__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3798___05F)
                ? 1U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712656__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712656__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714574__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5474___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714574__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714574__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712641__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b27__05d)
            ? 0xefefU : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3790___05F)
                          ? 0xef00U : 0xefefU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3797___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b30__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712643__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712643__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717926__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b27__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3797___05F)
                ? 0xbfbfU : 0xbf00U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3797___05F)
                                         ? 0U : 0xbf00U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b30__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0650_li0650 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717529__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712666__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712666__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0650_li0650 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717529__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712666__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712666__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714330__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b3__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5474___05F)
                ? 0U : 0xcfU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5474___05F)
                                  ? 0x8aU : 0xcfU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b0__05d) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5267___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714147__DOT__s4 = 0x5505U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714351__DOT__s4 = 0xaa0aU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714332__DOT__s4 = 0xcc0cU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714147__DOT__s4 = 0xff0fU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714351__DOT__s4 = 0xff0fU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714332__DOT__s4 = 0xff0fU;
        }
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5267___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714147__DOT__s4 = 0x3303U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714351__DOT__s4 = 0xcc0cU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714332__DOT__s4 = 0xaa0aU;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714147__DOT__s4 = 0xff0fU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714351__DOT__s4 = 0xff0fU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714332__DOT__s4 = 0xff0fU;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5485___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b44__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714331__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714331__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714332__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5485___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714332__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714332__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714596__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b5__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714596__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714596__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b30__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712422__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3575___05F)
                ? 3U : 1U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712436__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712436__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712422__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3575___05F)
                ? 1U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712436__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712436__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b30__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716674__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716674__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3576___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712422__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716674__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716674__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3576___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712422__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5184___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714183__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714183__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714165__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714165__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714183__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714183__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714165__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714165__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714247__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b31__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714247__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714247__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714249__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b30__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714249__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714249__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3583___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713744__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b24__05d)
                ? 0xffc0U : 0xaa80U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718859__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718859__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718945__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718945__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718850__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718850__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718843__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b19__05d)
                ? 1U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718928__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718928__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718868__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718868__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718894__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718894__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718919__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718919__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718872__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718872__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718920__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718920__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718913__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b2__05d)
                ? 1U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718915__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718915__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718899__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718899__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718904__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718904__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718905__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718905__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718907__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718907__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718908__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718908__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718950__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718950__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718874__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718874__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718892__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718892__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718882__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718882__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718902__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718902__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718954__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718954__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713755__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713755__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712712__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712712__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712440__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712440__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712443__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712443__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712430__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712430__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713744__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b24__05d)
                ? 0xc0c0U : 0x8080U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718859__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718859__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718945__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718945__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718850__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718850__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718843__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b19__05d)
                ? 3U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718928__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718928__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718868__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718868__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718894__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718894__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718919__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718919__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718872__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718872__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718920__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718920__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718913__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b2__05d)
                ? 3U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718915__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718915__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718899__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718899__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718904__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718904__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718905__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718905__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718907__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718907__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718908__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718908__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718950__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718950__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718874__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718874__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718892__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718892__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718882__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718882__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718902__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718902__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718954__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718954__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713755__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713755__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712712__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712712__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712440__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712440__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712443__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712443__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712430__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712430__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713735__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu2__02eexp_out__05b7__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4888___05F)
                ? 0x80U : 0U) : 0U);
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7116___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715962__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6872___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715718__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7116___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715962__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6872___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715718__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715863__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b36__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6872___05F)
                ? 0U : 0x777U) : 0x777U);
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6868___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715714__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716072__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716072__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6868___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715714__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716072__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716072__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716072__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b36__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716072__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716072__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715928__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7044___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715928__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715928__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b39__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6366___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715212__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714790__DOT__s4 = 0xffU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714892__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714892__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6366___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715212__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714790__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5943___05F)
                ? 0xb0U : 0xffU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714892__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714892__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7044___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715892__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715892__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715961__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715961__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716190__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716190__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715892__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715892__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715961__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715961__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716190__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716190__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6869___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b6__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715715__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715715__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716085__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b0__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7165___05F)
                ? 0xccc0U : 0xfff0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7165___05F)
                                         ? 0xaaa0U : 0xfff0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716031__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7018___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6869___05F)
                     ? 0xf0aaU : 0xc0ccU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716186__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6812___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6869___05F)
                ? 1U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716049__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7202___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6937___05F)
                     ? 0xfff0U : 0xeeeeU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7280___05F 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7279___05F)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7059___05F));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715831__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6984___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715831__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715831__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b26__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712534__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3675___05F)
                ? 0x305fU : 0x3030U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713634__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713634__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4795___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713641__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712534__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3675___05F)
                ? 0xf305U : 0xf3f3U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713634__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713634__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4795___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713641__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716124__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6984___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716124__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716124__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b30__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712319__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3472___05F)
                ? 3U : 1U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712195__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3348___05F)
                ? 2U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0330_li0330 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718123__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3344___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712190__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712319__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3472___05F)
                ? 1U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712195__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3348___05F)
                ? 1U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0330_li0330 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718123__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3344___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712190__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715600__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b6__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715600__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715600__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6936___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b3__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715782__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715782__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716145__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b5__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6936___05F)
                ? 0U : 0x5fffU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6936___05F)
                                    ? 0U : 0xfcfU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715605__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b7__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715605__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715605__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713871__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5024___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713871__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713871__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713898__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5050___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713898__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713898__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713631__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu2__02eexp_out__05b7__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4784___05F)
                ? 0x80U : 0U) : 0U);
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5188___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714039__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5192___05F)
                ? 0U : 0xffccU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714204__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5201___05F)
                ? 0U : 0xccaaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714350__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5275___05F)
                ? 0U : 0xf55U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714039__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5192___05F)
                ? 0U : 0xf0aaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714204__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5201___05F)
                ? 0U : 0xfff0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714350__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5275___05F)
                ? 0U : 0xff33U);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b0__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714036__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714036__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714048__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5201___05F)
                ? 0U : 0xafU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714036__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714036__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714048__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5201___05F)
                ? 0U : 0xcfU);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714048__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5188___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714048__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714048__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714571__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5379___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714571__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714571__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5725___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5267___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714571__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714571__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714375__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b0__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5379___05F)
                ? 3U : 0xfU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5379___05F)
                                 ? 0x33U : 0x55U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5382___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714244__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714586__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5057___05F)
                ? 0xbf00U : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714244__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5379___05F)
                ? 0xc0f0U : 0xccaaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714586__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5057___05F)
                ? 0xbfbfU : 0U);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714598__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5751___05F)
                ? 0x73U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714347__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5269___05F)
                ? 0x555U : 0xfffU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714145__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714145__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714595__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714595__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714598__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5751___05F)
                ? 3U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714347__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5269___05F)
                ? 0x333U : 0xfffU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714145__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714145__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714595__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714595__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713136__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4184___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4289___05F)
                ? 0U : 0xbf00U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4289___05F)
                                    ? 0U : 0xbfbfU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b34__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713136__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713136__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713617__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713617__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713136__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713136__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713617__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713617__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b33__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5045___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713891__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714580__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714580__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714285__DOT__s4 = 0xefffU;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5045___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713891__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714580__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714580__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714285__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5185___05F)
                ? 0U : 0xefffU);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714285__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b2__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714285__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714285__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_ovf_r__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714086__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5197___05F)
                ? 0xe000U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5189___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714035__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714086__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5189___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714035__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6042___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715386__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715293__DOT__s4 = 0U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715386__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6039___05F)
                ? 0xfU : 0xddU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715293__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5893___05F)
                ? 0x1ffU : 0U);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu4__02eop_mul) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713963__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5103___05F)
                ? 0U : 0xbfffU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713988__DOT__s4 = 0x3333U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714124__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5197___05F)
                ? 8U : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713963__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713988__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5088___05F)
                ? 0x3233U : 0x300U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714124__DOT__s2 = 0U;
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_ovf_r__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714124__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714124__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714044__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714044__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714124__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714124__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714044__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714044__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5275___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714250__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714575__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714575__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714250__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5188___05F)
                ? 0xf0fU : 0x5533U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714575__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714575__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b6__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5091___05F 
            = (1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5090___05F)));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713946__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713946__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5091___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5090___05F));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713946__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713946__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713583__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b42__05d)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4265___05F)
                     ? 7U : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4265___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713584__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713112__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713112__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713584__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4191___05F)
                ? 3U : 5U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713112__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713112__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b30__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718120__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718120__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3352___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712198__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3349___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712195__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718120__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718120__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3352___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712198__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3349___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712195__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4181___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713242__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4107___05F)
                ? 0xf0ffU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713619__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713619__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713242__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4107___05F)
                ? 0x88ffU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713619__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713619__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b2__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713594__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713594__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713439__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713439__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712919__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712919__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712916__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712916__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4050___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712896__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713105__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713105__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713187__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713187__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713066__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713066__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713594__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713594__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713439__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713439__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712919__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712919__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712916__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712916__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4050___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712896__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713105__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713105__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713187__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713187__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713066__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713066__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712941__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b7__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712941__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712941__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4095___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b2__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712941__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712941__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu4__02eop_mul) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714086__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714086__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4073___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712919__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4070___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712916__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714086__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714086__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4073___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712919__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4070___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712916__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5059___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b37__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713905__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713905__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716171__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b41__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7045___05F)
                ? 0xbU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7045___05F)
                                 ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716171__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7184___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716171__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716171__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b0__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715949__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715949__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715966__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715966__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716067__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716067__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716088__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716088__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715949__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715949__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715966__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715966__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716067__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716067__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716088__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716088__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716088__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7184___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716088__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716088__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715887__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b45__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715887__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715887__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715887__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b44__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715887__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715887__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716174__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b0__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716174__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716174__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b44__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716174__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716174__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715868__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715868__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716174__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716174__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715868__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715868__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b0__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4296___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713142__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713058__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4211___05F)
                ? 0xf0fU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4216___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713062__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4296___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713142__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713058__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4211___05F)
                ? 0x5533U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4216___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713062__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713597__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3971___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4216___05F)
                ? 0xd7U : 0U) : 0U);
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b43__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7058___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715904__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715926__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715926__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7058___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715904__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715926__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715926__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7080___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b42__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715926__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715926__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b6__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715652__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6758___05F)
                ? 0x7555U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715691__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715691__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716206__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716206__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715723__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715723__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715841__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715841__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715652__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6758___05F)
                ? 0U : 0x7555U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715691__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715691__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716206__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716206__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715723__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715723__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715841__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715841__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714290__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5382___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714290__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714290__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5111___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714362__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5378___05F)
                ? 3U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714141__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5269___05F)
                ? 0x3355U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713959__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5112___05F)
                ? 0x200U : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714362__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5378___05F)
                ? 5U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714141__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5269___05F)
                ? 0xfU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713959__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5112___05F)
                ? 0xfeffU : 0U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714219__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b0__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5269___05F)
                ? 0xcfU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5269___05F)
                                  ? 0xafU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714219__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5111___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714219__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714219__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714259__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5272___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b43__05d)
                ? 0U : 0x777U) : 0x777U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714259__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b38__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714259__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714259__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714577__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5272___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5186___05F)
                ? 0U : 0xef00U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5186___05F)
                                    ? 0U : 0xefefU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714577__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b34__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714577__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714577__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714036__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b46__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714036__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714036__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5185___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714119__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b41__05d)
                ? 0U : 7U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714033__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5186___05F)
                ? 0U : 0x7fU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714119__DOT__s2 = 7U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714033__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5186___05F)
                ? 0U : 0x7f7fU);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714033__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b46__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714033__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714033__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b0__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714360__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5184___05F)
                ? 0xcc0cU : 0xff0fU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714126__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5188___05F)
                ? 0xcc0cU : 0xff0fU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713967__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5112___05F)
                ? 0x100U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714598__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714598__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714244__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714244__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714360__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5184___05F)
                ? 0xaa0aU : 0xff0fU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714126__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5188___05F)
                ? 0xaa0aU : 0xff0fU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713967__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5112___05F)
                ? 0xfdffU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714598__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714598__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714244__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714244__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714288__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5379___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5195___05F)
                ? 0xf0f0U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5195___05F)
                                    ? 0xaaccU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714288__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b0__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714288__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714288__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714227__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5379___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5380___05F)
                ? 0x30fU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5380___05F)
                                   ? 0x3355U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714227__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b0__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714227__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714227__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714363__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5379___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5380___05F)
                ? 0x333U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5380___05F)
                                   ? 0xf55U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714363__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b0__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714363__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714363__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714316__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5379___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5380___05F)
                ? 0xc0f0U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5380___05F)
                                    ? 0xccaaU : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b0__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714316__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714316__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714349__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714349__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714316__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714316__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714349__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714349__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714321__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5336___05F)
            ? 0xb0bbU : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5443___05F)
                          ? 0U : 0xb0bbU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b37__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714327__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714327__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714574__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714574__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714327__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714327__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714574__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714574__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4114___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712960__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712960__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713589__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4742___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4114___05F)
                ? 0xbbU : 0xffU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4114___05F)
                                     ? 0xbU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714330__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5379___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714330__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714330__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714351__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b47__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714351__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714351__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714351__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5379___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714351__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714351__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713032__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4183___05F)
            ? 0xb0bbU : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4114___05F)
                          ? 0U : 0xb0bbU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4044___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712890__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712890__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b6__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713468__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4044___05F)
                ? 0x3cU : 0xf5U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4045___05F 
            = (1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4044___05F)));
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4044___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713468__DOT__s3 = 0xf5U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4045___05F = 1U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713468__DOT__s3 = 0x39U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4045___05F = 0U;
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5185___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714580__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714580__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714143__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714143__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714398__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714398__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714580__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714580__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714143__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714143__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714398__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714398__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b44__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714167__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5185___05F)
                ? 0U : 0x7fU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714572__DOT__s1 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714375__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714375__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714052__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714052__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714167__DOT__s3 = 0x7fU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714572__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5474___05F)
                ? 1U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714375__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714375__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714052__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714052__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b47__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714479__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5129___05F)
                ? 0xefU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713961__DOT__s4 = 0U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714479__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5129___05F)
                ? 0xffU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713961__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5091___05F)
                ? 0U : 0x40ffU);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714085__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5238___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714085__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714085__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5239___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b47__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714085__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714085__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714183__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5336___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714183__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714183__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5238___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714362__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714362__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714165__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714165__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714362__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714362__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714165__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714165__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b33__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714325__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5184___05F)
                ? 0xfU : 0xbU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714359__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714359__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714247__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714247__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714325__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5184___05F)
                ? 0U : 0xbU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714359__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714359__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714247__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714247__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5272___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714594__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714594__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714119__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714119__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714321__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714321__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714347__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714347__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714220__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714220__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714246__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714246__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714284__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714284__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714594__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714594__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714119__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714119__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714321__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714321__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714347__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714347__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714220__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714220__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714246__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714246__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714284__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714284__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712900__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b6__05d)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4044___05F)
                     ? 0U : 1U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713379__DOT__s3 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_1038)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4532___05F)
                     ? 0xfeU : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4267___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713603__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713603__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713115__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4110___05F)
                ? 7U : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713603__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713603__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713115__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4110___05F)
                ? 0x77U : 0U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716089__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b45__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716089__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716089__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716089__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b46__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716089__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716089__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7243___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b47__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716089__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716089__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716095__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b45__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716095__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716095__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7249___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b46__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716095__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716095__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6981___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716135__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716135__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716029__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716029__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715863__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715863__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716135__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716135__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716029__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716029__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715863__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715863__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b41__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716067__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716067__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715892__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715892__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716067__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716067__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715892__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715892__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713620__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4268___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713620__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713620__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713620__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4267___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713620__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713620__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715886__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6867___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715886__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715886__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715816__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6872___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715816__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715816__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715816__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6867___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715816__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715816__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716064__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6872___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716064__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716064__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716064__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6867___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716064__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716064__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716158__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b26__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716158__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716158__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716158__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6867___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716158__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716158__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6869___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715849__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6868___05F)
                ? 0xaaU : 0xffU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716185__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716185__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716170__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6872___05F)
                ? 0xf0f0U : 0xffccU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716143__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b24__05d)
                ? 0xa3U : 0xfcU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715849__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6868___05F)
                ? 0xf0U : 0xccU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716185__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716185__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716170__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6872___05F)
                ? 0xf0f0U : 0xffaaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716143__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b24__05d)
                ? 0xaaU : 0xffU);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715829__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6868___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6872___05F)
                     ? 0U : 0x3f15U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3977___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b40__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712823__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712823__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715829__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6869___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715829__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715829__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715909__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6868___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6730___05F)
                ? 0xccU : 0xaU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6730___05F)
                                    ? 0xffU : 0xfU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715909__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6869___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715909__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715909__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6868___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716134__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6795___05F)
                ? 0xaU : 0xfU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716147__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b0__05d)
                ? 0x3f15U : 0xffU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716134__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6795___05F)
                ? 3U : 8U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716147__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b0__05d)
                ? 0x3f3fU : 0xffffU);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716147__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b28__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716147__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716147__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715849__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7002___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715849__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715849__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713171__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b28__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713171__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713171__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6936___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715815__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715885__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715866__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716130__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716136__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b24__05d)
                ? 0x30U : 0x33U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716134__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716134__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716031__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716031__DOT__s4) 
                        >> 8U));
    } else {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6868___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715815__DOT__s4 = 0x30fU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715885__DOT__s4 = 0xf0fU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715866__DOT__s4 = 0xf0U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715815__DOT__s4 = 0x3355U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715885__DOT__s4 = 0x5533U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715866__DOT__s4 = 0xeeU;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716130__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6869___05F)
                ? 5U : 3U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716136__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b24__05d)
                ? 0x33U : 0x31U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716134__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716134__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716031__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716031__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713873__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5026___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713873__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713873__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6871___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715719__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716170__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716170__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715719__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6872___05F)
                ? 0x3303U : 0x550fU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716170__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716170__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b3__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716153__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716153__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716143__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716143__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716153__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716153__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716143__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716143__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715716__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b4__05d)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6869___05F)
                     ? 1U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715716__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b3__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715716__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715716__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713924__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5062___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713924__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713924__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b0__05d) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6868___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716188__DOT__s4 = 0x550fU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716086__DOT__s4 = 0x5533U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716157__DOT__s4 = 0x3355U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715950__DOT__s4 = 0xf55U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716188__DOT__s4 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716086__DOT__s4 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716157__DOT__s4 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715950__DOT__s4 = 0U;
        }
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6868___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716188__DOT__s4 = 0x3303U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716086__DOT__s4 = 0xf0fU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716157__DOT__s4 = 0xf0fU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715950__DOT__s4 = 0x330fU;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716188__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716086__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716157__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715950__DOT__s4 = 0U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713183__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4336___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4107___05F)
                ? 0xf55fU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4107___05F)
                                    ? 0x330U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715968__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b1__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6868___05F)
                ? 0x3355U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6868___05F)
                                    ? 0xf0fU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715968__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b0__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715968__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715968__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715925__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b1__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6868___05F)
                ? 0xf0aaU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6868___05F)
                                    ? 0xccf0U : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b0__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715925__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715925__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715952__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715952__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715925__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715925__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715952__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715952__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b43__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716183__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716174__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7041___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715887__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6985___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715831__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7278___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716124__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716183__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716174__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7041___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715887__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6985___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715831__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7278___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716124__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b45__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715966__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715966__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7082___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715928__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7183___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716029__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715966__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715966__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7082___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715928__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7183___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716029__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716012__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6868___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716012__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716012__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b38__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716133__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7286___05F)
                ? 0xf0fU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7252___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716098__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7238___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716084__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716127__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716127__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716190__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716190__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716133__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7286___05F)
                ? 0xfdfU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7252___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716098__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7238___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716084__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716127__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716127__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716190__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716190__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6937___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715994__DOT__s4 = 0xff0fU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716085__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716085__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715994__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6869___05F)
                ? 0xcc0cU : 0xaa0aU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716085__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716085__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716085__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b26__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716085__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716085__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715886__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6872___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715886__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715886__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715866__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6875___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715866__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715866__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716130__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6937___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716130__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716130__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714829__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5956___05F)
            ? 0x3133U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5960___05F)
                          ? 0x100U : 0x3133U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716188__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716188__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716086__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716086__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716157__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716157__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715950__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715950__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7043___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715889__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716145__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716145__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716188__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716188__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716086__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716086__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716157__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716157__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715950__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715950__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7043___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715889__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716145__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716145__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716133__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b39__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716133__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716133__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b4__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715600__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715600__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7103___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715949__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716186__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716186__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715691__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715691__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715600__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715600__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7103___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715949__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716186__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716186__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715691__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715691__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714985__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5956___05F)
            ? 0xdfU : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5960___05F)
                        ? 0x10U : 0xdfU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712885__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b14__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712885__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712885__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713784__DOT__s1 
        = (3U & ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx2_mul__02e____VhshRrFaYytnw6nIQuniAWQqJkW5QVsD3bb3eiMl2E4p__DOT__z_out_reg 
                                >> 0x12U))) ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713784__DOT__s2) 
                                               >> 2U)
                  : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713784__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4093___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713120__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4217___05F)
                ? 0xaa0aU : 0xff0fU);
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4114___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713440__DOT__s2 = 5U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713381__DOT__s4 = 0xf0fU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713440__DOT__s2 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713381__DOT__s4 = 0U;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713136__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713136__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713120__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4217___05F)
                ? 0xcc0cU : 0xff0fU);
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4114___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713440__DOT__s2 = 3U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713381__DOT__s4 = 0x5533U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713440__DOT__s2 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713381__DOT__s4 = 0U;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713136__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713136__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713761__DOT__s1 
        = (3U & ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx2_mul__02e____VhshRrFaYytnw6nIQuniAWQqJkW5QVsD3bb3eiMl2E4p__DOT__z_out_reg 
                                >> 0x1bU))) ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713761__DOT__s2) 
                                               >> 2U)
                  : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713761__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713763__DOT__s1 
        = (3U & ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx2_mul__02e____VhshRrFaYytnw6nIQuniAWQqJkW5QVsD3bb3eiMl2E4p__DOT__z_out_reg 
                                >> 0x1aU))) ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713763__DOT__s2) 
                                               >> 2U)
                  : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713763__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713758__DOT__s1 
        = (3U & ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx2_mul__02e____VhshRrFaYytnw6nIQuniAWQqJkW5QVsD3bb3eiMl2E4p__DOT__z_out_reg 
                                >> 0x16U))) ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713758__DOT__s2) 
                                               >> 2U)
                  : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713758__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713404__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4211___05F)
                ? 0xccU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713058__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713058__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713404__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4211___05F)
                ? 0xcaU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713058__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713058__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713118__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b32__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713058__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713058__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713104__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b33__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713058__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713058__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713760__DOT__s1 
        = (3U & ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx2_mul__02e____VhshRrFaYytnw6nIQuniAWQqJkW5QVsD3bb3eiMl2E4p__DOT__z_out_reg 
                                >> 0x17U))) ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713760__DOT__s2) 
                                               >> 2U)
                  : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713760__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713617__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b35__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713617__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713617__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6450___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b34__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715296__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715296__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713605__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b40__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713605__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713605__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b0__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4770___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713616__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713587__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713587__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713484__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713484__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713404__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713404__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713175__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4181___05F)
                ? 0xaa0aU : 0xff0fU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4770___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713616__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713587__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713587__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713484__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713484__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713404__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713404__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713175__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4181___05F)
                ? 0xcc0cU : 0xff0fU);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713175__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b40__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713175__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713175__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715384__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b0__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715384__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715384__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715384__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b38__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715384__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715384__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713240__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4191___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4117___05F)
                ? 3U : 0xfU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4117___05F)
                                 ? 0x33U : 0x55U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4117___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4756___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713602__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713038__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b46__05d)
                ? 0U : 7U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4756___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713602__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713038__DOT__s2 = 7U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713038__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4191___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713038__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713038__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4117___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713064__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713064__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713216__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713216__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713110__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713110__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713099__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713099__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713064__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713064__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713216__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713216__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713110__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713110__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713099__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713099__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713154__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4216___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4191___05F)
                     ? 0xf0fU : 0x5533U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713154__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4117___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713154__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713154__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713132__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4216___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4191___05F)
                     ? 0x333U : 0xf55U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713132__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4117___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713132__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713132__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713185__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4216___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4191___05F)
                     ? 0x30fU : 0x3355U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713185__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4117___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713185__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713185__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b5__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3987___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712833__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713589__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713589__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3987___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712833__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713589__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713589__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715190__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6121___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6042___05F)
                ? 0xf0f0U : 0xff00U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6042___05F)
                                         ? 0xf4f4U : 0xffffU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4184___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713480__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713480__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713032__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713032__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713480__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713480__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713032__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713032__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714969__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6120___05F)
            ? 0x777U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6121___05F)
                         ? 0U : 0x777U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b7__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712909__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712909__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712900__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712900__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712909__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712909__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712900__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712900__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713379__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b3__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713379__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713379__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6043___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714889__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714889__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714890__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6043___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714890__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714890__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4216___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713584__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713584__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713187__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713187__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713584__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713584__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713187__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713187__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714970__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6043___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714970__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714970__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713603__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4268___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713603__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713603__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5973___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714823__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5976___05F)
                ? 0xeU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714825__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714825__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714823__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5976___05F)
                ? 0xfU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714825__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714825__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4112___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4639___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713485__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4209___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713055__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713139__DOT__s4 = 0xff00U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4639___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713485__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4209___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713055__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713139__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4103___05F)
                ? 0xee00U : 0xf000U);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4114___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713611__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713611__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713608__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713608__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713592__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713592__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713405__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713291__DOT__s4 = 0U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713611__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713611__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713608__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713608__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713592__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713592__DOT__s2));
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4103___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713405__DOT__s4 = 0x3355U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713291__DOT__s4 = 0xccaaU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713405__DOT__s4 = 0xf0fU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713291__DOT__s4 = 0xf0f0U;
        }
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713056__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b0__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4114___05F)
                ? 0x5533U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4114___05F)
                                    ? 0xf0fU : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b6__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714565__DOT__s2 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714596__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714596__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713924__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713924__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714565__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5062___05F)
                ? 1U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714596__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714596__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713924__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713924__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b0__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713335__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713335__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713381__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713381__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713335__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713335__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713381__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713381__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712965__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b1__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712965__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712965__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b0__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4119___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712965__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712955__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712955__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4119___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712965__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712955__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712955__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713439__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713439__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713056__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713056__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712950__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4103___05F)
                ? 0x70U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713183__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713183__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713439__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713439__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713056__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713056__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712950__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4103___05F)
                ? 7U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713183__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713183__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715343__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b39__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715343__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715343__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712885__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b11__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712885__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712885__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4938___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0082)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713784__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713784__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713663__DOT__s1 
        = (3U & ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx3_mul__02e____VhshWScOvPjVsHc5N4LU1a7DMLFW9Mbt76PiveC4emTC__DOT__z_out_reg 
                                >> 0x22U))) ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713663__DOT__s2) 
                                               >> 2U)
                  : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713663__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713668__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4821___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713668__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713668__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713669__DOT__s1 
        = (3U & ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx3_mul__02e____VhshWScOvPjVsHc5N4LU1a7DMLFW9Mbt76PiveC4emTC__DOT__z_out_reg 
                                >> 0x12U))) ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713669__DOT__s2) 
                                               >> 2U)
                  : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713669__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713653__DOT__s1 
        = (3U & ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx3_mul__02e____VhshWScOvPjVsHc5N4LU1a7DMLFW9Mbt76PiveC4emTC__DOT__z_out_reg 
                                >> 0x17U))) ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713653__DOT__s2) 
                                               >> 2U)
                  : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713653__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715264__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b20__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715264__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715264__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715349__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6078___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6042___05F)
                ? 0U : 7U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6042___05F)
                               ? 0U : 0x77U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715349__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b33__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715349__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715349__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715583__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6733___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715583__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715583__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715190__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b43__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715190__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715190__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715638__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6791___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715638__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715638__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714890__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6042___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714890__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714890__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716302__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu2__02eexp_out__05b7__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7455___05F)
                ? 0x80U : 0U) : 0U);
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b7__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714820__DOT__s1 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714824__DOT__s1 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714970__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714970__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714823__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714823__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714820__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5973___05F)
                ? 1U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714824__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5958___05F)
                ? 0U : 1U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714970__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714970__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714823__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714823__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b6__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5959___05F 
            = (1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5958___05F)));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714825__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714825__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5974___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714820__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5959___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5958___05F));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714825__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714825__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5974___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714820__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715346__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6146___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715346__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715346__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715285__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b0__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715285__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715285__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715285__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b42__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715285__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715285__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4823___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0136)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713669__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713669__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0142) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713654__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713654__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4827___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713673__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713654__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713654__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4827___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713673__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4808___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0143)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713654__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713654__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6165___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715290__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715304__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b34__05d)
                ? 0xefU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715371__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6117___05F)
                ? 0U : 0xf8U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715290__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6149___05F)
                ? 0x50fU : 0x1133U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715304__DOT__s3 = 0xefU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715371__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6117___05F)
                ? 0U : 0x88U);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6866___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716103__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716103__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716128__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716128__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716103__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716103__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716128__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716128__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6342___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715377__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6345___05F)
                ? 0xaaaaU : 0xf0ccU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715283__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5920___05F)
                ? 0xff0fU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715311__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715189__DOT__s2 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715304__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715304__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715377__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6345___05F)
                ? 0U : 0xffffU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715283__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5920___05F)
                ? 0x1111U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715311__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6464___05F)
                ? 0xf0c0U : 0xaaccU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715189__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5994___05F)
                ? 0xaU : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715304__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715304__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715273__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b37__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6342___05F)
                ? 0U : 5U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6342___05F)
                               ? 0xfU : 0xdU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715410__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6117___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6149___05F)
                ? 0x3303U : 0xff0fU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6149___05F)
                                         ? 0x5505U : 0xff0fU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715311__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b2__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715311__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715311__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715187__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6117___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6149___05F)
                ? 0x3355U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6149___05F)
                                    ? 0x3f0fU : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6389___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715344__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6342___05F)
                ? 0xffU : 0xf8U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715410__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715410__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715344__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6342___05F)
                ? 0U : 0xf8U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715410__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715410__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715302__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6077___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6400___05F)
                ? 0U : 0xcfccU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6400___05F)
                                    ? 0U : 0xcfefU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b1__05d) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6121___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715376__DOT__s4 = 0xf33U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714993__DOT__s3 = 0xcaU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715379__DOT__s3 = 5U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715376__DOT__s4 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714993__DOT__s3 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715379__DOT__s3 = 0U;
        }
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6121___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715376__DOT__s4 = 0x55U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714993__DOT__s3 = 0xcU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715379__DOT__s3 = 3U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715376__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714993__DOT__s3 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715379__DOT__s3 = 0U;
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6117___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715383__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6149___05F)
                ? 0xcaU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715254__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715254__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715383__DOT__s3 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715254__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715254__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715211__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5994___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6117___05F)
                ? 3U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6117___05F)
                               ? 2U : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b34__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6538___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715384__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715254__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715254__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6538___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715384__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715254__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715254__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6078___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715280__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715280__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715274__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6039___05F)
                ? 0U : 0xfe00U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715248__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715248__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715144__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715144__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715280__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715280__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715274__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6039___05F)
                ? 0U : 0xfefeU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715248__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715248__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715144__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715144__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b40__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6365___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715211__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715371__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715371__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6365___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715211__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715371__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715371__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715214__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b1__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6039___05F)
                ? 0xaaf0U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6039___05F)
                                    ? 0xccfcU : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b0__05d) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6117___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714996__DOT__s4 = 0xffccU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715317__DOT__s3 = 0x30U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714996__DOT__s4 = 0xf000U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715317__DOT__s3 = 0U;
        }
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6117___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714996__DOT__s4 = 0xffaaU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715317__DOT__s3 = 5U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714996__DOT__s4 = 0xf000U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715317__DOT__s3 = 0U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715317__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b1__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715317__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715317__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715186__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b0__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6039___05F)
                ? 0x3355U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6039___05F)
                                    ? 0xf0fU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715186__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b1__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715186__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715186__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b0__05d) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6039___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715012__DOT__s4 = 0xaaccU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715236__DOT__s4 = 0xccaaU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715012__DOT__s4 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715236__DOT__s4 = 0U;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715302__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715302__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715376__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715376__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714993__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714993__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715379__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715379__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715283__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715283__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715187__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715187__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715214__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715214__DOT__s4) 
                        >> 8U));
    } else {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6039___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715012__DOT__s4 = 0xf0f0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715236__DOT__s4 = 0xf0f0U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715012__DOT__s4 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715236__DOT__s4 = 0U;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715302__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715302__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715376__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715376__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714993__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714993__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715379__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715379__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715283__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715283__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715187__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715187__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715214__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715214__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715377__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5994___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715377__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715377__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6149___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715319__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6117___05F)
                ? 0xa0c0U : 0xf0f0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714996__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714996__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715319__DOT__s4 = 0xf0f0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714996__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714996__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714925__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6075___05F)
            ? 0xb0bbU : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6039___05F)
                          ? 0U : 0xb0bbU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6077___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715297__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6450___05F)
                ? 0x7fU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714925__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714925__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715297__DOT__s3 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714925__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714925__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6039___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715373__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6330___05F)
                ? 0U : 0xf8U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714969__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714969__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715373__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6330___05F)
                ? 0U : 0x88U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714969__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714969__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5028___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713877__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713877__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5074___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713920__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713877__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713877__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5074___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713920__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713914__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5064___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713914__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713914__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715270__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6423___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5916___05F)
                     ? 7U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7298___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b3__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716144__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716144__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714792__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5900___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714792__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714792__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715556__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b17__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715556__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715556__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715177__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6328___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6330___05F)
                ? 0U : 0x777U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6330___05F)
                                   ? 0xfffU : 0x777U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6047___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714991__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6077___05F)
                ? 0U : 0xafcfU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715213__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6048___05F)
                ? 0U : 0xf0aaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715268__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715249__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6042___05F)
                ? 0U : 0x5f3fU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714991__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6077___05F)
                ? 0U : 0xf0fU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715213__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6048___05F)
                ? 0U : 0xffccU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715268__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6070___05F)
                ? 0U : 0xfff4U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715249__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6042___05F)
                ? 0U : 0xf0fU);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6463___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6400___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715309__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715309__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714777__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5930___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714777__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714777__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6743___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716129__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6742___05F)
                ? 0xcaacU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715627__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6739___05F)
                ? 0x4000U : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716129__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715627__DOT__s4 = 0U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715590__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6742___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6743___05F)
                ? 0x80U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713906__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5059___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713906__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713906__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713902__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5055___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713902__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713902__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713892__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5045___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713892__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713892__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713900__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b35__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713900__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713900__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5032___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713904__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713904__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5036___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713882__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713904__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713904__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5036___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713882__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4001___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4000___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712847__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712847__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714797__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5950___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714797__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714797__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3974___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713595__DOT__s3 
            = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_96)
                ? 0U : 1U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712822__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3975___05F)
                ? 0xdfU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4769___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713615__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713595__DOT__s3 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712822__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3975___05F)
                ? 0xfU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4769___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713615__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714656__DOT__s1 
        = (3U & ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx1_mul__02e____VhshBxuRHTityI6iNNr10ryRBgO0QSIwvuCbCbbMbmoS__DOT__z_out_reg 
                                >> 0x12U))) ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714656__DOT__s2) 
                                               >> 2U)
                  : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714656__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714641__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0035)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714641__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714641__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5794___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714655__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714655__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714654__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5807___05F)
                ? 0xbbfU : 0xf440U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714655__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714655__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714654__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5807___05F)
                ? 0xfU : 0xfff0U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715558__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b19__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715558__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715558__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712743__DOT__s1 
        = (3U & ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx4_mul__02e____VhshiHk0hBnMBg5YmEz4uFPvtCA3Y2PVaOtAj79meNrc__DOT__z_out_reg 
                                >> 0x12U))) ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712743__DOT__s2) 
                                               >> 2U)
                  : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712743__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712724__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0201)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712724__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712724__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712726__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0195)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712726__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712726__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712870__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3973___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4023___05F)
                ? 0x4fU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4023___05F)
                                  ? 0xffU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712845__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b7__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712845__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712845__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715597__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6740___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6750___05F)
                ? 0x4fU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6750___05F)
                                  ? 0xffU : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b5__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716138__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716138__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6754___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715600__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716138__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716138__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6754___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715600__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713887__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5038___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713887__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713887__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715635__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6787___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715635__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715635__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6741___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715613__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715613__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715615__DOT__s2 
            = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_1007)
                ? 0U : 8U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6793___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715639__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715643__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715643__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715594__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b32__05d)
                ? 0xffffU : 0xef00U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715613__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715613__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715615__DOT__s2 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6793___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715639__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715643__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715643__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715594__DOT__s4 = 0U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712818__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3968___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712818__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712818__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b37__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712878__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712878__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713058__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713058__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713105__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713105__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712878__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712878__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713058__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713058__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713105__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713105__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4014___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3984___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712860__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712860__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5893___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715265__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6121___05F)
                ? 0x3703U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714786__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5939___05F)
                ? 0x7fffU : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715265__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714786__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5939___05F)
                ? 0xffffU : 0U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714752__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5902___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714752__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714752__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714755__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5908___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5898___05F)
                ? 0x40U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5898___05F)
                                  ? 0xffU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712873__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4026___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b31__05d)
                ? 0xbfU : 0U) : 0xbfU);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712854__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3989___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b38__05d)
                ? 0U : 0xefffU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b38__05d)
                                    ? 0U : 0xffffU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5898___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714758__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5911___05F)
                ? 0xbfU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715273__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715273__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714758__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5911___05F)
                ? 0xffU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715273__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715273__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5892___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5893___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714793__DOT__s2 = 4U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714740__DOT__s3 = 0x10U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714793__DOT__s2 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714740__DOT__s3 = 0U;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5919___05F 
            = vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5891___05F;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714793__DOT__s2 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714740__DOT__s3 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5919___05F = 0U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712856__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4009___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b47__05d)
                ? 0U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b47__05d)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712876__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4029___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3979___05F)
                ? 0xffffU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3979___05F)
                                    ? 0x100U : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3980___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713604__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3975___05F)
                ? 1U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712853__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712853__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713604__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712853__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712853__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712827__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3979___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3980___05F)
                ? 8U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712851__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b31__05d)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3978___05F)
                     ? 0xf0feU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712841__DOT__s4 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_97)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3978___05F)
                     ? 0x8fffU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712866__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3978___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3979___05F)
                ? 2U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714788__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5941___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b47__05d)
                ? 0U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b47__05d)
                               ? 0U : 2U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5896___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714778__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714778__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5923___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714769__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714778__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714778__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5923___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714769__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714780__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b30__05d)
            ? 0xff00U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5933___05F)
                          ? 0xff00U : 0xe000U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714782__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5935___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714782__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714782__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1656_li1656 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu0__02eqnan)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715574__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715574__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1937_li1937 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu0__02eqnan)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713868__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713868__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1721_li1721 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu0__02eqnan)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714735__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714735__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716328__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_eq_fractb)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716328__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716328__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg4__05b31__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b31__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719928__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efractb_out__05b7__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15862__02eC__05b7__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719928__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719928__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15862__02eC__05b8__05d 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efractb_out__05b7__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15862__02eC__05b7__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719859__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efractb_out__05b7__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15853__02eC__05b7__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719859__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719859__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15853__02eC__05b8__05d 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efractb_out__05b7__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15853__02eC__05b7__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719736__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efractb_out__05b7__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15841__02eC__05b7__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719736__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719736__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15841__02eC__05b8__05d 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efractb_out__05b7__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15841__02eC__05b7__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719811__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efractb_out__05b7__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15844__02eC__05b7__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719811__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719811__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15844__02eC__05b8__05d 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efractb_out__05b7__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15844__02eC__05b7__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719762__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efractb_out__05b7__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15856__02eC__05b7__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719762__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719762__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15856__02eC__05b8__05d 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efractb_out__05b7__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15856__02eC__05b7__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15943__02eS__05b6__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efractb_out__05b6__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719858__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719858__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15943__02eS__05b5__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efractb_out__05b5__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719857__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719857__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15943__02eS__05b4__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efractb_out__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719856__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719856__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15943__02eS__05b3__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efractb_out__05b3__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719855__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719855__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15967__02eS__05b6__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efractb_out__05b6__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719927__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719927__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15967__02eS__05b5__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efractb_out__05b5__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719926__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719926__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15967__02eS__05b4__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efractb_out__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719925__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719925__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15967__02eS__05b3__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efractb_out__05b3__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719924__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719924__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15895__02eS__05b6__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efractb_out__05b6__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719761__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719761__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15895__02eS__05b5__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efractb_out__05b5__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719760__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719760__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15895__02eS__05b4__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efractb_out__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719759__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719759__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15895__02eS__05b3__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efractb_out__05b3__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719758__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719758__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15871__02eS__05b6__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efractb_out__05b6__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719735__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719735__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15871__02eS__05b5__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efractb_out__05b5__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719734__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719734__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15871__02eS__05b4__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efractb_out__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719733__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719733__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15871__02eS__05b3__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efractb_out__05b3__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719732__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719732__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15919__02eS__05b6__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efractb_out__05b6__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719810__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719810__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15919__02eS__05b5__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efractb_out__05b5__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719809__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719809__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15919__02eS__05b4__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efractb_out__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719808__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719808__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15919__02eS__05b3__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efractb_out__05b3__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719807__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719807__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713845__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b4__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713845__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713845__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713850__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b18__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713850__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713850__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15773__02eC__05b6__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15773__02eS__05b5__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15773__02eC__05b5__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b5__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717482__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15773__02eS__05b11__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717482__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717482__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8677___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b14__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717523__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717523__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717490__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15773__02eS__05b17__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717490__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717490__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b1__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg2__05b1__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b0__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg2__05b0__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716578__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15705__02eS__05b2__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716578__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716578__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1944_li1944 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b28__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713864__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713864__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1943_li1943 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b23__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714617__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714617__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714612__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b26__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714612__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714612__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b2__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg2__05b2__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1946_li1946 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b28__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713862__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713862__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714620__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b27__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714620__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714620__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b3__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg2__05b3__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b5__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg2__05b5__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b4__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg2__05b4__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717519__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b6__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717519__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717519__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719201__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5770___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719201__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719201__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15705__02eC__05b7__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15705__02eS__05b6__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15705__02eC__05b6__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b6__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716588__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15705__02eS__05b16__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716588__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716588__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716663__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7814___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716663__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716663__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b21__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719152__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719152__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719055__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719055__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718999__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718999__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719086__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719086__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719044__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719044__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719152__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719152__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719055__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719055__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718999__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718999__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719086__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719086__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719044__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719044__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719072__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b3__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719072__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719072__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719094__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b0__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719094__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719094__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15682__02eC__05b6__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15682__02eS__05b5__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15682__02eC__05b5__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b5__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15807__02eC__05b6__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15807__02eS__05b5__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15807__02eC__05b5__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b5__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b6__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg2__05b6__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b7__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg2__05b7__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717040__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b22__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717040__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717040__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b27__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1728_li1728 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714731__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1727_li1727 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716324__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1728_li1728 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714731__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1727_li1727 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716324__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b9__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg2__05b9__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b8__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg2__05b8__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714716__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5867___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714716__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714716__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b10__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg2__05b10__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b11__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg2__05b11__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718115__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9266___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718115__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718115__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b12__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg2__05b12__05d;
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b7__05d) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10348___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719228__DOT__s4 = 0x3faaU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719195__DOT__s4 = 0xa017U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719228__DOT__s4 = 0xaa3fU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719195__DOT__s4 = 0x5fe8U;
        }
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10348___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719228__DOT__s4 = 0x3f3fU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719195__DOT__s4 = 0xc0U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719228__DOT__s4 = 0xffaaU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719195__DOT__s4 = 0xff3fU;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714721__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b18__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714721__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714721__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7459___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719532__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719532__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716306__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712313__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719532__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719532__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716306__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712313__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719573__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b20__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719573__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719573__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716665__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b15__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716665__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716665__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b13__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg2__05b13__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717963__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15807__02eS__05b18__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717963__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717963__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718996__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10148___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718996__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718996__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716452__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15682__02eS__05b18__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716452__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716452__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b14__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg2__05b14__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b16__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg2__05b16__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b17__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg2__05b17__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b15__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg2__05b15__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b19__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg2__05b19__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716445__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15682__02eS__05b7__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716445__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716445__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717951__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15807__02eS__05b8__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717951__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717951__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717958__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15807__02eS__05b20__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717958__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717958__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b18__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg2__05b18__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b21__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg2__05b21__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b20__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg2__05b20__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716457__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15682__02eS__05b8__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716457__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716457__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718772__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718772__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718759__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718759__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718772__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718772__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718759__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718759__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718775__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9927___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718775__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718775__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718765__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b0__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718765__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718765__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719443__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10502___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719443__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719443__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718477__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9600___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718477__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718477__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718469__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9621___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718469__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718469__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718537__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718537__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718537__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg4__05b22__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b22__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717047__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15739__02eS__05b13__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717047__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717047__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718768__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b20__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718768__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718768__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718673__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9754___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9752___05F)
                ? 0x8fU : 0x70U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9752___05F)
                                     ? 0x70U : 0x8fU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9759___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718607__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718607__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718615__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718615__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718609__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718609__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718607__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718607__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718615__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718615__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718609__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718609__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9767___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b7__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718613__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718613__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8733___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eexp_r__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717579__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717579__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02efract_out_q__05b22__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718223__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718184__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718184__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9309___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718155__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718223__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9376___05F)
                ? 0U : 7U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718184__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718184__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9309___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718155__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718174__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02efract_out_q__05b25__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9327___05F)
                ? 0U : 0xbfU) : 0xbfU);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718185__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eexp_r__05b1__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718185__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718185__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718139__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eexp_r__05b6__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718139__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718139__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717767__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eexp_r__05b6__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717767__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717767__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717795__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8920___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717795__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717795__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7861___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eexp_r__05b5__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716707__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716707__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717123__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02efract_out_q__05b26__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717123__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717123__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eexp_r__05b6__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8274___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717120__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8283___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717129__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8274___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717120__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8283___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717129__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717087__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8239___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717087__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717087__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8272___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717145__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717145__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717179__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8245___05F)
                ? 2U : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717145__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717145__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717179__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8245___05F)
                ? 3U : 0U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718136__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9287___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718136__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718136__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9296___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02efract_out_q__05b6__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718142__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718142__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718152__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02efract_out_q__05b7__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718152__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718152__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7887___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eexp_r__05b1__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716733__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716733__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717757__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02efract_out_q__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717757__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717757__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8271___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8242___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717117__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717117__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717096__DOT__s3 
        = (0xffU & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_709)
                     ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717096__DOT__s4)
                     : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717096__DOT__s4) 
                        >> 8U)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8901___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8899___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717747__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717747__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717737__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8889___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717737__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717737__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8905___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02efract_out_q__05b11__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717751__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717751__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717754__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8907___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717754__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717754__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b30__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1022_li1022 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717076__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3473___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712319__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1022_li1022 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717076__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3473___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712319__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3343___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712334__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712334__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712313__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712313__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712334__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712334__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712313__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712313__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1729_li1729) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718814__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719419__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719420__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b19__05d)
                ? 0xff0aU : 0xff00U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718812__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718812__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719417__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719417__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719281__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719281__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10566___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719412__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718680__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718680__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9835___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718681__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718844__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718844__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719366__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719366__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10442___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719288__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10436___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719282__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719290__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719290__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719406__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719406__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9833___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718679__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9843___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718689__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718688__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718688__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719292__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719292__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10447___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719293__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718701__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718701__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9856___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718702__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718685__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718685__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10552___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719398__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719397__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719397__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719301__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719301__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10456___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719302__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718726__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718726__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10451___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719297__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719296__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719296__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9852___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718698__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718697__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718697__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9864___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718710__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719306__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719306__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718711__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718711__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10462___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719308__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718797__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718797__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10535___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719381__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9952___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718798__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719382__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719382__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719314__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719314__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10469___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719315__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9868___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718714__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718715__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718715__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718790__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718790__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9945___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718791__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9874___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718720__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718719__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718719__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10475___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719321__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719369__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719369__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10525___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719371__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718731__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718731__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9886___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718732__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719329__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719329__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719328__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719328__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10466___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719312__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719310__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719310__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718724__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718724__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9900___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718746__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9890___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718736__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718735__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718735__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718841__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1266_li1266)
                ? 0x3fU : 0xf3U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718814__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b19__05d)
                ? 0xfdd5U : 0U);
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b19__05d) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719419__DOT__s4 = 0xfeeaU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719420__DOT__s4 = 0x8871U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719419__DOT__s4 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719420__DOT__s4 = 0xff0cU;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718812__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718812__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719417__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719417__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719281__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719281__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10566___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719412__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718680__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718680__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9835___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718681__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718844__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718844__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719366__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719366__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10442___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719288__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10436___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719282__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719290__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719290__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719406__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719406__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9833___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718679__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9843___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718689__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718688__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718688__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719292__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719292__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10447___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719293__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718701__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718701__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9856___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718702__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718685__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718685__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10552___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719398__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719397__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719397__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719301__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719301__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10456___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719302__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718726__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718726__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10451___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719297__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719296__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719296__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9852___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718698__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718697__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718697__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9864___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718710__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719306__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719306__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718711__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718711__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10462___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719308__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718797__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718797__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10535___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719381__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9952___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718798__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719382__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719382__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719314__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719314__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10469___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719315__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9868___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718714__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718715__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718715__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718790__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718790__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9945___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718791__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9874___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718720__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718719__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718719__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10475___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719321__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719369__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719369__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10525___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719371__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718731__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718731__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9886___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718732__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719329__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719329__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719328__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719328__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10466___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719312__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719310__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719310__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718724__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718724__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9900___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718746__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9890___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718736__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718735__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718735__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718841__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1266_li1266)
                ? 0xcfU : 0xa9U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7864___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02efract_out_q__05b6__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716710__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716710__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716687__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7838___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716687__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716687__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716719__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7857___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716719__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716719__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718149__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02efract_out_q__05b21__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718149__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718149__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9298___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02efract_out_q__05b16__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718144__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718144__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b26__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7462___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716308__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7465___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716311__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4896___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713742__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4891___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713737__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7462___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716308__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7465___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716311__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4896___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713742__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4891___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713737__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717114__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8267___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8245___05F)
                ? 0x42U : 0xfdU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8245___05F)
                                     ? 0x2bU : 0xd4U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8245___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717124__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8272___05F)
                ? 0xaf23U : 0xaa22U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717093__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8246___05F)
                ? 0x40U : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717124__DOT__s4 = 0xaa22U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717093__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8246___05F)
                ? 0xffU : 0U);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8697___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717555__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717555__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717550__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717550__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717555__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717555__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717550__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717550__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1267_li1267 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b23__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716671__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716671__DOT__s1)));
    if (vlSelf->__VdfgRegularize_hd87f99a1_0_1043) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713744__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713744__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718859__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718859__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718945__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718945__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10004___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718850__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9997___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718843__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718928__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718928__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718868__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718868__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10048___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718894__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10073___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718919__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10026___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718872__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718920__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718920__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10067___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718913__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10069___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718915__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10053___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718899__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10058___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718904__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10059___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718905__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10061___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718907__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10062___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718908__DOT__s1));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713744__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713744__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718859__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718859__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718945__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718945__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10004___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718850__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9997___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718843__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718928__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718928__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718868__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718868__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10048___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718894__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10073___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718919__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10026___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718872__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718920__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718920__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10067___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718913__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10069___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718915__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10053___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718899__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10058___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718904__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10059___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718905__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10061___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718907__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10062___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718908__DOT__s1) 
                     >> 1U));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1266_li1266) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718959__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718960__DOT__s3 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718842__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718842__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718853__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718853__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718847__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718847__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718861__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718861__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718864__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718864__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10098___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718944__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718849__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718849__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10032___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718878__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718937__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718937__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10009___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718855__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718854__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718854__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718860__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718860__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718862__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718862__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718870__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718870__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10042___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718888__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718889__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718889__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718869__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718869__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718884__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718884__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10039___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718885__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718883__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718883__DOT__s3) 
                       >> 4U));
    } else {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1729_li1729) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718959__DOT__s4 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718960__DOT__s3 = 0U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718959__DOT__s4 = 0xef8eU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718960__DOT__s3 = 0x17U;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718842__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718842__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718853__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718853__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718847__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718847__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718861__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718861__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718864__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718864__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10098___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718944__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718849__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718849__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10032___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718878__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718937__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718937__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10009___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718855__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718854__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718854__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718860__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718860__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718862__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718862__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718870__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718870__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10042___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718888__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718889__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718889__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718869__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718869__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718884__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718884__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10039___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718885__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718883__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718883__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717562__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8715___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8702___05F)
                ? 0x2a2aU : 0x2222U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8702___05F)
                                         ? 0x2a3fU : 0x2233U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8700___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717622__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02efract_out_q__05b18__05d)
                ? 0U : 0x4fU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717621__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02efract_out_q__05b19__05d)
                ? 0U : 0x10ffU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717619__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02efract_out_q__05b17__05d)
                ? 0U : 0x10ffU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717601__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02efract_out_q__05b16__05d)
                ? 0U : 0x4fU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717549__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8702___05F)
                ? 0x7f00U : 0xffffU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717622__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02efract_out_q__05b18__05d)
                ? 0U : 0xffU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717621__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02efract_out_q__05b19__05d)
                ? 0U : 0xffffU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717619__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02efract_out_q__05b17__05d)
                ? 0U : 0xffffU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717601__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02efract_out_q__05b16__05d)
                ? 0U : 0xffU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717549__DOT__s4 = 0U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717560__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02efract_out_q__05b9__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717560__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717560__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8263___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02efract_out_q__05b17__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717109__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717109__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8712___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02efract_out_q__05b18__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717558__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717558__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9294___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9284___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718140__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718140__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b26__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3809___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712655__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3799___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712645__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3809___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712655__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3799___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712645__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b23__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712641__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712641__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712637__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712637__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712641__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712641__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712637__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712637__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712639__DOT__s2 
        = (0xfU & (((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b25__05d) 
                    | (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b26__05d))
                    ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712639__DOT__s3)
                    : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712639__DOT__s3) 
                       >> 4U)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717108__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8259___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717108__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717108__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717111__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8246___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717111__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717111__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717100__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8253___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717100__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717100__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716716__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7839___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716716__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716716__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7851___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7850___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716738__DOT__s3 = 0xffU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716699__DOT__s1 = 1U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716738__DOT__s3 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716699__DOT__s1 = 0U;
        }
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7850___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716738__DOT__s3 = 1U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716699__DOT__s1 = 0U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716738__DOT__s3 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716699__DOT__s1 = 1U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716727__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7850___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eexp_r__05b0__05d)
                ? 0U : 0xccfeU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eexp_r__05b0__05d)
                                    ? 0U : 0xfcfcU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716722__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02efract_out_q__05b11__05d)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7850___05F)
                     ? 7U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717925__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b28__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3797___05F)
                ? 0xbfbfU : 0xbf00U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3797___05F)
                                         ? 0U : 0xbf00U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02efract_out_q__05b27__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7844___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716690__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716714__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716714__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7844___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716690__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716714__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716714__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b26__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg2__05b26__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713977__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5083___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5129___05F)
                ? 0x55U : 0xdfU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5129___05F)
                                     ? 0x55U : 0x10U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713950__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02einf_mul2)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713950__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713950__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b25__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg2__05b25__05d;
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b27__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713637__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713637__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712546__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712546__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712520__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712520__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713637__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713637__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712546__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712546__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712520__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712520__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b24__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg2__05b24__05d;
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b29__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1265_li1265 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716674__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3573___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712419__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1265_li1265 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716674__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3573___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712419__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9751___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b22__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718597__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718597__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1264_li1264) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718541__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718541__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718545__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718545__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718645__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718645__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718555__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718555__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9710___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718556__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9696___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718542__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718543__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718543__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9716___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718562__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718567__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718567__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9722___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718568__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718549__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718549__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718570__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718570__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9707___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718553__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718552__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718552__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718560__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b14__05d)
                ? 0x5fffU : 0xffffU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9717___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718563__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718564__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718564__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9727___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718573__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718580__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718580__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9732___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718578__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712619__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712619__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9726___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718572__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718571__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718571__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9738___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718584__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718581__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718581__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9730___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718576__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718577__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718577__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712624__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712624__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712538__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3691___05F)
                ? 3U : 2U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718541__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718541__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718545__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718545__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718645__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718645__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718555__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718555__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9710___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718556__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9696___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718542__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718543__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718543__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9716___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718562__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718567__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718567__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9722___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718568__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718549__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718549__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718570__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718570__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9707___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718553__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718552__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718552__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718560__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b14__05d)
                ? 0xe888U : 0x3fffU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9717___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718563__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718564__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718564__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9727___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718573__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718580__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718580__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9732___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718578__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712619__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712619__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9726___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718572__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718571__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718571__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9738___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718584__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718581__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718581__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9730___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718576__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718577__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718577__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712624__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712624__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712538__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3691___05F)
                ? 2U : 1U);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b29__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0332_li0332 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718120__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0331_li0331 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712192__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0332_li0332 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718120__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0331_li0331 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712192__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713594__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4747___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713594__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713594__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b23__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg2__05b23__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3678___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3676___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712524__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712524__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b30__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg2__05b30__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715625__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b6__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715625__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715625__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716172__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7019___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716172__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716172__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6755___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715652__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715652__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715603__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715603__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715652__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715652__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715603__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715603__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b27__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg2__05b27__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b29__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg2__05b29__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714600__DOT__s1 
        = (3U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_1018)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714600__DOT__s2)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714600__DOT__s2) 
                     >> 2U)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714167__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5320___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714167__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714167__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713943__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5091___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5088___05F)
                     ? 0x40U : 0xbfU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b28__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg2__05b28__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712332__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3477___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712332__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712332__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713120__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4189___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713120__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713120__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713587__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b8__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713587__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713587__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713484__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b44__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713484__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713484__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712945__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4050___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b0__05d)
                ? 0U : 4U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b0__05d)
                               ? 0U : 0xfU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716135__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7165___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716135__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716135__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b40__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7060___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715906__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715961__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715961__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7325___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716171__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7341___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716187__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7060___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715906__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715961__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715961__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7325___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716171__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7341___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716187__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714610__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu2__02eexp_out__05b6__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714610__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714610__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714116__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5268___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714116__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714116__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b29__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714589__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714589__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714313__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714313__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714249__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714249__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714589__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714589__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714313__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714313__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714249__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714249__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714205__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b42__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714205__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714205__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5726___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b45__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714572__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714572__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714594__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b13__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714594__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714594__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714332__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5378___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714332__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714332__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714360__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b41__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714360__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714360__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714325__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5269___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714325__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714325__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714126__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5279___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714126__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714126__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713735__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu2__02eexp_out__05b6__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713735__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713735__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715994__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7147___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715994__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715994__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716185__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b31__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716185__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716185__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716049__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7201___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716049__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716049__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6730___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715964__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715964__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716136__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716136__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715964__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715964__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716136__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716136__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5025___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b10__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713871__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713871__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713898__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5049___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713898__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713898__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713631__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu2__02eexp_out__05b6__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713631__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713631__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713404__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4335___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713404__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713404__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713173__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b36__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713058__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713058__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b43__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713583__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713583__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713219__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713219__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713583__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713583__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713219__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713219__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713242__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4395___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713242__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713242__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713240__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b45__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713240__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713240__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713597__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b19__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713597__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713597__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4765___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4764___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713611__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713611__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713608__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b2__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713608__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713608__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713440__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4271___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713440__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713440__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713468__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02einf_mul2)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713468__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713468__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713335__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4106___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713335__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713335__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713596__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b4__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713596__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713596__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713115__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b46__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713115__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713115__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4325___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b29__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713171__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713171__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b8__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5027___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713873__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714565__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714565__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5027___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713873__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714565__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714565__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0091) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4915___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713761__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4917___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713763__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4915___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713761__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4917___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713763__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0087) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4912___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713758__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4914___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713760__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4912___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713758__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4914___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713760__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4913___05F 
        = (1U & ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx2_mul__02e____VhshRrFaYytnw6nIQuniAWQqJkW5QVsD3bb3eiMl2E4p__DOT__z_out_reg 
                                >> 0x14U))) ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713759__DOT__s1) 
                                               >> 1U)
                  : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713759__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715300__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b24__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715300__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715300__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715280__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5925___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715280__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715280__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714895__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6048___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714890__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714890__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5978___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02einf_mul2)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714824__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714824__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713668__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4805___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713668__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713668__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4807___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0141)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713653__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713653__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4804___05F 
        = (1U & ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx3_mul__02e____VhshWScOvPjVsHc5N4LU1a7DMLFW9Mbt76PiveC4emTC__DOT__z_out_reg 
                                >> 0x14U))) ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713650__DOT__s1) 
                                               >> 1U)
                  : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713650__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715583__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6731___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715583__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715583__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715638__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6735___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715638__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715638__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716302__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu2__02eexp_out__05b6__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716302__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716302__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6500___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b45__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715346__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715346__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715285__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b21__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715285__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715285__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715290__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6443___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715290__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715290__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715189__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6263___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715189__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715189__DOT__s2)));
}
