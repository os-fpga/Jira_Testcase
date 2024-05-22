// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_DSP_MULTACC_TEST.h for the primary calling header

#include "Vco_sim_DSP_MULTACC_TEST__pch.h"
#include "Vco_sim_DSP_MULTACC_TEST__Syms.h"
#include "Vco_sim_DSP_MULTACC_TEST___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_DSP_MULTACC_TEST___024root___dump_triggers__act(Vco_sim_DSP_MULTACC_TEST___024root* vlSelf);
#endif  // VL_DEBUG

void Vco_sim_DSP_MULTACC_TEST___024root___eval_triggers__act(Vco_sim_DSP_MULTACC_TEST___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_DSP_MULTACC_TEST__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_DSP_MULTACC_TEST___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_DSP_MULTACC_TEST__DOT__clk__0))) 
                                     | ((IData)(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_DSP_MULTACC_TEST__DOT__reset__0)))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__acc_fir) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_DSP_MULTACC_TEST__DOT__acc_fir__0)));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__ACC_FIR) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__ACC_FIR__0)));
    vlSelf->__VactTriggered.set(3U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(4U, ((~ (IData)(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_DSP_MULTACC_TEST__DOT__clk__0)));
    vlSelf->__VactTriggered.set(5U, ((IData)(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_DSP_MULTACC_TEST__DOT__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__co_sim_DSP_MULTACC_TEST__DOT__clk__0 
        = vlSelf->co_sim_DSP_MULTACC_TEST__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_DSP_MULTACC_TEST__DOT__reset__0 
        = vlSelf->co_sim_DSP_MULTACC_TEST__DOT__reset;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_DSP_MULTACC_TEST__DOT__acc_fir__0 
        = vlSelf->co_sim_DSP_MULTACC_TEST__DOT__acc_fir;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__ACC_FIR__0 
        = vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__ACC_FIR;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(1U, 1U);
        vlSelf->__VactTriggered.set(2U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vco_sim_DSP_MULTACC_TEST___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vco_sim_DSP_MULTACC_TEST___024root___nba_sequent__TOP__0(Vco_sim_DSP_MULTACC_TEST___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_DSP_MULTACC_TEST__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_DSP_MULTACC_TEST___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY((0x2bU < (IData)(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__ACC_FIR)))) {
        VL_WRITEF_NX("WARNING: DSP38 instance %Nco_sim_DSP_MULTACC_TEST.route_net.$auto$rs_design_edit.cc:1291:execute$598.RS_DSP_MULTACC_$iopadmap$z_multacc[37].genblk1.DSP38_MULTACC ACC_FIR input is %2# which is greater than 43 which serves no function\n",0,
                     vlSymsp->name(),6,vlSelf->co_sim_DSP_MULTACC_TEST__DOT__route_net__DOT____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__DOT__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__DOT__genblk1__DOT__DSP38_MULTACC__DOT__ACC_FIR);
    }
}

VL_INLINE_OPT void Vco_sim_DSP_MULTACC_TEST___024root___nba_sequent__TOP__1(Vco_sim_DSP_MULTACC_TEST___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_DSP_MULTACC_TEST__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_DSP_MULTACC_TEST___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (VL_UNLIKELY((0x2bU < (IData)(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__acc_fir)))) {
        VL_WRITEF_NX("WARNING: DSP38 instance %Nco_sim_DSP_MULTACC_TEST.golden.dut_multadd ACC_FIR input is %2# which is greater than 43 which serves no function\n",0,
                     vlSymsp->name(),6,vlSelf->co_sim_DSP_MULTACC_TEST__DOT__acc_fir);
    }
    if (VL_UNLIKELY((0x2bU < (IData)(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__acc_fir)))) {
        VL_WRITEF_NX("WARNING: DSP38 instance %Nco_sim_DSP_MULTACC_TEST.golden.dut_multacc ACC_FIR input is %2# which is greater than 43 which serves no function\n",0,
                     vlSymsp->name(),6,vlSelf->co_sim_DSP_MULTACC_TEST__DOT__acc_fir);
    }
    if (VL_UNLIKELY((0x2bU < (IData)(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__acc_fir)))) {
        VL_WRITEF_NX("WARNING: DSP38 instance %Nco_sim_DSP_MULTACC_TEST.route_net.$auto$rs_design_edit.cc:1291:execute$598.RS_DSP_MULTADD_$iopadmap$z_multadd[37].genblk1.DSP38_MULTADD ACC_FIR input is %2# which is greater than 43 which serves no function\n",0,
                     vlSymsp->name(),6,vlSelf->co_sim_DSP_MULTACC_TEST__DOT__acc_fir);
    }
}
