// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_syn2.h for the primary calling header

#include "Vco_sim_syn2__pch.h"
#include "Vco_sim_syn2___024root.h"

VL_ATTR_COLD void Vco_sim_syn2___024root___stl_sequent__TOP__6(Vco_sim_syn2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_syn2___024root___stl_sequent__TOP__6\n"); );
    // Body
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718668__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9743___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9746___05F)
                ? 0xb2U : 0x4dU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9746___05F)
                                     ? 0x4dU : 0xb2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9747___05F 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9743___05F)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9746___05F));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9777___05F 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9746___05F)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9743___05F));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9711___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9714___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718561__DOT__s4 = 0xff0fU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718635__DOT__s2 = 7U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718561__DOT__s4 = 0x7777U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718635__DOT__s2 = 8U;
        }
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9714___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718561__DOT__s4 = 0x7777U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718635__DOT__s2 = 8U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718561__DOT__s4 = 0x7f0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718635__DOT__s2 = 7U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718663__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9730___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718663__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718663__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718665__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9735___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718665__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718665__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9786___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9732___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718632__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718632__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718667__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9773___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9774___05F)
                ? 0xd0U : 0x2fU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9774___05F)
                                     ? 0x2fU : 0xd0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712560__DOT__s3 
        = (0xffU & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_1041)
                     ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712560__DOT__s4)
                     : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712560__DOT__s4) 
                        >> 8U)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3681___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716438__DOT__s2 = 4U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716496__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b24__05d)
                ? 7U : 0x70U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712528__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3680___05F)
                ? 0xbbb2U : 0xd44dU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716492__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                ? 0xffffU : 0xccccU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716438__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b22__05d)
                ? 0xfU : 4U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716496__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b24__05d)
                ? 0x77U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712528__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3680___05F)
                ? 0xddd4U : 0xb22bU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716492__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                ? 0xf0f0U : 0x80ccU);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712539__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b24__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712539__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712539__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717865__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8898___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9018___05F)
                ? 0xabU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9018___05F)
                                  ? 0xbfU : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3801___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717469__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b22__05d)
                ? 0xfU : 0U);
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3793___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717345__DOT__s3 = 0xccU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712692__DOT__s3 = 0x2dU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717345__DOT__s3 = 0xf0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712692__DOT__s3 = 0U;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712661__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712661__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712659__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3812___05F)
                ? 0U : 0x7f57U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712650__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b25__05d)
                ? 0x5110U : 0xaeefU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712653__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712653__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712652__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3794___05F)
                ? 0xaaaaU : 0xccfU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712649__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0688_li0688)
                ? 0xce31U : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717469__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b22__05d)
                ? 0xeU : 0xcU);
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3793___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717345__DOT__s3 = 0xaaU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712692__DOT__s3 = 0xc3U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717345__DOT__s3 = 0xf0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712692__DOT__s3 = 0U;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712661__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712661__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712659__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3812___05F)
                ? 0U : 0x5ddfU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712650__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b25__05d)
                ? 0x445U : 0xfbbaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712653__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712653__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712652__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3794___05F)
                ? 0xaaaaU : 0xf330U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712649__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0688_li0688)
                ? 0xf20dU : 0U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717927__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b26__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3801___05F)
                ? 0xbf00U : 0xbfbfU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3801___05F)
                                         ? 0xbf00U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3811___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3800___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712657__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712657__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717466__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3793___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717466__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717466__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3838___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b20__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712684__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712684__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717337__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3795___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717337__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717337__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717460__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b0__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712699__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b11__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712620__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2090_li2090)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                ? 0xccccU : 0xff00U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                                         ? 0xaaaaU : 0xf0f0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712327__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3473___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712327__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712327__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b25__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717324__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3474___05F)
                ? 0xffffU : 0xbf00U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718368__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3353___05F)
                ? 0xbf00U : 0xbfbfU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717324__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3474___05F)
                ? 0U : 0xbf00U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718368__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3353___05F)
                ? 0xbf00U : 0U);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b24__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717325__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3474___05F)
                ? 0xffffU : 0xbf00U);
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3353___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718369__DOT__s4 = 0xbf00U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712226__DOT__s4 = 0xcf31U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718369__DOT__s4 = 0xbfbfU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712226__DOT__s4 = 0xf30dU;
        }
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717325__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3474___05F)
                ? 0U : 0xbf00U);
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3353___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718369__DOT__s4 = 0xbf00U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712226__DOT__s4 = 0x31ceU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718369__DOT__s4 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712226__DOT__s4 = 0xdf2U;
        }
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3474___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716929__DOT__s3 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712344__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712344__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712336__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712336__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1053_li1053 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717028__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716929__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3486___05F)
                ? 0x2bU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712344__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712344__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712336__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712336__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1053_li1053 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717028__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716853__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eexp_r__05b5__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716853__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716853__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7854___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716726__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716726__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716708__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716708__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716726__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716726__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716708__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716708__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7884___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eexp_r__05b7__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716730__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716730__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718646__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9698___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718646__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718646__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718512__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9534___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9532___05F)
                ? 0x1030U : 0x8fd0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9532___05F)
                                         ? 0x300U : 0xaff0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718505__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9656___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718505__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718505__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9549___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9546___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718395__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718395__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718397__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9544___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718397__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718397__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718418__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9563___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718418__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718418__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9582___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9568___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718428__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718428__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9609___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718481__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718481__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718478__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718478__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718481__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718481__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718478__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718478__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717563__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8697___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717563__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717563__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717551__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8698___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717551__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717551__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717101__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8237___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717101__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717101__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02efract_out_q__05b27__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8716___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717562__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717690__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717690__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8716___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717562__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717690__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717690__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b43__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714920__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6038___05F)
                ? 2U : 3U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715110__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715110__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714920__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6038___05F)
                ? 2U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715110__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715110__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3591___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b30__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712437__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712437__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716636__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716636__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716636__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718669__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9769___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718669__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718669__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718622__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9766___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718622__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718622__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718622__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9769___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718622__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718622__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716538__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3596___05F)
                ? 0xaU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712475__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3584___05F)
                ? 0xaU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716541__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716541__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712713__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3866___05F)
                ? 0U : 0xf5U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716906__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3598___05F)
                ? 0U : 0x80U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716538__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3596___05F)
                ? 0xcU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712475__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3584___05F)
                ? 0xcU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716541__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716541__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712713__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3866___05F)
                ? 0U : 0xf3U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716906__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3598___05F)
                ? 0U : 0xffU);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3684___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                ? 0xccccU : 0xff00U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                                         ? 0xaaaaU : 0xf0f0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712531__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3680___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3681___05F)
                ? 0xcU : 0xaU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3681___05F)
                                   ? 3U : 5U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712531__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3684___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712531__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712531__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712536__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3672___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712536__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712536__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712534__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b26__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712534__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712534__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712534__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3672___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712534__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712534__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eexp_r__05b4__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8776___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717622__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8755___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717601__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717587__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717587__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8776___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717622__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8755___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717601__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717587__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717587__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717621__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8724___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717621__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717621__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8775___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eexp_r__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717621__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717621__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8724___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717619__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717619__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717651__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717651__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8741___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717587__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717619__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717619__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717651__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717651__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8741___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717587__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b25__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717928__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3801___05F)
                ? 0xbf00U : 0xbfbfU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712653__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712653__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717928__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3801___05F)
                ? 0xbf00U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712653__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712653__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712667__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b17__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712667__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712667__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712675__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b1__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712675__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712675__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b22__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712682__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3801___05F)
                ? 3U : 2U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717469__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717469__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717337__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717337__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712682__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3801___05F)
                ? 0U : 2U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717469__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717469__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717337__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717337__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717447__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717460__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717460__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717447__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717460__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717460__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b3__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712676__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712676__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717433__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712676__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712676__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717433__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717461__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b2__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717461__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b3__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717461__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717461__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717447__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b2__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717447__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717447__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717393__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b9__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717413__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b8__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717413__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b9__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717413__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717413__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b4__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717425__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717433__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717433__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717425__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717433__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717433__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b5__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712691__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712691__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717419__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717425__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717425__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712691__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712691__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717419__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717425__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717425__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717402__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b7__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717412__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b6__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717412__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b7__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717412__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717412__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717402__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b8__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717402__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717402__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b15__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712668__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712668__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712696__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712668__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712668__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712696__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b14__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717405__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717405__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717368__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717405__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717405__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717368__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717368__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b15__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717368__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717368__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b13__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717375__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b12__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717375__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b13__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717375__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717375__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717354__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b18__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717358__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b17__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717358__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b18__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717358__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717358__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712699__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b12__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712699__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712699__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717405__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b17__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717405__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717405__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717361__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b16__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717361__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b17__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717361__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717361__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b19__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717348__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717354__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717354__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717348__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717354__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717354__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b14__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712696__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b16__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712696__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712696__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712466__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b12__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F)
                               ? 2U : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b27__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712434__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712434__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712452__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3598___05F)
                ? 0x2bd4U : 0x4db2U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712434__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712434__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712452__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3598___05F)
                ? 0xd42bU : 0xb24dU);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715606__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6755___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715606__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715606__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6038___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714896__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714896__DOT__s4) 
                        >> 8U));
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6039___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714886__DOT__s4 = 0x5505U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714998__DOT__s4 = 0xf0fU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715315__DOT__s4 = 0xf0fU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714886__DOT__s4 = 0xff0fU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714998__DOT__s4 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715315__DOT__s4 = 0U;
        }
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6071___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715173__DOT__s3 = 0xfaU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715429__DOT__s4 = 0xf0aU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715173__DOT__s3 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715429__DOT__s4 = 0xf0fU;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714918__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714918__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715017__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6069___05F)
                ? 0x555U : 0xfffU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715185__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715185__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715232__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6149___05F)
                ? 0xccaaU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714991__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714991__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715348__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6117___05F)
                ? 0xf050U : 0xf0f0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715347__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715347__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715267__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6342___05F)
                ? 0xcU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715319__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715319__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715314__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b1__05d)
                ? 0xccU : 0xf0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715265__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715265__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714896__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714896__DOT__s4));
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6039___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714886__DOT__s4 = 3U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714998__DOT__s4 = 0x5533U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715315__DOT__s4 = 0x3355U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714886__DOT__s4 = 0xff0fU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714998__DOT__s4 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715315__DOT__s4 = 0U;
        }
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6071___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715173__DOT__s3 = 0xc0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715429__DOT__s4 = 0xf0cU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715173__DOT__s3 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715429__DOT__s4 = 0xf0fU;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714918__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714918__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715017__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6069___05F)
                ? 0x333U : 0xfffU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715185__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715185__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715232__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6149___05F)
                ? 0xfcf0U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714991__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714991__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715348__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6117___05F)
                ? 0xf030U : 0xf0f0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715347__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715347__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715267__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6342___05F)
                ? 0xcdU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715319__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715319__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715314__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b1__05d)
                ? 0xaaU : 0xffU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715265__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715265__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3353___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718082__DOT__s2 = 8U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712200__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712200__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712217__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712217__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718082__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b22__05d)
                ? 0xfU : 8U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712200__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712200__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712217__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712217__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b26__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718367__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3353___05F)
                ? 0xbf00U : 0xbfbfU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717323__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717323__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718367__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3353___05F)
                ? 0xbf00U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717323__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717323__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3360___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9237___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718083__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3368___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712214__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9237___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718083__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3368___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712214__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3362___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712220__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3360___05F)
                ? 0x41U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712210__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712210__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712211__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712211__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712220__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3360___05F)
                ? 0x3cU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712210__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712210__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712211__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712211__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3598___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716508__DOT__s3 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712447__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712447__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1304_li1304 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716636__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716508__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F)
                ? 0x2bU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712447__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712447__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1304_li1304 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716636__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718161__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9289___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718161__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718161__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713888__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b16__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713888__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713888__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713987__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_ovf_r__05b1__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713987__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713987__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b0__05d) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719881__DOT__s4 = 0xffffU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712476__DOT__s3 = 0xeeU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719881__DOT__s4 = 0xefffU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712476__DOT__s3 = 0xffU;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712486__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712475__DOT__s2) 
                     >> 2U));
    } else {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719881__DOT__s4 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712476__DOT__s3 = 0xeeU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719881__DOT__s4 = 0xefffU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712476__DOT__s3 = 0xf0U;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712486__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712475__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712707__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3584___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F)
                ? 0xaaaaU : 0xff00U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F)
                                         ? 0xccccU : 0xf0f0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713997__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5096___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5097___05F)
                     ? 0xeebbU : 0xff0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3584___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712431__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F)
                ? 0xaaaaU : 0xf0f0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716538__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716538__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716541__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716541__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712713__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712713__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712431__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F)
                ? 0xccccU : 0xff00U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716538__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716538__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716541__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716541__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712713__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712713__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5098___05F 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5096___05F)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5097___05F));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717321__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b28__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717321__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717321__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712325__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b27__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3474___05F)
                ? 0xd42bU : 0xb24dU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3474___05F)
                                         ? 0x2bd4U : 0x4db2U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b9__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712471__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F)
                ? 2U : 3U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712500__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712431__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712471__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F)
                ? 2U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712500__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712431__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b7__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712469__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F)
                ? 0xeeU : 0xffU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712707__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712707__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712492__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712431__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712469__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F)
                ? 0xeeU : 0xf0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712707__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712707__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712492__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712431__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b13__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712462__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F)
                ? 2U : 3U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712463__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712431__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712462__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F)
                ? 2U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712463__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712431__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7732___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716590__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F)
                ? 7U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716906__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716906__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716590__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F)
                ? 0xfU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716906__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716906__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b23__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712445__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3598___05F)
                ? 0xff33U : 0xc0fcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712447__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712447__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712445__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3598___05F)
                ? 0x3f02U : 0xccfeU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712447__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712447__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719966__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b16__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                ? 0xeU : 0xfU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                                   ? 0xeU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716377__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b16__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7531___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b16__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716377__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716377__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712235__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b16__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3389___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b16__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712235__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712235__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9791___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b19__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718637__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718637__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712544__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b19__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3698___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b19__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712544__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712544__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712261__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b19__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3415___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b19__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712261__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712261__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712259__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b21__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719970__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b20__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                ? 8U : 0xfU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                                 ? 8U : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b20__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9757___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718603__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712567__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                ? 2U : 3U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9757___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718603__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712567__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                ? 2U : 0U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3721___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b20__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712567__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712567__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b19__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718381__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9534___05F)
                ? 0x6b3cU : 0xffffU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718385__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9538___05F)
                ? 0xd4U : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718381__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9534___05F)
                ? 0xafffU : 0x5500U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718385__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9538___05F)
                ? 0x44U : 0U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718385__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b20__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718385__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718385__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718387__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b19__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718387__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718387__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9541___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b20__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718387__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718387__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712203__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b20__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3357___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b20__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712203__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712203__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712363__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3515___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712363__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712363__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b15__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9723___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718569__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719965__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                ? 0xeU : 0xfU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9723___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718569__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719965__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                ? 0xeU : 0U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712563__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b15__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3717___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b15__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712563__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712563__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712234__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b15__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3388___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b15__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712234__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712234__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b6__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719956__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                ? 7U : 0xfU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718618__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718618__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719956__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                ? 7U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718618__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718618__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712584__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b6__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3738___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b6__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712584__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712584__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712246__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b6__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3400___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b6__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712246__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712246__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719957__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b7__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                ? 0xbU : 0xfU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                                   ? 0xbU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712583__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b7__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3737___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b7__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712583__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712583__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712247__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b7__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3401___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b7__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712247__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712247__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9758___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718604__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718604__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712249__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b4__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3403___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712249__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712249__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712582__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b8__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712582__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712582__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712245__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b8__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3399___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b8__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712245__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712245__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3347___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717980__DOT__s3 = 0xf0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712288__DOT__s4 = 0xf0f0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712224__DOT__s4 = 0xff00U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717980__DOT__s3 = 0xccU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712288__DOT__s4 = 0xff00U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712224__DOT__s4 = 0xf0f0U;
        }
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3347___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717980__DOT__s3 = 0xf0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712288__DOT__s4 = 0xccccU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712224__DOT__s4 = 0xccccU;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717980__DOT__s3 = 0xaaU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712288__DOT__s4 = 0xaaaaU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712224__DOT__s4 = 0xaaaaU;
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b23__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717326__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3474___05F)
                ? 0xffffU : 0xbf00U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717940__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717940__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717326__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3474___05F)
                ? 0U : 0xbf00U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717940__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717940__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717940__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717940__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718082__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718082__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717940__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717940__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718082__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718082__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718367__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b26__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718367__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718367__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712381__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b0__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3347___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712290__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3360___05F)
                ? 0x3c00U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712200__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712200__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712290__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3360___05F)
                ? 0xaaaaU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712200__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712200__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b27__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712213__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3362___05F)
                ? 0xbU : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712327__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712327__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712220__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712220__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712210__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712210__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712211__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712211__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712213__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3362___05F)
                ? 0xeU : 3U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712327__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712327__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712220__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712220__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712210__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712210__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712211__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712211__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712369__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b1__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712369__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712369__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712339__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b15__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712339__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712339__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712360__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b7__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712360__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712360__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b21__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712405__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712405__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712288__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712288__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712302__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712224__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712405__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712405__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712288__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712288__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712302__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712224__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716927__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b20__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716927__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716927__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716927__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b21__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716927__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716927__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712415__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b1__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b8__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712392__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719478__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719478__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718886__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718886__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712392__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719478__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719478__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718886__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718886__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712400__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b7__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712400__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b8__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712400__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712400__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712409__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b3__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712393__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b2__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712393__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b3__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712393__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712393__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716998__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b4__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712408__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b5__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b9__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712399__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712392__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712392__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712399__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712392__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712392__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712386__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b6__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712386__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b7__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712386__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712386__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b10__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712395__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718938__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718938__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712395__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718938__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718938__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b11__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712267__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                ? 3U : 2U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712373__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712373__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712267__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                ? 0U : 2U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712373__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712373__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b10__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712373__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712373__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712399__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712399__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712373__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712373__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712399__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712399__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712380__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b12__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712351__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b11__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712351__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b12__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712351__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712351__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712389__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b14__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b13__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712352__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718940__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718940__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712380__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712380__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712352__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718940__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718940__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712380__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712380__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712352__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b14__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712352__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712352__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716938__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b16__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b15__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b16__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712406__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b19__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b17__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712411__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10684___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719530__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716938__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716938__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712411__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10684___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719530__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716938__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716938__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7872___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7841___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716718__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716718__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717557__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8706___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717557__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717557__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712879__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4027___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712879__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712879__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714759__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5906___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714759__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714759__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715644__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6793___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715644__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715644__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4003___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4001___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712849__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712849__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b15__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4042___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712888__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4055___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712901__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4042___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712888__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4055___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712901__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712910__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4021___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712910__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712910__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712910__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b15__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712910__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712910__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712886__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4039___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712886__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712886__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6769___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715692__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715692__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715619__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715619__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715692__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715692__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715619__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715619__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6756___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715653__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715653__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6806___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715652__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715653__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715653__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6806___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715652__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715614__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6734___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715614__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715614__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6735___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715648__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715648__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6846___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715692__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715614__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715614__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715648__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715648__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6846___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715692__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715614__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715614__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6802___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6734___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715648__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715648__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3986___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712858__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b1__05d)
                ? 0xf0c0U : 0xcc0bU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712881__DOT__s2 = 0xeU;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712858__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b1__05d)
                ? 0xc0f0U : 0xbccU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712881__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4013___05F)
                ? 0xeU : 8U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715294__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6446___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715294__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715294__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6038___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715299__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6039___05F)
                ? 0xf000U : 0xff00U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715291__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715291__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715383__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715383__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715387__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715387__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715381__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715381__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715249__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715249__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715255__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6124___05F)
                ? 0xfcfU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715250__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715250__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715298__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715298__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715287__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715287__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6172___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715018__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715294__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715294__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715299__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6039___05F)
                ? 0xee00U : 0xff00U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715291__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715291__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715383__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715383__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715387__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715387__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715381__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715381__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715249__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715249__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715255__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6124___05F)
                ? 0xfafU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715250__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715250__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715298__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715298__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715287__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715287__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6172___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715018__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715294__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715294__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714790__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5937___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714790__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714790__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5936___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714794__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714794__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5944___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714790__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714794__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714794__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5944___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714790__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712857__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4007___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712857__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712857__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5047___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5044___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713893__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713893__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713907__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5052___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713907__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713907__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713932__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5076___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5080___05F)
                     ? 0xbfffU : 0x4000U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5069___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713927__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5080___05F)
                ? 0xbfU : 0x40U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713955__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5097___05F)
                ? 0x41U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713932__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713932__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713927__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5080___05F)
                ? 0xffU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713955__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5097___05F)
                ? 0x14U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713932__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713932__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715636__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6781___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715636__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715636__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718670__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9766___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718670__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718670__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5961___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5960___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714807__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714807__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5934___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5931___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714780__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714780__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5985___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b15__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714831__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714831__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5956___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5964___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714810__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714832__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5985___05F)
                ? 3U : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5964___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714810__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714832__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5985___05F)
                ? 5U : 0U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713141__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3971___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713141__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713141__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4050___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712933__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4295___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713141__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712933__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4061___05F)
                ? 0xd0ccU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4295___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713141__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712862__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3976___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712862__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712862__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712842__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3992___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712842__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712842__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5919___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714851__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714851__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5948___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714794__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714851__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714851__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5948___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714794__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5918___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5927___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714773__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6005___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714851__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5927___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714773__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6005___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714851__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15705__02eC__05b13__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15705__02eS__05b12__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15705__02eC__05b12__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b12__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5755___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b11__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714601__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714601__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713638__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b29__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713638__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713638__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4789___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713649__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713649__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713639__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713639__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713640__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713640__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713649__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713649__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713639__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713639__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713640__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713640__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713640__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b29__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713640__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713640__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717483__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15773__02eS__05b10__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717483__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717483__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7643___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02eadd_d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716489__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716489__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1418_li1418) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716459__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3681___05F)
                ? 0U : 3U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716492__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716492__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716459__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3681___05F)
                ? 0U : 2U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716492__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716492__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717048__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15739__02eS__05b2__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717048__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717048__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714621__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b29__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714621__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714621__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15773__02eC__05b12__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15773__02eS__05b11__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15773__02eC__05b11__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b11__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717929__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b24__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3801___05F)
                ? 0xbf00U : 0xbfbfU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3801___05F)
                                         ? 0xbf00U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15682__02eC__05b12__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15682__02eS__05b11__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15682__02eC__05b11__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b11__05d));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4901___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2008_li2008 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713757__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713754__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713754__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2008_li2008 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713757__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713754__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713754__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713752__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4895___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4901___05F)
                ? 0x7eeeU : 0xeee7U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4901___05F)
                                         ? 0xf000U : 0xfU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b21__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718639__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718639__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9667___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718513__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9801___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718647__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718470__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718470__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718639__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718639__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9667___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718513__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9801___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718647__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718470__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718470__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10834___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b12__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719680__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719680__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712670__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b7__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712670__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712670__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b13__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9728___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718574__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9784___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718630__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9728___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718574__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9784___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718630__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3826___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b9__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712672__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712672__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3828___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b11__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712674__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712674__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3827___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b10__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712673__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712673__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3840___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b18__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712686__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712686__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3835___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b19__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712681__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712681__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3825___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b8__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712671__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712671__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0656_li0656 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b10__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717530__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717530__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719963__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b13__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                ? 0xeU : 0xfU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                                   ? 0xeU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712242__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b13__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3396___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b13__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712242__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712242__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b11__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9779___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718625__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718110__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718110__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9779___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718625__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718110__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718110__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718110__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b13__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718110__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718110__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713745__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4898___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713745__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713745__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15807__02eC__05b12__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15807__02eS__05b11__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15807__02eC__05b11__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b11__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7308___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7252___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716154__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716154__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719073__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10225___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719073__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719073__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15739__02eC__05b12__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15739__02eS__05b11__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15739__02eC__05b11__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b11__05d));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10501___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719441__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719441__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719353__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719353__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719441__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719441__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719353__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719353__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713607__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4758___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4110___05F)
                ? 0xff01U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4110___05F)
                                    ? 0xffffU : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b4__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719056__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719056__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719066__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719066__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719070__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719070__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719056__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719056__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719066__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719066__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719070__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719070__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718834__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9929___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718834__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718834__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718777__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9926___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718777__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718777__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b20__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719572__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719572__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719457__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719457__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719572__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719572__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719457__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719457__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718672__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9751___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718672__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718672__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719092__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b0__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719092__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719092__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718465__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9614___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718465__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718465__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712568__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b21__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                               ? 2U : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b21__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3722___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712568__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3413___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712259__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718465__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718465__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3722___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712568__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3413___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712259__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718465__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718465__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9640___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9593___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718486__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718486__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714322__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b46__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714322__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714322__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4291___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b35__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713137__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713137__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718922__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10053___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718922__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718922__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712381__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712381__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10076___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718922__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712381__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712381__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10076___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718922__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714587__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5738___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5487___05F)
                ? 0U : 0x1fU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5487___05F)
                                  ? 0xffU : 0x1fU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713119__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4185___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713119__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713119__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719084__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b1__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719084__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719084__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718442__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b6__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718442__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718442__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712223__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b22__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718412__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b9__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718412__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718412__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718448__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b2__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718448__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718448__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714361__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5512___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714361__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714361__DOT__s3)));
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
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02efract_out_d__05b11__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15943__02eC__05b11__05d) 
           ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15943__02eS__05b11__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15943__02eC__05b12__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15943__02eS__05b11__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15943__02eC__05b11__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b11__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15943__02eS__05b12__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efractb_out__05b12__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719864__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719864__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719865__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efractb_out__05b13__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15853__02eC__05b13__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719865__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719865__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15853__02eC__05b14__05d 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efractb_out__05b13__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15853__02eC__05b13__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02efract_out_d__05b11__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15967__02eC__05b11__05d) 
           ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15967__02eS__05b11__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15967__02eC__05b12__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15967__02eS__05b11__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15967__02eC__05b11__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b11__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8543___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b16__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717389__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717389__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15967__02eS__05b12__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efractb_out__05b12__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719933__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719933__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712667__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b16__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712667__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712667__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719934__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efractb_out__05b13__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15862__02eC__05b13__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719934__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719934__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718386__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9537___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9538___05F)
                ? 0x8fU : 0x70U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9538___05F)
                                     ? 8U : 0xf7U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15862__02eC__05b14__05d 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efractb_out__05b13__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15862__02eC__05b13__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02efract_out_d__05b11__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15871__02eC__05b11__05d) 
           ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15871__02eS__05b11__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15871__02eC__05b12__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15871__02eS__05b11__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15871__02eC__05b11__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b11__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3854___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712700__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712700__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15871__02eS__05b12__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efractb_out__05b12__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719741__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719741__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712675__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712675__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712675__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719742__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efractb_out__05b13__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15841__02eC__05b13__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719742__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719742__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718451__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9592___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9604___05F)
                ? 0x4dU : 0xd4U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9604___05F)
                                     ? 0xd4U : 0x4dU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15841__02eC__05b14__05d 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efractb_out__05b13__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15841__02eC__05b13__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02efract_out_d__05b11__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15919__02eC__05b11__05d) 
           ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15919__02eS__05b11__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15919__02eC__05b12__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15919__02eS__05b11__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15919__02eC__05b11__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b11__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15919__02eS__05b12__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efractb_out__05b12__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719816__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719816__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719817__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efractb_out__05b13__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15844__02eC__05b13__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719817__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719817__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15844__02eC__05b14__05d 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efractb_out__05b13__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15844__02eC__05b13__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02efract_out_d__05b11__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15895__02eC__05b11__05d) 
           ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15895__02eS__05b11__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15895__02eC__05b12__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15895__02eS__05b11__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15895__02eC__05b11__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b11__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15895__02eS__05b12__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efractb_out__05b12__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719767__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719767__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719768__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efractb_out__05b13__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15856__02eC__05b13__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719768__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719768__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15856__02eC__05b14__05d 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efractb_out__05b13__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15856__02eC__05b13__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713665__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0116)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4810___05F)
                ? 0xedU : 0xdbU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4810___05F)
                                     ? 0xdbU : 0xb7U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713681__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4810___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4818___05F)
                ? 0x3335U : 0x5ff3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4818___05F)
                                         ? 0x355fU : 0xf333U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0146) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713657__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4810___05F)
                ? 0xfcU : 0xe8U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713665__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713665__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713681__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713681__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713657__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4810___05F)
                ? 0xe8U : 0xc0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713665__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713665__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713681__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713681__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0655_li0655 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0653_li0653)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0649_li0649));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713675__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0112)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713675__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713675__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4831___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0114)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713677__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713677__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b47__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714245__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714245__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714322__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714322__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714245__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714245__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714322__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714322__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717419__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b6__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717419__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717419__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716050__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6936___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716050__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716050__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713585__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4117___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713585__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713585__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b42__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5503___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714349__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714258__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714258__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5503___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714349__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714258__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714258__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4775___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4769___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713621__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713621__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713176__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4327___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713176__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713176__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5732___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5184___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714578__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714578__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714221__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5373___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714221__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714221__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b39__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714206__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714206__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5298___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714144__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714221__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714221__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714206__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714206__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5298___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714144__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714221__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714221__DOT__s2));
    }
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
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5813___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0002)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714659__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714659__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713598__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4749___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713598__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713598__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715303__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6400___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715303__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715303__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712572__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b11__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713067__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4216___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713067__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713067__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713672__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0111)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713672__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713672__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b44__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715016__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6038___05F)
                ? 2U : 3U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715112__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715112__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6074___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714920__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6264___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715110__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715016__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6038___05F)
                ? 2U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715112__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715112__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6074___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714920__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6264___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715110__DOT__s1));
    }
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
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715351__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6504___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6124___05F)
                ? 0xffU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6124___05F)
                                  ? 0x8fffU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715281__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6042___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715281__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715281__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b12__05d) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712553__DOT__s3 = 0xeeU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712581__DOT__s1 = 2U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712553__DOT__s3 = 0xffU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712581__DOT__s1 = 3U;
        }
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712553__DOT__s3 = 0xeeU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712581__DOT__s1 = 2U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712553__DOT__s3 = 0xf0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712581__DOT__s1 = 0U;
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5203___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714184__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714184__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714376__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714376__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714184__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714184__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714376__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714376__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4929___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0059)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713775__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713775__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4931___05F 
        = (1U & ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx2_mul__02e____VhshRrFaYytnw6nIQuniAWQqJkW5QVsD3bb3eiMl2E4p__DOT__z_out_reg 
                                >> 0x19U))) ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713777__DOT__s1) 
                                               >> 1U)
                  : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713777__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715380__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6047___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715380__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715380__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713836__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4939___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713836__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713836__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713835__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4937___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713835__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713835__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0057) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713788__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713788__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713835__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713835__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713788__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713788__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713835__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713835__DOT__s2));
    }
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
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6438___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b19__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715284__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715284__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6466___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6329___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715312__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715312__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715318__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6048___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715318__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715318__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716231__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b46__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716231__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716231__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712470__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b8__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7187___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7186___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716033__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716033__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716013__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6937___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716013__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716013__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715967__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6875___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715967__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715967__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7121___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6937___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715967__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715967__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716236__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b45__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716236__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716236__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716236__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b46__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716236__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716236__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b23__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712321__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3474___05F)
                ? 0xd444U : 0xb0bbU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8074___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716920__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712321__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3474___05F)
                ? 0xddd4U : 0x22b2U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8074___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716920__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715785__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6935___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715785__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715785__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717326__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b23__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717326__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717326__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716184__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7337___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716184__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716184__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712465__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b11__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7065___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715911__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715911__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716073__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b39__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716073__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716073__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716091__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6872___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716091__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716091__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712464__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b10__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716100__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7101___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716100__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716100__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714516__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5204___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714516__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714516__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714120__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5267___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714120__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714120__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714265__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b36__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714265__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714265__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b34__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5383___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714229__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5742___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714588__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5383___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714229__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5742___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714588__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5445___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5268___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714291__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714291__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b43__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5471___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714317__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714168__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714168__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5338___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714184__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5471___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714317__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714168__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714168__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5338___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714184__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b1__05d) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6038___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715145__DOT__s3 = 0xccU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715342__DOT__s3 = 0x55U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714962__DOT__s4 = 0xff00U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715145__DOT__s3 = 0xf0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715342__DOT__s3 = 0x33U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714962__DOT__s4 = 0xccccU;
        }
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6038___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715145__DOT__s3 = 0xaaU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715342__DOT__s3 = 0xfU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714962__DOT__s4 = 0xaaaaU;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715145__DOT__s3 = 0xffU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715342__DOT__s3 = 3U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714962__DOT__s4 = 0xf0f0U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5528___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b37__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714374__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714374__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714399__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5552___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714399__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714399__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714886__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b1__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714886__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714886__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716137__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b2__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716137__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716137__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715173__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b1__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715173__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715173__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716146__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7297___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716146__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716146__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713612__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4763___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4765___05F)
                     ? 0x5f03U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4536___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4106___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713382__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713382__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713481__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4181___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713481__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713481__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4635___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4106___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713481__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713481__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715232__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b1__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715232__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715232__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4213___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b41__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713059__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713059__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713220__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4373___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4187___05F)
                     ? 0xdfU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714998__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b1__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714998__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714998__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713189__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4110___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713189__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713189__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715179__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6044___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715179__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715179__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715869__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7002___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715869__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715869__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715869__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6875___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715869__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715869__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715910__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b32__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715910__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715910__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715969__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6867___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715969__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715969__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715315__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b1__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715315__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715315__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715969__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b32__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715969__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715969__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716189__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7340___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716189__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716189__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716087__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7044___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716087__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716087__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716159__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7223___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716159__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716159__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716148__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b4__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716148__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716148__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716066__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7218___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716066__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716066__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715953__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6981___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715953__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715953__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715832__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b41__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715832__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715832__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b19__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719408__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719408__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718686__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718686__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719408__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719408__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718686__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718686__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b22__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3487___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712333__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719452__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719452__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3487___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712333__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719452__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719452__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719452__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b19__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719452__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719452__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7107___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b41__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715953__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715953__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4121___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b46__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712967__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712967__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b18__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712543__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                ? 2U : 3U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716340__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718381__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718381__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718512__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718512__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712543__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                ? 2U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716340__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718381__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718381__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718512__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718512__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b17__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712564__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                ? 2U : 3U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712623__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712564__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                ? 2U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712623__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713423__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4093___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4391___05F)
                ? 0xafU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4391___05F)
                                  ? 0xcfU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712454__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b17__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3608___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b17__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712454__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712454__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712456__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b18__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3610___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b18__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712456__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712456__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4114___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713292__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4391___05F)
                ? 0xd0U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713423__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713423__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713292__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4391___05F)
                ? 0xccU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713423__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713423__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712458__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b15__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712450__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b14__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712459__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b16__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712542__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b14__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                ? 0xeeU : 0xffU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                                     ? 0xeeU : 0xf0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b16__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712542__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712542__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712605__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712542__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712542__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712605__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4392___05F 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4114___05F)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4391___05F));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3613___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b16__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712459__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712459__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b21__05d) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719901__DOT__s2 = 0xfU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712489__DOT__s1 = 2U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719901__DOT__s2 = 8U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712489__DOT__s1 = 3U;
        }
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719901__DOT__s2 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712489__DOT__s1 = 2U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719901__DOT__s2 = 8U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712489__DOT__s1 = 0U;
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b0__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712250__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                ? 3U : 2U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3519___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712365__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712250__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                ? 0U : 2U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3519___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712365__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712248__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b2__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712253__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b5__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712251__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b3__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3513___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b8__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712359__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712359__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712425__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b19__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4640___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b42__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713486__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713486__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712626__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b21__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4181___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713034__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713034__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713220__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713220__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713034__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713034__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713220__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713220__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3643___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b21__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712489__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712489__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b5__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719886__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F)
                ? 0xfU : 7U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712493__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712431__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719886__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F)
                ? 0U : 7U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712493__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712431__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713487__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4181___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4640___05F)
                ? 0xf0ffU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4640___05F)
                                    ? 0x88ffU : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b36__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4397___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713243__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4273___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713119__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4397___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713243__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4273___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713119__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712578__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b15__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715013__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6078___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715013__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715013__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3612___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b15__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712458__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712458__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b14__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9947___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718793__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712710__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712431__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9947___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718793__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712710__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712431__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716520__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b18__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712431__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712431__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717322__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b27__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717322__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717322__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9956___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b16__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718802__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718802__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712431__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b17__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712431__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712431__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712719__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b16__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712431__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712431__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b21__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10110___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718956__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712490__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712431__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10110___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718956__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712490__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712431__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b27__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7466___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716312__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712325__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712325__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7466___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716312__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712325__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712325__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712501__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b15__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712431__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712431__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6169___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6429___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715275__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715017__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715017__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6429___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715275__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715017__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715017__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715271__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6117___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715271__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715271__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715850__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b42__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715850__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715850__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715720__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6868___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6873___05F)
                ? 0U : 0x4444U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6873___05F)
                                    ? 0U : 0xf4ffU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5115___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713962__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713962__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713973__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu4__02eop_mul)
                ? 0xcU : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713962__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713962__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713973__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu4__02eop_mul)
                ? 0xaU : 0U);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6867___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716173__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716173__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715720__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715720__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716173__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716173__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715720__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715720__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715817__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6969___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715817__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715817__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b5__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716998__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716998__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719478__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719478__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716998__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716998__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719478__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719478__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715893__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7039___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715893__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715893__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715991__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6866___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715991__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715991__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b10__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712571__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                ? 2U : 3U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1278_li1278 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716667__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712612__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3618___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712464__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712571__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                ? 2U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1278_li1278 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716667__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712612__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3618___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712464__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6866___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6971___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715817__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7047___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715893__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6971___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715817__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7047___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715893__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7081___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b35__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715927__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715927__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b11__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712618__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3619___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712465__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712618__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3619___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712465__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b34__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7102___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715948__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7291___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716137__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7102___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715948__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7291___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716137__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b12__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712604__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3620___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712466__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712604__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3620___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712466__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b28__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7256___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716102__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7338___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716184__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7256___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716102__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7338___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716184__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715215__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6366___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715215__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715215__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715234__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6387___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6048___05F)
                ? 0x7fU : 0U) : 0x7fU);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719254__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10402___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719254__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719254__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b20__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10396___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719242__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719276__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719276__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10341___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719187__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719226__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719226__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10396___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719242__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719276__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719276__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10341___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719187__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719226__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719226__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b8__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719202__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719202__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719226__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719226__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719202__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719202__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719226__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719226__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b20__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719233__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719233__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719181__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719181__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719202__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719202__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719233__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719233__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719181__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719181__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719202__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719202__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719262__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10327___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719262__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719262__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719219__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b3__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719219__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719219__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719269__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10346___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10382___05F)
                ? 0xd4U : 0x2bU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10382___05F)
                                     ? 0x2bU : 0xd4U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10322___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10319___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719168__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719168__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10393___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b18__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719239__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719239__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719236__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10328___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719236__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719236__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719225__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10360___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719225__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719225__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10362___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719210__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719210__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719225__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719225__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719210__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719210__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719225__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719225__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10179___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10175___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719025__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719025__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10278___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10281___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719127__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719128__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10281___05F)
                ? 0xe888U : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10281___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719127__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719128__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10281___05F)
                ? 0xfffeU : 0U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718993__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b16__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718993__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718993__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b18__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712204__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                ? 3U : 2U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10864___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719710__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3502___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712348__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712289__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712224__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712204__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                ? 0U : 2U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10864___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719710__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3502___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712348__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712289__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712224__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b19__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719123__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719123__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719118__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719118__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719123__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719123__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719118__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719118__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719014__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b19__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719014__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719014__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712244__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b9__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719037__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10177___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719037__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719037__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719041__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10193___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10194___05F)
                ? 0x30U : 0x55U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10194___05F)
                                     ? 0x55U : 0xcfU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719045__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b7__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719045__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719045__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718022__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b9__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712224__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712224__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719041__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b7__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719041__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719041__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3726___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b11__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712572__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712572__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10200___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10193___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719046__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719046__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3421___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b11__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712267__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712267__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b12__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719914__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                ? 0xfU : 0xeU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3735___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712581__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719914__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                ? 0U : 0xeU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3735___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712581__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719028__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10158___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719028__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719028__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712241__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b12__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3395___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b12__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712241__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712241__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719029__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b11__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719029__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719029__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1945_li1945) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719253__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719253__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10318___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719164__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719253__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719253__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10318___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719164__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718029__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b6__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712224__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712224__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10238___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1945_li1945)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719084__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719084__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712360__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b6__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712360__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712360__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718993__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1945_li1945)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718993__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718993__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712252__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b1__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                ? 3U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                               ? 0U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719029__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1945_li1945)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719029__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719029__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712369__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b1__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712369__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712369__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10220___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1945_li1945)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719066__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719066__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719037__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b11__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719037__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719037__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719000__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b13__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719000__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719000__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719003__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10151___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10156___05F)
                ? 0x30U : 0x55U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10156___05F)
                                     ? 0x55U : 0xcfU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719003__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b13__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719003__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719003__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719010__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10156___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10155___05F)
                ? 0x2bU : 0xb2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10155___05F)
                                     ? 0xb2U : 0x2bU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3492___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b21__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712338__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712338__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719010__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10151___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719010__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719010__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712405__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b21__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712405__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712405__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719030__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10155___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719030__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719030__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719030__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10156___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719030__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719030__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712394__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3467___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712394__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712394__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b2__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718911__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10064___05F)
                ? 0xf8ffU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712415__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712415__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718911__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10064___05F)
                ? 0xffU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712415__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712415__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719548__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10701___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719548__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719548__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10698___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1729_li1729)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719544__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719544__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719467__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b18__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719467__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719467__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b15__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718946__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718946__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712389__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712389__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719467__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719467__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718946__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718946__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712389__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712389__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719467__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719467__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712411__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b18__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712411__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712411__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719538__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10610___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719538__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719538__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712408__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b6__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712408__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712408__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b20__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10618___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719464__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719413__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719413__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718682__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718682__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712406__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712406__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10692___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719538__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10618___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719464__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719413__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719413__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718682__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718682__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712406__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712406__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10692___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719538__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10673___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719561__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719561__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719524__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719524__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719561__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719561__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719524__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719524__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10676___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719562__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719562__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719561__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719561__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719524__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719524__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719562__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719562__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719561__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719561__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719524__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719524__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719533__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10625___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719533__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719533__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719495__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10644___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719495__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719495__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712395__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b11__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712395__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712395__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719496__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10648___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719496__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719496__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b4__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712409__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712409__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0004_li0004 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719572__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10649___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719495__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719496__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719496__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712409__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712409__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0004_li0004 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719572__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10649___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719495__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719496__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719496__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10667___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719563__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719563__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719564__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10669___05F)
                ? 0x69U : 0x96U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719563__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719563__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719564__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10669___05F)
                ? 0x96U : 0x69U);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10629___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719518__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719518__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719563__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719563__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719564__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719564__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719518__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719518__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719563__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719563__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719564__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719564__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719518__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10667___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719518__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719518__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719510__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10659___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719510__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719510__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10658___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719508__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719508__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719566__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719566__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719510__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719510__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719508__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719508__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719566__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719566__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719510__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719510__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719570__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10653___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719570__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719570__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719500__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10652___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719500__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719500__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3684___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716421__DOT__s4 = 0xf0fU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712558__DOT__s4 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712611__DOT__s3 = 0xaaU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716421__DOT__s4 = 0xff55U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712558__DOT__s4 = 0xfaaaU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712611__DOT__s3 = 0xf0U;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7613___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716459__DOT__s1) 
                     >> 1U));
    } else {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3684___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716421__DOT__s4 = 0xf0fU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712558__DOT__s4 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712611__DOT__s3 = 0xccU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716421__DOT__s4 = 0xff33U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712558__DOT__s4 = 0xfcccU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712611__DOT__s3 = 0xf0U;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7613___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716459__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b22__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9554___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718400__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9584___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718430__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716438__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716438__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9554___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718400__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9584___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718430__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716438__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716438__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1442_li1442 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716438__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716438__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10635___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10640___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719569__DOT__s3 = 0x96U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719487__DOT__s3 = 0xf3U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719569__DOT__s3 = 0x69U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719487__DOT__s3 = 0x35U;
        }
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10640___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719569__DOT__s3 = 0x69U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719487__DOT__s3 = 0x35U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719569__DOT__s3 = 0x96U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719487__DOT__s3 = 0x51U;
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10660___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719567__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719567__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719566__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719566__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719567__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719567__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719566__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719566__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717769__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8920___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8922___05F)
                ? 0x3000U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8922___05F)
                                    ? 0xcddfU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716777__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02efract_out_q__05b24__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716777__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716777__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8913___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02efract_out_q__05b22__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717759__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717759__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717110__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02efract_out_q__05b11__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717110__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717110__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8257___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717131__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717131__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717110__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717110__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717131__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717131__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717110__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717110__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717131__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02efract_out_q__05b11__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717131__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717131__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eexp_r__05b6__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718167__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718167__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718171__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718171__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718167__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718167__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718171__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718171__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b23__05d) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3683___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712545__DOT__s4 = 0x3533U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712554__DOT__s4 = 0U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712545__DOT__s4 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712554__DOT__s4 = 0x3533U;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3693___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712539__DOT__s1) 
                     >> 1U));
    } else {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3683___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712545__DOT__s4 = 0x3335U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712554__DOT__s4 = 0U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712545__DOT__s4 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712554__DOT__s4 = 0x3335U;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3693___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712539__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718370__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b23__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3353___05F)
                ? 0xbf00U : 0xbfbfU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3353___05F)
                                         ? 0xbf00U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718370__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b23__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718370__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718370__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718163__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eexp_r__05b5__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718163__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718163__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b23__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717930__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3801___05F)
                ? 0xbf00U : 0xbfbfU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712650__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712650__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717930__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3801___05F)
                ? 0xbf00U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712650__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712650__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712650__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b24__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712650__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712650__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712652__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b23__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712652__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712652__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712652__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b24__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712652__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712652__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eexp_r__05b7__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718191__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718191__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9321___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718167__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9325___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718171__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718191__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718191__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9321___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718167__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9325___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718171__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718277__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9311___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9307___05F)
                ? 0x1feU : 0xe01fU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9307___05F)
                                        ? 0xfe01U : 0x1fe0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9307___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718270__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eexp_r__05b1__05d)
                ? 0xffcU : 0xa3U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718165__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9300___05F)
                ? 1U : 2U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718158__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9311___05F)
                ? 0x7600U : 0x77feU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718270__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eexp_r__05b1__05d)
                ? 0xf3U : 0xffacU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718165__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9300___05F)
                ? 4U : 8U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718158__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9311___05F)
                ? 0x77c8U : 0x4f0fU);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8265___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717126__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717126__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717133__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eexp_r__05b1__05d)
                ? 0xfffcU : 0x3303U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717126__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717126__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717133__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eexp_r__05b1__05d)
                ? 0xff0bU : 0xfff4U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717140__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8278___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8265___05F)
                     ? 0U : 0x3513U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717112__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eexp_r__05b2__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8265___05F)
                ? 0x5e5fU : 0x5f40U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8265___05F)
                                         ? 0xfeU : 0xe000U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715598__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6745___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715598__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715598__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717460__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717460__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717460__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719340__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10489___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719340__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719340__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719367__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10488___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719367__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719367__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717413__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b8__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717413__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717413__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10488___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719341__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719341__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719340__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719340__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719341__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719341__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719340__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719340__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717402__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b7__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717402__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717402__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719362__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10511___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10515___05F)
                ? 0xfdd4U : 0x4000U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10515___05F)
                                         ? 0xfdfdU : 0x5440U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717375__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b12__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717375__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717375__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b17__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10862___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719708__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3821___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712667__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717358__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717358__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10862___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719708__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3821___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712667__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717358__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717358__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712699__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b11__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712699__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712699__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717361__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b16__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717361__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717361__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718694__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9845___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718694__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718694__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717354__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b18__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717354__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717354__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719403__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10447___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719403__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719403__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10538___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b11__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719384__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719384__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719430__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10548___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10546___05F)
                ? 9U : 6U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10546___05F)
                               ? 6U : 9U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719429__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10546___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10547___05F)
                ? 0x44d2U : 0xbb2dU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10547___05F)
                                         ? 0x224bU : 0xddb4U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719429__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10548___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719429__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719429__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719395__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10547___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10548___05F)
                ? 0xfff3U : 0xfbbaU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10548___05F)
                                         ? 0x3000U : 0xa220U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719395__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10546___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719395__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719395__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719431__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10539___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10542___05F)
                ? 0x1788U : 0xe87eU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10542___05F)
                                         ? 0x81eeU : 0x7e18U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718826__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9883___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718826__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718826__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718740__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9876___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9881___05F)
                ? 0x17U : 0xe8U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9881___05F)
                                     ? 0xe8U : 0x17U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719379__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10473___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10527___05F)
                ? 0x33fU : 0x5555U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10527___05F)
                                        ? 0xfcc0U : 0xaaaaU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10478___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719374__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10527___05F)
                ? 0xeU : 1U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719379__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719379__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719374__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10527___05F)
                ? 8U : 7U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719379__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719379__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10543___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719432__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719432__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719431__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719431__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719432__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719432__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719431__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719431__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718728__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9879___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718728__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718728__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718738__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9891___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9879___05F)
                ? 0x7fffU : 0x117U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9879___05F)
                                        ? 0x177fU : 1U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718739__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9887___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9879___05F)
                ? 0x8e18U : 0x71e7U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9879___05F)
                                         ? 0x1871U : 0xe78eU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712612__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b11__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712612__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712612__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718738__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9887___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718738__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718738__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718830__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9901___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718830__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718830__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713748__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b30__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4901___05F)
                ? 2U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4901___05F)
                               ? 0U : 1U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718757__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9908___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718757__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718757__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718742__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9885___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718742__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718742__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712618__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b12__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712618__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712618__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eexp_r__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716825__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7848___05F)
                ? 0xdccU : 0xf2ccU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716708__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716708__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716825__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7848___05F)
                ? 0xf2ccU : 0xdccU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716708__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716708__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712623__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b18__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712623__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712623__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b14__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712549__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                ? 2U : 3U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712606__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712549__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                ? 2U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712606__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712606__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b15__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712606__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712606__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712578__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b16__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712578__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712578__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716717__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7848___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7870___05F)
                ? 0x77c8U : 0x4f0fU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7870___05F)
                                         ? 0x7600U : 0x77feU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7881___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7864___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716727__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716727__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712605__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b17__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712605__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712605__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7869___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02efract_out_q__05b11__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716715__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716715__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713145__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4265___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713145__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713145__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712327__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b27__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712327__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712327__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b47__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713217__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713217__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713292__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713292__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4299___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713145__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713217__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713217__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713292__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713292__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4299___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713145__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717770__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eexp_r__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717770__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717770__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712336__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b23__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712336__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712336__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713752__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b30__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713752__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713752__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712336__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b23__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712336__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712336__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712321__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b23__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712321__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712321__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718896__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10036___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718896__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718896__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718933__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10043___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718933__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718933__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718979__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10084___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718979__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718979__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10070___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718981__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10066___05F)
                ? 0xf1U : 0xff0eU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718926__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718926__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718981__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10066___05F)
                ? 0xff0eU : 0xf1U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718926__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718926__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718385__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9537___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718385__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718385__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10071___05F 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10066___05F)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10070___05F));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718984__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10137___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718984__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718984__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10059___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718985__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718985__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718984__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718984__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718985__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718985__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718984__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718984__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718964__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10108___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10106___05F)
                ? 0x2244U : 0xddbbU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10106___05F)
                                         ? 0x4bd2U : 0xb42dU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718955__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10106___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10108___05F)
                ? 0xff3fU : 0xbfabU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10108___05F)
                                         ? 0x300U : 0x2a02U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718966__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10104___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10102___05F)
                ? 0x2244U : 0xddbbU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10102___05F)
                                         ? 0x4bd2U : 0xb42dU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718951__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10102___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10104___05F)
                ? 0xff3fU : 0xbfabU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10104___05F)
                                         ? 0x300U : 0x2a02U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10020___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10096___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718942__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10031___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718877__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10096___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718942__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10031___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718877__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718974__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10090___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718974__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718974__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719151__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10241___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719151__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719151__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b41__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5295___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714141__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5412___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714258__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5295___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714141__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5412___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714258__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9596___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b22__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718442__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718442__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718443__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9592___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9596___05F)
                ? 0x244dU : 0xdbb2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9596___05F)
                                         ? 0xb224U : 0x4ddbU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714373__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b33__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714373__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714373__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714037__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5102___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714037__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714037__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5105___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5100___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713951__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713951__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b20__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718635__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718635__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718663__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718663__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718635__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718635__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718663__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718663__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9817___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b11__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718663__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718663__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716335__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b20__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716335__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b21__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716335__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716335__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b20__05d) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719900__DOT__s2 = 0xfU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712424__DOT__s1 = 2U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719900__DOT__s2 = 4U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712424__DOT__s1 = 3U;
        }
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719900__DOT__s2 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712424__DOT__s1 = 2U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719900__DOT__s2 = 4U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712424__DOT__s1 = 0U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718671__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9757___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9758___05F)
                ? 0x1eeeU : 0xe111U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9758___05F)
                                         ? 0xe111U : 0x1eeeU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b19__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b22__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3377___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712223__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9566___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718412__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3377___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712223__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9566___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718412__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718610__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9758___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718610__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718610__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9602___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b22__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718448__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718448__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9764___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9757___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718610__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718610__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b38__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6528___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715374__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715173__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715173__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6528___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715374__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715173__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715173__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b37__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6459___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715305__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714918__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714918__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6459___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715305__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714918__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714918__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b38__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714918__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714918__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715232__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715232__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714918__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714918__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715232__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715232__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9795___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0331_li0331)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718641__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718641__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714998__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b37__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714998__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714998__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718651__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9797___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9795___05F)
                ? 0x2244U : 0xddbbU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9795___05F)
                                         ? 0x4bd2U : 0xb42dU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718644__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9795___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9797___05F)
                ? 0xff3fU : 0xbfabU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9797___05F)
                                         ? 0x300U : 0x2a02U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b18__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718639__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718639__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3697___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712543__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3358___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712204__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718639__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718639__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3697___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712543__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3358___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712204__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718655__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9713___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9791___05F)
                ? 0x244dU : 0xdbb2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9791___05F)
                                         ? 0xb224U : 0x4ddbU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1264_li1264) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718561__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718561__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712528__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712528__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9793___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718639__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718561__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718561__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712528__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712528__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9793___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718639__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718659__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9723___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9729___05F)
                ? 0xe0feU : 0x1f01U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9729___05F)
                                         ? 0x1f01U : 0xe0feU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718660__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9724___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9728___05F)
                ? 0xeU : 1U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9728___05F)
                                 ? 1U : 0xeU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718631__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9783___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9784___05F)
                ? 0U : 0x5554U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9784___05F)
                                    ? 0x4440U : 0x5555U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718665__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9736___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718665__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718665__DOT__s3)));
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
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718669__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9766___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718669__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718669__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716330__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b27__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716330__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716330__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7484___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b27__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716330__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716330__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716493__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b27__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3681___05F)
                ? 0xffU : 0x70U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3681___05F)
                                     ? 0U : 0xf0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b27__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716493__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716493__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712452__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712452__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716493__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716493__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712452__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712452__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b2__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712560__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712560__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3402___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712248__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712560__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712560__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3402___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712248__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b8__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3736___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712582__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712598__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3736___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712582__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712598__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712587__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b9__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712587__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b10__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712587__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712587__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b9__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718418__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718418__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3625___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712471__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712598__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712598__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718418__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718418__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3625___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712471__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712598__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712598__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716541__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b11__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716541__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716541__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3624___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b8__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712470__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712470__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3677___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3690___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712536__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3688___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712534__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3690___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712536__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3688___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712534__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b23__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712586__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3690___05F)
                ? 0xcaccU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712531__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712531__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712586__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3690___05F)
                ? 0xcccaU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712531__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712531__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716496__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3680___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716496__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716496__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712545__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b23__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712545__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712545__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712545__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3680___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712545__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712545__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712554__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b23__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712554__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712554__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712554__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3680___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712554__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712554__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712500__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b10__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712500__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712500__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712492__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b8__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712492__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712492__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b20__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712714__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712431__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716538__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716538__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712714__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712431__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716538__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716538__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716514__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b19__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712431__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712431__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716514__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b20__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716514__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716514__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712710__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b15__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712710__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712710__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712463__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b14__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712463__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712463__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712501__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b16__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712501__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712501__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712714__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b21__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712714__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712714__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712719__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b17__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712719__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712719__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b19__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9836___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718682__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9840___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718686__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716520__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716520__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9836___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718682__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9840___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718686__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716520__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716520__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b22__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712484__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F)
                ? 2U : 3U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716589__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716589__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10040___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718886__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712713__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712713__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712490__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712490__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712484__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F)
                ? 2U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716589__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716589__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10040___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718886__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712713__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712713__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712490__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712490__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712431__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b18__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712431__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712431__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8773___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eexp_r__05b6__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717619__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717619__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717927__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b26__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717927__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717927__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717928__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b25__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717928__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717928__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717929__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b24__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717929__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717929__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717930__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b23__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717930__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717930__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b22__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3836___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712682__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8491___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717337__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3836___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712682__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8491___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717337__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3802___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712692__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712692__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712649__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712649__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712692__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712692__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712649__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712649__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b23__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712692__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712692__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712649__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712649__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712692__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712692__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712649__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712649__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712661__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3812___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712661__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712661__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712306__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b11__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712224__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712224__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b17__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712236__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                ? 3U : 2U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3494___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712340__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717981__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712224__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712236__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                ? 0U : 2U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3494___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712340__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717981__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712224__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717981__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b18__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717981__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717981__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b16__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10849___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719695__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3495___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712341__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717986__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712224__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10849___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719695__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3495___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712341__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717986__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712224__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b13__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8131___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716977__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712225__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712224__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8131___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716977__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712225__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712224__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712659__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b27__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712659__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712659__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b20__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3499___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712345__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712288__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712288__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3499___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712345__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712288__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712288__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b19__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3500___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712346__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717969__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712224__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3500___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712346__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717969__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712224__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717969__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b20__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717969__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717969__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0375_li0375 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b22__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718082__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718082__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717466__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b10__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717466__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717466__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8620___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b10__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717466__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717466__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717393__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b10__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717393__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717393__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717393__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b9__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717393__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717393__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b14__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712668__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712668__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717405__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717405__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717368__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717368__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712668__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712668__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717405__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717405__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717368__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717368__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712691__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b5__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712691__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712691__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712691__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b6__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712691__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712691__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b5__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712670__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712670__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717419__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717419__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712670__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712670__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717419__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717419__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712676__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b2__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712676__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712676__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b27__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712213__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712213__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712220__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712220__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3364___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712210__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3365___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712211__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712213__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712213__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712220__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712220__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3364___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712210__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3365___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712211__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717461__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b2__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717461__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717461__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712685__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3835___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3801___05F)
                     ? 3U : 5U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719667__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3827___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719667__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719667__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3838___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717345__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717345__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712685__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712685__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717345__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717345__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712685__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712685__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712369__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b2__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712369__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712369__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712373__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b11__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712373__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712373__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717348__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b20__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717348__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717348__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717348__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b19__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717348__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717348__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719652__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b7__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3737___05F)
                ? 0xb4U : 0xebU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3737___05F)
                                     ? 0x41U : 0xb4U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712601__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b6__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716927__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b21__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716927__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716927__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712601__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b7__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712601__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712601__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712415__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b1__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712415__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712415__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712381__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712381__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712381__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b7__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718029__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718029__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3514___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712360__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712400__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712400__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718029__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718029__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3514___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712360__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712400__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712400__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712409__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b3__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712409__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712409__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712393__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b2__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712393__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712393__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716998__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716998__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716998__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712408__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b5__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712408__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712408__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712392__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b8__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712392__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712392__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712386__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b6__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712386__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712386__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712399__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b9__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712399__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712399__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b10__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712240__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                ? 3U : 2U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712272__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712224__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712240__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                ? 0U : 2U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712272__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712224__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b11__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712272__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712272__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712351__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712351__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712272__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712272__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712351__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712351__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b10__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718022__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718022__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712395__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712395__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718022__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718022__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712395__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712395__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717993__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b12__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712224__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712224__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b13__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717993__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717993__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712352__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712352__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717993__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717993__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712352__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712352__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b12__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712306__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712306__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712380__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712380__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712306__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712306__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712380__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712380__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712224__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b15__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712224__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712224__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b16__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712224__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712224__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716938__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716938__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712224__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712224__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716938__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716938__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b14__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712233__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                ? 3U : 2U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8126___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716972__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718006__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712224__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712233__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3356___05F)
                ? 0U : 2U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8126___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716972__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718006__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712224__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718006__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b15__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718006__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718006__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712339__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b14__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712339__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712339__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b15__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3493___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712339__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3493___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712339__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712350__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b19__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712289__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712289__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712406__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712406__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712289__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712289__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712406__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712406__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b14__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712225__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712225__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712389__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712389__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712225__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712225__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712389__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712389__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b17__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717986__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717986__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712411__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712411__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717986__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717986__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712411__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712411__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b5__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712620__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712620__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716396__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712620__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712620__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716396__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712553__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b13__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712553__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712553__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712553__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b12__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712553__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712553__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b13__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712579__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718397__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718397__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712579__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718397__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718397__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0331_li0331) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718470__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718470__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712528__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712528__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9551___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718397__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9572___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718418__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718470__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718470__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712528__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712528__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9551___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718397__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9572___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718418__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b13__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3616___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712462__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712604__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712604__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3616___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712462__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712604__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712604__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b14__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3703___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712549__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3387___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712233__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718561__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718561__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712542__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712542__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3703___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712549__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3387___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712233__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718561__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718561__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712542__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712542__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b10__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3725___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712571__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3394___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712240__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3725___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712571__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3394___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712240__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b17__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3718___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712564__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3390___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712236__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9789___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718635__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3718___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712564__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3390___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712236__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9789___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718635__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712611__DOT__s2 
        = (0xfU & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_76)
                    ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712611__DOT__s3)
                    : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712611__DOT__s3) 
                       >> 4U)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b2__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712599__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712560__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712560__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712599__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712560__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712560__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712631__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b1__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712631__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b2__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712631__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712631__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712597__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b0__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712597__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b1__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712597__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712597__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b3__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712621__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712599__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712599__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712621__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712599__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712599__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712613__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b4__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712613__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b5__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712613__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712613__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717324__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b25__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717324__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717324__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717325__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b24__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717325__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717325__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712344__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3485___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712344__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712344__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eexp_r__05b0__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716726__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716726__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7862___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716708__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716726__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716726__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7862___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716708__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718648__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9799___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9801___05F)
                ? 0x4ddfU : 0xb220U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9801___05F)
                                         ? 0U : 0xffffU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718386__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9536___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718386__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718386__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b19__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3579___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712425__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716340__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716340__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718512__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718512__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718386__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718386__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3579___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712425__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716340__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716340__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718512__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718512__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718386__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718386__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718505__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9548___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718505__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718505__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718401__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9554___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9552___05F)
                ? 0x8777U : 0x7888U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9552___05F)
                                         ? 0x7888U : 0x8777U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b2__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715237__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715237__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714775__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5927___05F)
                ? 0xacU : 0xa0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715237__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715237__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714775__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5927___05F)
                ? 0xccU : 0x3fU);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b14__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3604___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712450__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712579__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712579__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718401__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718401__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3604___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712450__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712579__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712579__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718401__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718401__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713638__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b29__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713638__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713638__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2104_li2104 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4789___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713638__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713638__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b29__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2086_li2086 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713649__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2088_li2088 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713640__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2086_li2086 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713649__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2088_li2088 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713640__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718432__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9584___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9585___05F)
                ? 2U : 1U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9585___05F)
                               ? 1U : 2U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9577___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718488__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9584___05F)
                ? 0x30U : 0x55U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9586___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718432__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718488__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9584___05F)
                ? 0x55U : 0xcfU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9586___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718432__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9607___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718481__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718481__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718478__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718478__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718481__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718481__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718478__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718478__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718451__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9588___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718451__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718451__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8717___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8700___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717563__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717563__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8705___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8699___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717551__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717551__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8255___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8250___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717101__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717101__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715145__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b42__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715145__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715145__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714896__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6046___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714896__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714896__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714962__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b42__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714962__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714962__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b41__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714994__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6038___05F)
                ? 3U : 2U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6346___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715192__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715287__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715287__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715013__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715013__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715145__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715145__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714962__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714962__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714994__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6038___05F)
                ? 0U : 2U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6346___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715192__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715287__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715287__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715013__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715013__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715145__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715145__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714962__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714962__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714896__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b42__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714896__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714896__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715185__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b32__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715185__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715185__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714991__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6144___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714991__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714991__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715348__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6149___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715348__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715348__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715347__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6069___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715347__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715347__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715267__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b17__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715267__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715267__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715267__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715267__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714775__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714775__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715267__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715267__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714775__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714775__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715265__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b14__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715265__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715265__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5994___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715429__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715429__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715255__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715255__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715234__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715234__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715265__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715265__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715429__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715429__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715255__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715255__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715234__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715234__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715265__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715265__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6445___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b2__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715291__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715291__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715383__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b36__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715383__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715383__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715387__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b39__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715387__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715387__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715381__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b45__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715381__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715381__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b47__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6224___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715070__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6535___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715381__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6224___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715070__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6535___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715381__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b45__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6170___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715016__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6457___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715303__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6266___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715112__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6391___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715237__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6170___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715016__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6457___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715303__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6266___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715112__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6391___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715237__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715249__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6402___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715249__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715249__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b27__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715314__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715314__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715249__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715249__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715314__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715314__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715249__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715249__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715250__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b30__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715250__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715250__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b29__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715342__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715342__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715315__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715315__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6404___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715250__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715342__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715342__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715315__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715315__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6404___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715250__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6534___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b30__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715380__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715380__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6148___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b40__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714994__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714994__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712438__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3591___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712438__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712438__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712476__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b1__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712476__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712476__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b0__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712476__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712476__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3640___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712486__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712476__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712476__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3640___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712486__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712508__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b1__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712431__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712431__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b6__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712469__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712469__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712707__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712707__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712493__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712493__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712469__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712469__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712707__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712707__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712493__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712493__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b6__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712620__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712620__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716396__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716396__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718488__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718488__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712469__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712469__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712620__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712620__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716396__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716396__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718488__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718488__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712469__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712469__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712475__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712475__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712475__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b4__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712621__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712621__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3629___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712475__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712621__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712621__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3629___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712475__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712716__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b4__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712431__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712431__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712716__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b5__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712716__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712716__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b3__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718761__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718761__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716608__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712431__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718761__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718761__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716608__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712431__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716608__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b4__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716608__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716608__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b22__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3638___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712484__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7743___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716589__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712611__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712611__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712626__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712626__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3638___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712484__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7743___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716589__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712611__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712611__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712626__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712626__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712717__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b2__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712431__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712431__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712717__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b3__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712717__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712717__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712508__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b2__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712508__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712508__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3588___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3573___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712434__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712434__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712445__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b24__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712445__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712445__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b23__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712447__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712447__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712445__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712445__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712447__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712447__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712445__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712445__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b15__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6760___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715606__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6807___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715653__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6760___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715606__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6807___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715653__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712394__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b22__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712394__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712394__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3548___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b22__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712394__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712394__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717940__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b22__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717940__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717940__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717980__DOT__s2 
        = (0xfU & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                    ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717980__DOT__s3)
                    : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717980__DOT__s3) 
                       >> 4U)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b22__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717980__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717980__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712302__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712302__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712405__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712405__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717980__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717980__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712302__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712302__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712405__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712405__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3406___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b1__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712252__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712252__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3404___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712250__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712250__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3405___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b3__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712251__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712251__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3407___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b5__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712253__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712253__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3398___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b9__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712244__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712244__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10228___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b21__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719074__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719074__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718368__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b25__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718368__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718368__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719092__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b21__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719092__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719092__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10246___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10241___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719092__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719092__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10224___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b21__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719070__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719070__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b24__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718369__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718369__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712226__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712226__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718369__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718369__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712226__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712226__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b23__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712344__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712344__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712200__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712200__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712226__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712226__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712344__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712344__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712200__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712200__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712226__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712226__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712217__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3370___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712217__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712217__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3371___05F 
        = (1U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_8)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712217__DOT__s1)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712217__DOT__s1) 
                     >> 1U)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9237___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718363__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718363__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718364__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718364__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718365__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718365__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718366__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718366__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718367__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718367__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718368__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718368__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718369__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718369__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718370__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718370__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718363__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718363__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718364__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718364__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718365__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718365__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718366__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718366__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718367__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718367__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718368__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718368__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718369__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718369__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718370__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718370__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0351_li0351) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718084__DOT__s4 = 0x5555U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718363__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718363__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718364__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718364__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718365__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718365__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718366__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718366__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718084__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9237___05F)
                ? 0x1051U : 0x5555U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718363__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718363__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718364__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718364__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718365__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718365__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718366__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718366__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717965__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3368___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3349___05F)
                ? 0xbfabU : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9315___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9309___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718161__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718161__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713888__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5025___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713888__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713888__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5103___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5141___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713987__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713973__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713973__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5141___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713987__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713973__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713973__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02einf_mul2) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713962__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713962__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713997__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713997__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713962__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713962__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713997__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713997__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713997__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5115___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713997__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713997__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02einf_mul2) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5191___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714037__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5127___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713973__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5191___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714037__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5127___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713973__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712403__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3519___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3485___05F)
                ? 0xefU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3485___05F)
                                  ? 0xefU : 0xffU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3467___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712321__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712321__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712403__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712403__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712321__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712321__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712403__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712403__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712363__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3516___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712363__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712363__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712363__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b6__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712363__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712363__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712342__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3494___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3495___05F)
                     ? 0U : 1U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712372__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3513___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3486___05F)
                     ? 3U : 5U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712347__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3499___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3500___05F)
                ? 0U : 0x40U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3500___05F)
                                  ? 0U : 0xffU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7872___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716723__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716723__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716721__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7874___05F)
                ? 1U : 2U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716723__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716723__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716721__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7874___05F)
                ? 3U : 0U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8711___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02efract_out_q__05b7__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717557__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717557__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712879__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4024___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712879__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712879__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712879__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4021___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712879__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712879__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712886__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4024___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712886__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712886__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714759__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5899___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714759__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714759__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6798___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6797___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715644__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715644__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4042___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712892__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4045___05F)
                ? 0xaU : 5U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712899__DOT__s2 = 0U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712892__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4045___05F)
                ? 0xcU : 3U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712899__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02einf_mul2)
                ? 1U : 0U);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6806___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715671__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6759___05F)
                ? 0U : 7U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715672__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6770___05F)
                ? 0U : 0xa0ffU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715671__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6759___05F)
                ? 0U : 0x33U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715672__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6770___05F)
                ? 0U : 0xbfb3U);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b47__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6757___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715603__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7385___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716231__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715671__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715671__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715672__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715672__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6757___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715603__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7385___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716231__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715671__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715671__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715672__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715672__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6773___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6761___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715619__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715619__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712858__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b2__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712858__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712858__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712881__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4017___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712881__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712881__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4011___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4005___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712857__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712857__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713941__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5047___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713941__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713941__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5061___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5053___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713907__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713907__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715598__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6738___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715598__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715598__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715636__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6779___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715636__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715636__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6790___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6745___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715636__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715636__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714844__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5985___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714844__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714844__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712862__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4015___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712862__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712862__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712842__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3988___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712842__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712842__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714815__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5968___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5927___05F)
                ? 2U : 1U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5927___05F)
                               ? 1U : 2U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5969___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b2__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714815__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714815__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714774__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5927___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714774__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714774__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15705__02eC__05b14__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15705__02eS__05b13__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15705__02eC__05b13__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b13__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714602__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5750___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5755___05F)
                ? 0xdfc0U : 0xdfdfU) : 0xdfdfU);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713639__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b30__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713639__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713639__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7466___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716325__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716325__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716313__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716313__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716325__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716325__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716313__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716313__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717483__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15773__02eS__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717483__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717483__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7643___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716491__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                ? 0xaU : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716494__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3681___05F)
                ? 0xcU : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716496__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716496__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716491__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                ? 0xaaU : 0xccU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716494__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3681___05F)
                ? 0xccU : 0xaaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716496__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716496__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1029_li1029 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15739__02eS__05b1__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717048__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717048__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3486___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712366__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3519___05F)
                ? 0U : 0x3fU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717324__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717324__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717325__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717325__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717326__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717326__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717319__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1029_li1029)
                ? 1U : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712366__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3519___05F)
                ? 0U : 0x5fU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717324__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717324__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717325__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717325__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717326__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717326__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717319__DOT__s2 = 0U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5775___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b28__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714621__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714621__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15773__02eC__05b13__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15773__02eS__05b12__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15773__02eC__05b12__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b12__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719439__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10496___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10515___05F)
                ? 0x1f73U : 0xe08cU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10515___05F)
                                         ? 0x8c18U : 0x73e7U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15682__02eC__05b13__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15682__02eS__05b12__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15682__02eC__05b12__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b12__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713754__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4894___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713754__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713754__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713754__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b30__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713754__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713754__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713745__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4894___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713745__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713745__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b30__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2010_li2010 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713748__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713752__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713752__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2010_li2010 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713748__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713752__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713752__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15807__02eC__05b13__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15807__02eS__05b12__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15807__02eC__05b12__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b12__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6452___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b23__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715298__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715298__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15739__02eC__05b13__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15739__02eS__05b12__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15739__02eC__05b12__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b12__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0032_li0032 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0028_li0028)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719441__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719441__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10507___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10503___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719353__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719353__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719440__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10496___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10507___05F)
                ? 0x96U : 0x69U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10507___05F)
                                     ? 0x69U : 0x96U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713607__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4760___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713607__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713607__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b22__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10210___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719056__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10154___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719000__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10199___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719045__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10210___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719056__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10154___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719000__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10199___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719045__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718777__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9924___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718777__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718777__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9930___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718834__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718834__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9931___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718777__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718834__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718834__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9931___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718777__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0141_li0141 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9924___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718834__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718834__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718672__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9750___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718672__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718672__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b20__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3578___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712424__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718618__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718618__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718671__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718671__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0166_li0166 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718672__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3578___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712424__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718618__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718618__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718671__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718671__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712557__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0166_li0166 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718672__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719151__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10242___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719151__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719151__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0086_li0086 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b21__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719151__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719151__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713138__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4187___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4291___05F)
                ? 0xafcfU : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0112_li0112 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10058___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718985__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718985__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714587__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5740___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714587__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714587__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714361__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5185___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714361__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714361__DOT__s2)));
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
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714645__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0038)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5798___05F)
                ? 0xfcU : 0xe8U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5798___05F)
                                     ? 0xe8U : 0xc0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02efract_out_d__05b12__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15943__02eC__05b12__05d) 
           ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15943__02eS__05b12__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15943__02eC__05b13__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15943__02eS__05b12__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15943__02eC__05b12__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b12__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15943__02eS__05b13__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efractb_out__05b13__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719865__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719865__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719866__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efractb_out__05b14__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15853__02eC__05b14__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719866__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719866__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15853__02eC__05b15__05d 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efractb_out__05b14__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15853__02eC__05b14__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02efract_out_d__05b12__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15967__02eC__05b12__05d) 
           ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15967__02eS__05b12__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15967__02eC__05b13__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15967__02eS__05b12__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15967__02eC__05b12__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b12__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15967__02eS__05b13__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efractb_out__05b13__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719934__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719934__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719935__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efractb_out__05b14__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15862__02eC__05b14__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719935__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719935__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15862__02eC__05b15__05d 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efractb_out__05b14__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15862__02eC__05b14__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02efract_out_d__05b12__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15871__02eC__05b12__05d) 
           ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15871__02eS__05b12__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15871__02eC__05b13__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15871__02eS__05b12__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15871__02eC__05b12__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b12__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15871__02eS__05b13__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efractb_out__05b13__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719742__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719742__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719743__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efractb_out__05b14__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15841__02eC__05b14__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719743__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719743__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15841__02eC__05b15__05d 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efractb_out__05b14__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15841__02eC__05b14__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02efract_out_d__05b12__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15919__02eC__05b12__05d) 
           ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15919__02eS__05b12__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15919__02eC__05b13__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15919__02eS__05b12__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15919__02eC__05b12__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b12__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15919__02eS__05b13__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efractb_out__05b13__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719817__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719817__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719818__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efractb_out__05b14__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15844__02eC__05b14__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719818__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719818__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15844__02eC__05b15__05d 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efractb_out__05b14__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15844__02eC__05b14__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02efract_out_d__05b12__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15895__02eC__05b12__05d) 
           ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15895__02eS__05b12__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15895__02eC__05b13__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15895__02eS__05b12__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15895__02eC__05b12__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b12__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15895__02eS__05b13__05d 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efractb_out__05b13__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719768__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719768__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719769__DOT__s1 
        = (3U & ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efractb_out__05b14__05d) 
                        ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15856__02eC__05b14__05d)))
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719769__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719769__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15856__02eC__05b15__05d 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efractb_out__05b14__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15856__02eC__05b14__05d));
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
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714245__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b3__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714245__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714245__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7204___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b40__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716050__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716050__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4371___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b1__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713217__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713217__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713585__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b37__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713585__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713585__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714206__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b40__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714206__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714206__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714579__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5729___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5732___05F)
                     ? 0xfdU : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0061) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713781__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713781__DOT__s3) 
                       >> 4U));
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4931___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713832__DOT__s4 = 0xaafcU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713829__DOT__s4 = 0xffffU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713832__DOT__s4 = 0x5503U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713829__DOT__s4 = 0xaaa8U;
        }
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713781__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713781__DOT__s3));
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4931___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713832__DOT__s4 = 0x5503U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713829__DOT__s4 = 0xaaa8U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713832__DOT__s4 = 0xaafcU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713829__DOT__s4 = 0U;
        }
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
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713793__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0094)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4918___05F)
                ? 1U : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4918___05F)
                               ? 2U : 1U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714706__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5808___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5813___05F)
                ? 2U : 1U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5813___05F)
                               ? 1U : 2U));
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
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713598__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4748___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713598__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713598__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4221___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4215___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713067__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713067__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6435___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6039___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715281__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715281__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0056) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1983_li1983 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713836__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4942___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713788__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1983_li1983 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713836__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4942___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713788__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3902___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0165)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712748__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712748__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0199) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712751__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712751__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712755__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712755__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712751__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712751__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712755__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712755__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712753__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3904___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712753__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712753__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712758__DOT__s1 
        = (3U & ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx4_mul__02e____VhshiHk0hBnMBg5YmEz4uFPvtCA3Y2PVaOtAj79meNrc__DOT__z_out_reg 
                                >> 0x1eU))) ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712758__DOT__s2) 
                                               >> 2U)
                  : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712758__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712732__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0202)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712732__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712732__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715313__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6345___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6466___05F)
                ? 0U : 0xef00U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6466___05F)
                                    ? 0U : 0xefefU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6472___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6071___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715318__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715318__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7145___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b43__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715991__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715991__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b37__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7167___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716013__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7254___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716100__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7167___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716013__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7254___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716100__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b44__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715785__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715785__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7004___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715850__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715785__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715785__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7004___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715850__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715912__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7061___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7065___05F)
                ? 0xf8U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7065___05F)
                                  ? 0xffU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7227___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b38__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716073__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716073__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b27__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7245___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716091__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716066__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716066__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7245___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716091__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716066__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716066__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714120__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714120__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714120__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714265__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b35__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714265__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714265__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714230__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5382___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5383___05F)
                ? 0xa0U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5383___05F)
                                  ? 0xcfU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714292__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5440___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5445___05F)
                ? 0xff0fU : 0xee0eU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5445___05F)
                                         ? 0xff0fU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5530___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5111___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714376__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714376__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5322___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5205___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714168__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714168__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7300___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b1__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716146__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716146__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713612__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3978___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713612__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713612__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713034__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4180___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713034__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713034__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713189__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4339___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713189__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713189__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715193__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6344___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6346___05F)
                ? 1U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6986___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715832__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715832__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7064___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b33__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715910__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715910__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716189__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7116___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716189__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716189__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716087__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b36__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716087__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716087__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716159__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7147___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716159__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716159__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716148__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b25__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716148__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716148__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4103___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4392___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713493__DOT__s3 = 0x44U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713239__DOT__s3 = 0xfaU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713493__DOT__s3 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713239__DOT__s3 = 0U;
        }
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4392___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713493__DOT__s3 = 0xf0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713239__DOT__s3 = 0xccU;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713493__DOT__s3 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713239__DOT__s3 = 0U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713244__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4397___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713244__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713244__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715375__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6525___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6528___05F)
                     ? 0x5f3fU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715271__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b11__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715271__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715271__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7327___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b31__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716173__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716173__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715929__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7081___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715929__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715929__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716105__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7256___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716105__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716105__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715215__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6120___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715215__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715215__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719253__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b22__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719253__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719253__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719256__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10313___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10318___05F)
                ? 0x1187U : 0xee78U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10318___05F)
                                         ? 0x88e1U : 0x771eU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10371___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719276__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719276__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719219__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719219__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719276__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719276__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719219__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719219__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719259__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10322___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10396___05F)
                ? 0xb2U : 0x4dU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10396___05F)
                                     ? 0x4dU : 0xb2U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10393___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719260__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10392___05F)
                ? 2U : 1U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719243__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10396___05F)
                ? 0x7fU : 0x15U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719260__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10392___05F)
                ? 1U : 2U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719243__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10396___05F)
                ? 0x57U : 1U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719188__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10340___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10341___05F)
                ? 0x2bbfU : 2U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10341___05F)
                                    ? 0xbfffU : 0x22bU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719233__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b10__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719233__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719233__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719236__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10338___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719236__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719236__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719181__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b12__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719181__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719181__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719210__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10361___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719210__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719210__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719114__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10181___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10179___05F)
                ? 0x69U : 0x96U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10179___05F)
                                     ? 0x96U : 0x69U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b20__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719123__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719123__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719118__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719118__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719123__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719123__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719118__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719118__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719014__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b18__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719014__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719014__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10200___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10205___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719051__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719107__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10204___05F)
                ? 0xe8U : 0x17U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10205___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719051__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719107__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10204___05F)
                ? 0x17U : 0xe8U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719028__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10179___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719028__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719028__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719548__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10697___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719548__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719548__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10698___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719546__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719546__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719549__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10701___05F)
                ? 0xaaaaU : 0x88aaU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719546__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719546__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719549__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10701___05F)
                ? 0xaa0aU : 0x8020U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719559__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10686___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10684___05F)
                ? 0x22ccU : 0xdd33U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10684___05F)
                                         ? 0xb40fU : 0x4bf0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719534__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10684___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10686___05F)
                ? 0x5500U : 0x705U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10686___05F)
                                        ? 0xff77U : 0x7f5fU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719562__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10674___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719562__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719562__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719457__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10608___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719457__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719457__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719555__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10616___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10618___05F)
                ? 0x188eU : 0xe771U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10618___05F)
                                         ? 0x7118U : 0x8ee7U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719536__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10617___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10618___05F)
                ? 0x80U : 0xfeU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10618___05F)
                                     ? 0xe8U : 0xffU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10662___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10657___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719508__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719508__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10651___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719570__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719570__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719500__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719500__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719570__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719570__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719500__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719500__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10634___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719569__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719569__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719487__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719487__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719569__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719569__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719487__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719487__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716777__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02efract_out_q__05b25__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716777__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716777__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717763__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8913___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8905___05F)
                ? 0x11U : 0xffU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8905___05F)
                                     ? 1U : 0xfU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718163__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9294___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718163__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718163__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718191__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eexp_r__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718191__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718191__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eexp_r__05b2__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718277__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718277__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718158__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718158__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718277__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718277__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718158__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718158__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718270__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eexp_r__05b0__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718270__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718270__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718165__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eexp_r__05b1__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718165__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718165__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717126__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eexp_r__05b0__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717126__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717126__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717133__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8283___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717133__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717133__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717112__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8254___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717112__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717112__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719367__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10490___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719367__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719367__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718761__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9912___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718761__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718761__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3478___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716921__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8074___05F)
                ? 0x40U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712325__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712325__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716921__DOT__s3 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712325__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712325__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b19__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10567___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719413__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10562___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719408__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10567___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719413__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10562___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719408__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718957__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10110___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718957__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718957__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10557___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10446___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719403__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719403__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9956___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718806__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718806__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718804__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9957___05F)
                ? 0xe8U : 0x17U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718806__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718806__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718804__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9957___05F)
                ? 0x17U : 0xe8U);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10538___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719390__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10542___05F)
                ? 0xffdfU : 0x5d05U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719432__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719432__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719390__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10542___05F)
                ? 0xdf5dU : 0x500U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719432__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719432__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9947___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718801__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718801__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718795__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9948___05F)
                ? 0xe8U : 0x17U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718801__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718801__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718795__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9948___05F)
                ? 0x17U : 0xe8U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718740__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9880___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718740__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718740__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719374__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10475___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719374__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719374__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10495___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10483___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719341__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719341__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718728__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9877___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718728__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718728__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718739__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9886___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718739__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718739__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718757__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9902___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718757__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718757__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9896___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9884___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718742__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718742__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716717__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eexp_r__05b2__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716717__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716717__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716837__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7870___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7881___05F)
                ? 0x1eU : 0x87U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7881___05F)
                                     ? 0xe1U : 0x78U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716731__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7881___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7884___05F)
                ? 0x4182U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7884___05F)
                                    ? 0x2841U : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10041___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10050___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718896__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10087___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718933__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10050___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718896__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10087___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718933__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718981__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10079___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718981__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718981__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718926__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10078___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718926__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718926__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718911__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10063___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718911__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718911__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718964__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10010___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718964__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718964__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718966__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10015___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718966__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718966__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1266_li1266) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10100___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718946__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10094___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718940__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10092___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718938__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10100___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718946__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10094___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718940__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10092___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718938__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717690__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8725___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717690__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717690__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714590__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5742___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714590__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714590__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5527___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b32__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714373__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714373__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714463__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5083___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5105___05F)
                ? 0xbU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5105___05F)
                                 ? 4U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714460__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5094___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5105___05F)
                     ? 0xfff8U : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5105___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713952__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713952__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713988__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713988__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713959__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713959__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713967__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713967__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713952__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713952__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713988__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713988__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713959__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713959__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713967__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713967__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718651__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9704___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718651__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718651__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718659__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9728___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718659__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718659__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7484___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716490__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7643___05F)
                ? 0U : 0xeU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716491__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716491__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716494__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716494__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716490__DOT__s2 = 0xeU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716491__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716491__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716494__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716494__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712630__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3736___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712611__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712611__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716350__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3690___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3778___05F)
                ? 0x10U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716493__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3678___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716493__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716493__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____Vcellinp____024abc__024712188__024auto_712540__A 
        = (((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b23__05d) 
            << 4U) | (((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b23__05d) 
                       << 3U) | (((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3680___05F) 
                                  << 2U) | (((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3693___05F) 
                                             << 1U) 
                                            | (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3692___05F)))));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712540__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3693___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712540__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712540__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8493___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0687_li0687 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717469__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717927__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717927__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717928__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717928__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717929__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717929__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717930__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717930__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0687_li0687 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717469__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717927__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717927__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717928__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717928__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717929__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717929__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717930__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717930__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717342__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3836___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717337__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717337__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3811___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3815___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712661__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712659__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712659__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3815___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712661__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712659__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712659__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b15__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3822___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712668__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712696__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712696__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3822___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712668__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712696__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712696__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b6__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3824___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712670__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717412__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717412__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3824___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712670__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717412__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717412__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b3__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3830___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712676__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717433__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717433__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3830___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712676__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717433__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717433__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3829___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712675__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717447__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717447__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3829___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712675__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717447__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717447__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717345__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b21__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717345__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717345__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717425__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717425__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717425__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b13__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712695__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716492__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b28__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716492__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716492__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712588__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3718___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                ? 0x1111U : 0x505U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3679___05F)
                                        ? 0x1133U : 0x50fU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712558__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3697___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712558__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712558__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7880___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7851___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716726__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716726__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718648__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9699___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718648__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718648__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718381__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9532___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718381__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718381__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718505__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9547___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718505__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718505__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718487__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9591___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9596___05F)
                ? 0xffbfU : 0x2b02U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9596___05F)
                                         ? 0xbf2bU : 0x200U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9606___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718481__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718481__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9632___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718478__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718481__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718481__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9632___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718478__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717564__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8716___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8717___05F)
                ? 7U : 8U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8717___05F)
                               ? 0xfU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717574__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8705___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8716___05F)
                ? 0x4001U : 0x8002U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8716___05F)
                                         ? 0x140U : 0x280U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8255___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717122__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8275___05F)
                ? 0x3aU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717116__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8267___05F)
                ? 2U : 1U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717122__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8275___05F)
                ? 0xf3U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717116__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8267___05F)
                ? 1U : 2U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714886__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6037___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714886__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714886__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715429__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6070___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715429__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715429__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b34__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715185__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715185__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714991__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714991__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715347__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715347__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715185__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715185__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714991__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714991__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715347__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715347__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715342__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b28__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715342__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715342__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715314__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b25__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715314__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715314__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6537___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b35__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715383__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715383__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715387__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6538___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715387__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715387__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715255__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6408___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715255__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715255__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6148___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715411__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715110__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714997__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714997__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715411__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715110__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714997__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714997__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6074___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714926__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714926__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715159__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715159__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714926__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714926__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715159__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715159__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6170___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715130__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715110__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715144__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715144__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715017__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715017__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715377__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715377__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715130__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715110__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715144__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715144__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715017__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715017__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715377__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715377__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712438__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3589___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712438__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712438__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719712__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3610___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15705__02eS__05b18__05d)
                ? 0xe000U : 0x1fffU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15705__02eS__05b18__05d)
                                         ? 0x1fffU : 0xe000U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712460__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3612___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3613___05F)
                     ? 0U : 0xf1U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712472__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3625___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3577___05F)
                     ? 0xaU : 0xcU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712452__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3587___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712452__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712452__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712243__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3395___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3396___05F)
                     ? 0U : 0xf1U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712237__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3389___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3390___05F)
                     ? 0U : 1U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712260__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3357___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3413___05F)
                     ? 0U : 0x40ffU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712257__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3402___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3404___05F)
                ? 0U : 0xcc00U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3404___05F)
                                    ? 0U : 0xcfcdU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712254__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3406___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3407___05F)
                     ? 0U : 1U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712290__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3399___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712290__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712290__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3367___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3349___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712213__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712213__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718169__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9300___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9315___05F)
                ? 1U : 0xeU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9315___05F)
                                 ? 0U : 0xfU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5042___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5027___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713888__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713888__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5116___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5097___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713962__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713962__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7869___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716723__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716723__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7875___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716721__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716723__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716723__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7875___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716721__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717653__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eexp_r__05b1__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8711___05F)
                ? 0xdccU : 0xf2ccU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8711___05F)
                                        ? 0xf2ccU : 0xdccU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8711___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8705___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717657__DOT__s4 = 0xc0e0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717565__DOT__s4 = 0x4f0fU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717657__DOT__s4 = 0xc1fU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717565__DOT__s4 = 0x77c8U;
        }
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8705___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717657__DOT__s4 = 1U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717565__DOT__s4 = 0x77feU;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717657__DOT__s4 = 0xccfeU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717565__DOT__s4 = 0x7600U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712910__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4045___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712910__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712910__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5913___05F 
        = (1U & (((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b46__05d) 
                  | (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b47__05d))
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714759__DOT__s1)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714759__DOT__s1) 
                     >> 1U)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5945___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714795__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5948___05F)
                ? 0x4000U : 0xbfffU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714800__DOT__s4 = 0U;
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5948___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714795__DOT__s4 = 0xbfffU;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714800__DOT__s4 = 0xbfffU;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714795__DOT__s4 = 0x4000U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714800__DOT__s4 = 0x4000U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714809__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5948___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5962___05F)
                ? 0x7fU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5962___05F)
                                  ? 0xd5U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715650__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6798___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6760___05F)
                ? 0x81U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6760___05F)
                                  ? 0x42U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4040___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4020___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712886__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712886__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715655__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6807___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6808___05F)
                     ? 0xfbU : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6744___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715620__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6773___05F)
                ? 0x77ffU : 0xfU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715598__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715598__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715620__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6773___05F)
                ? 0xffffU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715598__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715598__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6768___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6764___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715614__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715614__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712858__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b0__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712858__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712858__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715294__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b9__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715294__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715294__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714799__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5952___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5944___05F)
                     ? 1U : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4011___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4423___05F 
            = (1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4050___05F)));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4069___05F 
            = (1U & (~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4003___05F)));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712903__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b0__05d)
                ? 2U : 1U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4423___05F = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4069___05F = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712903__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b0__05d)
                ? 3U : 0U);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5061___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713927__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713927__DOT__s3) 
                       >> 4U));
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5069___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713916__DOT__s4 = 0x40U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713918__DOT__s4 = 0x4444U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713916__DOT__s4 = 0xffbfU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713918__DOT__s4 = 0xfb0fU;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713955__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713955__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713917__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713917__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713932__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713932__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713927__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713927__DOT__s3));
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5069___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713916__DOT__s4 = 0xf00bU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713918__DOT__s4 = 0xf00bU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713916__DOT__s4 = 0xff4U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713918__DOT__s4 = 0xffbfU;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713955__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713955__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713917__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713917__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713932__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713932__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713953__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b1__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5061___05F)
                ? 0xff10U : 0xefU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5061___05F)
                                       ? 0xefU : 0xff10U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714844__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5959___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714844__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714844__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714832__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b6__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714832__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714832__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712862__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4014___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712862__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712862__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3996___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3987___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712842__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712842__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6016___05F 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5948___05F)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6005___05F));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15705__02eC__05b15__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15705__02eS__05b14__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15705__02eC__05b14__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b14__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714602__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5748___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714602__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714602__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713639__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4791___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713639__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713639__DOT__s2)));
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
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8637___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15773__02eS__05b9__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717483__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717483__DOT__s1)));
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
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1790_li1790 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5775___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714637__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714637__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714625__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b30__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5775___05F)
                ? 7U : 0x77U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5775___05F)
                                  ? 0x77U : 0x74U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714622__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b30__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5775___05F)
                ? 2U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5775___05F)
                               ? 0U : 1U));
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
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15773__02eC__05b14__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15773__02eS__05b13__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15773__02eC__05b13__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b13__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15682__02eC__05b14__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15682__02eS__05b13__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15682__02eC__05b13__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b13__05d));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2010_li2010) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713749__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4893___05F)
                ? 0U : 0x7fU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713756__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713756__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713750__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4891___05F)
                ? 0x80U : 0x7fU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713749__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4893___05F)
                ? 0x1fU : 0xe0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713756__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713756__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713750__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4891___05F)
                ? 0x1fU : 0xe0U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713751__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b28__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2010_li2010)
                ? 0x17e8U : 0x8e71U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li2010_li2010)
                                         ? 0xe817U : 0x718eU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4899___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4897___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713745__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713745__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15807__02eC__05b14__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15807__02eS__05b13__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15807__02eC__05b13__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b13__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715299__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6452___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715299__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715299__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15739__02eC__05b14__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15739__02eS__05b13__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15739__02eC__05b13__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b13__05d));
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
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713607__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4184___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713607__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713607__DOT__s3)));
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
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719015__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10154___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719015__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719015__DOT__s2)));
}
