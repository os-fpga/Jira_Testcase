// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_syn2.h for the primary calling header

#include "Vco_sim_syn2__pch.h"
#include "Vco_sim_syn2___024root.h"

VL_INLINE_OPT void Vco_sim_syn2___024root___nba_sequent__TOP__7(Vco_sim_syn2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_syn2___024root___nba_sequent__TOP__7\n"); );
    // Body
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712869__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b13__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712869__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712869__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3970___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b14__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712816__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712816__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715639__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b39__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715639__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715639__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712871__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b19__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712871__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712871__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4002___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b17__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712848__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712848__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b27__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713883__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713883__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713886__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713886__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713903__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713903__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713883__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713883__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713886__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713886__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713903__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713903__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5028___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b28__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713874__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713874__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5904___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b15__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714750__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714750__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b42__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712877__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712877__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712855__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712855__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712877__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712877__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712855__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712855__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714739__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b21__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714739__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714739__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715278__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b22__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715278__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715278__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714749__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b16__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714749__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714749__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712874__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b31__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712874__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712874__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b29__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712872__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712872__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712828__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712828__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712826__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712826__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712872__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712872__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712828__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712828__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712826__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712826__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714757__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b43__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714757__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714757__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712852__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b32__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712852__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712852__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712824__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b37__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712824__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712824__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714787__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b42__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714787__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714787__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b26__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714779__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714779__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5924___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714770__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714779__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714779__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5924___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714770__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715573__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu0__02eopa_inf)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715573__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715573__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713867__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu0__02eopb_00)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713867__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713867__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714734__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu0__02eopa_inf)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714734__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714734__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712808__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu0__02eopb_00)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712808__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712808__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx3_mul__02e____VhshWScOvPjVsHc5N4LU1a7DMLFW9Mbt76PiveC4emTC__DOT__z_out 
        = (0x3fffffffffULL & vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx3_mul__02e____VhshWScOvPjVsHc5N4LU1a7DMLFW9Mbt76PiveC4emTC__DOT__mult_out);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx3_mul__02e____VhshWScOvPjVsHc5N4LU1a7DMLFW9Mbt76PiveC4emTC__DOT__add_sub_out 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx3_mul__02e____VhshWScOvPjVsHc5N4LU1a7DMLFW9Mbt76PiveC4emTC__DOT__subtract_int)
            ? (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx3_mul__02e____VhshWScOvPjVsHc5N4LU1a7DMLFW9Mbt76PiveC4emTC__DOT__add_sub_in 
               - vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx3_mul__02e____VhshWScOvPjVsHc5N4LU1a7DMLFW9Mbt76PiveC4emTC__DOT__mult_out)
            : (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx3_mul__02e____VhshWScOvPjVsHc5N4LU1a7DMLFW9Mbt76PiveC4emTC__DOT__add_sub_in 
               + vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx3_mul__02e____VhshWScOvPjVsHc5N4LU1a7DMLFW9Mbt76PiveC4emTC__DOT__mult_out));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx4_mul__02e____VhshiHk0hBnMBg5YmEz4uFPvtCA3Y2PVaOtAj79meNrc__DOT__z_out 
        = (0x3fffffffffULL & vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx4_mul__02e____VhshiHk0hBnMBg5YmEz4uFPvtCA3Y2PVaOtAj79meNrc__DOT__mult_out);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx4_mul__02e____VhshiHk0hBnMBg5YmEz4uFPvtCA3Y2PVaOtAj79meNrc__DOT__add_sub_out 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx4_mul__02e____VhshiHk0hBnMBg5YmEz4uFPvtCA3Y2PVaOtAj79meNrc__DOT__subtract_int)
            ? (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx4_mul__02e____VhshiHk0hBnMBg5YmEz4uFPvtCA3Y2PVaOtAj79meNrc__DOT__add_sub_in 
               - vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx4_mul__02e____VhshiHk0hBnMBg5YmEz4uFPvtCA3Y2PVaOtAj79meNrc__DOT__mult_out)
            : (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx4_mul__02e____VhshiHk0hBnMBg5YmEz4uFPvtCA3Y2PVaOtAj79meNrc__DOT__add_sub_in 
               + vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx4_mul__02e____VhshiHk0hBnMBg5YmEz4uFPvtCA3Y2PVaOtAj79meNrc__DOT__mult_out));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717334__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_lt_fractb)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717334__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717334__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716504__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_eq_fractb)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716504__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716504__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7481___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopas_r1)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716327__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716327__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716918__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_lt_fractb)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716918__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716918__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717936__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_lt_fractb)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717936__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717936__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx2_mul__02e____VhshRrFaYytnw6nIQuniAWQqJkW5QVsD3bb3eiMl2E4p__DOT__z_out 
        = (0x3fffffffffULL & vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx2_mul__02e____VhshRrFaYytnw6nIQuniAWQqJkW5QVsD3bb3eiMl2E4p__DOT__mult_out);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx2_mul__02e____VhshRrFaYytnw6nIQuniAWQqJkW5QVsD3bb3eiMl2E4p__DOT__add_sub_out 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx2_mul__02e____VhshRrFaYytnw6nIQuniAWQqJkW5QVsD3bb3eiMl2E4p__DOT__subtract_int)
            ? (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx2_mul__02e____VhshRrFaYytnw6nIQuniAWQqJkW5QVsD3bb3eiMl2E4p__DOT__add_sub_in 
               - vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx2_mul__02e____VhshRrFaYytnw6nIQuniAWQqJkW5QVsD3bb3eiMl2E4p__DOT__mult_out)
            : (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx2_mul__02e____VhshRrFaYytnw6nIQuniAWQqJkW5QVsD3bb3eiMl2E4p__DOT__add_sub_in 
               + vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx2_mul__02e____VhshRrFaYytnw6nIQuniAWQqJkW5QVsD3bb3eiMl2E4p__DOT__mult_out));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx1_mul__02e____VhshBxuRHTityI6iNNr10ryRBgO0QSIwvuCbCbbMbmoS__DOT__z_out 
        = (0x3fffffffffULL & vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx1_mul__02e____VhshBxuRHTityI6iNNr10ryRBgO0QSIwvuCbCbbMbmoS__DOT__mult_out);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx1_mul__02e____VhshBxuRHTityI6iNNr10ryRBgO0QSIwvuCbCbbMbmoS__DOT__add_sub_out 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx1_mul__02e____VhshBxuRHTityI6iNNr10ryRBgO0QSIwvuCbCbbMbmoS__DOT__subtract_int)
            ? (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx1_mul__02e____VhshBxuRHTityI6iNNr10ryRBgO0QSIwvuCbCbbMbmoS__DOT__add_sub_in 
               - vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx1_mul__02e____VhshBxuRHTityI6iNNr10ryRBgO0QSIwvuCbCbbMbmoS__DOT__mult_out)
            : (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx1_mul__02e____VhshBxuRHTityI6iNNr10ryRBgO0QSIwvuCbCbbMbmoS__DOT__add_sub_in 
               + vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx1_mul__02e____VhshBxuRHTityI6iNNr10ryRBgO0QSIwvuCbCbbMbmoS__DOT__mult_out));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu0__02eopb_inf) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715481__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715481__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716251__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716251__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715481__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715481__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716251__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716251__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714736__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02einf_mul2)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714736__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714736__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715575__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02einf_mul_r)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715575__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715575__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714488__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu0__02eopa_00)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714488__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714488__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713869__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02einf_mul2)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713869__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713869__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eexp_r__05b6__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718321__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718321__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718137__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718137__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718321__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718321__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718137__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718137__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713516__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu0__02eopa_00)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713516__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713516__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712811__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02einf_mul_r)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712811__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712811__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15862__02eC__05b5__05d 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efractb_out__05b4__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15862__02eC__05b4__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15853__02eC__05b5__05d 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efractb_out__05b4__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15853__02eC__05b4__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15841__02eC__05b5__05d 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efractb_out__05b4__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15841__02eC__05b4__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15844__02eC__05b5__05d 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efractb_out__05b4__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15844__02eC__05b4__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15856__02eC__05b5__05d 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efractb_out__05b4__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15856__02eC__05b4__05d));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b18__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713844__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713844__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719035__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719035__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719021__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719021__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719038__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719038__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719026__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719026__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719049__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719049__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719001__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719001__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719007__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719007__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719089__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719089__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719065__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719065__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719061__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719061__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719067__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719067__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719054__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719054__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719080__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719080__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718998__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718998__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719085__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719085__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719043__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719043__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719075__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719075__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713844__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713844__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719035__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719035__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719021__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719021__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719038__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719038__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719026__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719026__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719049__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719049__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719001__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719001__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719007__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719007__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719089__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719089__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719065__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719065__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719061__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719061__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719067__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719067__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719054__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719054__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719080__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719080__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718998__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718998__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719085__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719085__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719043__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719043__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719075__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719075__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b22__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10148___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718994__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719034__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719034__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719048__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719048__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719006__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719006__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10148___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718994__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719034__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719034__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719048__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719048__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719006__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719006__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713843__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b16__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713843__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713843__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b6__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713849__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713849__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719059__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719059__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713849__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713849__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719059__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719059__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b10__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713848__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713848__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719042__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719042__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713848__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713848__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719042__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719042__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714720__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b9__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714720__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714720__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713847__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b19__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713847__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713847__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717517__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717517__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717517__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15773__02eC__05b3__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15773__02eS__05b2__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15773__02eC__05b2__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b2__05d));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b22__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719278__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719278__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719230__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719230__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719185__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719185__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719178__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719178__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719167__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719167__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719191__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719191__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719213__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719213__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719172__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719172__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719204__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719204__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719197__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719197__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719157__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719157__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719165__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719165__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719241__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719241__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719160__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719160__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719278__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719278__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719230__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719230__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719185__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719185__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719178__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719178__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719167__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719167__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719191__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719191__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719213__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719213__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719172__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719172__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719204__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719204__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719197__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719197__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719157__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719157__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719165__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719165__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719241__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719241__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719160__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719160__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b12__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717481__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717481__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717522__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717522__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717481__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717481__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717522__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717522__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717523__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b1__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717523__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717523__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717489__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b22__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717489__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717489__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712361__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712361__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712361__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b3__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714718__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714718__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719352__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719352__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719355__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719355__DOT__s2) 
                     >> 2U));
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10477___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719366__DOT__s3 = 0x17U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719324__DOT__s4 = 0xfffU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719366__DOT__s3 = 0x71U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719324__DOT__s4 = 0x8888U;
        }
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714718__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714718__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719352__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719352__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719355__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719355__DOT__s2));
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10477___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719366__DOT__s3 = 0x11U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719324__DOT__s4 = 0xfffU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719366__DOT__s3 = 0x77U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719324__DOT__s4 = 0xffffU;
        }
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717516__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b15__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717516__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717516__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b21__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716577__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716577__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718880__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718880__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718890__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718890__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718988__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718988__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718944__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718944__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718949__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718949__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718878__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718878__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718888__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718888__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718873__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718873__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718891__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718891__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718885__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718885__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718881__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718881__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718907__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718907__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718904__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718904__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718855__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718855__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718953__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718953__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716577__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716577__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718880__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718880__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718890__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718890__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718988__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718988__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718944__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718944__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718949__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718949__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718878__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718878__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718888__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718888__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718873__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718873__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718891__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718891__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718885__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718885__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718881__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718881__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718907__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718907__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718904__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718904__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718855__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718855__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718953__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718953__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713864__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b30__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5017___05F)
                ? 0x80U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5770___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b28__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714616__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714616__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714611__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b25__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714611__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714611__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b30__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713862__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5015___05F)
                ? 0x80U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714614__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714614__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713862__DOT__s3 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714614__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714614__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b23__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714634__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714634__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714619__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714619__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714634__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714634__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714619__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714619__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15739__02eC__05b3__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15739__02eS__05b2__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15739__02eC__05b2__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b2__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717521__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b20__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717521__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717521__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717518__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b20__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717518__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717518__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15705__02eC__05b4__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15705__02eS__05b3__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15705__02eC__05b3__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b3__05d));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b4__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712468__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712468__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718476__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718476__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712468__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712468__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718476__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718476__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b2__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719153__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719153__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719082__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719082__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719088__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719088__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719069__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719069__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719068__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719068__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719153__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719153__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719082__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719082__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719088__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719088__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719069__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719069__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719068__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719068__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b6__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713842__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713842__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719200__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719200__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713842__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713842__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719200__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719200__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b16__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719011__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719011__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718992__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10144___05F)
                ? 0xa017U : 0x5fe8U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719011__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719011__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718992__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10144___05F)
                ? 0xc0U : 0xff3fU);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719113__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b12__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719113__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719113__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719058__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b8__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719058__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719058__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719018__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b14__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719018__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719018__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b17__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719016__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719016__DOT__s2) 
                     >> 2U));
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10149___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718996__DOT__s4 = 0x5a11U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719125__DOT__s4 = 0xdd77U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718996__DOT__s4 = 0x1eeeU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719125__DOT__s4 = 0xff8fU;
        }
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719016__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719016__DOT__s2));
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10149___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718996__DOT__s4 = 0xb444U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719125__DOT__s4 = 0xff8fU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718996__DOT__s4 = 0x4bbbU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719125__DOT__s4 = 0xff7fU;
        }
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b4__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719096__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719096__DOT__s2) 
                     >> 2U));
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10206___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719053__DOT__s3 = 0x77U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719101__DOT__s3 = 0x17U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719053__DOT__s3 = 0xf0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719101__DOT__s3 = 0x71U;
        }
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719096__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719096__DOT__s2));
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10206___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719053__DOT__s3 = 0x77U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719101__DOT__s3 = 0x11U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719053__DOT__s3 = 0xffU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719101__DOT__s3 = 0x77U;
        }
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b11__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719110__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719110__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719005__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10158___05F)
                ? 0x77U : 0xf0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719110__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719110__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719005__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10158___05F)
                ? 0x77U : 0xffU);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719020__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b13__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719020__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719020__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719050__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b9__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719050__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719050__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b15__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719009__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719009__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719013__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719013__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719009__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719009__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719013__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719013__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b35__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6786___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715632__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7038___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715884__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6786___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715632__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7038___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715884__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719102__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b7__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719102__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719102__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b45__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715596__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715596__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7105___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715951__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715596__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715596__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7105___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715951__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719090__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b1__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719090__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719090__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b40__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6740___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715586__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7042___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715888__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7147___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715993__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6740___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715586__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7042___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715888__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7147___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715993__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719079__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b1__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719079__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719079__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b33__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715595__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715595__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716099__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716099__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715595__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715595__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716099__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716099__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719071__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b5__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719071__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719071__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15682__02eC__05b3__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15682__02eS__05b2__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15682__02eC__05b2__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b2__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15807__02eC__05b3__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15807__02eS__05b2__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15807__02eC__05b2__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b2__05d));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b30__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714731__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5884___05F)
                ? 0x80U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716305__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716305__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714731__DOT__s3 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716305__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716305__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b16__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714714__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714714__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719531__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719531__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718861__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10012___05F)
                ? 0x8aefU : 0x20baU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714714__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714714__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719531__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719531__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718861__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10012___05F)
                ? 0xefefU : 0xbabaU);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b20__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712850__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712850__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4755___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713601__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712850__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712850__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4755___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713601__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718114__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b15__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718114__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718114__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b46__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4335___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713181__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4488___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713334__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4335___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713181__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4488___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713334__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b14__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714713__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714713__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719469__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719469__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718864__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10017___05F)
                ? 0x8aefU : 0x20baU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714713__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714713__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719469__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719469__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718864__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10017___05F)
                ? 0xefefU : 0xbabaU);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717037__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15739__02eS__05b8__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717037__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717037__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719231__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b9__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719231__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719231__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719212__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b0__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719212__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719212__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719215__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b1__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719215__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719215__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b45__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712837__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712837__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713097__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713097__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712837__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712837__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713097__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713097__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b36__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712875__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712875__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713182__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713182__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712875__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712875__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713182__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713182__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719208__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719208__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719208__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719194__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b10__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719194__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719194__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719177__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b13__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10330___05F)
                ? 0x8aefU : 0x20baU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10330___05F)
                                         ? 0xefefU : 0xbabaU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719179__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b12__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10330___05F)
                ? 0xfU : 0xbbU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10330___05F)
                                    ? 0xffU : 0xbbU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719516__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b12__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719516__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719516__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b10__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719502__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719502__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719523__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719523__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718868__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10021___05F)
                ? 0x7777U : 0xf000U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719502__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719502__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719523__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719523__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718868__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10021___05F)
                ? 0x7777U : 0xffffU);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b11__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716665__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718415__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718415__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716665__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3727___05F)
                ? 1U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718415__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718415__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718112__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b18__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718112__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718112__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717962__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b22__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717962__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717962__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719124__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b18__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719124__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719124__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716451__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b19__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716451__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716451__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717950__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b16__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717950__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717950__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717957__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b11__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717957__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717957__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b8__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712574__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712574__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718580__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718580__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718576__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718576__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712574__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712574__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718580__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718580__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718576__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718576__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7730___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15705__02eS__05b15__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716576__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716576__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b20__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719461__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10614___05F)
                ? 0x8aefU : 0x20baU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719490__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10643___05F)
                ? 0x8fefU : 0x107fU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719504__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10631___05F)
                ? 0x8aefU : 0x20baU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719450__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10603___05F)
                ? 0x8aefU : 0x20baU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719461__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10614___05F)
                ? 0xefefU : 0xbabaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719490__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10643___05F)
                ? 0xefefU : 0x7f7fU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719504__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10631___05F)
                ? 0xefefU : 0xbabaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719450__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10603___05F)
                ? 0xefefU : 0xbabaU);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b15__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719462__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10614___05F)
                ? 0x77U : 0xf0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718859__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10012___05F)
                ? 0x7777U : 0xf000U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719462__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10614___05F)
                ? 0x77U : 0xffU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718859__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10012___05F)
                ? 0x7777U : 0xffffU);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b0__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719492__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10643___05F)
                ? 0x77U : 0xf0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10642___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719488__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718920__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718920__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718900__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718900__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719492__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10643___05F)
                ? 0x77U : 0xffU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10642___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719488__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718920__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718920__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718900__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718900__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b39__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5922___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714768__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714744__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714744__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6122___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714968__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5922___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714768__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714744__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714744__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6122___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714968__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b28__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5925___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714771__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6455___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715301__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5925___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714771__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6455___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715301__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b30__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714738__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714738__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715296__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715296__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714738__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714738__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715296__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715296__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b34__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714785__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714785__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6526___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715372__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714785__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714785__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6526___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715372__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b33__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714756__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714756__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6539___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715385__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714756__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714756__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6539___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715385__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b2__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715277__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715277__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6446___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715292__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6069___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714915__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715277__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715277__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6446___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715292__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6069___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714915__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b47__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5896___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714742__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6120___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714966__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715309__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715309__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5896___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714742__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6120___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714966__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715309__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715309__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719303__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b14__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719303__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719303__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718870__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b11__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10021___05F)
                ? 0x8aefU : 0x20baU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10021___05F)
                                         ? 0xefefU : 0xbabaU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b18__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719294__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719294__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719417__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719417__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719294__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719294__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719417__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719417__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718837__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b1__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718837__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718837__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719349__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10500___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719349__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719349__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719307__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b12__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719307__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719307__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b0__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718766__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718766__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718758__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718758__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718778__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9917___05F)
                ? 0x9f03U : 0xff6cU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718766__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718766__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718758__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718758__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718778__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9917___05F)
                ? 0xffa0U : 0xff5fU);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718876__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10025___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10020___05F)
                ? 0xb444U : 0x4bbbU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10020___05F)
                                         ? 0x4bbbU : 0xb444U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b17__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718502__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718502__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718508__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718508__DOT__s2) 
                     >> 2U));
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9531___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718378__DOT__s3 = 0x77U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718384__DOT__s4 = 0xa017U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718378__DOT__s3 = 0xf0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718384__DOT__s4 = 0x5fe8U;
        }
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718502__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718502__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718508__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718508__DOT__s2));
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9531___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718378__DOT__s3 = 0x77U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718384__DOT__s4 = 0xc0U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718378__DOT__s3 = 0xffU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718384__DOT__s4 = 0xff3fU;
        }
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b2__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718536__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718536__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718482__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9600___05F)
                ? 0x17U : 0x71U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718536__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718536__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718482__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9600___05F)
                ? 0x11U : 0x77U);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b16__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718396__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718396__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718383__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718383__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718396__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718396__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718383__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718383__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718408__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b14__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718408__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718408__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718413__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b12__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718413__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718413__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718429__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b10__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718429__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718429__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718433__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b8__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718433__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718433__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718402__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b15__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718402__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718402__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718457__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b3__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718457__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718457__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715587__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b36__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715587__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715587__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715633__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b38__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715633__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715633__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715633__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b36__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715633__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715633__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718462__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b1__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718462__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718462__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b38__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7146___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715992__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7117___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715963__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7019___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715865__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715587__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715587__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7146___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715992__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7117___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715963__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7019___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715865__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715587__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715587__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b21__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3971___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712817__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712850__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712850__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3971___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712817__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712850__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712850__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b6__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718444__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718444__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718424__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9577___05F)
                ? 0x77U : 0xf0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718444__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718444__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718424__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9577___05F)
                ? 0x77U : 0xffU);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717046__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b17__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717046__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717046__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b24__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712835__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712835__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712872__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712872__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712835__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712835__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712872__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712872__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719284__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10437___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719284__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719284__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b27__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713618__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713618__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712835__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712835__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713618__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713618__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712835__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712835__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718678__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9831___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718678__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718678__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718846__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9999___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718846__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718846__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718850__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9994___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9999___05F)
                ? 0x70U : 0x8fU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9999___05F)
                                     ? 0x8fU : 0x70U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718751__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9904___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718751__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718751__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b40__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3983___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712829__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4631___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713477__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712855__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712855__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3983___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712829__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4631___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713477__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712855__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712855__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b38__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712823__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712823__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3984___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712830__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713241__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713241__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4183___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713029__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712875__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712875__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712823__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712823__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3984___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712830__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713241__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713241__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4183___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713029__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712875__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712875__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718779__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9917___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718779__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718779__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719332__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10485___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719332__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719332__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b35__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714754__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714754__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5897___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714743__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5935___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714781__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714756__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714756__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714754__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714754__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5897___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714743__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5935___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714781__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714756__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714756__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b40__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5921___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714767__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6075___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714921__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6329___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715175__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714787__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714787__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5898___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714744__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5921___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714767__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6075___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714921__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6329___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715175__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714787__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714787__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5898___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714744__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718380__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9531___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b17__05d)
                ? 0xff17U : 0xffffU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b17__05d)
                                         ? 0x5fffU : 0xff3fU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718471__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9621___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9622___05F)
                ? 0x87U : 0x78U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9622___05F)
                                     ? 0x78U : 0x87U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718459__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b0__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9608___05F)
                ? 0x9f03U : 0xff6cU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9608___05F)
                                         ? 0xffa0U : 0xff5fU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b24__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714753__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714753__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714779__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714779__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714753__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714753__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714779__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714779__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b17__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718556__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718556__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718549__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718549__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718556__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718556__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718549__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718549__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b15__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718562__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718562__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718552__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718552__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718562__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718562__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718552__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718552__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b12__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718567__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718567__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718563__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718563__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718567__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718567__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718563__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718563__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b10__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718570__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718570__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718572__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718572__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718570__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718570__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718572__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718572__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718581__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b6__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718581__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718581__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718595__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718595__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718595__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b2__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9753___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718599__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718600__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718600__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9753___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718599__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718600__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718600__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718591__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b5__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718591__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718591__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8724___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eexp_r__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717570__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717570__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b15__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719171__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10324___05F)
                ? 0x8aefU : 0x20baU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4998___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713844__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719171__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10324___05F)
                ? 0xefefU : 0xbabaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4998___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713844__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eexp_r__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718276__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718276__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718226__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718226__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718276__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718276__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718226__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718226__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717578__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eexp_r__05b6__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717578__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717578__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8721___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eexp_r__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717567__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717567__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eexp_r__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717771__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717771__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717766__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717766__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717749__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717749__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717771__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717771__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717766__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717766__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717749__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717749__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7882___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eexp_r__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716728__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716728__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eexp_r__05b0__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717231__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717231__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717119__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717119__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717231__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717231__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717119__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717119__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718134__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02efract_out_q__05b8__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718134__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718134__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02efract_out_q__05b0__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718141__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718141__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718150__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718150__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718141__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718141__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718150__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718150__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718154__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02efract_out_q__05b6__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718154__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718154__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716701__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eexp_r__05b1__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716701__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716701__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716700__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eexp_r__05b6__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716700__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716700__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717762__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02efract_out_q__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717762__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717762__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717734__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02efract_out_q__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717734__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717734__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8910___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02efract_out_q__05b15__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717756__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717756__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717746__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02efract_out_q__05b10__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717746__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717746__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02efract_out_q__05b0__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717559__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717559__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717552__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717552__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717559__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717559__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717552__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717552__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717566__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8693___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8694___05F)
                ? 0x8000U : 0U) : 0U);
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02efract_out_q__05b0__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717102__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717102__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717094__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717094__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717102__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717102__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717094__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717094__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02efract_out_q__05b8__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717089__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717089__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717095__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717095__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717089__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717089__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717095__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717095__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717761__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02efract_out_q__05b23__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717761__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717761__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717736__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02efract_out_q__05b8__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717736__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717736__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8904___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717755__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8892___05F)
                ? 0xbfU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717796__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8893___05F)
                ? 0x40U : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717755__DOT__s3 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717796__DOT__s3 = 0U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717758__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02efract_out_q__05b12__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717758__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717758__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717743__DOT__s4 
        = (((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02efract_out_q__05b26__05d) 
            | (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02efract_out_q__05b27__05d))
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8896___05F)
                     ? 0xbf00U : 0xffffU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717760__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02efract_out_q__05b17__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717760__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717760__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02efract_out_q__05b13__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717104__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717104__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717109__DOT__s3 = 0U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717104__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717104__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717109__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8261___05F)
                ? 1U : 0U);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b28__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717076__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8229___05F)
                ? 0x80U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712318__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712318__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717076__DOT__s3 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712318__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712318__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716304__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b23__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716304__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716304__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716702__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02efract_out_q__05b10__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716702__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716702__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718148__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02efract_out_q__05b14__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718148__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718148__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716703__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02efract_out_q__05b2__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716703__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716703__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718143__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02efract_out_q__05b10__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718143__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718143__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9286___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9287___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718147__DOT__s3 = 0x10U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718140__DOT__s2 = 8U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718147__DOT__s3 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718140__DOT__s2 = 0U;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718157__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9310___05F)
                ? 0x8fffU : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718147__DOT__s3 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718140__DOT__s2 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718157__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9310___05F)
                ? 0xffU : 0U);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b25__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716307__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716307__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713736__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713736__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712317__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712317__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716307__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716307__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713736__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713736__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712317__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712317__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8251___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02efract_out_q__05b17__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717097__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717097__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712429__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b27__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712429__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712429__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717553__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02efract_out_q__05b12__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717553__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717553__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717547__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02efract_out_q__05b8__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717547__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717547__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717546__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8698___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8699___05F)
                ? 8U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717541__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02efract_out_q__05b14__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717541__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717541__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713747__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4894___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713747__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713747__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8696___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8697___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717556__DOT__s4 = 0xdU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717558__DOT__s3 = 0xbU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717556__DOT__s4 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717558__DOT__s3 = 0U;
        }
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717556__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717558__DOT__s3 = 0U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7865___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02efract_out_q__05b12__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716711__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716711__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7840___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716729__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716729__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716687__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02efract_out_q__05b11__05d)
                ? 0xffffU : 0xee0eU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716729__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716729__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716687__DOT__s4 = 0U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718222__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9310___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02efract_out_q__05b18__05d)
                ? 1U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718131__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02efract_out_q__05b26__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718131__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718131__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718152__DOT__s3 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_1004)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9284___05F)
                ? 0xffU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9284___05F)
                                  ? 1U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718145__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02efract_out_q__05b22__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718145__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718145__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b25__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712655__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3794___05F)
                ? 0x90U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717533__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8686___05F)
                ? 0x80U : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712655__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3794___05F)
                ? 9U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717533__DOT__s3 = 0U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712644__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b24__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712644__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712644__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b29__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712636__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712636__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712646__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712646__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712636__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712636__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712646__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712646__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717529__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b23__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8682___05F)
                ? 0x80U : 0U) : 0U);
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02efract_out_q__05b22__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717106__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717106__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717098__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717098__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717106__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717106__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717098__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717098__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717100__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8237___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8239___05F)
                ? 0x4fffU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8239___05F)
                                    ? 0xffU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8246___05F 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8239___05F) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8236___05F));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b25__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712432__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712432__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712523__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712523__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712420__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712420__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713633__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713633__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712518__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712518__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712432__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712432__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712523__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712523__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712420__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712420__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713633__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713633__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712518__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712518__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716712__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02efract_out_q__05b17__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716712__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716712__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____Vcellinp____024abc__024712188__024auto_716696__A 
        = (((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7840___05F) 
            << 3U) | (((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7849___05F) 
                       << 2U) | (((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7846___05F) 
                                  << 1U) | (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7845___05F))));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7845___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7846___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7895___05F = 1U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716693__DOT__s2 = 1U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7895___05F = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716693__DOT__s2 = 0U;
        }
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7895___05F = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716693__DOT__s2 = 0U;
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02efract_out_q__05b20__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716689__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716689__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716713__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716713__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716689__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716689__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716713__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716713__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b47__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713946__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713946__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5094___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713940__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713946__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713946__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5094___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713940__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b28__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712421__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712421__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712533__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712533__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712421__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712421__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712533__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712533__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712323__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b23__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712323__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712323__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b26__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713636__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713636__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713634__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4786___05F)
                ? 0xdffdU : 0xddddU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713636__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713636__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713634__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4786___05F)
                ? 0x4cc4U : 0x4444U);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b3__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719078__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719078__DOT__s2) 
                     >> 2U));
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10216___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719063__DOT__s3 = 0xe8U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719064__DOT__s3 = 0x77U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719063__DOT__s3 = 0x8eU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719064__DOT__s3 = 0xf0U;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5002___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713848__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719078__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719078__DOT__s2));
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10216___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719063__DOT__s3 = 0xfeU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719064__DOT__s3 = 0x77U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719063__DOT__s3 = 0x88U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719064__DOT__s3 = 0xffU;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5002___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713848__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b8__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719320__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719320__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5874___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714720__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719320__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719320__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5874___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714720__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712214__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b25__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3361___05F)
                ? 4U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3361___05F)
                               ? 1U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712217__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3361___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712217__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712217__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b2__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719222__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719222__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10370___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719216__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0056_li0056 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719278__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719222__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719222__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10370___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719216__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0056_li0056 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719278__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712893__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712893__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713114__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713114__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712966__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712966__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713063__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713063__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712958__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712958__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712893__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712893__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713114__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713114__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712966__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712966__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713063__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713063__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712958__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712958__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712362__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712362__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712362__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713037__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713037__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712943__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712943__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4107___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712953__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712812__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712812__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713142__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713142__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713062__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713062__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712960__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712960__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712890__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712890__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712954__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712954__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713037__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713037__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712943__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712943__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4107___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712953__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712812__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712812__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713142__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713142__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713062__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713062__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712960__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712960__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712890__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712890__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712954__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712954__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b29__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718122__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718122__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712194__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712194__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718122__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718122__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712194__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712194__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712189__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b28__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712189__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712189__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714121__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b3__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714121__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714121__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b5__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719506__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10631___05F)
                ? 0x77U : 0xf0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3516___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712362__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719506__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10631___05F)
                ? 0x77U : 0xffU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3516___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712362__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b3__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5195___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714041__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714289__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714289__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714034__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714034__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5739___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714585__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5195___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714041__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714289__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714289__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714034__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714034__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5739___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714585__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b9__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718489__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718489__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718422__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9563___05F)
                ? 0x17U : 0x71U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718489__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718489__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718422__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9563___05F)
                ? 0x11U : 0x77U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716587__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b9__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716587__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716587__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7741___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b9__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716587__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716587__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b5__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718480__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718480__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3622___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712468__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718480__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718480__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3622___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712468__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b2__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719574__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719574__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719498__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719498__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719485__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719485__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718901__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718901__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719574__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719574__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719498__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719498__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719485__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719485__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718901__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718901__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b20__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10241___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719087__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719249__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719249__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719163__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719163__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0084_li0084 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719153__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10165___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719011__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10267___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719113__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10196___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719042__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10213___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719059__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10212___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719058__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10172___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719018__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10170___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719016__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10250___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719096__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10236___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719082__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10264___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719110__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10242___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719088__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10174___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719020__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10204___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719050__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10163___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719009__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10256___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719102__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10189___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719035__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10175___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719021__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10192___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719038__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10232___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719078__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10241___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719087__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719249__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719249__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719163__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719163__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0084_li0084 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719153__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10165___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719011__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10267___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719113__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10196___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719042__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10213___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719059__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10212___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719058__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10172___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719018__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10170___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719016__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10250___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719096__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10236___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719082__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10264___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719110__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10242___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719088__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10174___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719020__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10204___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719050__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10163___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719009__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10256___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719102__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10189___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719035__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10175___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719021__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10192___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719038__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10232___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719078__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717882__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eexp_r__05b6__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717882__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717882__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b20__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10180___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719026__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10203___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719049__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10155___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719001__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10161___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719007__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10243___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719089__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10244___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719090__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10219___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719065__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10215___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719061__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10225___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719071__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10221___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719067__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10208___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719054__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10234___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719080__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10180___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719026__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10203___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719049__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10155___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719001__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10161___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719007__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10243___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719089__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10244___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719090__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10219___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719065__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10215___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719061__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10225___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719071__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10221___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719067__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10208___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719054__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10234___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719080__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3979___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b47__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712825__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712825__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b20__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10152___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718998__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10239___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719085__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10197___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719043__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10229___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719075__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10152___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718998__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10239___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719085__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10197___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719043__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10229___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719075__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b6__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719483__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719483__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719512__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719512__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719505__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719505__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10034___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718880__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719483__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719483__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719512__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719512__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719505__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719505__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10034___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718880__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715623__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715623__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715623__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10044___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718890__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718890__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715577__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715577__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715577__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6764___05F 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6762___05F) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6763___05F));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b0__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716069__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716069__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715696__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715696__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7119___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715965__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716069__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716069__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715696__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715696__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7119___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715965__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b13__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716444__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716444__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718496__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718496__DOT__s2) 
                     >> 2U));
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9544___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718391__DOT__s3 = 0x17U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718394__DOT__s3 = 0x77U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718391__DOT__s3 = 0x71U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718394__DOT__s3 = 0xf0U;
        }
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716444__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716444__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718496__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718496__DOT__s2));
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9544___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718391__DOT__s3 = 0x11U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718394__DOT__s3 = 0x77U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718391__DOT__s3 = 0x77U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718394__DOT__s3 = 0xffU;
        }
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6937___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715783__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715783__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719248__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b21__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719248__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719248__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b0__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7306___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716152__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715947__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715947__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7306___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716152__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715947__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715947__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b22__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719529__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719529__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719473__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719473__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719481__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719481__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719491__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719491__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719493__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719493__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719529__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719529__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719473__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719473__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719481__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719481__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719491__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719491__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719493__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719493__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10647___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b2__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719493__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719493__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b22__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719455__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719455__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719453__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719453__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719458__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719458__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5872___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714718__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0002_li0002 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719574__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10685___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719531__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10623___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719469__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10670___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719516__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10656___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719502__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10637___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719483__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719455__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719455__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719453__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719453__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719458__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719458__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5872___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714718__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0002_li0002 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719574__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10685___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719531__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10623___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719469__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10670___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719516__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10656___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719502__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10637___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719483__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b0__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715962__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715962__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716089__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716089__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715962__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715962__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716089__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716089__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716665__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b13__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716665__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716665__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b0__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715718__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715718__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715714__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715714__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716131__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716131__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715718__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715718__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715714__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715714__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716131__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716131__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6875___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b3__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715721__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715721__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716456__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b22__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716456__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716456__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718996__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b21__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718996__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718996__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715713__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b3__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715713__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715713__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b19__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718538__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718538__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718393__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718393__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718389__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718389__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718406__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718406__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718414__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718414__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718417__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718417__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718398__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718398__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718426__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718426__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718431__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718431__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718453__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718453__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718475__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718475__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718458__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718458__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718460__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718460__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718440__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718440__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718410__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718410__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718445__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718445__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718543__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718543__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7605___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716451__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718538__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718538__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718393__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718393__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718389__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718389__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718406__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718406__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718414__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718414__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718417__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718417__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718398__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718398__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718426__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718426__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718431__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718431__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718453__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718453__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718475__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718475__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718458__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718458__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718460__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718460__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718440__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718440__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718410__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718410__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718445__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718445__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718543__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718543__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7605___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716451__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712316__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3469___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712316__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712316__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b23__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714597__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714597__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5030___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713876__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714597__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714597__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5030___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713876__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714047__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b1__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714047__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714047__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b13__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718568__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718568__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7598___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716444__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718568__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718568__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7598___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716444__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718545__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b21__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718545__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718545__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718108__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b20__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718108__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718108__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9262___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b21__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718108__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718108__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b11__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718564__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718564__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718573__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718573__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9111___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717957__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718564__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718564__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718573__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718573__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9111___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717957__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b20__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718919__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718919__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718844__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718844__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718919__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718919__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718844__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718844__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b9__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718578__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718578__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718571__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718571__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3728___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712574__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718578__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718578__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718571__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718571__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3728___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712574__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714226__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714226__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714224__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714224__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714226__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714226__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714224__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714224__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719515__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b8__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719515__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719515__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714115__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b1__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714115__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714115__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716666__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b21__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716666__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716666__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7820___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b22__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716666__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716666__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b22__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718504__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718504__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718392__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718392__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718405__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718405__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718419__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718419__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718425__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718425__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718452__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718452__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718438__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718438__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9116___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717962__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7610___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716456__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718504__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718504__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718392__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718392__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718405__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718405__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718419__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718419__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718425__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718425__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718452__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718452__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718438__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718438__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9116___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717962__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7610___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716456__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714032__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b1__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714032__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714032__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718945__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b13__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10017___05F)
                ? 0x7777U : 0xf000U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10017___05F)
                                         ? 0x7777U : 0xffffU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b3__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718899__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718899__DOT__s3) 
                       >> 4U));
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10068___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718928__DOT__s4 = 0x7777U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718915__DOT__s2 = 7U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718928__DOT__s4 = 0xf000U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718915__DOT__s2 = 8U;
        }
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718899__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718899__DOT__s3));
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10068___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718928__DOT__s4 = 0x7777U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718915__DOT__s2 = 0U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718928__DOT__s4 = 0xffffU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718915__DOT__s2 = 0xfU;
        }
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714570__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b1__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714570__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714570__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b18__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719305__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719305__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719409__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719409__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719342__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719342__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719319__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719319__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718748__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718748__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719376__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10524___05F)
                ? 0x71U : 0x17U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718707__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718707__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718709__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718709__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718718__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718718__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718729__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718729__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718687__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718687__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718741__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718741__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719402__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719402__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718762__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718762__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718776__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718776__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718803__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718803__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718704__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718704__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718774__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718774__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718794__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718794__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718727__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718727__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718700__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9853___05F)
                ? 0x71U : 0x17U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718713__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9866___05F)
                ? 0x71U : 0x17U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718717__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9870___05F)
                ? 0x71U : 0x17U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718788__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9875___05F)
                ? 0x71U : 0x17U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718733__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718733__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718780__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718780__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718767__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718767__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5867___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714713__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719461__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719461__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719305__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719305__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719409__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719409__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719342__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719342__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719319__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719319__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718748__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718748__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719376__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10524___05F)
                ? 0x11U : 0x77U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718707__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718707__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718709__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718709__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718718__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718718__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718729__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718729__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718687__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718687__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718741__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718741__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719402__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719402__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718762__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718762__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718776__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718776__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718803__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718803__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718704__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718704__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718774__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718774__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718794__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718794__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718727__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718727__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718700__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9853___05F)
                ? 0x11U : 0x77U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718713__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9866___05F)
                ? 0x11U : 0x77U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718717__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9870___05F)
                ? 0x11U : 0x77U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718788__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9875___05F)
                ? 0x11U : 0x77U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718733__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718733__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718780__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718780__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718767__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718767__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5867___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714713__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719461__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719461__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b7__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719335__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719335__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719338__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719338__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719335__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719335__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719338__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719338__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719490__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b3__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719490__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719490__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719504__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b8__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719504__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719504__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b4__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713588__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713588__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713101__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713101__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713027__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713027__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713588__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713588__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713101__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713101__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713027__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713027__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714719__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b2__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714719__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714719__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b20__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717045__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717045__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719446__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719446__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719543__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719543__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719345__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719345__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717045__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717045__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719446__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719446__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719543__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719543__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719345__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719345__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712963__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712963__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712963__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b16__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719399__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719399__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10459___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719305__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10457___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719303__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719399__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719399__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10459___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719305__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10457___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719303__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719311__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b11__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719311__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719311__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b47__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6739___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715585__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7201___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716047__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6739___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715585__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7201___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716047__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719316__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b11__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719316__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719316__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719387__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b20__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719387__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719387__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10541___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b11__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719387__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719387__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719386__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b20__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10537___05F)
                ? 0x71U : 0x17U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10537___05F)
                                     ? 0x11U : 0x77U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719386__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b11__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719386__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719386__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4106___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712952__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712952__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4049___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712941__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4066___05F)
                ? 0xefU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712916__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712916__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712941__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4066___05F)
                ? 0xffU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712916__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712916__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b8__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718734__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718734__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9902___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718748__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718734__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718734__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9902___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718748__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718745__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b6__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718745__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718745__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9899___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b8__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718745__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718745__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714557__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b16__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714557__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714557__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716124__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6730___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7277___05F)
                ? 0xf3U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7277___05F)
                                  ? 0x35U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718771__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b3__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718771__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718771__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b18__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718683__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718683__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718812__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718812__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9861___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718707__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718683__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718683__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718812__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718812__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9861___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718707__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b21__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719540__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719540__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719359__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10485___05F)
                ? 0xff0fU : 0x87f0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719540__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719540__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719359__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10485___05F)
                ? 0x88ffU : 0x7700U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718703__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b17__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718703__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718703__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9857___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b18__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718703__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718703__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719289__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b17__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719289__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719289__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b19__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717039__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717039__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719287__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719287__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717039__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717039__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719287__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719287__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b17__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10441___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719287__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10556___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719402__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10448___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719294__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10553___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719399__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10441___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719287__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10556___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719402__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10448___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719294__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10553___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719399__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719337__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10476___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719337__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719337__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b17__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9858___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718704__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718700__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718700__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9858___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718704__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718700__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718700__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716135__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b29__05d)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7018___05F)
                     ? 0xfef0U : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b14__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718799__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718799__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9872___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718718__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718717__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718717__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718799__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718799__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9872___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718718__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718717__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718717__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715589__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b29__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715589__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715589__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b12__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716662__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716662__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718789__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718789__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9883___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718729__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718788__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718788__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716662__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716662__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718789__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718789__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9883___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718729__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718788__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718788__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b10__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718723__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718723__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9895___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718741__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718723__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718723__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9895___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718741__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718730__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b9__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718730__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718730__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9884___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b10__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718730__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718730__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9930___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b3__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718776__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718776__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718770__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b2__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718770__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718770__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9924___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b3__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718770__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718770__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715887__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7018___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715887__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715887__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b5__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718760__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718760__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718749__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718749__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718760__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718760__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718749__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718749__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712467__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712467__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712467__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b5__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3621___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712467__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9916___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718762__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3621___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712467__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9916___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718762__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718764__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718764__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718764__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9918___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b5__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718764__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718764__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b9__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9887___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718733__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9888___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718734__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9887___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718733__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9888___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718734__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718597__DOT__s2 
        = (0xfU & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_1042)
                    ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718597__DOT__s3)
                    : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718597__DOT__s3) 
                       >> 4U)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714166__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714166__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714166__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719352__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b21__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719352__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719352__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719343__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b2__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719343__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719343__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10481___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b22__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719327__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719327__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719328__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b2__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10481___05F)
                ? 0xf0efU : 0xcff8U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10481___05F)
                                         ? 0x88U : 0xffffU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b20__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719336__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719336__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719444__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719444__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719336__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719336__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719444__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719444__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0030_li0030 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b2__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719444__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719444__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714609__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu2__02eexp_out__05b1__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714609__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714609__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b5__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714118__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714118__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5205___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714051__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714118__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714118__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5205___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714051__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b20__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719385__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719385__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719368__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719368__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719300__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719300__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719385__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719385__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719368__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719368__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719300__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719300__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b20__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718642__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718642__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718587__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718587__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718613__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718613__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718642__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718642__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718587__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718587__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718613__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718613__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718773__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b20__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718773__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718773__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b5__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714320__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714320__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5267___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714113__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714030__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714030__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5204___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714050__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714320__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714320__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5267___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714113__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714030__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714030__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5204___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714050__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714593__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b21__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714593__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714593__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10474___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b7__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719320__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719320__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b7__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718584__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718584__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718577__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718577__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718584__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718584__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718577__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718577__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b20__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719299__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10452___05F)
                ? 0x71U : 0x17U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719372__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719372__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719299__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10452___05F)
                ? 0x11U : 0x77U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719372__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719372__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10526___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b7__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719372__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719372__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719330__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b6__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719330__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719330__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719364__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b19__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719364__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719364__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b6__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10518___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719364__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10489___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719335__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10522___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719368__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10492___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719338__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10518___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719364__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10489___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719335__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10522___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719368__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10492___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719338__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714243__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b37__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714243__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714243__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b6__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718724__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718724__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9934___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718780__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9914___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718760__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718724__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718724__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9934___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718780__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9914___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718760__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b19__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719317__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719317__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719391__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719391__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719317__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719317__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719391__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719391__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9337___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eexp_r__05b7__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718183__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718183__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8902___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eexp_r__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717748__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717748__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718754__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b19__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718754__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718754__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b6__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9908___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718754__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9903___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718749__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9908___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718754__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9903___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718749__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718876__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b13__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718876__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718876__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10054___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b20__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718900__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718900__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714287__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b37__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714287__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714287__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716707__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eexp_r__05b7__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7860___05F)
                ? 0xc0U : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7860___05F)
                                  ? 0x57U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5377___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b45__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714223__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714223__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eexp_r__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8240___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717086__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8282___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717128__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8240___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717086__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8282___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717128__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714040__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b45__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714040__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714040__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b22__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719412__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719412__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718681__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718681__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719288__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719288__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719282__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719282__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719412__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719412__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718681__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718681__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719288__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719288__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719282__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719282__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7851___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eexp_r__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716697__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716697__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b22__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718679__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718679__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718689__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718689__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719293__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719293__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718702__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718702__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719398__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719398__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719302__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719302__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719297__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719297__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718698__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718698__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718710__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718710__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719308__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719308__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719381__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719381__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718798__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718798__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719315__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719315__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718714__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718714__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719407__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719407__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718791__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718791__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718679__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718679__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718689__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718689__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719293__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719293__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718702__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718702__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719398__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719398__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719302__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719302__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719297__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719297__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718698__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718698__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718710__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718710__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719308__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719308__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719381__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719381__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718798__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718798__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719315__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719315__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718714__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718714__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719407__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719407__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718791__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718791__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8892___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717751__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8904___05F)
                ? 0x40U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717754__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8896___05F)
                ? 0x4fffU : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717751__DOT__s3 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717754__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8896___05F)
                ? 0xffU : 0U);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b22__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718720__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718720__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719321__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719321__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718720__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718720__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719321__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719321__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717740__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02efract_out_q__05b18__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717740__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717740__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b22__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719371__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719371__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718684__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718684__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718732__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718732__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719312__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719312__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718746__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718746__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718736__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718736__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719333__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719333__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9920___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718766__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719371__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719371__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718684__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718684__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718732__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718732__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719312__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719312__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718746__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718746__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718736__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718736__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719333__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719333__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9920___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718766__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02efract_out_q__05b0__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716709__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716709__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716683__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716683__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716709__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716709__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716683__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716683__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719450__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b22__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719450__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719450__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714348__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b36__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714348__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714348__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719442__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719442__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719442__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b20__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10596___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719442__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718844__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718844__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10596___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719442__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718844__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718844__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b19__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719360__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719360__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719451__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10603___05F)
                ? 0x77U : 0xf0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5868___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714714__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718850__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718850__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719360__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719360__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719451__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10603___05F)
                ? 0x77U : 0xffU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5868___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714714__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718850__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718850__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b4__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9925___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718771__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9921___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718767__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9925___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718771__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9921___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718767__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b2__05d) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9897___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718744__DOT__s4 = 0x7777U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718752__DOT__s2 = 7U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718744__DOT__s4 = 0xf000U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718752__DOT__s2 = 8U;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9928___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718774__DOT__s1) 
                     >> 1U));
    } else {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9897___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718744__DOT__s4 = 0x7777U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718752__DOT__s2 = 0U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718744__DOT__s4 = 0xffffU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718752__DOT__s2 = 0xfU;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9928___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718774__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717538__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02efract_out_q__05b18__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717538__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717538__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b2__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0138_li0138 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718837__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9927___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718773__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0138_li0138 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718837__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9927___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718773__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717554__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02efract_out_q__05b21__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717554__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717554__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716670__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b29__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716670__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716670__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8236___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717091__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8237___05F)
                ? 8U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717145__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8239___05F)
                ? 0x200U : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717091__DOT__s2 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717145__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8239___05F)
                ? 0xfeffU : 0U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718758__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b2__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718758__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718758__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719324__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10476___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719324__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719324__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b0__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5873___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714719__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10499___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719345__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5873___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714719__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10499___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719345__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717561__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02efract_out_q__05b20__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717561__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717561__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719359__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b0__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719359__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719359__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b36__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713905__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713905__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714574__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5033___05F)
                ? 0U : 0xffU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713905__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713905__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714574__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5033___05F)
                ? 0U : 0xf8U);
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b20__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718541__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718541__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718542__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718542__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0192_li0192 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718538__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9690___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718536__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9662___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718508__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9550___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718396__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9562___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718408__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718541__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718541__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718542__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718542__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0192_li0192 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718538__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9690___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718536__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9662___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718508__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9550___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718396__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9562___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718408__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b29__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712658__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712658__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712635__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712635__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3796___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712642__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712658__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712658__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712635__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712635__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3796___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712642__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b20__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9567___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718413__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9583___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718429__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9587___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718433__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9556___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718402__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9634___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718480__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9547___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718393__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9611___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718457__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9616___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718462__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9543___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718389__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9650___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718496__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9569___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718415__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9560___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718406__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9643___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718489__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9567___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718413__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9583___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718429__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9587___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718433__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9556___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718402__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9634___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718480__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9547___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718393__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9611___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718457__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9616___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718462__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9543___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718389__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9650___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718496__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9569___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718415__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9560___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718406__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9643___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718489__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7849___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7840___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716719__DOT__s4 = 0xfeffU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716696__DOT__s2 = 8U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716719__DOT__s4 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716696__DOT__s2 = 0U;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716716__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7845___05F)
                ? 0x4fffU : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716719__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716716__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7845___05F)
                ? 0xffU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716696__DOT__s2 = 0U;
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b20__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9598___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718444__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9568___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718414__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9571___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718417__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9598___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718444__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9568___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718414__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9571___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718417__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712311__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b29__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712311__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712311__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9552___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b20__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718398__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718398__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716720__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7846___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7845___05F)
                ? 1U : 0U) : 0U);
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b20__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9580___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718426__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9585___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718431__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9630___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718476__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9607___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718453__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9629___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718475__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9612___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718458__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9614___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718460__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9594___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718440__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9564___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718410__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9599___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718445__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9580___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718426__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9585___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718431__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9630___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718476__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9607___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718453__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9629___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718475__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9612___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718458__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9614___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718460__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9594___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718440__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9564___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718410__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9599___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718445__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b21__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718675__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718675__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718547__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718547__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718675__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718675__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718547__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718547__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9701___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b20__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718547__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718547__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718555__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b16__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718555__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718555__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716674__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b23__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7827___05F)
                ? 0x80U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718553__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b16__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718553__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718553__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712427__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b27__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712427__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712427__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9104___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b16__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717950__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717950__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718557__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b21__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718557__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718557__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9711___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b16__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718557__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718557__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5469___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b41__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714315__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714315__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718600__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b20__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718600__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718600__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b25__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718120__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9273___05F)
                ? 0x80U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712196__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712196__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712201__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712201__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718120__DOT__s3 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712196__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712196__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712201__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712201__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712441__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b23__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712441__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712441__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718612__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b4__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718612__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718612__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718612__DOT__s1 
        = (3U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_1042)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718612__DOT__s2)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718612__DOT__s2) 
                     >> 2U)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b41__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714331__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714331__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714125__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714125__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714331__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714331__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714125__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714125__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718602__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b21__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718602__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718602__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712192__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b25__05d)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3345___05F)
                     ? 1U : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b21__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718606__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718606__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718585__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718585__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718606__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718606__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718585__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718585__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4110___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b3__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712956__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712956__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712418__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b30__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712418__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712418__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b21__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718608__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718608__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7731___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716577__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718608__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718608__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7731___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716577__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b3__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713065__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713065__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713111__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713111__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713113__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713113__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713065__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713065__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713111__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713111__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713113__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713113__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b21__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718545__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718545__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718642__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718642__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718556__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718556__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718542__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718542__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718562__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718562__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718568__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718568__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718553__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718553__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718563__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718563__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718573__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718573__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718578__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718578__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718572__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718572__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718584__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718584__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718576__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718576__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718587__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718587__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718613__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718613__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718545__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718545__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718642__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718642__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718556__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718556__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718542__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718542__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718562__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718562__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718568__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718568__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718553__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718553__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718563__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718563__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718573__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718573__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718578__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718578__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718572__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718572__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718584__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718584__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718576__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718576__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718587__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718587__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718613__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718613__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9739___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b7__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718585__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718585__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b4__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9760___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718606__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9762___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718608__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9760___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718606__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9762___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718608__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5268___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b42__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714114__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714114__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9291___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eexp_r__05b7__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718137__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718137__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713734__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu2__02eexp_out__05b1__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713734__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713734__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b7__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715715__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715715__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715600__DOT__s3 = 0U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715715__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715715__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715600__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6753___05F)
                ? 1U : 0U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8925___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eexp_r__05b6__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717771__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717771__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eexp_r__05b0__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8920___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717766__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8903___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717749__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8920___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717766__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8903___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717749__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716048__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b41__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716048__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716048__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eexp_r__05b0__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718166__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718166__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9316___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718162__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718138__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718138__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9350___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718196__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9430___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718276__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9380___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718226__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718166__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718166__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9316___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718162__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718138__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718138__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9350___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718196__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9430___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718276__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9380___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718226__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eexp_r__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8385___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717231__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8273___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717119__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8385___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717231__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8273___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717119__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b42__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715904__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715904__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7186___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716032__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7021___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715867__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6788___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715634__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715904__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715904__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7186___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716032__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7021___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715867__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6788___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715634__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716125__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b32__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716125__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716125__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7295___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b30__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716141__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716141__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715830__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b46__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715830__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715830__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7855___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eexp_r__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716701__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716701__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7854___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eexp_r__05b7__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716700__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716700__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715782__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b5__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715782__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715782__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713870__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b5__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713870__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713870__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5066___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713924__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5064___05F)
                ? 0xefU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713914__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5067___05F)
                ? 0x4fffU : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713924__DOT__s3 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713914__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5067___05F)
                ? 0xffU : 0U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713896__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b8__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713896__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713896__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b15__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6775___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715621__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6778___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715624__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6775___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715621__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6778___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715624__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715622__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b8__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715622__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715622__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713630__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu2__02eexp_out__05b1__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713630__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713630__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4289___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b5__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713135__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713135__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8914___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02efract_out_q__05b18__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717760__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717760__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717796__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8892___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717796__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717796__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b5__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4185___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713031__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713033__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713033__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4185___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713031__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713033__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713033__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b30__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3468___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712314__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3465___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712311__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3468___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712314__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3465___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712311__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b44__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713378__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713378__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4340___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713186__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4557___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713403__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713378__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713378__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4340___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713186__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4557___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713403__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7857___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02efract_out_q__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716703__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716703__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712837__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b44__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712837__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712837__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4102___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_ovf_r__05b1__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712948__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712948__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713872__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713872__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713894__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713894__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713872__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713872__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713894__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713894__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8708___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02efract_out_q__05b20__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717554__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717554__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7824___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b30__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716670__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716670__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713741__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b23__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713741__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713741__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4895___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b23__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713741__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713741__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3583___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b29__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712429__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712429__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713908__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b2__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713908__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713908__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b3__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715272__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715272__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714894__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714894__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6042___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714888__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714893__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714893__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715272__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715272__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714894__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714894__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6042___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714888__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714893__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714893__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8715___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02efract_out_q__05b21__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717561__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717561__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717556__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02efract_out_q__05b18__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717556__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717556__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714806__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714806__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714806__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712521__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b30__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712521__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712521__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716729__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7849___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716729__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716729__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b0__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715246__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715246__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714995__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714995__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714967__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714967__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715346__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6417___05F)
                ? 0xcU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715188__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715188__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714963__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714963__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715246__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715246__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714995__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714995__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714967__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714967__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715346__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6417___05F)
                ? 0xcaU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715188__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715188__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714963__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714963__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715717__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715717__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715604__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715604__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715602__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715602__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715926__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715926__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715906__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715906__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7251___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716097__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716095__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716095__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7045___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715891__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716151__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716151__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715717__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715717__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715604__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715604__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715602__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715602__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715926__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715926__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715906__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715906__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7251___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716097__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716095__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716095__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7045___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715891__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716151__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716151__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714885__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714885__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714885__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712868__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b1__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712868__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712868__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712844__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712844__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712844__DOT__s2)));
    if (vlSelf->__VdfgRegularize_hd87f99a1_0_1039) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712885__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712833__DOT__s2 = 0U;
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3968___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712885__DOT__s4 = 1U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712833__DOT__s2 = 1U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712885__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712833__DOT__s2 = 0U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717100__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8236___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717100__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717100__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7846___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716716__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716716__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716696__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716696__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716716__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716716__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716696__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716696__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713840__DOT__s1 
        = (3U & ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx2_mul__02e____VhshRrFaYytnw6nIQuniAWQqJkW5QVsD3bb3eiMl2E4p__DOT__z_out_reg 
                                >> 0x12U))) ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713840__DOT__s2) 
                                               >> 2U)
                  : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713840__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4977___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0097)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713823__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713823__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713770__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0100)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713770__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713770__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713787__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0058)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713787__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713787__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3800___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b29__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712646__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712646__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0085) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713786__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713786__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713760__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713760__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713786__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713786__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713760__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713760__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713784__DOT__s3 
        = (0xffU & ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx2_mul__02e____VhshRrFaYytnw6nIQuniAWQqJkW5QVsD3bb3eiMl2E4p__DOT__z_out_reg 
                                   >> 0x13U))) ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713784__DOT__s4) 
                                                  >> 8U)
                     : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713784__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4925___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0069)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713771__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713771__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713790__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4928___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713790__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713790__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713768__DOT__s4 
        = ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx2_mul__02e____VhshRrFaYytnw6nIQuniAWQqJkW5QVsD3bb3eiMl2E4p__DOT__z_out_reg 
                          >> 0x23U))) ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4921___05F)
                                          ? 0x115U : 0xfeeaU)
            : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4921___05F)
                ? 0x577fU : 0xa880U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713791__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4932___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0063)
                ? 0xbbfU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0063)
                                   ? 0xf440U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713779__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0092)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4932___05F)
                ? 0xbU : 0xf4U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4932___05F)
                                    ? 0xbfU : 0x40U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713761__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0089)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713761__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713761__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713763__DOT__s3 
        = (0xffU & ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx2_mul__02e____VhshRrFaYytnw6nIQuniAWQqJkW5QVsD3bb3eiMl2E4p__DOT__z_out_reg 
                                   >> 0x1bU))) ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713763__DOT__s4) 
                                                  >> 8U)
                     : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713763__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3595___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b23__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712441__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712441__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713758__DOT__s3 
        = (0xffU & ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx2_mul__02e____VhshRrFaYytnw6nIQuniAWQqJkW5QVsD3bb3eiMl2E4p__DOT__z_out_reg 
                                   >> 0x17U))) ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713758__DOT__s4) 
                                                  >> 8U)
                     : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713758__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713759__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0084)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713759__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713759__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6345___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715191__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714916__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714916__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715384__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715384__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714889__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714889__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6345___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715191__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714916__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714916__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715384__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715384__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714889__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714889__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b23__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7458___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716304__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3477___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712323__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7458___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716304__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3477___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712323__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5956___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714802__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715285__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6417___05F)
                ? 0x55U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715288__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715288__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5956___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714802__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715285__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6417___05F)
                ? 0xff03U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715288__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715288__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716674__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b27__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716674__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716674__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714924__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b5__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714924__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714924__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3572___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b30__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712418__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712418__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b28__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712197__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712197__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718120__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718120__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712197__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712197__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718120__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718120__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712214__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b25__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712214__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712214__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714819__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b5__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714819__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714819__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713594__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b3__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4110___05F)
                ? 7U : 0x77U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4110___05F)
                                  ? 0x70U : 0x77U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714804__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b5__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714804__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714804__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713725__DOT__s1 
        = (3U & ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx3_mul__02e____VhshWScOvPjVsHc5N4LU1a7DMLFW9Mbt76PiveC4emTC__DOT__z_out_reg 
                                >> 0x12U))) ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713725__DOT__s2) 
                                               >> 2U)
                  : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713725__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713663__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0122)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4816___05F)
                ? 0xfeU : 0x97U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4816___05F)
                                     ? 0xe8U : 0x7fU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0140) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713667__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713667__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713653__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713653__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713667__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713667__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713653__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713653__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713669__DOT__s3 
        = (0xffU & ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx3_mul__02e____VhshWScOvPjVsHc5N4LU1a7DMLFW9Mbt76PiveC4emTC__DOT__z_out_reg 
                                   >> 0x13U))) ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713669__DOT__s4) 
                                                  >> 8U)
                     : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713669__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713673__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0143)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713673__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713673__DOT__s4)));
    if ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx3_mul__02e____VhshWScOvPjVsHc5N4LU1a7DMLFW9Mbt76PiveC4emTC__DOT__z_out_reg 
                       >> 0x19U)))) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713652__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713652__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713654__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713654__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713652__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713652__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713654__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713654__DOT__s4));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b32__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714319__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714319__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5480___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714326__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713891__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713891__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714580__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5195___05F)
                ? 0U : 0x1515U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714319__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714319__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5480___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714326__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713891__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713891__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714580__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5195___05F)
                ? 0U : 0x153fU);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713651__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0139)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713651__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713651__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713650__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0138)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713650__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713650__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715579__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b10__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715579__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715579__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b23__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6794___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715640__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6742___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715588__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6794___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715640__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6742___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715588__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6738___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b22__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715584__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715584__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715637__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b17__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715637__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715637__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6735___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715583__DOT__s4 
            = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_1008)
                ? 0U : 0xdf0fU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716297__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6764___05F)
                ? 1U : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715583__DOT__s4 
            = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_1008)
                ? 0U : 0xf0fU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716297__DOT__s4 = 0U;
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7223___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716069__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6850___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715696__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7223___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716069__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6850___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715696__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6780___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b18__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715626__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715626__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715949__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b47__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6875___05F)
                ? 0xeU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6875___05F)
                                 ? 0xfU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716301__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu2__02eexp_out__05b1__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716301__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716301__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715279__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b17__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715279__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715279__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b2__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6981___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715827__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715868__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7018___05F)
                ? 0xaaccU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716010__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716010__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715722__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715722__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715670__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715670__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6771___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715617__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7044___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715890__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7165___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716011__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6871___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715717__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6758___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715604__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6756___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715602__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6981___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715827__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715868__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7018___05F)
                ? 0xf0fU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716010__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716010__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715722__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715722__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715670__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715670__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6771___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715617__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7044___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715890__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7165___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716011__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6871___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715717__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6758___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715604__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6756___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715602__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714739__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b17__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714739__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714739__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3472___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b29__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712318__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712318__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5903___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b17__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714749__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714749__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715015__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715015__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715015__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b0__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714042__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714042__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713934__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713934__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714225__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714225__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714042__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714042__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713934__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713934__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714225__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714225__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715011__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715011__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715011__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b0__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714031__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714031__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713936__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713936__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714358__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5511___05F)
                ? 3U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5335___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714181__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5275___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714121__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5201___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714047__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714031__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714031__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713936__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713936__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714358__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5511___05F)
                ? 5U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5335___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714181__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5275___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714121__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5201___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714047__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b2__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5102___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713948__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5192___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714038__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5102___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713948__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5192___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714038__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b0__05d) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5192___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714595__DOT__s4 = 5U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714327__DOT__s3 = 0xddU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714595__DOT__s4 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714327__DOT__s3 = 0U;
        }
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5192___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714595__DOT__s4 = 0xf3f0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714327__DOT__s3 = 0xf0U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714595__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714327__DOT__s3 = 0U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6464___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_r__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715310__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715310__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715381__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6417___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5994___05F)
                ? 0xaU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5994___05F)
                                 ? 0U : 0xcU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713884__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b15__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713884__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713884__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b2__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714043__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714043__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714282__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714282__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714035__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714035__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5075___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713921__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5753___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714599__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5196___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714042__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5088___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713934__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5379___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714225__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5185___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714031__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5090___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713936__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714043__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714043__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714282__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714282__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714035__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714035__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5075___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713921__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5753___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714599__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5196___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714042__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5088___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713934__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5379___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714225__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5185___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714031__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5090___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713936__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5065___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5067___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714584__DOT__s3 = 0xe0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713920__DOT__s2 = 8U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714584__DOT__s3 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713920__DOT__s2 = 0U;
        }
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714584__DOT__s3 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713920__DOT__s2 = 0U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715269__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b8__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715269__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715269__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b29__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712519__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712519__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3351___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712197__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3348___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712194__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712519__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712519__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3351___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712197__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3348___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712194__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6401___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b31__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715247__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715247__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6045___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eexp_ovf_r__05b1__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714891__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714891__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713439__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b47__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4107___05F)
                ? 0xfeU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4107___05F)
                                  ? 0xffU : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b2__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713616__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713616__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713484__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4107___05F)
                ? 0x5777U : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713616__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713616__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713484__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4107___05F)
                ? 0xafbbU : 0U);
    }
    if (vlSelf->__VdfgRegularize_hd87f99a1_0_1038) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712919__DOT__s3 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712896__DOT__s2 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712941__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712941__DOT__s3));
    } else {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4049___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712919__DOT__s3 = 1U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712896__DOT__s2 = 1U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712919__DOT__s3 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712896__DOT__s2 = 0U;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712941__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712941__DOT__s3) 
                       >> 4U));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716144__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6762___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716144__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716144__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b21__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715592__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715592__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6783___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715629__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715592__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715592__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6783___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715629__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714746__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714746__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714746__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b0__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3967___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712813__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4184___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713030__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4211___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713057__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4118___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712964__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4047___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712893__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4742___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713588__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4268___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713114__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4255___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713101__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4217___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713063__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4112___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712958__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4191___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713037__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4097___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712943__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3966___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712812__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3967___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712813__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4184___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713030__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4211___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713057__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4118___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712964__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4047___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712893__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4742___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713588__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4268___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713114__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4255___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713101__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4217___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713063__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4112___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712958__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4191___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713037__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4097___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712943__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3966___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712812__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714776__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714776__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714776__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6443___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b10__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715289__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715289__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715556__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5915___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5914___05F)
                ? 7U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714883__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b46__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714883__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714883__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6753___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716132__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716132__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716150__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716150__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716098__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716098__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715691__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6813___05F)
                ? 0xfffeU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716088__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7119___05F)
                ? 0U : 0xccU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716132__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716132__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716150__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716150__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716098__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716098__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715691__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6813___05F)
                ? 0xffffU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716088__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7119___05F)
                ? 0U : 0xcaU);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714922__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b46__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714922__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714922__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715174__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b45__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715174__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715174__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b41__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715212__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715212__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714757__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714757__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715212__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715212__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714757__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714757__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715276__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b23__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715276__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715276__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b44__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6389___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715235__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715277__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715277__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6389___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715235__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715277__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715277__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu4__02eop_mul) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5989___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714835__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714036__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5102___05F)
                ? 0x77U : 0xffU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5989___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714835__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714036__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5102___05F)
                ? 0xf0U : 0xffU);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6784___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b28__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715630__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715630__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715593__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b26__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715593__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715593__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5035___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713925__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5073___05F)
                ? 2U : 1U);
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5034___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713971__DOT__s4 = 0xcfafU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713892__DOT__s3 = 0xeU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713971__DOT__s4 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713892__DOT__s3 = 0U;
        }
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713925__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5073___05F)
                ? 0U : 3U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713971__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713892__DOT__s3 = 0U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5043___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b33__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713889__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713889__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714748__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b9__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714748__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714748__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5033___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713890__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713890__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713904__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5034___05F)
                ? 0x8fffU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713915__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5028___05F)
                ? 0x20fU : 0xf0fU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713890__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713890__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713904__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5034___05F)
                ? 0xffU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713915__DOT__s4 = 0xf0fU;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5735___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b40__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714581__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714581__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713901__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b20__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713901__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713901__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5034___05F) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5035___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713900__DOT__s3 = 0x10U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713882__DOT__s2 = 8U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713900__DOT__s3 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713882__DOT__s2 = 0U;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713906__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713906__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713900__DOT__s3 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713906__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713906__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713882__DOT__s2 = 0U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716140__DOT__s1 
        = (3U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_1008)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716140__DOT__s2)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716140__DOT__s2) 
                     >> 2U)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712846__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b8__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712846__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712846__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714796__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b5__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714796__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714796__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b11__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713593__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713593__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712869__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712869__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713593__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713593__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712869__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712869__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714576__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b10__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714576__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714576__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716072__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7225___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716072__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716072__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b16__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712820__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712820__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712871__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712871__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712820__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712820__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712871__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712871__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714711__DOT__s1 
        = (3U & ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx1_mul__02e____VhshBxuRHTityI6iNNr10ryRBgO0QSIwvuCbCbbMbmoS__DOT__z_out_reg 
                                >> 0x12U))) ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714711__DOT__s2) 
                                               >> 2U)
                  : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714711__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714670__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0011)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714670__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714670__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714665__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0007)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714665__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714665__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714660__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0005)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714660__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714660__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714658__DOT__s2 
        = (0xfU & ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx1_mul__02e____VhshBxuRHTityI6iNNr10ryRBgO0QSIwvuCbCbbMbmoS__DOT__z_out_reg 
                                  >> 0x15U))) ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714658__DOT__s3) 
                                                 >> 4U)
                    : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714658__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714656__DOT__s3 
        = (0xffU & ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx1_mul__02e____VhshBxuRHTityI6iNNr10ryRBgO0QSIwvuCbCbbMbmoS__DOT__z_out_reg 
                                   >> 0x13U))) ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714656__DOT__s4) 
                                                  >> 8U)
                     : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714656__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714641__DOT__s3 
        = (0xffU & ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx1_mul__02e____VhshBxuRHTityI6iNNr10ryRBgO0QSIwvuCbCbbMbmoS__DOT__z_out_reg 
                                   >> 0x18U))) ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714641__DOT__s4) 
                                                  >> 8U)
                     : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714641__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714642__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0035)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714642__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714642__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0032) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714639__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714639__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714640__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714640__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714639__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714639__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714640__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714640__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714638__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0030)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714638__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714638__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715562__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5917___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5915___05F)
                ? 0x4000U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715558__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b18__05d)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5917___05F)
                     ? 1U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715291__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5914___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5917___05F)
                ? 0xf020U : 0xf0f0U) : 0xf0f0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714792__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5916___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5917___05F)
                ? 0xefffU : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712799__DOT__s1 
        = (3U & ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx4_mul__02e____VhshiHk0hBnMBg5YmEz4uFPvtCA3Y2PVaOtAj79meNrc__DOT__z_out_reg 
                                >> 0x12U))) ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712799__DOT__s2) 
                                               >> 2U)
                  : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712799__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712738__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0207)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712738__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712738__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3908___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0171)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712754__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712754__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712752__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0168)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712752__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712752__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712745__DOT__s2 
        = (0xfU & ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx4_mul__02e____VhshiHk0hBnMBg5YmEz4uFPvtCA3Y2PVaOtAj79meNrc__DOT__z_out_reg 
                                  >> 0x15U))) ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712745__DOT__s3) 
                                                 >> 4U)
                    : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712745__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712743__DOT__s3 
        = (0xffU & ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx4_mul__02e____VhshiHk0hBnMBg5YmEz4uFPvtCA3Y2PVaOtAj79meNrc__DOT__z_out_reg 
                                   >> 0x13U))) ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712743__DOT__s4) 
                                                  >> 8U)
                     : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712743__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3904___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0200)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712750__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712750__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712724__DOT__s3 
        = (0xffU & ((1U & (IData)((vlSelf->co_sim_syn2__DOT__synth_net__DOT____024flatten__05cx4_mul__02e____VhshiHk0hBnMBg5YmEz4uFPvtCA3Y2PVaOtAj79meNrc__DOT__z_out_reg 
                                   >> 0x1cU))) ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712724__DOT__s4) 
                                                  >> 8U)
                     : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712724__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712730__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0201)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712730__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712730__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712727__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0195)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712727__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712727__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712726__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0194)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712726__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712726__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712725__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024152688__024lo0192)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712725__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712725__DOT__s4)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3970___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713615__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3973___05F)
                ? 8U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712818__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3971___05F)
                ? 0x100U : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713615__DOT__s2 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712818__DOT__s4 = 0U;
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b9__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712845__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713587__DOT__s4 = 0U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712845__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3970___05F)
                ? 0xeU : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713587__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4107___05F)
                ? 0xfabU : 0U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3988___05F 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3970___05F) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3973___05F));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715639__DOT__s1 
        = (3U & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_1007)
                  ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715639__DOT__s2)
                  : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715639__DOT__s2) 
                     >> 2U)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715596__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b43__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715596__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715596__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6740___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716138__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b4__05d)
                ? 1U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715613__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6739___05F)
                ? 0x8fffU : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716138__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715613__DOT__s4 = 0U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715643__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6796___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6740___05F)
                ? 0x10ffU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6740___05F)
                                    ? 0xffffU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6745___05F 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6739___05F) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6740___05F));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713883__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b24__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713883__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713883__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5040___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b29__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713886__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713886__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713903__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b26__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713903__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713903__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5028___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5077___05F 
            = vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5029___05F;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713902__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713902__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5077___05F = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713902__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713902__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715595__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b34__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715595__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715595__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714752__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5904___05F)
            ? ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_349)
                ? 0U : 0x4fffU) : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_349)
                                    ? 0U : 0xffU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b43__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4031___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712877__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712823__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712823__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4031___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712877__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712823__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712823__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4013___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712860__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3979___05F)
                ? 7U : 0U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712861__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3983___05F)
                ? 1U : 0U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712860__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3979___05F)
                ? 3U : 0xfU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712861__DOT__s1 = 0U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715278__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b19__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715278__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715278__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b32__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714754__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714754__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714785__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714785__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714754__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714754__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714785__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714785__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b28__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4028___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712874__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4772___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713618__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3982___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712828__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712826__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712826__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4028___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712874__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4772___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713618__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3982___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712828__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712826__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712826__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712831__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3984___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3979___05F)
                ? 0xdfU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3979___05F)
                                  ? 0xfU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714772__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5922___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5896___05F)
                ? 0x4fffU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5896___05F)
                                    ? 0xffU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714738__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b29__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714738__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714738__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3993___05F 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3983___05F) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3979___05F));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu5__02eprod__05b33__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4006___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712852__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712824__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712824__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4006___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712852__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712824__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712824__DOT__s2));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5921___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5943___05F 
            = vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5896___05F;
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5922___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714778__DOT__s3 = 0x40U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714769__DOT__s2 = 8U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714778__DOT__s3 = 0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714769__DOT__s2 = 0U;
        }
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5943___05F = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714778__DOT__s3 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714769__DOT__s2 = 0U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714753__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu5__02eprod__05b27__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714753__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714753__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714782__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5924___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5925___05F)
                ? 0xbU : 0xffU) : 0xffU);
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu0__02eopb_00) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6727___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715573__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5888___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714734__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6635___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715481__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7405___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716251__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6727___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715573__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5888___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714734__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6635___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715481__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7405___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716251__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu0__02eopa_inf) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5021___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713867__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5642___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714488__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5021___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713867__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5642___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714488__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eu0__02eopa_inf) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3962___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712808__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4670___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713516__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3962___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712808__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4670___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713516__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eout_o1__05b31__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0326_li0326;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0716_li0716 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_eq_fractb)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717334__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717334__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eout_o1__05b31__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0547_li0547;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1333_li1333 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu0__02eopa_nan)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716504__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716504__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716328__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu0__02eopb_nan)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7481___05F)
                ? 0xbfU : 0x80U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7481___05F)
                                     ? 0xffU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1082_li1082 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_eq_fractb)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716918__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716918__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0404_li0404 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_eq_fractb)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717936__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717936__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg5__05b31__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg4__05b31__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5890___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02einf_mul_r)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714736__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714736__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6729___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02einf_mul2)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715575__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715575__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5023___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02einf_mul_r)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713869__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713869__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02einf_mul2) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3965___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712811__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712907__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3967___05F)
                ? 0xaU : 0xf3U);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3965___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712811__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712907__DOT__s3 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3967___05F)
                ? 0xffU : 0xf3U);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15862__02eC__05b6__05d 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efractb_out__05b5__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15862__02eC__05b5__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15853__02eC__05b6__05d 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efractb_out__05b5__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15853__02eC__05b5__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15841__02eC__05b6__05d 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efractb_out__05b5__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15841__02eC__05b5__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15844__02eC__05b6__05d 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efractb_out__05b5__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15844__02eC__05b5__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15856__02eC__05b6__05d 
        = ((~ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efractb_out__05b5__05d)) 
           & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15856__02eC__05b5__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02eadd_d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1101_li1101;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719878__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_348600)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efasu_op)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efasu_op)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719879__DOT__s1 
        = (((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efractb_out__05b1__05d) 
            ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_348600))
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efasu_op)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efasu_op)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719880__DOT__s1 
        = ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_348604) 
                  ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15853__02eC__05b2__05d)))
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efasu_op)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efasu_op)
                               ? 2U : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efasu_op) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719877__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b25__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719876__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b24__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719875__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b23__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719874__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b22__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719873__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b21__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719872__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b20__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719871__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b19__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719870__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b18__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719869__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b17__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719868__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b16__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719867__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b15__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719866__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b14__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719865__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b13__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719864__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b12__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719863__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b11__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719862__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b10__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719861__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b9__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719860__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b8__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719859__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b7__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719858__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b6__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719857__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b5__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719856__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b4__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719855__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b3__05d)
                ? 5U : 0xaU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719877__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b25__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719876__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b24__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719875__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b23__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719874__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b22__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719873__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b21__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719872__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b20__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719871__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b19__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719870__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b18__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719869__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b17__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719868__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b16__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719867__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b15__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719866__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b14__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719865__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b13__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719864__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b12__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719863__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b11__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719862__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b10__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719861__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b9__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719860__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b8__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719859__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b7__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719858__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b6__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719857__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b5__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719856__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b4__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719855__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eu1__02efracta_out__05b3__05d)
                ? 3U : 0xcU);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02eadd_d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1352_li1352;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719947__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_348608)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efasu_op)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efasu_op)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719948__DOT__s1 
        = (((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_348612) 
            ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_348608))
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efasu_op)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efasu_op)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719949__DOT__s1 
        = ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_348616) 
                  ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15862__02eC__05b2__05d)))
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efasu_op)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efasu_op)
                               ? 2U : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efasu_op) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719946__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b25__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719945__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b24__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719944__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b23__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719943__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b22__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719942__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b21__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719941__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b20__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719940__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b19__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719939__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b18__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719938__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b17__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719937__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b16__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719936__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b15__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719935__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b14__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719934__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b13__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719933__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b12__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719932__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b11__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719931__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b10__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719930__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b9__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719929__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b8__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719928__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b7__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719927__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b6__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719926__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b5__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719925__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b4__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719924__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b3__05d)
                ? 5U : 0xaU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719946__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b25__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719945__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b24__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719944__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b23__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719943__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b22__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719942__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b21__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719941__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b20__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719940__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b19__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719939__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b18__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719938__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b17__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719937__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b16__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719936__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b15__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719935__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b14__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719934__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b13__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719933__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b12__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719932__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b11__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719931__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b10__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719930__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b9__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719929__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b8__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719928__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b7__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719927__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b6__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719926__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b5__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719925__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b4__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719924__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eu1__02efracta_out__05b3__05d)
                ? 3U : 0xcU);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02eadd_d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0422_li0422;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719781__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efractb_out__05b0__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efasu_op)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efasu_op)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719782__DOT__s1 
        = (((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_348580) 
            ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efractb_out__05b0__05d))
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efasu_op)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efasu_op)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719783__DOT__s1 
        = ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_348584) 
                  ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15856__02eC__05b2__05d)))
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efasu_op)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efasu_op)
                               ? 2U : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efasu_op) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719780__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b25__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719779__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b24__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719778__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b23__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719777__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b22__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719776__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b21__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719775__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b20__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719774__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b19__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719773__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b18__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719772__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b17__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719771__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b16__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719770__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b15__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719769__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b14__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719768__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b13__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719767__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b12__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719766__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b11__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719765__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b10__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719764__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b9__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719763__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b8__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719762__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b7__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719761__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b6__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719760__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b5__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719759__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b4__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719758__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b3__05d)
                ? 5U : 0xaU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719780__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b25__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719779__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b24__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719778__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b23__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719777__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b22__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719776__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b21__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719775__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b20__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719774__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b19__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719773__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b18__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719772__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b17__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719771__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b16__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719770__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b15__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719769__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b14__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719768__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b13__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719767__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b12__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719766__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b11__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719765__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b10__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719764__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b9__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719763__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b8__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719762__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b7__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719761__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b6__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719760__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b5__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719759__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b4__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719758__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eu1__02efracta_out__05b3__05d)
                ? 3U : 0xcU);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02eadd_d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0232_li0232;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719755__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_348568)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efasu_op)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efasu_op)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719756__DOT__s1 
        = (((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_348572) 
            ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_348568))
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efasu_op)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efasu_op)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719757__DOT__s1 
        = ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_348576) 
                  ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15841__02eC__05b2__05d)))
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efasu_op)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efasu_op)
                               ? 2U : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efasu_op) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719754__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b25__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719753__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b24__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719752__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b23__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719751__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b22__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719750__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b21__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719749__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b20__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719748__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b19__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719747__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b18__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719746__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b17__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719745__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b16__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719744__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b15__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719743__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b14__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719742__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b13__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719741__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b12__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719740__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b11__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719739__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b10__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719738__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b9__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719737__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b8__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719736__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b7__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719735__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b6__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719734__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b5__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719733__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b4__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719732__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b3__05d)
                ? 5U : 0xaU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719754__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b25__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719753__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b24__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719752__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b23__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719751__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b22__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719750__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b21__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719749__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b20__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719748__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b19__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719747__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b18__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719746__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b17__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719745__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b16__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719744__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b15__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719743__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b14__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719742__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b13__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719741__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b12__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719740__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b11__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719739__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b10__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719738__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b9__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719737__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b8__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719736__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b7__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719735__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b6__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719734__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b5__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719733__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b4__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719732__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02efracta_out__05b3__05d)
                ? 3U : 0xcU);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02eadd_d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0735_li0735;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719830__DOT__s1 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_348588)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efasu_op)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efasu_op)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719831__DOT__s1 
        = (((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_348592) 
            ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_348588))
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efasu_op)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efasu_op)
                               ? 2U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719832__DOT__s1 
        = ((1U ^ ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_348596) 
                  ^ (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15844__02eC__05b2__05d)))
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efasu_op)
                ? 2U : 3U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efasu_op)
                               ? 2U : 0U));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efasu_op) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719829__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b25__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719828__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b24__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719827__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b23__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719826__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b22__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719825__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b21__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719824__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b20__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719823__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b19__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719822__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b18__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719821__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b17__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719820__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b16__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719819__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b15__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719818__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b14__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719817__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b13__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719816__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b12__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719815__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b11__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719814__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b10__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719813__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b9__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719812__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b8__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719811__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b7__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719810__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b6__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719809__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b5__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719808__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b4__05d)
                ? 5U : 0xaU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719807__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b3__05d)
                ? 5U : 0xaU);
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719829__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b25__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719828__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b24__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719827__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b23__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719826__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b22__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719825__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b21__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719824__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b20__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719823__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b19__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719822__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b18__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719821__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b17__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719820__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b16__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719819__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b15__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719818__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b14__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719817__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b13__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719816__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b12__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719815__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b11__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719814__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b10__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719813__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b9__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719812__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b8__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719811__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b7__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719810__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b6__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719809__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b5__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719808__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b4__05d)
                ? 3U : 0xcU);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719807__DOT__s2 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eu1__02efracta_out__05b3__05d)
                ? 3U : 0xcU);
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4997___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b14__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713843__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713843__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b21__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5003___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713849__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719163__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719163__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719179__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719179__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719248__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719248__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5003___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713849__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719163__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719163__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719179__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719179__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719248__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719248__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b20__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5001___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713847__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10345___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719191__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10367___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719213__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10326___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719172__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10358___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719204__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719194__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719194__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719177__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719177__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719171__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719171__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5001___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713847__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10345___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719191__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10367___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719213__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10326___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719172__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10358___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719204__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719194__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719194__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719177__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719177__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719171__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719171__DOT__s4));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8671___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b7__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717517__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717517__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15773__02eC__05b4__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15773__02eS__05b3__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15773__02eC__05b3__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b3__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719329__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10481___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b2__05d)
                ? 0x3fdfU : 0xffffU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b2__05d)
                                         ? 0xff37U : 0xff5fU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8635___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b12__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717481__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717481__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717523__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b2__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717523__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717523__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b22__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8643___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717489__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8670___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717516__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8643___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717489__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8670___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717516__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg4__05b1__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b1__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg4__05b0__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b0__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3515___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b5__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712361__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712361__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8676___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b15__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717522__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717522__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713864__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b27__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713864__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713864__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714617__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b26__05d)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5770___05F)
                     ? 1U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5765___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b24__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714611__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714611__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg4__05b2__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b2__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713862__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b27__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713862__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713862__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b23__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5788___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714634__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5773___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714619__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5788___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714634__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5773___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714619__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5768___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b28__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714614__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714614__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg4__05b3__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b3__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15739__02eC__05b4__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15739__02eS__05b3__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15739__02eC__05b3__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b3__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg4__05b5__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b5__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg4__05b4__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b4__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8675___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b21__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717521__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717521__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8672___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b21__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717518__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717518__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopb_r__05b8__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10351___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719197__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4996___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713842__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719231__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719231__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10351___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719197__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4996___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713842__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719231__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719231__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15705__02eC__05b5__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15705__02eS__05b4__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15705__02eC__05b4__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b4__05d));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b15__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7816___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716662__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9957___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718803__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9953___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718799__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7816___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716662__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9957___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718803__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9953___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718799__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15682__02eC__05b4__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15682__02eS__05b3__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15682__02eC__05b3__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b3__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15807__02eC__05b4__05d 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15807__02eS__05b3__05d)
            ? (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15807__02eC__05b3__05d)
            : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b3__05d));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg4__05b6__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b6__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg4__05b7__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b7__05d;
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b19__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8193___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717039__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9266___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718112__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8193___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717039__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9266___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718112__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b29__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714731__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714731__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7459___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716305__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714731__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714731__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7459___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716305__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg4__05b9__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b9__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg4__05b8__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b8__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg4__05b10__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b10__05d;
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b20__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8199___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717045__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9268___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718114__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8199___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717045__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9268___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718114__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg4__05b11__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b11__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717037__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024auto_15739__02eS__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717037__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717037__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg4__05b12__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b12__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eout_o1__05b22__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1703_li1703;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eout_o1__05b22__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0308_li0308;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eout_o1__05b22__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0520_li0520;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg4__05b13__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b13__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eout_o1__05b22__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0627_li0627;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10233___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eopa_r__05b0__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719079__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719079__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg4__05b14__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b14__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg4__05b16__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b16__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg4__05b17__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b17__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg4__05b15__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b15__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg4__05b19__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b19__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg4__05b18__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b18__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg4__05b21__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b21__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg4__05b20__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b20__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eout_o1__05b22__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li1629_li1629;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719446__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b21__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719446__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719446__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b22__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10055___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718901__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0110_li0110 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718988__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10103___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718949__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718864__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718864__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10027___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718873__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10045___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718891__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718870__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718870__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10035___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718881__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718861__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718861__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10107___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718953__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10055___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718901__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024295145__024li0110_li0110 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718988__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10103___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718949__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718864__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718864__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10027___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718873__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10045___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718891__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718870__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718870__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10035___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718881__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718861__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718861__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10107___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718953__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b19__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10563___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719409__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10443___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719289__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10563___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719409__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10443___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719289__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b4__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10496___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719342__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10490___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719336__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10497___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719343__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10484___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719330__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10514___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719360__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10509___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719355__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10496___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719342__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10490___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719336__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10497___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719343__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10484___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719330__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10514___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719360__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10509___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719355__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b10__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10473___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719319__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719376__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719376__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10471___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719317__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10465___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719311__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10539___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719385__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10470___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719316__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10473___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719319__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719376__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719376__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10471___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719317__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10465___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719311__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10539___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719385__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10470___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719316__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b16__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9863___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718709__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718713__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718713__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9863___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718709__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718713__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718713__DOT__s3));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b19__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9841___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718687__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9837___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718683__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9841___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718687__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9837___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718683__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b13__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9948___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718794__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9943___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718789__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9948___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718794__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9943___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718789__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopb_r__05b11__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9881___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718727__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9877___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718723__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9881___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718727__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9877___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718723__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eopa_r__05b13__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10545___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719391__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10454___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719300__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719299__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719299__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10461___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719307__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10545___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719391__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10454___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719300__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719299__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719299__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n10461___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_719307__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9656___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b18__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718502__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718502__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg5__05b22__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg4__05b22__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8200___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b17__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717046__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717046__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718471__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9620___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718471__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718471__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718675__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718675__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9749___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718595__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718675__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718675__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9749___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718595__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9756___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b3__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718602__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718602__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718591__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9744___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718591__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718591__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8732___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eexp_r__05b7__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717578__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717578__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eexp_r__05b5__05d) {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8721___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717675__DOT__s3 = 0xbU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717656__DOT__s3 = 0x3eU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717675__DOT__s3 = 0xfdU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717656__DOT__s3 = 0xc1U;
        }
    } else if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8721___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717675__DOT__s3 = 0xf5U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717656__DOT__s3 = 0xc1U;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717675__DOT__s3 = 0xf4U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717656__DOT__s3 = 0x3eU;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717568__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8721___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717568__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717568__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eexp_r__05b4__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9320___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718166__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9292___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718138__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9320___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718166__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9292___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718138__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718170__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9316___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02efract_out_q__05b27__05d)
                ? 0U : 0xcU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02efract_out_q__05b27__05d)
                                 ? 0U : 0xafU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716707__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7859___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716707__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716707__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717087__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eexp_r__05b4__05d)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8240___05F)
                ? 0x7fffU : 0xffffU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8240___05F)
                                         ? 0x7fffU : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717118__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8240___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717118__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717118__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717129__DOT__s2 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eexp_r__05b5__05d)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8282___05F)
                     ? 1U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9288___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02efract_out_q__05b9__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718134__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718134__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02efract_out_q__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9295___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718141__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9304___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718150__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9295___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718141__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9304___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718150__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9308___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02efract_out_q__05b4__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718154__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718154__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8916___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02efract_out_q__05b5__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717762__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717762__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8888___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02efract_out_q__05b1__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717734__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717734__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717757__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8889___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8910___05F)
                ? 0xf4U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8900___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02efract_out_q__05b11__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717746__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717746__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02efract_out_q__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8713___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717559__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8706___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717552__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8713___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717559__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8706___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717552__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02efract_out_q__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8256___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717102__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8248___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717094__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8256___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717102__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8248___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717094__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02efract_out_q__05b9__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8243___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717089__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8249___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717095__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8243___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717089__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8249___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717095__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8890___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02efract_out_q__05b9__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717736__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717736__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717751__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8896___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717751__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717751__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8912___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02efract_out_q__05b13__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717758__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717758__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717754__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8893___05F)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717754__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717754__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8894___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02efract_out_q__05b19__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717740__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717740__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8258___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02efract_out_q__05b11__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717104__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717104__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717076__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b27__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717076__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717076__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02efract_out_q__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7863___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716709__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7837___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716683__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7863___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716709__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7837___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716683__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7856___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02efract_out_q__05b11__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716702__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716702__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9302___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02efract_out_q__05b15__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718148__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718148__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9297___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02efract_out_q__05b11__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718143__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718143__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopa_r__05b24__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7461___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716307__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4890___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713736__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3471___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712317__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7461___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716307__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4890___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713736__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3471___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712317__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02efract_out_q__05b19__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8692___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717538__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717558__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717558__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8692___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717538__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717558__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717558__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717091__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8239___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717091__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717091__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8707___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02efract_out_q__05b13__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717553__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717553__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8701___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02efract_out_q__05b9__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717547__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717547__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717546__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8697___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717546__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717546__DOT__s2)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8695___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02efract_out_q__05b10__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717541__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717541__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717109__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02efract_out_q__05b19__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717109__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717109__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9285___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02efract_out_q__05b27__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718131__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718131__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3812___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b28__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712658__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712658__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9299___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02efract_out_q__05b23__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718145__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718145__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b25__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712655__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712655__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3798___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712644__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712655__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712655__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3798___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712644__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717533__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b26__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717533__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717533__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopa_r__05b30__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3790___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712636__DOT__s1) 
                     >> 1U));
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3796___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712656__DOT__s4 = 0xccfU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712643__DOT__s1 = 3U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712656__DOT__s4 = 0xa665U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712643__DOT__s1 = 1U;
        }
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3790___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712636__DOT__s1));
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3796___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712656__DOT__s4 = 0xa665U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712643__DOT__s1 = 1U;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712656__DOT__s4 = 0xf330U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712643__DOT__s1 = 0U;
        }
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717529__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b28__05d)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717529__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717529__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3789___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add2_add__02eopb_r__05b30__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712635__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712635__DOT__s1)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02efract_out_q__05b23__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8260___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717106__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8252___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717098__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8260___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717106__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n8252___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_717098__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b24__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3586___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712432__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3574___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712420__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3586___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712432__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3574___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712420__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7866___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02efract_out_q__05b18__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716712__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716712__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716742__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7851___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7895___05F)
                ? 0xffffU : 0U) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7895___05F)
                                    ? 0xff01U : 0U));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716693__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02efract_out_q__05b19__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716693__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716693__DOT__s2)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02efract_out_q__05b21__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7843___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716689__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7867___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716713__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7843___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716689__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7867___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716713__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg4__05b26__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b26__05d;
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5102___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713958__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu4__02eop_mul)
                ? 0U : 1U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713975__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713975__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714035__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714035__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5103___05F 
            = vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5101___05F;
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713958__DOT__s1 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x1_mul__02eu4__02eop_mul)
                ? 0U : 3U);
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713975__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713975__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714035__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714035__DOT__s2));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5103___05F = 0U;
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__add1_add__02eu1__02eadd_r = 1U;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713941__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5094___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b0__05d)
                     ? 0x10U : 0xefU));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b29__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3575___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712421__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3581___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712427__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3687___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712533__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3673___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712519__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3675___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712521__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3575___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712421__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3581___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712427__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3687___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712533__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3673___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712519__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3675___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712521__DOT__s1));
    }
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b24__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3677___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712523__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4787___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713633__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3672___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712518__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3350___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712196__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3355___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712201__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712192__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712192__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3677___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712523__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4787___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713633__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3672___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712518__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3350___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712196__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3355___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712201__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712192__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712192__DOT__s3));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg4__05b25__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b25__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4790___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add4_add__02eopa_r__05b26__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713636__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713636__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713634__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__add5_add__02eopb_r__05b23__05d)
                     ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713634__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713634__DOT__s4)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg4__05b24__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b24__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713592__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4110___05F)
            ? 0U : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_1039)
                     ? 0U : 0xdU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713066__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4066___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4110___05F)
                ? 0x1001U : 0U) : 0U);
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg4__05b23__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b23__05d;
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__add3_add__02eopb_r__05b26__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9276___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718122__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3343___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712189__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n9276___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_718122__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3343___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712189__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg4__05b30__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b30__05d;
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eu5__02eprod__05b1__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6777___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715623__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6731___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715577__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6777___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715623__DOT__s1));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6731___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715577__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715886__DOT__s4 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6866___05F)
            ? 0U : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6875___05F)
                     ? 0U : 0x8acfU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716172__DOT__s3 
        = ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_1010)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6875___05F)
                ? 0U : 0x3fU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6875___05F)
                                  ? 0U : 0x5fU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716084__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6875___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716084__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716084__DOT__s3)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg4__05b27__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b27__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg4__05b29__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b29__05d;
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5751___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b18__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714597__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714597__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714143__DOT__s3 
        = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5192___05F)
            ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5195___05F)
                ? 0U : 0xbU) : ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5195___05F)
                                 ? 0U : 0xbbU));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5197___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eexp_r__05b7__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714043__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714043__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5436___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5111___05F)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714282__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714282__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg4__05b28__05d 
        = vlSelf->co_sim_syn2__DOT__synth_net__DOT__reg3__05b28__05d;
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3468___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712326__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712326__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3470___05F 
            = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712316__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712326__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712326__DOT__s4));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n3470___05F 
            = (1U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712316__DOT__s1));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713611__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n4107___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713611__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_713611__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT__x4_mul__02eexp_r__05b7__05d) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712919__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712919__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712916__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712916__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712896__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712896__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712919__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712919__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712916__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712916__DOT__s3));
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712896__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_712896__DOT__s2));
    }
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n5711___05F 
        = (1U & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x2_mul__02eu5__02eprod__05b17__05d)
                  ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714557__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_714557__DOT__s1)));
    vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716124__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6761___05F)
                    ? ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716124__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716124__DOT__s3)));
    if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n7119___05F) {
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715966__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716067__DOT__s4 = 0U;
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716127__DOT__s4 = 0U;
    } else {
        if (vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024new_new_n6753___05F) {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715966__DOT__s4 = 0xf0f0U;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716067__DOT__s4 = 0xc0ccU;
        } else {
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_715966__DOT__s4 = 0xccaaU;
            vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716067__DOT__s4 = 0xf0aaU;
        }
        vlSelf->co_sim_syn2__DOT__synth_net__DOT____024abc__024712188__024auto_716127__DOT__s4 
            = ((IData)(vlSelf->co_sim_syn2__DOT__synth_net__DOT__x3_mul__02eexp_r__05b0__05d)
                ? 0xf0fU : 0x5533U);
    }
}
