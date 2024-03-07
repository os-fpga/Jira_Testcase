// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_dsp_multiplier_accum_with_add_neg.h for the primary calling header

#include "Vco_sim_dsp_multiplier_accum_with_add_neg__pch.h"
#include "Vco_sim_dsp_multiplier_accum_with_add_neg__Syms.h"
#include "Vco_sim_dsp_multiplier_accum_with_add_neg___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_dsp_multiplier_accum_with_add_neg___024root___dump_triggers__act(Vco_sim_dsp_multiplier_accum_with_add_neg___024root* vlSelf);
#endif  // VL_DEBUG

void Vco_sim_dsp_multiplier_accum_with_add_neg___024root___eval_triggers__act(Vco_sim_dsp_multiplier_accum_with_add_neg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_dsp_multiplier_accum_with_add_neg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_dsp_multiplier_accum_with_add_neg___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                       != vlSelf->__Vtrigprevexpr___TOP__co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC__1) 
                                      | (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add 
                                         != vlSelf->__Vtrigprevexpr___TOP__co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add__1)) 
                                     | (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS 
                                        != vlSelf->__Vtrigprevexpr___TOP__co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS__1)));
    vlSelf->__VactTriggered.set(1U, ((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                      != vlSelf->__Vtrigprevexpr___TOP__co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC__1) 
                                     | (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS 
                                        != vlSelf->__Vtrigprevexpr___TOP__co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS__1)));
    vlSelf->__VactTriggered.set(2U, (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add 
                                     != vlSelf->__Vtrigprevexpr___TOP__co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add__1));
    vlSelf->__VactTriggered.set(3U, (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS 
                                     != vlSelf->__Vtrigprevexpr___TOP__co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS__1));
    vlSelf->__VactTriggered.set(4U, (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                     != vlSelf->__Vtrigprevexpr___TOP__co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC__1));
    vlSelf->__VactTriggered.set(5U, ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_dsp_multiplier_accum_with_add_neg__DOT__clk__0)));
    vlSelf->__VactTriggered.set(6U, (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__CLK) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__CLK__0))) 
                                     | ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__RESET) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__RESET__0)))));
    vlSelf->__VactTriggered.set(7U, ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__ACC_FIR) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__ACC_FIR__0)));
    vlSelf->__VactTriggered.set(8U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(9U, ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_dsp_multiplier_accum_with_add_neg__DOT__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC__1 
        = vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add__1 
        = vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS__1 
        = vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC__1 
        = vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_dsp_multiplier_accum_with_add_neg__DOT__clk__0 
        = vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__CLK__0 
        = vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__CLK;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__RESET__0 
        = vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__RESET;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__ACC_FIR__0 
        = vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__ACC_FIR;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
        vlSelf->__VactTriggered.set(1U, 1U);
        vlSelf->__VactTriggered.set(2U, 1U);
        vlSelf->__VactTriggered.set(3U, 1U);
        vlSelf->__VactTriggered.set(4U, 1U);
        vlSelf->__VactTriggered.set(7U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vco_sim_dsp_multiplier_accum_with_add_neg___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vco_sim_dsp_multiplier_accum_with_add_neg___024root___nba_sequent__TOP__0(Vco_sim_dsp_multiplier_accum_with_add_neg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_dsp_multiplier_accum_with_add_neg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_dsp_multiplier_accum_with_add_neg___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY((0x2bU < (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__ACC_FIR)))) {
        VL_WRITEF_NX("WARNING: DSP38 instance %Nco_sim_dsp_multiplier_accum_with_add_neg.netlist.$mul$/nfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc ACC_FIR input is %2# which is greater than 43 which serves no function\n",0,
                     vlSymsp->name(),6,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__ACC_FIR);
    }
}
