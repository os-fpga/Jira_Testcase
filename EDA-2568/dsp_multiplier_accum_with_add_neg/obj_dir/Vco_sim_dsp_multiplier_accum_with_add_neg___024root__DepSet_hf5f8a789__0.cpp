// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_dsp_multiplier_accum_with_add_neg.h for the primary calling header

#include "Vco_sim_dsp_multiplier_accum_with_add_neg__pch.h"
#include "Vco_sim_dsp_multiplier_accum_with_add_neg___024root.h"

VL_ATTR_COLD void Vco_sim_dsp_multiplier_accum_with_add_neg___024root___eval_initial__TOP(Vco_sim_dsp_multiplier_accum_with_add_neg___024root* vlSelf);
VlCoroutine Vco_sim_dsp_multiplier_accum_with_add_neg___024root___eval_initial__TOP__Vtiming__0(Vco_sim_dsp_multiplier_accum_with_add_neg___024root* vlSelf);
VlCoroutine Vco_sim_dsp_multiplier_accum_with_add_neg___024root___eval_initial__TOP__Vtiming__1(Vco_sim_dsp_multiplier_accum_with_add_neg___024root* vlSelf);

void Vco_sim_dsp_multiplier_accum_with_add_neg___024root___eval_initial(Vco_sim_dsp_multiplier_accum_with_add_neg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_dsp_multiplier_accum_with_add_neg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_dsp_multiplier_accum_with_add_neg___024root___eval_initial\n"); );
    // Body
    Vco_sim_dsp_multiplier_accum_with_add_neg___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vco_sim_dsp_multiplier_accum_with_add_neg___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vco_sim_dsp_multiplier_accum_with_add_neg___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eC__0 
        = vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eC;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add__0 
        = vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eS__0 
        = vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eS;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eC__0 
        = vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eC;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eC__1 
        = vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eC;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add__1 
        = vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eS__1 
        = vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eS;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eC__1 
        = vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eC;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_dsp_multiplier_accum_with_add_neg__DOT__clk__0 
        = vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__CLK__0 
        = vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__CLK;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__RESET__0 
        = vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__RESET;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__ACC_FIR__0 
        = vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__ACC_FIR;
}

VL_INLINE_OPT VlCoroutine Vco_sim_dsp_multiplier_accum_with_add_neg___024root___eval_initial__TOP__Vtiming__0(Vco_sim_dsp_multiplier_accum_with_add_neg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_dsp_multiplier_accum_with_add_neg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_dsp_multiplier_accum_with_add_neg___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/5th-march/dsp_multiplier_accum_with_add_neg/results_dir/.././sim/co_sim_tb/co_sim_dsp_multiplier_accum_with_add_neg.v", 
                                           18);
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__clk 
            = (1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vco_sim_dsp_multiplier_accum_with_add_neg___024root___eval_initial__TOP__Vtiming__1(Vco_sim_dsp_multiplier_accum_with_add_neg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_dsp_multiplier_accum_with_add_neg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_dsp_multiplier_accum_with_add_neg___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Init
    IData/*31:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT____Vrepeat0;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT____Vrepeat0 = 0;
    IData/*31:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT____Vrepeat1;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT____Vrepeat1 = 0;
    // Body
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset = 1U;
    VL_WRITEF_NX("\n\n***Reset Test is applied***\n\n\n",0);
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A = 0U;
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B = 0U;
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C = 0U;
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D = 0U;
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p = 1U;
    VL_WRITEF_NX("%20# reset=1, clk=%0b, sel_c_or_p=1, A=0, B=0, C=0, D=0, P=%0d\n%20# reset=1, clk=%0b, sel_c_or_p=1, A=0, B=0, C=0, D=0, P_netlist=%0d\n",0,
                 64,VL_TIME_UNITED_Q(1000),1,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__clk),
                 32,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__P,
                 64,VL_TIME_UNITED_Q(1000),1,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__clk),
                 32,(((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241040__Q) 
                      << 0x1fU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241039__Q) 
                                    << 0x1eU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241038__Q) 
                                                  << 0x1dU) 
                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241037__Q) 
                                                     << 0x1cU) 
                                                    | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241036__Q) 
                                                        << 0x1bU) 
                                                       | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241035__Q) 
                                                           << 0x1aU) 
                                                          | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241034__Q) 
                                                              << 0x19U) 
                                                             | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241033__Q) 
                                                                 << 0x18U) 
                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241032__Q) 
                                                                    << 0x17U) 
                                                                   | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241031__Q) 
                                                                       << 0x16U) 
                                                                      | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241030__Q) 
                                                                          << 0x15U) 
                                                                         | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241029__Q) 
                                                                             << 0x14U) 
                                                                            | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241028__Q) 
                                                                                << 0x13U) 
                                                                               | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241027__Q) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241026__Q) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241025__Q) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241024__Q) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241023__Q) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241022__Q) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241021__Q) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241020__Q) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241019__Q) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241018__Q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241017__Q) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241016__Q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241015__Q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241014__Q) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241013__Q) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241012__Q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241011__Q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241010__Q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241009__Q)))))))))))))))))))))))))))))))));
    co_await vlSelf->__VtrigSched_h3815ed83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge co_sim_dsp_multiplier_accum_with_add_neg.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/5th-march/dsp_multiplier_accum_with_add_neg/results_dir/.././sim/co_sim_tb/co_sim_dsp_multiplier_accum_with_add_neg.v", 
                                                       30);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3815ed83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge co_sim_dsp_multiplier_accum_with_add_neg.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/5th-march/dsp_multiplier_accum_with_add_neg/results_dir/.././sim/co_sim_tb/co_sim_dsp_multiplier_accum_with_add_neg.v", 
                                                       31);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if ((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__P 
         != (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241040__Q) 
              << 0x1fU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241039__Q) 
                            << 0x1eU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241038__Q) 
                                          << 0x1dU) 
                                         | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241037__Q) 
                                             << 0x1cU) 
                                            | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241036__Q) 
                                                << 0x1bU) 
                                               | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241035__Q) 
                                                   << 0x1aU) 
                                                  | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241034__Q) 
                                                      << 0x19U) 
                                                     | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241033__Q) 
                                                         << 0x18U) 
                                                        | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241032__Q) 
                                                            << 0x17U) 
                                                           | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241031__Q) 
                                                               << 0x16U) 
                                                              | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241030__Q) 
                                                                  << 0x15U) 
                                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241029__Q) 
                                                                     << 0x14U) 
                                                                    | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241028__Q) 
                                                                        << 0x13U) 
                                                                       | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241027__Q) 
                                                                           << 0x12U) 
                                                                          | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241026__Q) 
                                                                              << 0x11U) 
                                                                             | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241025__Q) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241024__Q) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241023__Q) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241022__Q) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241021__Q) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241020__Q) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241019__Q) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241018__Q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241017__Q) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241016__Q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241015__Q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241014__Q) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241013__Q) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241012__Q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241011__Q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241010__Q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241009__Q)))))))))))))))))))))))))))))))))) {
        VL_WRITEF_NX("Data Mismatch. Golden: %0d, Netlist: %0d, Time: %0t\n",0,
                     32,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__P,
                     32,(((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241040__Q) 
                          << 0x1fU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241039__Q) 
                                        << 0x1eU) | 
                                       (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241038__Q) 
                                         << 0x1dU) 
                                        | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241037__Q) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241036__Q) 
                                               << 0x1bU) 
                                              | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241035__Q) 
                                                  << 0x1aU) 
                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241034__Q) 
                                                     << 0x19U) 
                                                    | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241033__Q) 
                                                        << 0x18U) 
                                                       | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241032__Q) 
                                                           << 0x17U) 
                                                          | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241031__Q) 
                                                              << 0x16U) 
                                                             | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241030__Q) 
                                                                 << 0x15U) 
                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241029__Q) 
                                                                    << 0x14U) 
                                                                   | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241028__Q) 
                                                                       << 0x13U) 
                                                                      | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241027__Q) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241026__Q) 
                                                                             << 0x11U) 
                                                                            | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241025__Q) 
                                                                                << 0x10U) 
                                                                               | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241024__Q) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241023__Q) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241022__Q) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241021__Q) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241020__Q) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241019__Q) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241018__Q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241017__Q) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241016__Q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241015__Q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241014__Q) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241013__Q) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241012__Q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241011__Q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241010__Q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241009__Q)))))))))))))))))))))))))))))))),
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__mismatch 
            = ((IData)(1U) + vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__mismatch);
    } else {
        VL_WRITEF_NX("Data Matched. Golden: %0d, Netlist: %0d, Time: %0t\n",0,
                     32,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__P,
                     32,(((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241040__Q) 
                          << 0x1fU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241039__Q) 
                                        << 0x1eU) | 
                                       (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241038__Q) 
                                         << 0x1dU) 
                                        | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241037__Q) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241036__Q) 
                                               << 0x1bU) 
                                              | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241035__Q) 
                                                  << 0x1aU) 
                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241034__Q) 
                                                     << 0x19U) 
                                                    | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241033__Q) 
                                                        << 0x18U) 
                                                       | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241032__Q) 
                                                           << 0x17U) 
                                                          | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241031__Q) 
                                                              << 0x16U) 
                                                             | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241030__Q) 
                                                                 << 0x15U) 
                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241029__Q) 
                                                                    << 0x14U) 
                                                                   | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241028__Q) 
                                                                       << 0x13U) 
                                                                      | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241027__Q) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241026__Q) 
                                                                             << 0x11U) 
                                                                            | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241025__Q) 
                                                                                << 0x10U) 
                                                                               | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241024__Q) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241023__Q) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241022__Q) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241021__Q) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241020__Q) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241019__Q) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241018__Q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241017__Q) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241016__Q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241015__Q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241014__Q) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241013__Q) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241012__Q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241011__Q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241010__Q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241009__Q)))))))))))))))))))))))))))))))),
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    VL_WRITEF_NX("\n\n***Reset Test is ended***\n\n\n",0);
    co_await vlSelf->__VtrigSched_h3815ed83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge co_sim_dsp_multiplier_accum_with_add_neg.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/5th-march/dsp_multiplier_accum_with_add_neg/results_dir/.././sim/co_sim_tb/co_sim_dsp_multiplier_accum_with_add_neg.v", 
                                                       34);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("\n\n*** Random Functionality Tests of output P=Bx(A+D)+C with sel_c_or_p=1 are applied***\n\n\n",0);
    co_sim_dsp_multiplier_accum_with_add_neg__DOT____Vrepeat0 = 0x2bcU;
    while (VL_LTS_III(32, 0U, co_sim_dsp_multiplier_accum_with_add_neg__DOT____Vrepeat0)) {
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset = 0U;
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A 
            = (0xffffU & VL_RANDOM_I());
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B 
            = (0xffffU & VL_RANDOM_I());
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C 
            = (0xffffU & VL_RANDOM_I());
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D 
            = (0xffffU & VL_RANDOM_I());
        VL_WRITEF_NX("%20# reset=%0b, clk=%0b, sel_c_or_p=%0#, A=%0d, B=%0d, C=%0d, D=%0d, P=%0d\n%20# reset=%0b, clk=%0b, sel_c_or_p=%0#, A=%0d, B=%0d, C=%0d, D=%0d, P_netlist=%0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),1,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset),
                     1,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__clk,
                     1,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p),
                     16,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A,
                     16,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B),
                     16,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C,
                     16,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D),
                     32,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__P,
                     64,VL_TIME_UNITED_Q(1000),1,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset),
                     1,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__clk,
                     1,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p),
                     16,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A,
                     16,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B),
                     16,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C,
                     16,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D),
                     32,(((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241040__Q) 
                          << 0x1fU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241039__Q) 
                                        << 0x1eU) | 
                                       (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241038__Q) 
                                         << 0x1dU) 
                                        | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241037__Q) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241036__Q) 
                                               << 0x1bU) 
                                              | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241035__Q) 
                                                  << 0x1aU) 
                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241034__Q) 
                                                     << 0x19U) 
                                                    | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241033__Q) 
                                                        << 0x18U) 
                                                       | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241032__Q) 
                                                           << 0x17U) 
                                                          | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241031__Q) 
                                                              << 0x16U) 
                                                             | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241030__Q) 
                                                                 << 0x15U) 
                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241029__Q) 
                                                                    << 0x14U) 
                                                                   | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241028__Q) 
                                                                       << 0x13U) 
                                                                      | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241027__Q) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241026__Q) 
                                                                             << 0x11U) 
                                                                            | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241025__Q) 
                                                                                << 0x10U) 
                                                                               | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241024__Q) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241023__Q) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241022__Q) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241021__Q) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241020__Q) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241019__Q) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241018__Q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241017__Q) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241016__Q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241015__Q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241014__Q) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241013__Q) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241012__Q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241011__Q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241010__Q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241009__Q)))))))))))))))))))))))))))))))));
        co_await vlSelf->__VtrigSched_h3815ed83__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge co_sim_dsp_multiplier_accum_with_add_neg.clk)", 
                                                           "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/5th-march/dsp_multiplier_accum_with_add_neg/results_dir/.././sim/co_sim_tb/co_sim_dsp_multiplier_accum_with_add_neg.v", 
                                                           41);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        co_await vlSelf->__VtrigSched_h3815ed83__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge co_sim_dsp_multiplier_accum_with_add_neg.clk)", 
                                                           "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/5th-march/dsp_multiplier_accum_with_add_neg/results_dir/.././sim/co_sim_tb/co_sim_dsp_multiplier_accum_with_add_neg.v", 
                                                           42);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if ((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__P 
             != (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241040__Q) 
                  << 0x1fU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241039__Q) 
                                << 0x1eU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241038__Q) 
                                              << 0x1dU) 
                                             | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241037__Q) 
                                                 << 0x1cU) 
                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241036__Q) 
                                                    << 0x1bU) 
                                                   | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241035__Q) 
                                                       << 0x1aU) 
                                                      | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241034__Q) 
                                                          << 0x19U) 
                                                         | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241033__Q) 
                                                             << 0x18U) 
                                                            | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241032__Q) 
                                                                << 0x17U) 
                                                               | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241031__Q) 
                                                                   << 0x16U) 
                                                                  | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241030__Q) 
                                                                      << 0x15U) 
                                                                     | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241029__Q) 
                                                                         << 0x14U) 
                                                                        | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241028__Q) 
                                                                            << 0x13U) 
                                                                           | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241027__Q) 
                                                                               << 0x12U) 
                                                                              | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241026__Q) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241025__Q) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241024__Q) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241023__Q) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241022__Q) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241021__Q) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241020__Q) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241019__Q) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241018__Q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241017__Q) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241016__Q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241015__Q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241014__Q) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241013__Q) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241012__Q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241011__Q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241010__Q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241009__Q)))))))))))))))))))))))))))))))))) {
            VL_WRITEF_NX("Data Mismatch. Golden: %0d, Netlist: %0d, Time: %0t\n",0,
                         32,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__P,
                         32,(((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241040__Q) 
                              << 0x1fU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241039__Q) 
                                            << 0x1eU) 
                                           | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241038__Q) 
                                               << 0x1dU) 
                                              | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241037__Q) 
                                                  << 0x1cU) 
                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241036__Q) 
                                                     << 0x1bU) 
                                                    | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241035__Q) 
                                                        << 0x1aU) 
                                                       | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241034__Q) 
                                                           << 0x19U) 
                                                          | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241033__Q) 
                                                              << 0x18U) 
                                                             | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241032__Q) 
                                                                 << 0x17U) 
                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241031__Q) 
                                                                    << 0x16U) 
                                                                   | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241030__Q) 
                                                                       << 0x15U) 
                                                                      | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241029__Q) 
                                                                          << 0x14U) 
                                                                         | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241028__Q) 
                                                                             << 0x13U) 
                                                                            | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241027__Q) 
                                                                                << 0x12U) 
                                                                               | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241026__Q) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241025__Q) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241024__Q) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241023__Q) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241022__Q) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241021__Q) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241020__Q) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241019__Q) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241018__Q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241017__Q) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241016__Q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241015__Q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241014__Q) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241013__Q) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241012__Q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241011__Q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241010__Q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241009__Q)))))))))))))))))))))))))))))))),
                         64,VL_TIME_UNITED_Q(1000),
                         -9);
            vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__mismatch 
                = ((IData)(1U) + vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__mismatch);
        } else {
            VL_WRITEF_NX("Data Matched. Golden: %0d, Netlist: %0d, Time: %0t\n",0,
                         32,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__P,
                         32,(((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241040__Q) 
                              << 0x1fU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241039__Q) 
                                            << 0x1eU) 
                                           | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241038__Q) 
                                               << 0x1dU) 
                                              | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241037__Q) 
                                                  << 0x1cU) 
                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241036__Q) 
                                                     << 0x1bU) 
                                                    | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241035__Q) 
                                                        << 0x1aU) 
                                                       | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241034__Q) 
                                                           << 0x19U) 
                                                          | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241033__Q) 
                                                              << 0x18U) 
                                                             | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241032__Q) 
                                                                 << 0x17U) 
                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241031__Q) 
                                                                    << 0x16U) 
                                                                   | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241030__Q) 
                                                                       << 0x15U) 
                                                                      | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241029__Q) 
                                                                          << 0x14U) 
                                                                         | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241028__Q) 
                                                                             << 0x13U) 
                                                                            | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241027__Q) 
                                                                                << 0x12U) 
                                                                               | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241026__Q) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241025__Q) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241024__Q) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241023__Q) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241022__Q) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241021__Q) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241020__Q) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241019__Q) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241018__Q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241017__Q) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241016__Q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241015__Q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241014__Q) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241013__Q) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241012__Q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241011__Q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241010__Q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241009__Q)))))))))))))))))))))))))))))))),
                         64,VL_TIME_UNITED_Q(1000),
                         -9);
        }
        co_sim_dsp_multiplier_accum_with_add_neg__DOT____Vrepeat0 
            = (co_sim_dsp_multiplier_accum_with_add_neg__DOT____Vrepeat0 
               - (IData)(1U));
    }
    VL_WRITEF_NX("\n\n***Random Functionality Tests of output P=Bx(A+D)+C with sel_c_or_p=1 is ended***\n\n\n",0);
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset = 1U;
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p = 1U;
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A = 0U;
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B = 0U;
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C = 0U;
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D = 0U;
    VL_WRITEF_NX("\n\n***Reset Test is applied***\n\n\n",0);
    VL_WRITEF_NX("%20# reset=%0b, clk=%0b, sel_c_or_p=%0#, A=%0d, B=%0d, C=%0d, D=%0d, P=%0d\n%20# reset=%0b, clk=%0b, sel_c_or_p=%0#, A=%0d, B=%0d, C=%0d, D=%0d, P_netlist=%0d\n",0,
                 64,VL_TIME_UNITED_Q(1000),1,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset),
                 1,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__clk,
                 1,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p),
                 16,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A,
                 16,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B),
                 16,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C,
                 16,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D),
                 32,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__P,
                 64,VL_TIME_UNITED_Q(1000),1,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset),
                 1,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__clk,
                 1,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p),
                 16,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A,
                 16,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B),
                 16,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C,
                 16,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D),
                 32,(((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241040__Q) 
                      << 0x1fU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241039__Q) 
                                    << 0x1eU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241038__Q) 
                                                  << 0x1dU) 
                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241037__Q) 
                                                     << 0x1cU) 
                                                    | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241036__Q) 
                                                        << 0x1bU) 
                                                       | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241035__Q) 
                                                           << 0x1aU) 
                                                          | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241034__Q) 
                                                              << 0x19U) 
                                                             | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241033__Q) 
                                                                 << 0x18U) 
                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241032__Q) 
                                                                    << 0x17U) 
                                                                   | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241031__Q) 
                                                                       << 0x16U) 
                                                                      | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241030__Q) 
                                                                          << 0x15U) 
                                                                         | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241029__Q) 
                                                                             << 0x14U) 
                                                                            | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241028__Q) 
                                                                                << 0x13U) 
                                                                               | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241027__Q) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241026__Q) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241025__Q) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241024__Q) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241023__Q) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241022__Q) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241021__Q) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241020__Q) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241019__Q) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241018__Q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241017__Q) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241016__Q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241015__Q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241014__Q) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241013__Q) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241012__Q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241011__Q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241010__Q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241009__Q)))))))))))))))))))))))))))))))));
    co_await vlSelf->__VtrigSched_h3815ed83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge co_sim_dsp_multiplier_accum_with_add_neg.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/5th-march/dsp_multiplier_accum_with_add_neg/results_dir/.././sim/co_sim_tb/co_sim_dsp_multiplier_accum_with_add_neg.v", 
                                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3815ed83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge co_sim_dsp_multiplier_accum_with_add_neg.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/5th-march/dsp_multiplier_accum_with_add_neg/results_dir/.././sim/co_sim_tb/co_sim_dsp_multiplier_accum_with_add_neg.v", 
                                                       56);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if ((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__P 
         != (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241040__Q) 
              << 0x1fU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241039__Q) 
                            << 0x1eU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241038__Q) 
                                          << 0x1dU) 
                                         | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241037__Q) 
                                             << 0x1cU) 
                                            | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241036__Q) 
                                                << 0x1bU) 
                                               | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241035__Q) 
                                                   << 0x1aU) 
                                                  | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241034__Q) 
                                                      << 0x19U) 
                                                     | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241033__Q) 
                                                         << 0x18U) 
                                                        | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241032__Q) 
                                                            << 0x17U) 
                                                           | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241031__Q) 
                                                               << 0x16U) 
                                                              | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241030__Q) 
                                                                  << 0x15U) 
                                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241029__Q) 
                                                                     << 0x14U) 
                                                                    | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241028__Q) 
                                                                        << 0x13U) 
                                                                       | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241027__Q) 
                                                                           << 0x12U) 
                                                                          | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241026__Q) 
                                                                              << 0x11U) 
                                                                             | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241025__Q) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241024__Q) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241023__Q) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241022__Q) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241021__Q) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241020__Q) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241019__Q) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241018__Q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241017__Q) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241016__Q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241015__Q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241014__Q) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241013__Q) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241012__Q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241011__Q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241010__Q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241009__Q)))))))))))))))))))))))))))))))))) {
        VL_WRITEF_NX("Data Mismatch. Golden: %0d, Netlist: %0d, Time: %0t\n",0,
                     32,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__P,
                     32,(((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241040__Q) 
                          << 0x1fU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241039__Q) 
                                        << 0x1eU) | 
                                       (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241038__Q) 
                                         << 0x1dU) 
                                        | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241037__Q) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241036__Q) 
                                               << 0x1bU) 
                                              | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241035__Q) 
                                                  << 0x1aU) 
                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241034__Q) 
                                                     << 0x19U) 
                                                    | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241033__Q) 
                                                        << 0x18U) 
                                                       | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241032__Q) 
                                                           << 0x17U) 
                                                          | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241031__Q) 
                                                              << 0x16U) 
                                                             | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241030__Q) 
                                                                 << 0x15U) 
                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241029__Q) 
                                                                    << 0x14U) 
                                                                   | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241028__Q) 
                                                                       << 0x13U) 
                                                                      | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241027__Q) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241026__Q) 
                                                                             << 0x11U) 
                                                                            | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241025__Q) 
                                                                                << 0x10U) 
                                                                               | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241024__Q) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241023__Q) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241022__Q) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241021__Q) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241020__Q) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241019__Q) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241018__Q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241017__Q) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241016__Q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241015__Q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241014__Q) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241013__Q) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241012__Q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241011__Q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241010__Q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241009__Q)))))))))))))))))))))))))))))))),
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__mismatch 
            = ((IData)(1U) + vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__mismatch);
    } else {
        VL_WRITEF_NX("Data Matched. Golden: %0d, Netlist: %0d, Time: %0t\n",0,
                     32,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__P,
                     32,(((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241040__Q) 
                          << 0x1fU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241039__Q) 
                                        << 0x1eU) | 
                                       (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241038__Q) 
                                         << 0x1dU) 
                                        | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241037__Q) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241036__Q) 
                                               << 0x1bU) 
                                              | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241035__Q) 
                                                  << 0x1aU) 
                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241034__Q) 
                                                     << 0x19U) 
                                                    | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241033__Q) 
                                                        << 0x18U) 
                                                       | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241032__Q) 
                                                           << 0x17U) 
                                                          | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241031__Q) 
                                                              << 0x16U) 
                                                             | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241030__Q) 
                                                                 << 0x15U) 
                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241029__Q) 
                                                                    << 0x14U) 
                                                                   | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241028__Q) 
                                                                       << 0x13U) 
                                                                      | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241027__Q) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241026__Q) 
                                                                             << 0x11U) 
                                                                            | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241025__Q) 
                                                                                << 0x10U) 
                                                                               | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241024__Q) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241023__Q) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241022__Q) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241021__Q) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241020__Q) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241019__Q) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241018__Q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241017__Q) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241016__Q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241015__Q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241014__Q) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241013__Q) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241012__Q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241011__Q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241010__Q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241009__Q)))))))))))))))))))))))))))))))),
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    VL_WRITEF_NX("\n\n***Reset Test is ended***\n\n\n",0);
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset = 0U;
    VL_WRITEF_NX("\n\n***Reset Value is set zero again***\n\n\n\n\n***Directed Functionality Test of output P = P + Bx(A+D) with sel_c_or_p=0 is applied***\n\n\n",0);
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p = 0U;
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A = 5U;
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B = 2U;
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C = 3U;
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D = 4U;
    VL_WRITEF_NX("%20# reset=%0b, clk=%0b, sel_c_or_p=%0#, A=%0d, B=%0d, C=%0d, D=%0d, P=%0d\n%20# reset=%0b, clk=%0b, sel_c_or_p=%0#, A=%0d, B=%0d, C=%0d, D=%0d, P_netlist=%0d\n",0,
                 64,VL_TIME_UNITED_Q(1000),1,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset),
                 1,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__clk,
                 1,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p),
                 16,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A,
                 16,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B),
                 16,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C,
                 16,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D),
                 32,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__P,
                 64,VL_TIME_UNITED_Q(1000),1,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset),
                 1,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__clk,
                 1,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p),
                 16,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A,
                 16,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B),
                 16,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C,
                 16,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D),
                 32,(((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241040__Q) 
                      << 0x1fU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241039__Q) 
                                    << 0x1eU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241038__Q) 
                                                  << 0x1dU) 
                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241037__Q) 
                                                     << 0x1cU) 
                                                    | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241036__Q) 
                                                        << 0x1bU) 
                                                       | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241035__Q) 
                                                           << 0x1aU) 
                                                          | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241034__Q) 
                                                              << 0x19U) 
                                                             | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241033__Q) 
                                                                 << 0x18U) 
                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241032__Q) 
                                                                    << 0x17U) 
                                                                   | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241031__Q) 
                                                                       << 0x16U) 
                                                                      | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241030__Q) 
                                                                          << 0x15U) 
                                                                         | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241029__Q) 
                                                                             << 0x14U) 
                                                                            | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241028__Q) 
                                                                                << 0x13U) 
                                                                               | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241027__Q) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241026__Q) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241025__Q) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241024__Q) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241023__Q) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241022__Q) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241021__Q) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241020__Q) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241019__Q) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241018__Q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241017__Q) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241016__Q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241015__Q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241014__Q) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241013__Q) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241012__Q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241011__Q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241010__Q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241009__Q)))))))))))))))))))))))))))))))));
    co_await vlSelf->__VtrigSched_h3815ed83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge co_sim_dsp_multiplier_accum_with_add_neg.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/5th-march/dsp_multiplier_accum_with_add_neg/results_dir/.././sim/co_sim_tb/co_sim_dsp_multiplier_accum_with_add_neg.v", 
                                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3815ed83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge co_sim_dsp_multiplier_accum_with_add_neg.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/5th-march/dsp_multiplier_accum_with_add_neg/results_dir/.././sim/co_sim_tb/co_sim_dsp_multiplier_accum_with_add_neg.v", 
                                                       71);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if ((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__P 
         != (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241040__Q) 
              << 0x1fU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241039__Q) 
                            << 0x1eU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241038__Q) 
                                          << 0x1dU) 
                                         | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241037__Q) 
                                             << 0x1cU) 
                                            | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241036__Q) 
                                                << 0x1bU) 
                                               | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241035__Q) 
                                                   << 0x1aU) 
                                                  | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241034__Q) 
                                                      << 0x19U) 
                                                     | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241033__Q) 
                                                         << 0x18U) 
                                                        | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241032__Q) 
                                                            << 0x17U) 
                                                           | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241031__Q) 
                                                               << 0x16U) 
                                                              | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241030__Q) 
                                                                  << 0x15U) 
                                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241029__Q) 
                                                                     << 0x14U) 
                                                                    | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241028__Q) 
                                                                        << 0x13U) 
                                                                       | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241027__Q) 
                                                                           << 0x12U) 
                                                                          | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241026__Q) 
                                                                              << 0x11U) 
                                                                             | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241025__Q) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241024__Q) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241023__Q) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241022__Q) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241021__Q) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241020__Q) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241019__Q) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241018__Q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241017__Q) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241016__Q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241015__Q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241014__Q) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241013__Q) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241012__Q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241011__Q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241010__Q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241009__Q)))))))))))))))))))))))))))))))))) {
        VL_WRITEF_NX("Data Mismatch. Golden: %0d, Netlist: %0d, Time: %0t\n",0,
                     32,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__P,
                     32,(((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241040__Q) 
                          << 0x1fU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241039__Q) 
                                        << 0x1eU) | 
                                       (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241038__Q) 
                                         << 0x1dU) 
                                        | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241037__Q) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241036__Q) 
                                               << 0x1bU) 
                                              | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241035__Q) 
                                                  << 0x1aU) 
                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241034__Q) 
                                                     << 0x19U) 
                                                    | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241033__Q) 
                                                        << 0x18U) 
                                                       | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241032__Q) 
                                                           << 0x17U) 
                                                          | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241031__Q) 
                                                              << 0x16U) 
                                                             | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241030__Q) 
                                                                 << 0x15U) 
                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241029__Q) 
                                                                    << 0x14U) 
                                                                   | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241028__Q) 
                                                                       << 0x13U) 
                                                                      | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241027__Q) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241026__Q) 
                                                                             << 0x11U) 
                                                                            | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241025__Q) 
                                                                                << 0x10U) 
                                                                               | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241024__Q) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241023__Q) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241022__Q) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241021__Q) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241020__Q) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241019__Q) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241018__Q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241017__Q) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241016__Q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241015__Q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241014__Q) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241013__Q) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241012__Q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241011__Q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241010__Q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241009__Q)))))))))))))))))))))))))))))))),
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__mismatch 
            = ((IData)(1U) + vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__mismatch);
    } else {
        VL_WRITEF_NX("Data Matched. Golden: %0d, Netlist: %0d, Time: %0t\n",0,
                     32,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__P,
                     32,(((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241040__Q) 
                          << 0x1fU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241039__Q) 
                                        << 0x1eU) | 
                                       (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241038__Q) 
                                         << 0x1dU) 
                                        | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241037__Q) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241036__Q) 
                                               << 0x1bU) 
                                              | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241035__Q) 
                                                  << 0x1aU) 
                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241034__Q) 
                                                     << 0x19U) 
                                                    | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241033__Q) 
                                                        << 0x18U) 
                                                       | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241032__Q) 
                                                           << 0x17U) 
                                                          | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241031__Q) 
                                                              << 0x16U) 
                                                             | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241030__Q) 
                                                                 << 0x15U) 
                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241029__Q) 
                                                                    << 0x14U) 
                                                                   | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241028__Q) 
                                                                       << 0x13U) 
                                                                      | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241027__Q) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241026__Q) 
                                                                             << 0x11U) 
                                                                            | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241025__Q) 
                                                                                << 0x10U) 
                                                                               | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241024__Q) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241023__Q) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241022__Q) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241021__Q) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241020__Q) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241019__Q) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241018__Q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241017__Q) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241016__Q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241015__Q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241014__Q) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241013__Q) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241012__Q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241011__Q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241010__Q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241009__Q)))))))))))))))))))))))))))))))),
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    VL_WRITEF_NX("\n\n***Directed Functionality Test of output P = P + Bx(A+D) with sel_c_or_p=0 is ended***\n\n\n\n\n***Random Functionality Tests of output P = P + Bx(A+D) with sel_c_or_p=0 are applied***\n\n\n",0);
    co_sim_dsp_multiplier_accum_with_add_neg__DOT____Vrepeat1 = 0x2bcU;
    while (VL_LTS_III(32, 0U, co_sim_dsp_multiplier_accum_with_add_neg__DOT____Vrepeat1)) {
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A 
            = (0xffffU & VL_RANDOM_I());
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B 
            = (0xffffU & VL_RANDOM_I());
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C 
            = (0xffffU & VL_RANDOM_I());
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D 
            = (0xffffU & VL_RANDOM_I());
        VL_WRITEF_NX("%20# reset=%0b, clk=%0b, sel_c_or_p=%0#, A=%0d, B=%0d, C=%0d, D=%0d, P=%0d\n%20# reset=%0b, clk=%0b, sel_c_or_p=%0#, A=%0d, B=%0d, C=%0d, D=%0d, P_netlist=%0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),1,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset),
                     1,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__clk,
                     1,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p),
                     16,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A,
                     16,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B),
                     16,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C,
                     16,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D),
                     32,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__P,
                     64,VL_TIME_UNITED_Q(1000),1,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset),
                     1,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__clk,
                     1,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p),
                     16,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A,
                     16,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B),
                     16,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C,
                     16,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D),
                     32,(((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241040__Q) 
                          << 0x1fU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241039__Q) 
                                        << 0x1eU) | 
                                       (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241038__Q) 
                                         << 0x1dU) 
                                        | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241037__Q) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241036__Q) 
                                               << 0x1bU) 
                                              | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241035__Q) 
                                                  << 0x1aU) 
                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241034__Q) 
                                                     << 0x19U) 
                                                    | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241033__Q) 
                                                        << 0x18U) 
                                                       | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241032__Q) 
                                                           << 0x17U) 
                                                          | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241031__Q) 
                                                              << 0x16U) 
                                                             | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241030__Q) 
                                                                 << 0x15U) 
                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241029__Q) 
                                                                    << 0x14U) 
                                                                   | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241028__Q) 
                                                                       << 0x13U) 
                                                                      | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241027__Q) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241026__Q) 
                                                                             << 0x11U) 
                                                                            | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241025__Q) 
                                                                                << 0x10U) 
                                                                               | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241024__Q) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241023__Q) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241022__Q) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241021__Q) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241020__Q) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241019__Q) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241018__Q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241017__Q) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241016__Q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241015__Q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241014__Q) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241013__Q) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241012__Q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241011__Q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241010__Q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241009__Q)))))))))))))))))))))))))))))))));
        co_await vlSelf->__VtrigSched_h3815ed83__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge co_sim_dsp_multiplier_accum_with_add_neg.clk)", 
                                                           "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/5th-march/dsp_multiplier_accum_with_add_neg/results_dir/.././sim/co_sim_tb/co_sim_dsp_multiplier_accum_with_add_neg.v", 
                                                           79);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if ((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__P 
             != (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241040__Q) 
                  << 0x1fU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241039__Q) 
                                << 0x1eU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241038__Q) 
                                              << 0x1dU) 
                                             | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241037__Q) 
                                                 << 0x1cU) 
                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241036__Q) 
                                                    << 0x1bU) 
                                                   | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241035__Q) 
                                                       << 0x1aU) 
                                                      | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241034__Q) 
                                                          << 0x19U) 
                                                         | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241033__Q) 
                                                             << 0x18U) 
                                                            | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241032__Q) 
                                                                << 0x17U) 
                                                               | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241031__Q) 
                                                                   << 0x16U) 
                                                                  | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241030__Q) 
                                                                      << 0x15U) 
                                                                     | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241029__Q) 
                                                                         << 0x14U) 
                                                                        | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241028__Q) 
                                                                            << 0x13U) 
                                                                           | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241027__Q) 
                                                                               << 0x12U) 
                                                                              | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241026__Q) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241025__Q) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241024__Q) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241023__Q) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241022__Q) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241021__Q) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241020__Q) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241019__Q) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241018__Q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241017__Q) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241016__Q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241015__Q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241014__Q) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241013__Q) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241012__Q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241011__Q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241010__Q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241009__Q)))))))))))))))))))))))))))))))))) {
            VL_WRITEF_NX("Data Mismatch. Golden: %0d, Netlist: %0d, Time: %0t\n",0,
                         32,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__P,
                         32,(((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241040__Q) 
                              << 0x1fU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241039__Q) 
                                            << 0x1eU) 
                                           | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241038__Q) 
                                               << 0x1dU) 
                                              | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241037__Q) 
                                                  << 0x1cU) 
                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241036__Q) 
                                                     << 0x1bU) 
                                                    | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241035__Q) 
                                                        << 0x1aU) 
                                                       | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241034__Q) 
                                                           << 0x19U) 
                                                          | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241033__Q) 
                                                              << 0x18U) 
                                                             | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241032__Q) 
                                                                 << 0x17U) 
                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241031__Q) 
                                                                    << 0x16U) 
                                                                   | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241030__Q) 
                                                                       << 0x15U) 
                                                                      | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241029__Q) 
                                                                          << 0x14U) 
                                                                         | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241028__Q) 
                                                                             << 0x13U) 
                                                                            | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241027__Q) 
                                                                                << 0x12U) 
                                                                               | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241026__Q) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241025__Q) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241024__Q) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241023__Q) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241022__Q) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241021__Q) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241020__Q) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241019__Q) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241018__Q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241017__Q) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241016__Q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241015__Q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241014__Q) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241013__Q) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241012__Q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241011__Q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241010__Q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241009__Q)))))))))))))))))))))))))))))))),
                         64,VL_TIME_UNITED_Q(1000),
                         -9);
            vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__mismatch 
                = ((IData)(1U) + vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__mismatch);
        } else {
            VL_WRITEF_NX("Data Matched. Golden: %0d, Netlist: %0d, Time: %0t\n",0,
                         32,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__P,
                         32,(((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241040__Q) 
                              << 0x1fU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241039__Q) 
                                            << 0x1eU) 
                                           | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241038__Q) 
                                               << 0x1dU) 
                                              | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241037__Q) 
                                                  << 0x1cU) 
                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241036__Q) 
                                                     << 0x1bU) 
                                                    | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241035__Q) 
                                                        << 0x1aU) 
                                                       | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241034__Q) 
                                                           << 0x19U) 
                                                          | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241033__Q) 
                                                              << 0x18U) 
                                                             | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241032__Q) 
                                                                 << 0x17U) 
                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241031__Q) 
                                                                    << 0x16U) 
                                                                   | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241030__Q) 
                                                                       << 0x15U) 
                                                                      | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241029__Q) 
                                                                          << 0x14U) 
                                                                         | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241028__Q) 
                                                                             << 0x13U) 
                                                                            | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241027__Q) 
                                                                                << 0x12U) 
                                                                               | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241026__Q) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241025__Q) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241024__Q) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241023__Q) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241022__Q) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241021__Q) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241020__Q) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241019__Q) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241018__Q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241017__Q) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241016__Q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241015__Q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241014__Q) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241013__Q) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241012__Q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241011__Q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241010__Q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241009__Q)))))))))))))))))))))))))))))))),
                         64,VL_TIME_UNITED_Q(1000),
                         -9);
        }
        VL_WRITEF_NX("\n\n***Random Functionality Tests of output P = P + Bx(A+D) with sel_c_or_p=0 are ended***\n\n\n",0);
        co_sim_dsp_multiplier_accum_with_add_neg__DOT____Vrepeat1 
            = (co_sim_dsp_multiplier_accum_with_add_neg__DOT____Vrepeat1 
               - (IData)(1U));
    }
    VL_WRITEF_NX("\n\n***Directed Functionality Test of output P=Bx(A+D)+C with sel_c_or_p=1 is applied***\n\n\n",0);
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p = 1U;
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A = 0xffffU;
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B = 0xffffU;
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C = 0xffffU;
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D = 0xffffU;
    VL_WRITEF_NX("%20# reset=%0b, clk=%0b, sel_c_or_p=%0#, A=%0d, B=%0d, C=%0d, D=%0d, P=%0d\n%20# reset=%0b, clk=%0b, sel_c_or_p=%0#, A=%0d, B=%0d, C=%0d, D=%0d, P_netlist=%0d\n",0,
                 64,VL_TIME_UNITED_Q(1000),1,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset),
                 1,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__clk,
                 1,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p),
                 16,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A,
                 16,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B),
                 16,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C,
                 16,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D),
                 32,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__P,
                 64,VL_TIME_UNITED_Q(1000),1,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset),
                 1,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__clk,
                 1,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p),
                 16,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A,
                 16,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B),
                 16,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C,
                 16,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D),
                 32,(((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241040__Q) 
                      << 0x1fU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241039__Q) 
                                    << 0x1eU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241038__Q) 
                                                  << 0x1dU) 
                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241037__Q) 
                                                     << 0x1cU) 
                                                    | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241036__Q) 
                                                        << 0x1bU) 
                                                       | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241035__Q) 
                                                           << 0x1aU) 
                                                          | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241034__Q) 
                                                              << 0x19U) 
                                                             | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241033__Q) 
                                                                 << 0x18U) 
                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241032__Q) 
                                                                    << 0x17U) 
                                                                   | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241031__Q) 
                                                                       << 0x16U) 
                                                                      | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241030__Q) 
                                                                          << 0x15U) 
                                                                         | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241029__Q) 
                                                                             << 0x14U) 
                                                                            | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241028__Q) 
                                                                                << 0x13U) 
                                                                               | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241027__Q) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241026__Q) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241025__Q) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241024__Q) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241023__Q) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241022__Q) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241021__Q) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241020__Q) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241019__Q) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241018__Q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241017__Q) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241016__Q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241015__Q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241014__Q) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241013__Q) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241012__Q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241011__Q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241010__Q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241009__Q)))))))))))))))))))))))))))))))));
    co_await vlSelf->__VtrigSched_h3815ed83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge co_sim_dsp_multiplier_accum_with_add_neg.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/5th-march/dsp_multiplier_accum_with_add_neg/results_dir/.././sim/co_sim_tb/co_sim_dsp_multiplier_accum_with_add_neg.v", 
                                                       91);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3815ed83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge co_sim_dsp_multiplier_accum_with_add_neg.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/5th-march/dsp_multiplier_accum_with_add_neg/results_dir/.././sim/co_sim_tb/co_sim_dsp_multiplier_accum_with_add_neg.v", 
                                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if ((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__P 
         != (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241040__Q) 
              << 0x1fU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241039__Q) 
                            << 0x1eU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241038__Q) 
                                          << 0x1dU) 
                                         | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241037__Q) 
                                             << 0x1cU) 
                                            | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241036__Q) 
                                                << 0x1bU) 
                                               | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241035__Q) 
                                                   << 0x1aU) 
                                                  | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241034__Q) 
                                                      << 0x19U) 
                                                     | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241033__Q) 
                                                         << 0x18U) 
                                                        | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241032__Q) 
                                                            << 0x17U) 
                                                           | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241031__Q) 
                                                               << 0x16U) 
                                                              | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241030__Q) 
                                                                  << 0x15U) 
                                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241029__Q) 
                                                                     << 0x14U) 
                                                                    | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241028__Q) 
                                                                        << 0x13U) 
                                                                       | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241027__Q) 
                                                                           << 0x12U) 
                                                                          | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241026__Q) 
                                                                              << 0x11U) 
                                                                             | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241025__Q) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241024__Q) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241023__Q) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241022__Q) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241021__Q) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241020__Q) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241019__Q) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241018__Q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241017__Q) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241016__Q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241015__Q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241014__Q) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241013__Q) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241012__Q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241011__Q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241010__Q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241009__Q)))))))))))))))))))))))))))))))))) {
        VL_WRITEF_NX("Data Mismatch. Golden: %0d, Netlist: %0d, Time: %0t\n",0,
                     32,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__P,
                     32,(((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241040__Q) 
                          << 0x1fU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241039__Q) 
                                        << 0x1eU) | 
                                       (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241038__Q) 
                                         << 0x1dU) 
                                        | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241037__Q) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241036__Q) 
                                               << 0x1bU) 
                                              | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241035__Q) 
                                                  << 0x1aU) 
                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241034__Q) 
                                                     << 0x19U) 
                                                    | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241033__Q) 
                                                        << 0x18U) 
                                                       | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241032__Q) 
                                                           << 0x17U) 
                                                          | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241031__Q) 
                                                              << 0x16U) 
                                                             | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241030__Q) 
                                                                 << 0x15U) 
                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241029__Q) 
                                                                    << 0x14U) 
                                                                   | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241028__Q) 
                                                                       << 0x13U) 
                                                                      | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241027__Q) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241026__Q) 
                                                                             << 0x11U) 
                                                                            | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241025__Q) 
                                                                                << 0x10U) 
                                                                               | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241024__Q) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241023__Q) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241022__Q) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241021__Q) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241020__Q) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241019__Q) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241018__Q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241017__Q) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241016__Q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241015__Q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241014__Q) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241013__Q) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241012__Q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241011__Q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241010__Q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241009__Q)))))))))))))))))))))))))))))))),
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__mismatch 
            = ((IData)(1U) + vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__mismatch);
    } else {
        VL_WRITEF_NX("Data Matched. Golden: %0d, Netlist: %0d, Time: %0t\n",0,
                     32,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__P,
                     32,(((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241040__Q) 
                          << 0x1fU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241039__Q) 
                                        << 0x1eU) | 
                                       (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241038__Q) 
                                         << 0x1dU) 
                                        | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241037__Q) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241036__Q) 
                                               << 0x1bU) 
                                              | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241035__Q) 
                                                  << 0x1aU) 
                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241034__Q) 
                                                     << 0x19U) 
                                                    | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241033__Q) 
                                                        << 0x18U) 
                                                       | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241032__Q) 
                                                           << 0x17U) 
                                                          | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241031__Q) 
                                                              << 0x16U) 
                                                             | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241030__Q) 
                                                                 << 0x15U) 
                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241029__Q) 
                                                                    << 0x14U) 
                                                                   | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241028__Q) 
                                                                       << 0x13U) 
                                                                      | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241027__Q) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241026__Q) 
                                                                             << 0x11U) 
                                                                            | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241025__Q) 
                                                                                << 0x10U) 
                                                                               | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241024__Q) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241023__Q) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241022__Q) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241021__Q) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241020__Q) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241019__Q) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241018__Q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241017__Q) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241016__Q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241015__Q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241014__Q) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241013__Q) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241012__Q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241011__Q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241010__Q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241009__Q)))))))))))))))))))))))))))))))),
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    VL_WRITEF_NX("\n\n***Directed Functionality Test of output P=Bx(A+D)+C with sel_c_or_p=1 is ended***\n\n\n\n\n***Directed Functionality Test of output P=Bx(A+D)+C with sel_c_or_p=1 is applied***\n\n\n",0);
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p = 1U;
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A = 0xffffU;
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B = 0xffffU;
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C = 0xffffU;
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D = 0xffffU;
    VL_WRITEF_NX("%20# reset=%0b, clk=%0b, sel_c_or_p=%0#, A=%0d, B=%0d, C=%0d, D=%0d, P=%0d\n%20# reset=%0b, clk=%0b, sel_c_or_p=%0#, A=%0d, B=%0d, C=%0d, D=%0d, P_netlist=%0d\n",0,
                 64,VL_TIME_UNITED_Q(1000),1,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset),
                 1,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__clk,
                 1,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p),
                 16,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A,
                 16,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B),
                 16,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C,
                 16,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D),
                 32,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__P,
                 64,VL_TIME_UNITED_Q(1000),1,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset),
                 1,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__clk,
                 1,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p),
                 16,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A,
                 16,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B),
                 16,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C,
                 16,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D),
                 32,(((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241040__Q) 
                      << 0x1fU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241039__Q) 
                                    << 0x1eU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241038__Q) 
                                                  << 0x1dU) 
                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241037__Q) 
                                                     << 0x1cU) 
                                                    | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241036__Q) 
                                                        << 0x1bU) 
                                                       | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241035__Q) 
                                                           << 0x1aU) 
                                                          | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241034__Q) 
                                                              << 0x19U) 
                                                             | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241033__Q) 
                                                                 << 0x18U) 
                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241032__Q) 
                                                                    << 0x17U) 
                                                                   | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241031__Q) 
                                                                       << 0x16U) 
                                                                      | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241030__Q) 
                                                                          << 0x15U) 
                                                                         | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241029__Q) 
                                                                             << 0x14U) 
                                                                            | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241028__Q) 
                                                                                << 0x13U) 
                                                                               | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241027__Q) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241026__Q) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241025__Q) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241024__Q) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241023__Q) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241022__Q) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241021__Q) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241020__Q) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241019__Q) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241018__Q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241017__Q) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241016__Q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241015__Q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241014__Q) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241013__Q) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241012__Q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241011__Q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241010__Q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241009__Q)))))))))))))))))))))))))))))))));
    co_await vlSelf->__VtrigSched_h3815ed83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge co_sim_dsp_multiplier_accum_with_add_neg.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/5th-march/dsp_multiplier_accum_with_add_neg/results_dir/.././sim/co_sim_tb/co_sim_dsp_multiplier_accum_with_add_neg.v", 
                                                       103);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3815ed83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge co_sim_dsp_multiplier_accum_with_add_neg.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/5th-march/dsp_multiplier_accum_with_add_neg/results_dir/.././sim/co_sim_tb/co_sim_dsp_multiplier_accum_with_add_neg.v", 
                                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if ((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__P 
         != (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241040__Q) 
              << 0x1fU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241039__Q) 
                            << 0x1eU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241038__Q) 
                                          << 0x1dU) 
                                         | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241037__Q) 
                                             << 0x1cU) 
                                            | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241036__Q) 
                                                << 0x1bU) 
                                               | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241035__Q) 
                                                   << 0x1aU) 
                                                  | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241034__Q) 
                                                      << 0x19U) 
                                                     | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241033__Q) 
                                                         << 0x18U) 
                                                        | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241032__Q) 
                                                            << 0x17U) 
                                                           | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241031__Q) 
                                                               << 0x16U) 
                                                              | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241030__Q) 
                                                                  << 0x15U) 
                                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241029__Q) 
                                                                     << 0x14U) 
                                                                    | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241028__Q) 
                                                                        << 0x13U) 
                                                                       | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241027__Q) 
                                                                           << 0x12U) 
                                                                          | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241026__Q) 
                                                                              << 0x11U) 
                                                                             | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241025__Q) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241024__Q) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241023__Q) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241022__Q) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241021__Q) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241020__Q) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241019__Q) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241018__Q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241017__Q) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241016__Q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241015__Q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241014__Q) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241013__Q) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241012__Q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241011__Q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241010__Q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241009__Q)))))))))))))))))))))))))))))))))) {
        VL_WRITEF_NX("Data Mismatch. Golden: %0d, Netlist: %0d, Time: %0t\n",0,
                     32,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__P,
                     32,(((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241040__Q) 
                          << 0x1fU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241039__Q) 
                                        << 0x1eU) | 
                                       (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241038__Q) 
                                         << 0x1dU) 
                                        | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241037__Q) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241036__Q) 
                                               << 0x1bU) 
                                              | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241035__Q) 
                                                  << 0x1aU) 
                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241034__Q) 
                                                     << 0x19U) 
                                                    | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241033__Q) 
                                                        << 0x18U) 
                                                       | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241032__Q) 
                                                           << 0x17U) 
                                                          | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241031__Q) 
                                                              << 0x16U) 
                                                             | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241030__Q) 
                                                                 << 0x15U) 
                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241029__Q) 
                                                                    << 0x14U) 
                                                                   | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241028__Q) 
                                                                       << 0x13U) 
                                                                      | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241027__Q) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241026__Q) 
                                                                             << 0x11U) 
                                                                            | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241025__Q) 
                                                                                << 0x10U) 
                                                                               | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241024__Q) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241023__Q) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241022__Q) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241021__Q) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241020__Q) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241019__Q) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241018__Q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241017__Q) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241016__Q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241015__Q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241014__Q) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241013__Q) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241012__Q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241011__Q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241010__Q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241009__Q)))))))))))))))))))))))))))))))),
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__mismatch 
            = ((IData)(1U) + vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__mismatch);
    } else {
        VL_WRITEF_NX("Data Matched. Golden: %0d, Netlist: %0d, Time: %0t\n",0,
                     32,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__P,
                     32,(((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241040__Q) 
                          << 0x1fU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241039__Q) 
                                        << 0x1eU) | 
                                       (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241038__Q) 
                                         << 0x1dU) 
                                        | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241037__Q) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241036__Q) 
                                               << 0x1bU) 
                                              | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241035__Q) 
                                                  << 0x1aU) 
                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241034__Q) 
                                                     << 0x19U) 
                                                    | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241033__Q) 
                                                        << 0x18U) 
                                                       | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241032__Q) 
                                                           << 0x17U) 
                                                          | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241031__Q) 
                                                              << 0x16U) 
                                                             | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241030__Q) 
                                                                 << 0x15U) 
                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241029__Q) 
                                                                    << 0x14U) 
                                                                   | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241028__Q) 
                                                                       << 0x13U) 
                                                                      | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241027__Q) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241026__Q) 
                                                                             << 0x11U) 
                                                                            | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241025__Q) 
                                                                                << 0x10U) 
                                                                               | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241024__Q) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241023__Q) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241022__Q) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241021__Q) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241020__Q) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241019__Q) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241018__Q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241017__Q) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241016__Q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241015__Q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241014__Q) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241013__Q) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241012__Q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241011__Q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241010__Q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241009__Q)))))))))))))))))))))))))))))))),
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    VL_WRITEF_NX("\n\n***Directed Functionality Test of output P=Bx(A+D)+C with sel_c_or_p=1 is ended***\n\n\n\n\n***Directed Functionality Test of output P=Bx(A+D)+C with sel_c_or_p=1 is applied***\n\n\n",0);
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p = 1U;
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A = 0U;
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B = 0U;
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C = 0U;
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D = 0U;
    VL_WRITEF_NX("%20# reset=%0b, clk=%0b, sel_c_or_p=%0#, A=%0d, B=%0d, C=%0d, D=%0d, P=%0d\n%20# reset=%0b, clk=%0b, sel_c_or_p=%0#, A=%0d, B=%0d, C=%0d, D=%0d, P_netlist=%0d\n",0,
                 64,VL_TIME_UNITED_Q(1000),1,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset),
                 1,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__clk,
                 1,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p),
                 16,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A,
                 16,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B),
                 16,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C,
                 16,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D),
                 32,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__P,
                 64,VL_TIME_UNITED_Q(1000),1,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset),
                 1,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__clk,
                 1,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p),
                 16,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A,
                 16,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B),
                 16,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C,
                 16,(IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D),
                 32,(((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241040__Q) 
                      << 0x1fU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241039__Q) 
                                    << 0x1eU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241038__Q) 
                                                  << 0x1dU) 
                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241037__Q) 
                                                     << 0x1cU) 
                                                    | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241036__Q) 
                                                        << 0x1bU) 
                                                       | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241035__Q) 
                                                           << 0x1aU) 
                                                          | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241034__Q) 
                                                              << 0x19U) 
                                                             | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241033__Q) 
                                                                 << 0x18U) 
                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241032__Q) 
                                                                    << 0x17U) 
                                                                   | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241031__Q) 
                                                                       << 0x16U) 
                                                                      | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241030__Q) 
                                                                          << 0x15U) 
                                                                         | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241029__Q) 
                                                                             << 0x14U) 
                                                                            | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241028__Q) 
                                                                                << 0x13U) 
                                                                               | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241027__Q) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241026__Q) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241025__Q) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241024__Q) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241023__Q) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241022__Q) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241021__Q) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241020__Q) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241019__Q) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241018__Q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241017__Q) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241016__Q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241015__Q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241014__Q) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241013__Q) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241012__Q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241011__Q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241010__Q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241009__Q)))))))))))))))))))))))))))))))));
    co_await vlSelf->__VtrigSched_h3815ed83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge co_sim_dsp_multiplier_accum_with_add_neg.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/5th-march/dsp_multiplier_accum_with_add_neg/results_dir/.././sim/co_sim_tb/co_sim_dsp_multiplier_accum_with_add_neg.v", 
                                                       115);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h3815ed83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge co_sim_dsp_multiplier_accum_with_add_neg.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/5th-march/dsp_multiplier_accum_with_add_neg/results_dir/.././sim/co_sim_tb/co_sim_dsp_multiplier_accum_with_add_neg.v", 
                                                       116);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if ((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__P 
         != (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241040__Q) 
              << 0x1fU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241039__Q) 
                            << 0x1eU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241038__Q) 
                                          << 0x1dU) 
                                         | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241037__Q) 
                                             << 0x1cU) 
                                            | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241036__Q) 
                                                << 0x1bU) 
                                               | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241035__Q) 
                                                   << 0x1aU) 
                                                  | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241034__Q) 
                                                      << 0x19U) 
                                                     | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241033__Q) 
                                                         << 0x18U) 
                                                        | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241032__Q) 
                                                            << 0x17U) 
                                                           | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241031__Q) 
                                                               << 0x16U) 
                                                              | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241030__Q) 
                                                                  << 0x15U) 
                                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241029__Q) 
                                                                     << 0x14U) 
                                                                    | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241028__Q) 
                                                                        << 0x13U) 
                                                                       | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241027__Q) 
                                                                           << 0x12U) 
                                                                          | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241026__Q) 
                                                                              << 0x11U) 
                                                                             | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241025__Q) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241024__Q) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241023__Q) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241022__Q) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241021__Q) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241020__Q) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241019__Q) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241018__Q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241017__Q) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241016__Q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241015__Q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241014__Q) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241013__Q) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241012__Q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241011__Q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241010__Q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241009__Q)))))))))))))))))))))))))))))))))) {
        VL_WRITEF_NX("Data Mismatch. Golden: %0d, Netlist: %0d, Time: %0t\n",0,
                     32,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__P,
                     32,(((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241040__Q) 
                          << 0x1fU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241039__Q) 
                                        << 0x1eU) | 
                                       (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241038__Q) 
                                         << 0x1dU) 
                                        | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241037__Q) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241036__Q) 
                                               << 0x1bU) 
                                              | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241035__Q) 
                                                  << 0x1aU) 
                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241034__Q) 
                                                     << 0x19U) 
                                                    | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241033__Q) 
                                                        << 0x18U) 
                                                       | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241032__Q) 
                                                           << 0x17U) 
                                                          | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241031__Q) 
                                                              << 0x16U) 
                                                             | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241030__Q) 
                                                                 << 0x15U) 
                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241029__Q) 
                                                                    << 0x14U) 
                                                                   | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241028__Q) 
                                                                       << 0x13U) 
                                                                      | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241027__Q) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241026__Q) 
                                                                             << 0x11U) 
                                                                            | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241025__Q) 
                                                                                << 0x10U) 
                                                                               | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241024__Q) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241023__Q) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241022__Q) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241021__Q) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241020__Q) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241019__Q) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241018__Q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241017__Q) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241016__Q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241015__Q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241014__Q) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241013__Q) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241012__Q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241011__Q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241010__Q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241009__Q)))))))))))))))))))))))))))))))),
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__mismatch 
            = ((IData)(1U) + vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__mismatch);
    } else {
        VL_WRITEF_NX("Data Matched. Golden: %0d, Netlist: %0d, Time: %0t\n",0,
                     32,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__P,
                     32,(((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241040__Q) 
                          << 0x1fU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241039__Q) 
                                        << 0x1eU) | 
                                       (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241038__Q) 
                                         << 0x1dU) 
                                        | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241037__Q) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241036__Q) 
                                               << 0x1bU) 
                                              | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241035__Q) 
                                                  << 0x1aU) 
                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241034__Q) 
                                                     << 0x19U) 
                                                    | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241033__Q) 
                                                        << 0x18U) 
                                                       | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241032__Q) 
                                                           << 0x17U) 
                                                          | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241031__Q) 
                                                              << 0x16U) 
                                                             | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241030__Q) 
                                                                 << 0x15U) 
                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241029__Q) 
                                                                    << 0x14U) 
                                                                   | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241028__Q) 
                                                                       << 0x13U) 
                                                                      | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241027__Q) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241026__Q) 
                                                                             << 0x11U) 
                                                                            | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241025__Q) 
                                                                                << 0x10U) 
                                                                               | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241024__Q) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241023__Q) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241022__Q) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241021__Q) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241020__Q) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241019__Q) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241018__Q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241017__Q) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241016__Q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241015__Q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241014__Q) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241013__Q) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241012__Q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241011__Q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241010__Q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241009__Q)))))))))))))))))))))))))))))))),
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    VL_WRITEF_NX("\n\n***Directed Functionality Test of output P=Bx(A+D)+C with sel_c_or_p=1 is ended***\n\n\n",0);
    if ((0U == vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__mismatch)) {
        VL_WRITEF_NX("\n**** All Comparison Matched ***\nSimulation Passed\n",0);
    } else {
        VL_WRITEF_NX("%0d comparison(s) mismatched\nERROR: SIM: Simulation Failed\n",0,
                     32,vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__mismatch);
    }
    VL_FINISH_MT("/nfs_scratch/scratch/CompilerValidation/abdul_hameed/5th-march/dsp_multiplier_accum_with_add_neg/results_dir/.././sim/co_sim_tb/co_sim_dsp_multiplier_accum_with_add_neg.v", 125, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT void Vco_sim_dsp_multiplier_accum_with_add_neg___024root___act_sequent__TOP__0(Vco_sim_dsp_multiplier_accum_with_add_neg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_dsp_multiplier_accum_with_add_neg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_dsp_multiplier_accum_with_add_neg___024root___act_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241104__Q)
                    ? ((~ (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eC 
                           >> 0xfU)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241056__Q))
                    : ((~ (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eC 
                           >> 0xfU)) & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241056__Q))) 
                  << 0x1fU) | ((0x40000000U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add 
                                               >> 1U)) 
                               | ((0x20000000U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add 
                                                  >> 2U)) 
                                  | ((0x10000000U & 
                                      (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add 
                                       >> 3U)) | ((0x8000000U 
                                                   & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add 
                                                      >> 4U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add 
                                                         >> 5U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add 
                                                            >> 6U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add 
                                                               >> 7U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add 
                                                                  >> 8U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add 
                                                                     >> 9U)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add 
                                                                        >> 0xaU)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add 
                                                                           >> 0xbU)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add 
                                                                              >> 0xcU)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add 
                                                                                >> 0xdU)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add 
                                                                                >> 0xeU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add 
                                                                                >> 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (((0x8000U 
                                                                                & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eC)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241104__Q)
                                                                                 ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241056__Q)
                                                                                 : 
                                                                                (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241056__Q)))
                                                                                 : 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241104__Q)
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241056__Q))
                                                                                 : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241056__Q))) 
                                                                                << 0xfU)) 
                                                                                | (0x7fffU 
                                                                                & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eC 
                                                                                ^ vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eS)))))))))))))))))));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vco_sim_dsp_multiplier_accum_with_add_neg___024root___act_sequent__TOP__1(Vco_sim_dsp_multiplier_accum_with_add_neg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_dsp_multiplier_accum_with_add_neg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_dsp_multiplier_accum_with_add_neg___024root___act_sequent__TOP__1\n"); );
    // Body
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__golden__DOT__add2 
        = ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p)
            ? (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__golden__DOT__mul 
               + VL_EXTENDS_II(32,16, (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__golden__DOT__i3)))
            : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__P 
               + vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__golden__DOT__mul));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244375__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241028__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244369__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241025__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244395__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241038__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244393__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241037__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244373__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241027__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244346__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241077__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241013__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244371__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241026__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244340__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241074__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241010__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244348__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241078__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241014__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244398__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241024__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244356__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241082__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241018__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244358__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241083__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241019__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244360__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241084__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241020__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244362__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241085__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241021__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244364__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241086__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241022__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244366__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241087__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241023__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244338__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241073__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241009__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244377__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241029__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244389__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241035__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244381__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241031__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244383__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241032__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244354__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241081__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241017__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244387__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241034__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244385__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241033__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244391__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241036__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244379__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241030__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244352__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241080__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241016__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244350__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241079__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241015__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244344__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241076__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241012__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244342__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241075__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241011__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eA 
        = ((0xc0000000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eA) 
           | ((0x20000000U & (((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244395__A))
                                ? ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244395__A) 
                                   >> 1U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244395__A)) 
                              << 0x1dU)) | ((0x10000000U 
                                             & (((4U 
                                                  & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244393__A))
                                                  ? 
                                                 ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244393__A) 
                                                  >> 1U)
                                                  : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244393__A)) 
                                                << 0x1cU)) 
                                            | ((0x8000000U 
                                                & (((4U 
                                                     & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244391__A))
                                                     ? 
                                                    ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244391__A) 
                                                     >> 1U)
                                                     : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244391__A)) 
                                                   << 0x1bU)) 
                                               | ((0x4000000U 
                                                   & (((4U 
                                                        & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244389__A))
                                                        ? 
                                                       ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244389__A) 
                                                        >> 1U)
                                                        : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244389__A)) 
                                                      << 0x1aU)) 
                                                  | ((0x2000000U 
                                                      & (((4U 
                                                           & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244387__A))
                                                           ? 
                                                          ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244387__A) 
                                                           >> 1U)
                                                           : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244387__A)) 
                                                         << 0x19U)) 
                                                     | ((0x1000000U 
                                                         & (((4U 
                                                              & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244385__A))
                                                              ? 
                                                             ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244385__A) 
                                                              >> 1U)
                                                              : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244385__A)) 
                                                            << 0x18U)) 
                                                        | ((0x800000U 
                                                            & (((4U 
                                                                 & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244383__A))
                                                                 ? 
                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244383__A) 
                                                                 >> 1U)
                                                                 : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244383__A)) 
                                                               << 0x17U)) 
                                                           | ((0x400000U 
                                                               & (((4U 
                                                                    & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244381__A))
                                                                    ? 
                                                                   ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244381__A) 
                                                                    >> 1U)
                                                                    : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244381__A)) 
                                                                  << 0x16U)) 
                                                              | ((0x200000U 
                                                                  & (((4U 
                                                                       & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244379__A))
                                                                       ? 
                                                                      ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244379__A) 
                                                                       >> 1U)
                                                                       : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244379__A)) 
                                                                     << 0x15U)) 
                                                                 | ((0x100000U 
                                                                     & (((4U 
                                                                          & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244377__A))
                                                                          ? 
                                                                         ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244377__A) 
                                                                          >> 1U)
                                                                          : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244377__A)) 
                                                                        << 0x14U)) 
                                                                    | ((0x80000U 
                                                                        & (((4U 
                                                                             & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244375__A))
                                                                             ? 
                                                                            ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244375__A) 
                                                                             >> 1U)
                                                                             : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244375__A)) 
                                                                           << 0x13U)) 
                                                                       | ((0x40000U 
                                                                           & (((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244373__A))
                                                                                ? 
                                                                               ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244373__A) 
                                                                                >> 1U)
                                                                                : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244373__A)) 
                                                                              << 0x12U)) 
                                                                          | ((0x20000U 
                                                                              & (((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244371__A))
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244371__A) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244371__A)) 
                                                                                << 0x11U)) 
                                                                             | ((0x10000U 
                                                                                & (((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244369__A))
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244369__A) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244369__A)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244398__A))
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244398__A) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244398__A)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244366__A))
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244366__A) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244366__A)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244364__A))
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244364__A) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244364__A)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244362__A))
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244362__A) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244362__A)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244360__A))
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244360__A) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244360__A)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244358__A))
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244358__A) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244358__A)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244356__A))
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244356__A) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244356__A)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244354__A))
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244354__A) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244354__A)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244352__A))
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244352__A) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244352__A)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244350__A))
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244350__A) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244350__A)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244348__A))
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244348__A) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244348__A)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244346__A))
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244346__A) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244346__A)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244344__A))
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244344__A) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244344__A)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244342__A))
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244342__A) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244342__A)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244340__A))
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244340__A) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244340__A)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244338__A))
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244338__A) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244338__A)))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void Vco_sim_dsp_multiplier_accum_with_add_neg___024root___act_sequent__TOP__2(Vco_sim_dsp_multiplier_accum_with_add_neg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_dsp_multiplier_accum_with_add_neg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_dsp_multiplier_accum_with_add_neg___024root___act_sequent__TOP__2\n"); );
    // Init
    CData/*0:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshdFZ06Z4v4Kusd3YVfVGOlj4AqEzycRbB8ANoN2g1__COUT;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshdFZ06Z4v4Kusd3YVfVGOlj4AqEzycRbB8ANoN2g1__COUT = 0;
    CData/*0:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshBXjwLNOSsogp4U0N42Uab9A6foMLcoaWc3VvyrFc__COUT;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshBXjwLNOSsogp4U0N42Uab9A6foMLcoaWc3VvyrFc__COUT = 0;
    CData/*0:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshO7NwXC22PCostSt3A4YCkDOSL2JSXA0YofhcG2Df__COUT;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshO7NwXC22PCostSt3A4YCkDOSL2JSXA0YofhcG2Df__COUT = 0;
    CData/*0:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___Vhsha3mVR2EhlLFOFLiTS2jm2dRcAFAasmiozs8p6WLB__COUT;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___Vhsha3mVR2EhlLFOFLiTS2jm2dRcAFAasmiozs8p6WLB__COUT = 0;
    CData/*0:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshvV6RGlSmPpAs2oTTRHbfBJMWqcjHDgwicuW7JXxK__COUT;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshvV6RGlSmPpAs2oTTRHbfBJMWqcjHDgwicuW7JXxK__COUT = 0;
    CData/*0:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshSl0fBoNFsYSjgo58hvcj4jvOhBBmRaY0AAjVbFv5__COUT;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshSl0fBoNFsYSjgo58hvcj4jvOhBBmRaY0AAjVbFv5__COUT = 0;
    CData/*0:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshwAI9e5p4EHO8F4ZT2P4jbcuRaFrz9LDIiMA4tHzc__COUT;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshwAI9e5p4EHO8F4ZT2P4jbcuRaFrz9LDIiMA4tHzc__COUT = 0;
    CData/*0:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshcQVXDSLB9KEOlbD0AIBw9l9hXCPWUSCRHkn20ljY__COUT;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshcQVXDSLB9KEOlbD0AIBw9l9hXCPWUSCRHkn20ljY__COUT = 0;
    CData/*0:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshrGDpHAjGj8PLf13AcB9E3AxPBiyDxvx2bUf3UVmC__COUT;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshrGDpHAjGj8PLf13AcB9E3AxPBiyDxvx2bUf3UVmC__COUT = 0;
    CData/*0:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___Vhshrm7femsU0hK6wBAVR2BGeXBq6NbsrtyBENTIQ8c8__COUT;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___Vhshrm7femsU0hK6wBAVR2BGeXBq6NbsrtyBENTIQ8c8__COUT = 0;
    CData/*0:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshWCSiNQTf997MD1QQx2WkH9OtggQiZhhHF5niwvbu__COUT;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshWCSiNQTf997MD1QQx2WkH9OtggQiZhhHF5niwvbu__COUT = 0;
    CData/*0:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshLpBA3ZIl1uv53OcAmnHGBw66QoLpZ5hLyAcBS14T__COUT;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshLpBA3ZIl1uv53OcAmnHGBw66QoLpZ5hLyAcBS14T__COUT = 0;
    CData/*0:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshQmC3MQIEt7dN1KBU0ZkbrRL09cNlBd0mFDnpjO2C__COUT;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshQmC3MQIEt7dN1KBU0ZkbrRL09cNlBd0mFDnpjO2C__COUT = 0;
    CData/*0:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshTcgoXamrr4IiKvjgGAM3Tqa6dQz5qGXZyA4rC028__COUT;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshTcgoXamrr4IiKvjgGAM3Tqa6dQz5qGXZyA4rC028__COUT = 0;
    CData/*0:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshBKml1VedWpWC9op6LCMovBlaJcQIJMobODa0G9A8__COUT;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshBKml1VedWpWC9op6LCMovBlaJcQIJMobODa0G9A8__COUT = 0;
    // Body
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshSl0fBoNFsYSjgo58hvcj4jvOhBBmRaY0AAjVbFv5__COUT 
        = (1U & ((0x4000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eS)
                  ? (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eC 
                     >> 0xeU) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241103__Q)));
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshvV6RGlSmPpAs2oTTRHbfBJMWqcjHDgwicuW7JXxK__COUT 
        = (1U & ((0x2000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eS)
                  ? (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eC 
                     >> 0xdU) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241102__Q)));
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___Vhsha3mVR2EhlLFOFLiTS2jm2dRcAFAasmiozs8p6WLB__COUT 
        = (1U & ((0x1000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eS)
                  ? (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eC 
                     >> 0xcU) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241101__Q)));
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshO7NwXC22PCostSt3A4YCkDOSL2JSXA0YofhcG2Df__COUT 
        = (1U & ((0x800U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eS)
                  ? (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eC 
                     >> 0xbU) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241100__Q)));
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshBXjwLNOSsogp4U0N42Uab9A6foMLcoaWc3VvyrFc__COUT 
        = (1U & ((0x400U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eS)
                  ? (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eC 
                     >> 0xaU) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241099__Q)));
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshBKml1VedWpWC9op6LCMovBlaJcQIJMobODa0G9A8__COUT 
        = (1U & ((0x200U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eS)
                  ? (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eC 
                     >> 9U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241098__Q)));
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshTcgoXamrr4IiKvjgGAM3Tqa6dQz5qGXZyA4rC028__COUT 
        = (1U & ((0x100U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eS)
                  ? (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eC 
                     >> 8U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241097__Q)));
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshQmC3MQIEt7dN1KBU0ZkbrRL09cNlBd0mFDnpjO2C__COUT 
        = (1U & ((0x80U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eS)
                  ? (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eC 
                     >> 7U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241096__Q)));
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshLpBA3ZIl1uv53OcAmnHGBw66QoLpZ5hLyAcBS14T__COUT 
        = (1U & ((0x40U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eS)
                  ? (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eC 
                     >> 6U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241095__Q)));
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshWCSiNQTf997MD1QQx2WkH9OtggQiZhhHF5niwvbu__COUT 
        = (1U & ((0x20U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eS)
                  ? (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eC 
                     >> 5U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241094__Q)));
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___Vhshrm7femsU0hK6wBAVR2BGeXBq6NbsrtyBENTIQ8c8__COUT 
        = (1U & ((0x10U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eS)
                  ? (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eC 
                     >> 4U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241093__Q)));
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshrGDpHAjGj8PLf13AcB9E3AxPBiyDxvx2bUf3UVmC__COUT 
        = (1U & ((8U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eS)
                  ? (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eC 
                     >> 3U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241092__Q)));
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshcQVXDSLB9KEOlbD0AIBw9l9hXCPWUSCRHkn20ljY__COUT 
        = (1U & ((4U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eS)
                  ? (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eC 
                     >> 2U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241091__Q)));
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshwAI9e5p4EHO8F4ZT2P4jbcuRaFrz9LDIiMA4tHzc__COUT 
        = (1U & ((2U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eS)
                  ? (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eC 
                     >> 1U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241090__Q)));
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshdFZ06Z4v4Kusd3YVfVGOlj4AqEzycRbB8ANoN2g1__COUT 
        = (1U & ((1U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eS)
                  ? vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eC
                  : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241089__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eC 
        = ((0x30000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eC) 
           | (((IData)(co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshSl0fBoNFsYSjgo58hvcj4jvOhBBmRaY0AAjVbFv5__COUT) 
               << 0xfU) | (((IData)(co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshvV6RGlSmPpAs2oTTRHbfBJMWqcjHDgwicuW7JXxK__COUT) 
                            << 0xeU) | (((IData)(co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___Vhsha3mVR2EhlLFOFLiTS2jm2dRcAFAasmiozs8p6WLB__COUT) 
                                         << 0xdU) | 
                                        (((IData)(co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshO7NwXC22PCostSt3A4YCkDOSL2JSXA0YofhcG2Df__COUT) 
                                          << 0xcU) 
                                         | (((IData)(co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshBXjwLNOSsogp4U0N42Uab9A6foMLcoaWc3VvyrFc__COUT) 
                                             << 0xbU) 
                                            | (((IData)(co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshBKml1VedWpWC9op6LCMovBlaJcQIJMobODa0G9A8__COUT) 
                                                << 0xaU) 
                                               | (((IData)(co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshTcgoXamrr4IiKvjgGAM3Tqa6dQz5qGXZyA4rC028__COUT) 
                                                   << 9U) 
                                                  | (((IData)(co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshQmC3MQIEt7dN1KBU0ZkbrRL09cNlBd0mFDnpjO2C__COUT) 
                                                      << 8U) 
                                                     | (((IData)(co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshLpBA3ZIl1uv53OcAmnHGBw66QoLpZ5hLyAcBS14T__COUT) 
                                                         << 7U) 
                                                        | (((IData)(co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshWCSiNQTf997MD1QQx2WkH9OtggQiZhhHF5niwvbu__COUT) 
                                                            << 6U) 
                                                           | (((IData)(co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___Vhshrm7femsU0hK6wBAVR2BGeXBq6NbsrtyBENTIQ8c8__COUT) 
                                                               << 5U) 
                                                              | (((IData)(co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshrGDpHAjGj8PLf13AcB9E3AxPBiyDxvx2bUf3UVmC__COUT) 
                                                                  << 4U) 
                                                                 | (((IData)(co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshcQVXDSLB9KEOlbD0AIBw9l9hXCPWUSCRHkn20ljY__COUT) 
                                                                     << 3U) 
                                                                    | (((IData)(co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshwAI9e5p4EHO8F4ZT2P4jbcuRaFrz9LDIiMA4tHzc__COUT) 
                                                                        << 2U) 
                                                                       | ((IData)(co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshdFZ06Z4v4Kusd3YVfVGOlj4AqEzycRbB8ANoN2g1__COUT) 
                                                                          << 1U))))))))))))))));
}

VL_INLINE_OPT void Vco_sim_dsp_multiplier_accum_with_add_neg___024root___act_sequent__TOP__3(Vco_sim_dsp_multiplier_accum_with_add_neg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_dsp_multiplier_accum_with_add_neg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_dsp_multiplier_accum_with_add_neg___024root___act_sequent__TOP__3\n"); );
    // Init
    SData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0x8000U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eS 
                             >> 1U)) | ((0x4000U & 
                                         (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241103__Q)
                                            ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241055__Q))
                                            : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241055__Q)) 
                                          << 0xeU)) 
                                        | ((0x2000U 
                                            & (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241102__Q)
                                                 ? 
                                                (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241054__Q))
                                                 : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241054__Q)) 
                                               << 0xdU)) 
                                           | ((0x1000U 
                                               & (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241101__Q)
                                                    ? 
                                                   (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241053__Q))
                                                    : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241053__Q)) 
                                                  << 0xcU)) 
                                              | ((0x800U 
                                                  & (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241100__Q)
                                                       ? 
                                                      (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241052__Q))
                                                       : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241052__Q)) 
                                                     << 0xbU)) 
                                                 | ((0x400U 
                                                     & (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241099__Q)
                                                          ? 
                                                         (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241051__Q))
                                                          : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241051__Q)) 
                                                        << 0xaU)) 
                                                    | ((0x200U 
                                                        & (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241098__Q)
                                                             ? 
                                                            (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241050__Q))
                                                             : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241050__Q)) 
                                                           << 9U)) 
                                                       | ((0x100U 
                                                           & (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241097__Q)
                                                                ? 
                                                               (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241049__Q))
                                                                : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241049__Q)) 
                                                              << 8U)) 
                                                          | ((0x80U 
                                                              & (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241096__Q)
                                                                   ? 
                                                                  (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241048__Q))
                                                                   : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241048__Q)) 
                                                                 << 7U)) 
                                                             | ((0x40U 
                                                                 & (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241095__Q)
                                                                      ? 
                                                                     (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241047__Q))
                                                                      : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241047__Q)) 
                                                                    << 6U)) 
                                                                | ((0x20U 
                                                                    & (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241094__Q)
                                                                         ? 
                                                                        (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241046__Q))
                                                                         : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241046__Q)) 
                                                                       << 5U)) 
                                                                   | ((0x10U 
                                                                       & (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241093__Q)
                                                                            ? 
                                                                           (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241045__Q))
                                                                            : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241045__Q)) 
                                                                          << 4U)) 
                                                                      | ((8U 
                                                                          & (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241092__Q)
                                                                               ? 
                                                                              (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241044__Q))
                                                                               : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241044__Q)) 
                                                                             << 3U)) 
                                                                         | ((4U 
                                                                             & (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241091__Q)
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241043__Q))
                                                                                 : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241043__Q)) 
                                                                                << 2U)) 
                                                                            | ((2U 
                                                                                & (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241090__Q)
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241042__Q))
                                                                                 : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241042__Q)) 
                                                                                << 1U)) 
                                                                               | (1U 
                                                                                & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241089__Q)
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241041__Q))
                                                                                 : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241041__Q))))))))))))))))));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eS 
        = ((0x10000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02450__02eS) 
           | __Vtemp_1);
}

VL_INLINE_OPT void Vco_sim_dsp_multiplier_accum_with_add_neg___024root___act_sequent__TOP__4(Vco_sim_dsp_multiplier_accum_with_add_neg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_dsp_multiplier_accum_with_add_neg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_dsp_multiplier_accum_with_add_neg___024root___act_sequent__TOP__4\n"); );
    // Body
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__A 
        = ((0x80000U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add 
                        >> 0xcU)) | ((0x40000U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add 
                                                  >> 0xdU)) 
                                     | ((0x20000U & 
                                         (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add 
                                          >> 0xeU)) 
                                        | ((0x10000U 
                                            & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add 
                                               >> 0xfU)) 
                                           | (0xffffU 
                                              & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add)))));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__a_int 
        = vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__A;
    if ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__feedback_int))) {
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__add_sub_in 
            = ((2U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__feedback_int))
                ? ((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__feedback_int))
                    ? ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__acc_fir_int)))
                    : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__acc_fir_int))))
                : ((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__feedback_int))
                    ? ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__acc_fir_int)))
                    : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__acc_fir_int)))));
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__mult_a = 0U;
    } else if ((2U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__feedback_int))) {
        if ((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__feedback_int))) {
            vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__add_sub_in 
                = ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__unsigned_a_int)
                    ? ((QData)((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__a_int)) 
                       << (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__acc_fir_int))
                    : ((((- (QData)((IData)((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__a_int 
                                                   >> 0x13U))))) 
                         << 0x14U) | (QData)((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__a_int))) 
                       << (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__acc_fir_int)));
            vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__mult_a 
                = (0xfffffU & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__accumulator));
        } else {
            vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__add_sub_in 
                = ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__unsigned_a_int)
                    ? ((QData)((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__a_int)) 
                       << (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__acc_fir_int))
                    : ((((- (QData)((IData)((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__a_int 
                                                   >> 0x13U))))) 
                         << 0x14U) | (QData)((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__a_int))) 
                       << (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__acc_fir_int)));
            vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__mult_a 
                = (0xfffffU & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__a_int);
        }
    } else {
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__add_sub_in 
            = ((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__feedback_int))
                ? 0ULL : vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__accumulator);
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__mult_a 
            = (0xfffffU & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__a_int);
    }
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__mult_out 
        = ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__unsigned_a_int)
            ? ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__unsigned_b_int)
                ? ((QData)((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__mult_a)) 
                   * (QData)((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__mult_b)))
                : VL_MULS_QQQ(64, VL_EXTENDS_QI(64,21, vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__mult_a), 
                              VL_EXTENDS_QI(64,18, vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__mult_b)))
            : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__unsigned_b_int)
                ? VL_MULS_QQQ(64, VL_EXTENDS_QI(64,20, vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__mult_a), 
                              VL_EXTENDS_QI(64,19, vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__mult_b))
                : VL_MULS_QQQ(64, VL_EXTENDS_QI(64,20, vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__mult_a), 
                              VL_EXTENDS_QI(64,18, vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__mult_b))));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__add_sub_out 
        = ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__subtract_int)
            ? (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__add_sub_in 
               - vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__mult_out)
            : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__add_sub_in 
               + vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__mult_out));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__z_out 
        = (0x3fffffffffULL & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__mult_out);
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__pre_shift 
        = vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__add_sub_out;
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__shift_right 
        = VL_SHIFTRS_QQI(64,64,6, vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__pre_shift, (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__shift_right_int));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__round 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__round_int) 
            & (0U < (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__shift_right_int)))
            ? ((1U & (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__pre_shift 
                              >> (0x3fU & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__shift_right_int) 
                                           - (IData)(1U))))))
                ? (1ULL + vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__shift_right)
                : vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__shift_right)
            : vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__shift_right);
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__saturate 
        = (0x3fffffffffULL & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__saturate_int)
                               ? (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__unsigned_a_int) 
                                   & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__unsigned_b_int))
                                   ? (VL_GTS_IQQ(64, 0ULL, vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__round)
                                       ? 0ULL : ((0x3fffffffffULL 
                                                  < vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__round)
                                                  ? 0x3fffffffffULL
                                                  : vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__round))
                                   : (VL_LTS_IQQ(64, 0x1fffffffffULL, vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__round)
                                       ? 0x1fffffffffULL
                                       : (VL_GTS_IQQ(64, 0xffffffe000000000ULL, vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__round)
                                           ? 0x2000000000ULL
                                           : vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__round)))
                               : vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__round));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024techmap44__05c__024mul__VhshMZ5DLQDpsnGuRDcE2CUo9QVuRXAJODXCdN7cBSGq 
        = ((0xffffffffULL & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024techmap44__05c__024mul__VhshMZ5DLQDpsnGuRDcE2CUo9QVuRXAJODXCdN7cBSGq) 
           | ((QData)((IData)((0x3fU & (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__z_out 
                                                >> 0x20U))))) 
              << 0x20U));
}

VL_INLINE_OPT void Vco_sim_dsp_multiplier_accum_with_add_neg___024root___act_comb__TOP__0(Vco_sim_dsp_multiplier_accum_with_add_neg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_dsp_multiplier_accum_with_add_neg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_dsp_multiplier_accum_with_add_neg___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244355__A 
        = ((8U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__z_out 
                           >> 8U)) << 3U)) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
                                               << 2U) 
                                              | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241017__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241081__Q))));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244388__A 
        = ((8U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__z_out 
                           >> 0x19U)) << 3U)) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241034__Q) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q))));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244390__A 
        = ((8U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__z_out 
                           >> 0x1aU)) << 3U)) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241035__Q) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q))));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244396__A 
        = ((8U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__z_out 
                           >> 0x1dU)) << 3U)) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241038__Q) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q))));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244372__A 
        = ((8U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__z_out 
                           >> 0x11U)) << 3U)) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241026__Q) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q))));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244374__A 
        = ((8U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__z_out 
                           >> 0x12U)) << 3U)) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241027__Q) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q))));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244351__A 
        = ((8U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__z_out 
                           >> 6U)) << 3U)) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
                                               << 2U) 
                                              | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241015__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241079__Q))));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244370__A 
        = ((8U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__z_out 
                           >> 0x10U)) << 3U)) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241025__Q) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q))));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244339__A 
        = ((8U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__z_out) 
                  << 3U)) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
                              << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241009__Q) 
                                         << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241073__Q))));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244357__A 
        = ((8U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__z_out 
                           >> 9U)) << 3U)) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
                                               << 2U) 
                                              | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241018__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241082__Q))));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244359__A 
        = ((8U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__z_out 
                           >> 0xaU)) << 3U)) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241019__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241083__Q))));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244361__A 
        = ((8U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__z_out 
                           >> 0xbU)) << 3U)) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241020__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241084__Q))));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244363__A 
        = ((8U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__z_out 
                           >> 0xcU)) << 3U)) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241021__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241085__Q))));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244365__A 
        = ((8U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__z_out 
                           >> 0xdU)) << 3U)) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241022__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241086__Q))));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244367__A 
        = ((8U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__z_out 
                           >> 0xeU)) << 3U)) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241023__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241087__Q))));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244368__A 
        = ((8U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__z_out 
                           >> 0xfU)) << 3U)) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241024__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q))));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244353__A 
        = ((8U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__z_out 
                           >> 7U)) << 3U)) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
                                               << 2U) 
                                              | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241016__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241080__Q))));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244376__A 
        = ((8U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__z_out 
                           >> 0x13U)) << 3U)) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241028__Q) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q))));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244382__A 
        = ((8U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__z_out 
                           >> 0x16U)) << 3U)) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241031__Q) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q))));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244392__A 
        = ((8U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__z_out 
                           >> 0x1bU)) << 3U)) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241036__Q) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q))));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244386__A 
        = ((8U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__z_out 
                           >> 0x18U)) << 3U)) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241033__Q) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q))));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244380__A 
        = ((8U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__z_out 
                           >> 0x15U)) << 3U)) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241030__Q) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q))));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244384__A 
        = ((8U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__z_out 
                           >> 0x17U)) << 3U)) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241032__Q) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q))));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244394__A 
        = ((8U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__z_out 
                           >> 0x1cU)) << 3U)) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241037__Q) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q))));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244378__A 
        = ((8U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__z_out 
                           >> 0x14U)) << 3U)) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241029__Q) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q))));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244349__A 
        = ((8U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__z_out 
                           >> 5U)) << 3U)) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
                                               << 2U) 
                                              | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241014__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241078__Q))));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244347__A 
        = ((8U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__z_out 
                           >> 4U)) << 3U)) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
                                               << 2U) 
                                              | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241013__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241077__Q))));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244345__A 
        = ((8U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__z_out 
                           >> 3U)) << 3U)) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
                                               << 2U) 
                                              | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241012__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241076__Q))));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244343__A 
        = ((8U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__z_out 
                           >> 2U)) << 3U)) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
                                               << 2U) 
                                              | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241011__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241075__Q))));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244341__A 
        = ((8U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__z_out 
                           >> 1U)) << 3U)) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
                                               << 2U) 
                                              | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241010__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241074__Q))));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eS 
        = ((0xc0000000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eS) 
           | ((0x20000000U & (((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244396__A))
                                ? ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244396__A))
                                    ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244396__A))
                                    : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244396__A) 
                                          >> 1U))) : 
                               ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244396__A))
                                 ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244396__A)
                                 : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244396__A) 
                                    >> 1U))) << 0x1dU)) 
              | ((0x10000000U & (((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244394__A))
                                   ? ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244394__A))
                                       ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244394__A))
                                       : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244394__A) 
                                             >> 1U)))
                                   : ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244394__A))
                                       ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244394__A)
                                       : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244394__A) 
                                          >> 1U))) 
                                 << 0x1cU)) | ((0x8000000U 
                                                & (((8U 
                                                     & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244392__A))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244392__A))
                                                      ? 
                                                     (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244392__A))
                                                      : 
                                                     (~ 
                                                      ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244392__A) 
                                                       >> 1U)))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244392__A))
                                                      ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244392__A)
                                                      : 
                                                     ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244392__A) 
                                                      >> 1U))) 
                                                   << 0x1bU)) 
                                               | ((0x4000000U 
                                                   & (((8U 
                                                        & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244390__A))
                                                        ? 
                                                       ((4U 
                                                         & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244390__A))
                                                         ? 
                                                        (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244390__A))
                                                         : 
                                                        (~ 
                                                         ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244390__A) 
                                                          >> 1U)))
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244390__A))
                                                         ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244390__A)
                                                         : 
                                                        ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244390__A) 
                                                         >> 1U))) 
                                                      << 0x1aU)) 
                                                  | ((0x2000000U 
                                                      & (((8U 
                                                           & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244388__A))
                                                           ? 
                                                          ((4U 
                                                            & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244388__A))
                                                            ? 
                                                           (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244388__A))
                                                            : 
                                                           (~ 
                                                            ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244388__A) 
                                                             >> 1U)))
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244388__A))
                                                            ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244388__A)
                                                            : 
                                                           ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244388__A) 
                                                            >> 1U))) 
                                                         << 0x19U)) 
                                                     | ((0x1000000U 
                                                         & (((8U 
                                                              & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244386__A))
                                                              ? 
                                                             ((4U 
                                                               & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244386__A))
                                                               ? 
                                                              (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244386__A))
                                                               : 
                                                              (~ 
                                                               ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244386__A) 
                                                                >> 1U)))
                                                              : 
                                                             ((4U 
                                                               & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244386__A))
                                                               ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244386__A)
                                                               : 
                                                              ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244386__A) 
                                                               >> 1U))) 
                                                            << 0x18U)) 
                                                        | ((0x800000U 
                                                            & (((8U 
                                                                 & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244384__A))
                                                                 ? 
                                                                ((4U 
                                                                  & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244384__A))
                                                                  ? 
                                                                 (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244384__A))
                                                                  : 
                                                                 (~ 
                                                                  ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244384__A) 
                                                                   >> 1U)))
                                                                 : 
                                                                ((4U 
                                                                  & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244384__A))
                                                                  ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244384__A)
                                                                  : 
                                                                 ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244384__A) 
                                                                  >> 1U))) 
                                                               << 0x17U)) 
                                                           | ((0x400000U 
                                                               & (((8U 
                                                                    & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244382__A))
                                                                    ? 
                                                                   ((4U 
                                                                     & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244382__A))
                                                                     ? 
                                                                    (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244382__A))
                                                                     : 
                                                                    (~ 
                                                                     ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244382__A) 
                                                                      >> 1U)))
                                                                    : 
                                                                   ((4U 
                                                                     & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244382__A))
                                                                     ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244382__A)
                                                                     : 
                                                                    ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244382__A) 
                                                                     >> 1U))) 
                                                                  << 0x16U)) 
                                                              | ((0x200000U 
                                                                  & (((8U 
                                                                       & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244380__A))
                                                                       ? 
                                                                      ((4U 
                                                                        & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244380__A))
                                                                        ? 
                                                                       (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244380__A))
                                                                        : 
                                                                       (~ 
                                                                        ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244380__A) 
                                                                         >> 1U)))
                                                                       : 
                                                                      ((4U 
                                                                        & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244380__A))
                                                                        ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244380__A)
                                                                        : 
                                                                       ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244380__A) 
                                                                        >> 1U))) 
                                                                     << 0x15U)) 
                                                                 | ((0x100000U 
                                                                     & (((8U 
                                                                          & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244378__A))
                                                                          ? 
                                                                         ((4U 
                                                                           & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244378__A))
                                                                           ? 
                                                                          (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244378__A))
                                                                           : 
                                                                          (~ 
                                                                           ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244378__A) 
                                                                            >> 1U)))
                                                                          : 
                                                                         ((4U 
                                                                           & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244378__A))
                                                                           ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244378__A)
                                                                           : 
                                                                          ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244378__A) 
                                                                           >> 1U))) 
                                                                        << 0x14U)) 
                                                                    | ((0x80000U 
                                                                        & (((8U 
                                                                             & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244376__A))
                                                                             ? 
                                                                            ((4U 
                                                                              & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244376__A))
                                                                              ? 
                                                                             (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244376__A))
                                                                              : 
                                                                             (~ 
                                                                              ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244376__A) 
                                                                               >> 1U)))
                                                                             : 
                                                                            ((4U 
                                                                              & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244376__A))
                                                                              ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244376__A)
                                                                              : 
                                                                             ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244376__A) 
                                                                              >> 1U))) 
                                                                           << 0x13U)) 
                                                                       | ((0x40000U 
                                                                           & (((8U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244374__A))
                                                                                ? 
                                                                               ((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244374__A))
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244374__A))
                                                                                 : 
                                                                                (~ 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244374__A) 
                                                                                >> 1U)))
                                                                                : 
                                                                               ((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244374__A))
                                                                                 ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244374__A)
                                                                                 : 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244374__A) 
                                                                                >> 1U))) 
                                                                              << 0x12U)) 
                                                                          | ((0x20000U 
                                                                              & (((8U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244372__A))
                                                                                 ? 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244372__A))
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244372__A))
                                                                                 : 
                                                                                (~ 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244372__A) 
                                                                                >> 1U)))
                                                                                 : 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244372__A))
                                                                                 ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244372__A)
                                                                                 : 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244372__A) 
                                                                                >> 1U))) 
                                                                                << 0x11U)) 
                                                                             | ((0x10000U 
                                                                                & (((8U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244370__A))
                                                                                 ? 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244370__A))
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244370__A))
                                                                                 : 
                                                                                (~ 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244370__A) 
                                                                                >> 1U)))
                                                                                 : 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244370__A))
                                                                                 ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244370__A)
                                                                                 : 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244370__A) 
                                                                                >> 1U))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((8U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244368__A))
                                                                                 ? 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244368__A))
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244368__A))
                                                                                 : 
                                                                                (~ 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244368__A) 
                                                                                >> 1U)))
                                                                                 : 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244368__A))
                                                                                 ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244368__A)
                                                                                 : 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244368__A) 
                                                                                >> 1U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((8U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244367__A))
                                                                                 ? 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244367__A))
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244367__A))
                                                                                 : 
                                                                                (~ 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244367__A) 
                                                                                >> 1U)))
                                                                                 : 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244367__A))
                                                                                 ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244367__A)
                                                                                 : 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244367__A) 
                                                                                >> 1U))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((8U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244365__A))
                                                                                 ? 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244365__A))
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244365__A))
                                                                                 : 
                                                                                (~ 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244365__A) 
                                                                                >> 1U)))
                                                                                 : 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244365__A))
                                                                                 ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244365__A)
                                                                                 : 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244365__A) 
                                                                                >> 1U))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((8U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244363__A))
                                                                                 ? 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244363__A))
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244363__A))
                                                                                 : 
                                                                                (~ 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244363__A) 
                                                                                >> 1U)))
                                                                                 : 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244363__A))
                                                                                 ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244363__A)
                                                                                 : 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244363__A) 
                                                                                >> 1U))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((8U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244361__A))
                                                                                 ? 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244361__A))
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244361__A))
                                                                                 : 
                                                                                (~ 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244361__A) 
                                                                                >> 1U)))
                                                                                 : 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244361__A))
                                                                                 ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244361__A)
                                                                                 : 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244361__A) 
                                                                                >> 1U))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((8U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244359__A))
                                                                                 ? 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244359__A))
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244359__A))
                                                                                 : 
                                                                                (~ 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244359__A) 
                                                                                >> 1U)))
                                                                                 : 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244359__A))
                                                                                 ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244359__A)
                                                                                 : 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244359__A) 
                                                                                >> 1U))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((8U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244357__A))
                                                                                 ? 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244357__A))
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244357__A))
                                                                                 : 
                                                                                (~ 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244357__A) 
                                                                                >> 1U)))
                                                                                 : 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244357__A))
                                                                                 ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244357__A)
                                                                                 : 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244357__A) 
                                                                                >> 1U))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((8U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244355__A))
                                                                                 ? 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244355__A))
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244355__A))
                                                                                 : 
                                                                                (~ 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244355__A) 
                                                                                >> 1U)))
                                                                                 : 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244355__A))
                                                                                 ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244355__A)
                                                                                 : 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244355__A) 
                                                                                >> 1U))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((8U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244353__A))
                                                                                 ? 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244353__A))
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244353__A))
                                                                                 : 
                                                                                (~ 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244353__A) 
                                                                                >> 1U)))
                                                                                 : 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244353__A))
                                                                                 ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244353__A)
                                                                                 : 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244353__A) 
                                                                                >> 1U))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((8U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244351__A))
                                                                                 ? 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244351__A))
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244351__A))
                                                                                 : 
                                                                                (~ 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244351__A) 
                                                                                >> 1U)))
                                                                                 : 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244351__A))
                                                                                 ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244351__A)
                                                                                 : 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244351__A) 
                                                                                >> 1U))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((8U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244349__A))
                                                                                 ? 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244349__A))
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244349__A))
                                                                                 : 
                                                                                (~ 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244349__A) 
                                                                                >> 1U)))
                                                                                 : 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244349__A))
                                                                                 ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244349__A)
                                                                                 : 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244349__A) 
                                                                                >> 1U))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((8U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244347__A))
                                                                                 ? 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244347__A))
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244347__A))
                                                                                 : 
                                                                                (~ 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244347__A) 
                                                                                >> 1U)))
                                                                                 : 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244347__A))
                                                                                 ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244347__A)
                                                                                 : 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244347__A) 
                                                                                >> 1U))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((8U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244345__A))
                                                                                 ? 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244345__A))
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244345__A))
                                                                                 : 
                                                                                (~ 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244345__A) 
                                                                                >> 1U)))
                                                                                 : 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244345__A))
                                                                                 ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244345__A)
                                                                                 : 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244345__A) 
                                                                                >> 1U))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((8U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244343__A))
                                                                                 ? 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244343__A))
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244343__A))
                                                                                 : 
                                                                                (~ 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244343__A) 
                                                                                >> 1U)))
                                                                                 : 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244343__A))
                                                                                 ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244343__A)
                                                                                 : 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244343__A) 
                                                                                >> 1U))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((8U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244341__A))
                                                                                 ? 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244341__A))
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244341__A))
                                                                                 : 
                                                                                (~ 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244341__A) 
                                                                                >> 1U)))
                                                                                 : 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244341__A))
                                                                                 ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244341__A)
                                                                                 : 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244341__A) 
                                                                                >> 1U))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((8U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244339__A))
                                                                                 ? 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244339__A))
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244339__A))
                                                                                 : 
                                                                                (~ 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244339__A) 
                                                                                >> 1U)))
                                                                                 : 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244339__A))
                                                                                 ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244339__A)
                                                                                 : 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244339__A) 
                                                                                >> 1U))))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void Vco_sim_dsp_multiplier_accum_with_add_neg___024root___act_comb__TOP__1(Vco_sim_dsp_multiplier_accum_with_add_neg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_dsp_multiplier_accum_with_add_neg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_dsp_multiplier_accum_with_add_neg___024root___act_comb__TOP__1\n"); );
    // Init
    CData/*0:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshM8hw9fdkBw3qmMRz7xPTKdMjQilSAeFHjFk6llpe__COUT;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshM8hw9fdkBw3qmMRz7xPTKdMjQilSAeFHjFk6llpe__COUT = 0;
    CData/*0:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhsheT1hBqrXEAwGCwVTyFtqfIAXA1LvxBjSMREa12zz__COUT;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhsheT1hBqrXEAwGCwVTyFtqfIAXA1LvxBjSMREa12zz__COUT = 0;
    CData/*0:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshSiNlkeRxMTaNdxSE8uTL2QAfdHki2DiXf4MToPk1__COUT;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshSiNlkeRxMTaNdxSE8uTL2QAfdHki2DiXf4MToPk1__COUT = 0;
    CData/*0:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___Vhsh8VVxOVzpcdDfhBWDwOt97R4jePZMAqGrNt5uP2f3__COUT;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___Vhsh8VVxOVzpcdDfhBWDwOt97R4jePZMAqGrNt5uP2f3__COUT = 0;
    CData/*0:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshyAonwL9NL8fz5dMJo1hbrPFBHeQyJHWvdBQ8OElY__COUT;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshyAonwL9NL8fz5dMJo1hbrPFBHeQyJHWvdBQ8OElY__COUT = 0;
    CData/*0:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___Vhsh9qTVKKWY17dPQJ4W1L89fyeS4cfjPyAU0wrIU6dX__COUT;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___Vhsh9qTVKKWY17dPQJ4W1L89fyeS4cfjPyAU0wrIU6dX__COUT = 0;
    CData/*0:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshLLBghiSdTdByhCWEAAedYh6j35r8M1QUolHljxpD__COUT;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshLLBghiSdTdByhCWEAAedYh6j35r8M1QUolHljxpD__COUT = 0;
    CData/*0:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshJj11FUMuPiw0d2XCU2UTY3qazuKgOJUtOSu6V9Xe__COUT;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshJj11FUMuPiw0d2XCU2UTY3qazuKgOJUtOSu6V9Xe__COUT = 0;
    CData/*0:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___Vhshk3xhQzgGzLs2I17SXHN0oIep77HFwGQIAO3gJKpO__COUT;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___Vhshk3xhQzgGzLs2I17SXHN0oIep77HFwGQIAO3gJKpO__COUT = 0;
    CData/*0:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___Vhshxw7WXaivNy4jzeDGOALvJHI8o4ZhCIINgPhVUokM__COUT;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___Vhshxw7WXaivNy4jzeDGOALvJHI8o4ZhCIINgPhVUokM__COUT = 0;
    CData/*0:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshJ85aid8zbqrRpOdGb7CA3CPiYlepxfZVTjXCIcD3__COUT;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshJ85aid8zbqrRpOdGb7CA3CPiYlepxfZVTjXCIcD3__COUT = 0;
    CData/*0:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshPUMgwx8tAAzpbSL2hG2DFUlBtXgkXK1YaLSXTbGY__COUT;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshPUMgwx8tAAzpbSL2hG2DFUlBtXgkXK1YaLSXTbGY__COUT = 0;
    CData/*0:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshIoWL9AfMDQGodq3MH1LbT5uc5aZg0du9hVBjicHy__COUT;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshIoWL9AfMDQGodq3MH1LbT5uc5aZg0du9hVBjicHy__COUT = 0;
    CData/*0:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshczMxYdLnly7ISdRI663s0A92DVHVXKu5NpIaWgR8__COUT;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshczMxYdLnly7ISdRI663s0A92DVHVXKu5NpIaWgR8__COUT = 0;
    CData/*0:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshkvQyxSc0CkpuHGDul8iZXBazpQN1SRlMaL8PY5JU__COUT;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshkvQyxSc0CkpuHGDul8iZXBazpQN1SRlMaL8PY5JU__COUT = 0;
    CData/*0:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshAVaKV9ZR3AMyBUH8DLXJgtnBLMhtaZRSx7ddoOmH__COUT;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshAVaKV9ZR3AMyBUH8DLXJgtnBLMhtaZRSx7ddoOmH__COUT = 0;
    CData/*0:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshAE2r8qZkjrGjbTmvUlHWW89aLUZOwaJGOCoP2Fio__COUT;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshAE2r8qZkjrGjbTmvUlHWW89aLUZOwaJGOCoP2Fio__COUT = 0;
    CData/*0:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___Vhshl9oz8d066pqbeDaN1KtI3mDlB4g3mjX99f4J1D0X__COUT;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___Vhshl9oz8d066pqbeDaN1KtI3mDlB4g3mjX99f4J1D0X__COUT = 0;
    CData/*0:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___Vhshwbco1mY8hNScEtWw5J9bFqmxs5cswiiM2tFYwoJx__COUT;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___Vhshwbco1mY8hNScEtWw5J9bFqmxs5cswiiM2tFYwoJx__COUT = 0;
    CData/*0:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshskDyJ4fSMFIz1ZLBO33zSJCvXQ9rNzu7TC5OE9Sj__COUT;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshskDyJ4fSMFIz1ZLBO33zSJCvXQ9rNzu7TC5OE9Sj__COUT = 0;
    CData/*0:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshlApxn3CU5rv7Nrtg3A7ISPoXEccekJARTg1Bnt97__COUT;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshlApxn3CU5rv7Nrtg3A7ISPoXEccekJARTg1Bnt97__COUT = 0;
    CData/*0:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshY9XtLzZ3th4qTkT7dZjkAWFHmH98VuDvJFCKeFbt__COUT;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshY9XtLzZ3th4qTkT7dZjkAWFHmH98VuDvJFCKeFbt__COUT = 0;
    CData/*0:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshEIBGsza4LPlkaMztzdl6MpQz0kIdrJBEbL3BK0BW__COUT;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshEIBGsza4LPlkaMztzdl6MpQz0kIdrJBEbL3BK0BW__COUT = 0;
    CData/*0:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___Vhshq1yNWajBMNevOFmfuACGPWIgBx8dJcSpgAy8gyG2__COUT;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___Vhshq1yNWajBMNevOFmfuACGPWIgBx8dJcSpgAy8gyG2__COUT = 0;
    CData/*0:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___Vhsh8gLJOSp2d1nHX4FEq1AcRKmTPf4A6JJYI7crGbzN__COUT;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___Vhsh8gLJOSp2d1nHX4FEq1AcRKmTPf4A6JJYI7crGbzN__COUT = 0;
    CData/*0:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___Vhshcs7LwIf2JL7A3AhTzzPTuAAsKi7DYRGAZCpqGYET__COUT;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___Vhshcs7LwIf2JL7A3AhTzzPTuAAsKi7DYRGAZCpqGYET__COUT = 0;
    CData/*0:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshUay4MGIVNtymfMvHFgxeDARLiWu26qMs8nRj1wLx__COUT;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshUay4MGIVNtymfMvHFgxeDARLiWu26qMs8nRj1wLx__COUT = 0;
    CData/*0:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhsheMrAWN2fzOIXnuFabsdmjydmEhIfsBV0Bu1kP6TR__COUT;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhsheMrAWN2fzOIXnuFabsdmjydmEhIfsBV0Bu1kP6TR__COUT = 0;
    CData/*0:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshzbaG88eRjG5CwOUqMDMIhWd1TpUST7xPBZLw2V68__COUT;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshzbaG88eRjG5CwOUqMDMIhWd1TpUST7xPBZLw2V68__COUT = 0;
    CData/*0:0*/ co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshXqBI272PuujKswEslLsT1p9GlcLz0jzEnuS6HkvQ__COUT;
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshXqBI272PuujKswEslLsT1p9GlcLz0jzEnuS6HkvQ__COUT = 0;
    // Body
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshY9XtLzZ3th4qTkT7dZjkAWFHmH98VuDvJFCKeFbt__COUT 
        = (1U & ((0x20000000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eS)
                  ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eC 
                             >> 0x1dU)) : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eA 
                                           >> 0x1dU)));
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshlApxn3CU5rv7Nrtg3A7ISPoXEccekJARTg1Bnt97__COUT 
        = (1U & ((0x10000000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eS)
                  ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eC 
                             >> 0x1cU)) : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eA 
                                           >> 0x1cU)));
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshskDyJ4fSMFIz1ZLBO33zSJCvXQ9rNzu7TC5OE9Sj__COUT 
        = (1U & ((0x8000000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eS)
                  ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eC 
                             >> 0x1bU)) : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eA 
                                           >> 0x1bU)));
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___Vhshwbco1mY8hNScEtWw5J9bFqmxs5cswiiM2tFYwoJx__COUT 
        = (1U & ((0x4000000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eS)
                  ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eC 
                             >> 0x1aU)) : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eA 
                                           >> 0x1aU)));
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___Vhshl9oz8d066pqbeDaN1KtI3mDlB4g3mjX99f4J1D0X__COUT 
        = (1U & ((0x2000000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eS)
                  ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eC 
                             >> 0x19U)) : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eA 
                                           >> 0x19U)));
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshAE2r8qZkjrGjbTmvUlHWW89aLUZOwaJGOCoP2Fio__COUT 
        = (1U & ((0x1000000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eS)
                  ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eC 
                             >> 0x18U)) : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eA 
                                           >> 0x18U)));
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshAVaKV9ZR3AMyBUH8DLXJgtnBLMhtaZRSx7ddoOmH__COUT 
        = (1U & ((0x800000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eS)
                  ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eC 
                             >> 0x17U)) : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eA 
                                           >> 0x17U)));
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshkvQyxSc0CkpuHGDul8iZXBazpQN1SRlMaL8PY5JU__COUT 
        = (1U & ((0x400000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eS)
                  ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eC 
                             >> 0x16U)) : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eA 
                                           >> 0x16U)));
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshczMxYdLnly7ISdRI663s0A92DVHVXKu5NpIaWgR8__COUT 
        = (1U & ((0x200000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eS)
                  ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eC 
                             >> 0x15U)) : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eA 
                                           >> 0x15U)));
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshIoWL9AfMDQGodq3MH1LbT5uc5aZg0du9hVBjicHy__COUT 
        = (1U & ((0x100000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eS)
                  ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eC 
                             >> 0x14U)) : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eA 
                                           >> 0x14U)));
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshJ85aid8zbqrRpOdGb7CA3CPiYlepxfZVTjXCIcD3__COUT 
        = (1U & ((0x80000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eS)
                  ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eC 
                             >> 0x13U)) : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eA 
                                           >> 0x13U)));
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___Vhshxw7WXaivNy4jzeDGOALvJHI8o4ZhCIINgPhVUokM__COUT 
        = (1U & ((0x40000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eS)
                  ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eC 
                             >> 0x12U)) : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eA 
                                           >> 0x12U)));
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___Vhshk3xhQzgGzLs2I17SXHN0oIep77HFwGQIAO3gJKpO__COUT 
        = (1U & ((0x20000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eS)
                  ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eC 
                             >> 0x11U)) : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eA 
                                           >> 0x11U)));
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshJj11FUMuPiw0d2XCU2UTY3qazuKgOJUtOSu6V9Xe__COUT 
        = (1U & ((0x10000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eS)
                  ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eC 
                             >> 0x10U)) : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eA 
                                           >> 0x10U)));
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshLLBghiSdTdByhCWEAAedYh6j35r8M1QUolHljxpD__COUT 
        = (1U & ((0x8000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eS)
                  ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eC 
                             >> 0xfU)) : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eA 
                                          >> 0xfU)));
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___Vhsh9qTVKKWY17dPQJ4W1L89fyeS4cfjPyAU0wrIU6dX__COUT 
        = (1U & ((0x4000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eS)
                  ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eC 
                             >> 0xeU)) : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eA 
                                          >> 0xeU)));
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshyAonwL9NL8fz5dMJo1hbrPFBHeQyJHWvdBQ8OElY__COUT 
        = (1U & ((0x2000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eS)
                  ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eC 
                             >> 0xdU)) : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eA 
                                          >> 0xdU)));
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___Vhsh8VVxOVzpcdDfhBWDwOt97R4jePZMAqGrNt5uP2f3__COUT 
        = (1U & ((0x1000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eS)
                  ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eC 
                             >> 0xcU)) : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eA 
                                          >> 0xcU)));
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshSiNlkeRxMTaNdxSE8uTL2QAfdHki2DiXf4MToPk1__COUT 
        = (1U & ((0x800U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eS)
                  ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eC 
                             >> 0xbU)) : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eA 
                                          >> 0xbU)));
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhsheT1hBqrXEAwGCwVTyFtqfIAXA1LvxBjSMREa12zz__COUT 
        = (1U & ((0x400U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eS)
                  ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eC 
                             >> 0xaU)) : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eA 
                                          >> 0xaU)));
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshXqBI272PuujKswEslLsT1p9GlcLz0jzEnuS6HkvQ__COUT 
        = (1U & ((0x200U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eS)
                  ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eC 
                             >> 9U)) : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eA 
                                        >> 9U)));
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshzbaG88eRjG5CwOUqMDMIhWd1TpUST7xPBZLw2V68__COUT 
        = (1U & ((0x100U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eS)
                  ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eC 
                             >> 8U)) : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eA 
                                        >> 8U)));
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhsheMrAWN2fzOIXnuFabsdmjydmEhIfsBV0Bu1kP6TR__COUT 
        = (1U & ((0x80U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eS)
                  ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eC 
                             >> 7U)) : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eA 
                                        >> 7U)));
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshUay4MGIVNtymfMvHFgxeDARLiWu26qMs8nRj1wLx__COUT 
        = (1U & ((0x40U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eS)
                  ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eC 
                             >> 6U)) : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eA 
                                        >> 6U)));
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___Vhshcs7LwIf2JL7A3AhTzzPTuAAsKi7DYRGAZCpqGYET__COUT 
        = (1U & ((0x20U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eS)
                  ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eC 
                             >> 5U)) : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eA 
                                        >> 5U)));
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___Vhsh8gLJOSp2d1nHX4FEq1AcRKmTPf4A6JJYI7crGbzN__COUT 
        = (1U & ((0x10U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eS)
                  ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eC 
                             >> 4U)) : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eA 
                                        >> 4U)));
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___Vhshq1yNWajBMNevOFmfuACGPWIgBx8dJcSpgAy8gyG2__COUT 
        = (1U & ((8U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eS)
                  ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eC 
                             >> 3U)) : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eA 
                                        >> 3U)));
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshEIBGsza4LPlkaMztzdl6MpQz0kIdrJBEbL3BK0BW__COUT 
        = (1U & ((4U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eS)
                  ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eC 
                             >> 2U)) : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eA 
                                        >> 2U)));
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshPUMgwx8tAAzpbSL2hG2DFUlBtXgkXK1YaLSXTbGY__COUT 
        = (1U & ((2U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eS)
                  ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eC 
                             >> 1U)) : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eA 
                                        >> 1U)));
    co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshM8hw9fdkBw3qmMRz7xPTKdMjQilSAeFHjFk6llpe__COUT 
        = (1U & ((1U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eS)
                  ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eC)
                  : vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eA));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eC 
        = ((0x180000000ULL & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eC) 
           | (IData)((IData)((((IData)(co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshY9XtLzZ3th4qTkT7dZjkAWFHmH98VuDvJFCKeFbt__COUT) 
                               << 0x1eU) | (((IData)(co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshlApxn3CU5rv7Nrtg3A7ISPoXEccekJARTg1Bnt97__COUT) 
                                             << 0x1dU) 
                                            | (((IData)(co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshskDyJ4fSMFIz1ZLBO33zSJCvXQ9rNzu7TC5OE9Sj__COUT) 
                                                << 0x1cU) 
                                               | (((IData)(co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___Vhshwbco1mY8hNScEtWw5J9bFqmxs5cswiiM2tFYwoJx__COUT) 
                                                   << 0x1bU) 
                                                  | (((IData)(co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___Vhshl9oz8d066pqbeDaN1KtI3mDlB4g3mjX99f4J1D0X__COUT) 
                                                      << 0x1aU) 
                                                     | (((IData)(co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshAE2r8qZkjrGjbTmvUlHWW89aLUZOwaJGOCoP2Fio__COUT) 
                                                         << 0x19U) 
                                                        | (((IData)(co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshAVaKV9ZR3AMyBUH8DLXJgtnBLMhtaZRSx7ddoOmH__COUT) 
                                                            << 0x18U) 
                                                           | (((IData)(co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshkvQyxSc0CkpuHGDul8iZXBazpQN1SRlMaL8PY5JU__COUT) 
                                                               << 0x17U) 
                                                              | (((IData)(co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshczMxYdLnly7ISdRI663s0A92DVHVXKu5NpIaWgR8__COUT) 
                                                                  << 0x16U) 
                                                                 | (((IData)(co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshIoWL9AfMDQGodq3MH1LbT5uc5aZg0du9hVBjicHy__COUT) 
                                                                     << 0x15U) 
                                                                    | (((IData)(co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshJ85aid8zbqrRpOdGb7CA3CPiYlepxfZVTjXCIcD3__COUT) 
                                                                        << 0x14U) 
                                                                       | (((IData)(co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___Vhshxw7WXaivNy4jzeDGOALvJHI8o4ZhCIINgPhVUokM__COUT) 
                                                                           << 0x13U) 
                                                                          | (((IData)(co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___Vhshk3xhQzgGzLs2I17SXHN0oIep77HFwGQIAO3gJKpO__COUT) 
                                                                              << 0x12U) 
                                                                             | (((IData)(co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshJj11FUMuPiw0d2XCU2UTY3qazuKgOJUtOSu6V9Xe__COUT) 
                                                                                << 0x11U) 
                                                                                | (((IData)(co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshLLBghiSdTdByhCWEAAedYh6j35r8M1QUolHljxpD__COUT) 
                                                                                << 0x10U) 
                                                                                | (((IData)(co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___Vhsh9qTVKKWY17dPQJ4W1L89fyeS4cfjPyAU0wrIU6dX__COUT) 
                                                                                << 0xfU) 
                                                                                | (((IData)(co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshyAonwL9NL8fz5dMJo1hbrPFBHeQyJHWvdBQ8OElY__COUT) 
                                                                                << 0xeU) 
                                                                                | (((IData)(co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___Vhsh8VVxOVzpcdDfhBWDwOt97R4jePZMAqGrNt5uP2f3__COUT) 
                                                                                << 0xdU) 
                                                                                | (((IData)(co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshSiNlkeRxMTaNdxSE8uTL2QAfdHki2DiXf4MToPk1__COUT) 
                                                                                << 0xcU) 
                                                                                | (((IData)(co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhsheT1hBqrXEAwGCwVTyFtqfIAXA1LvxBjSMREa12zz__COUT) 
                                                                                << 0xbU) 
                                                                                | (((IData)(co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshXqBI272PuujKswEslLsT1p9GlcLz0jzEnuS6HkvQ__COUT) 
                                                                                << 0xaU) 
                                                                                | (((IData)(co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshzbaG88eRjG5CwOUqMDMIhWd1TpUST7xPBZLw2V68__COUT) 
                                                                                << 9U) 
                                                                                | (((IData)(co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhsheMrAWN2fzOIXnuFabsdmjydmEhIfsBV0Bu1kP6TR__COUT) 
                                                                                << 8U) 
                                                                                | (((IData)(co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshUay4MGIVNtymfMvHFgxeDARLiWu26qMs8nRj1wLx__COUT) 
                                                                                << 7U) 
                                                                                | (((IData)(co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___Vhshcs7LwIf2JL7A3AhTzzPTuAAsKi7DYRGAZCpqGYET__COUT) 
                                                                                << 6U) 
                                                                                | (((IData)(co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___Vhsh8gLJOSp2d1nHX4FEq1AcRKmTPf4A6JJYI7crGbzN__COUT) 
                                                                                << 5U) 
                                                                                | (((IData)(co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___Vhshq1yNWajBMNevOFmfuACGPWIgBx8dJcSpgAy8gyG2__COUT) 
                                                                                << 4U) 
                                                                                | (((IData)(co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshEIBGsza4LPlkaMztzdl6MpQz0kIdrJBEbL3BK0BW__COUT) 
                                                                                << 3U) 
                                                                                | (((IData)(co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshPUMgwx8tAAzpbSL2hG2DFUlBtXgkXK1YaLSXTbGY__COUT) 
                                                                                << 2U) 
                                                                                | ((IData)(co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024auto__05c__024alumacc___VhshM8hw9fdkBw3qmMRz7xPTKdMjQilSAeFHjFk6llpe__COUT) 
                                                                                << 1U)))))))))))))))))))))))))))))))));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
        = ((0xc0000000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2) 
           | (0x3fffffffU & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eC) 
                             ^ vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eS)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244307__A 
        = ((0x20U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eC 
                              >> 0x1eU)) << 5U)) | 
           ((0x10U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__z_out 
                               >> 0x1eU)) << 4U)) | 
            (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
              << 3U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset) 
                         << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241039__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q))))));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244306__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 5U) | ((0x10U & (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p)
                                  ? ((1U & (IData)(
                                                   (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eC 
                                                    >> 0x1eU)))
                                      ? ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__z_out 
                                                  >> 0x1eU)) 
                                         | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q))
                                      : ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__z_out 
                                                  >> 0x1eU)) 
                                         & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q)))
                                  : ((1U & (IData)(
                                                   (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eC 
                                                    >> 0x1eU)))
                                      ? ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__z_out 
                                                  >> 0x1eU)) 
                                         | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241039__Q))
                                      : ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__z_out 
                                                  >> 0x1eU)) 
                                         & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241039__Q)))) 
                                << 4U)) | ((8U & ((IData)(
                                                          (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__z_out 
                                                           >> 0x1fU)) 
                                                  << 3U)) 
                                           | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset) 
                                               << 2U) 
                                              | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241040__Q))))));
}

void Vco_sim_dsp_multiplier_accum_with_add_neg___024root___eval_act(Vco_sim_dsp_multiplier_accum_with_add_neg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_dsp_multiplier_accum_with_add_neg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_dsp_multiplier_accum_with_add_neg___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vco_sim_dsp_multiplier_accum_with_add_neg___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x200ULL & vlSelf->__VactTriggered.word(0U))) {
        Vco_sim_dsp_multiplier_accum_with_add_neg___024root___act_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vco_sim_dsp_multiplier_accum_with_add_neg___024root___act_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        Vco_sim_dsp_multiplier_accum_with_add_neg___024root___act_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        Vco_sim_dsp_multiplier_accum_with_add_neg___024root___act_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((0x204ULL & vlSelf->__VactTriggered.word(0U))) {
        Vco_sim_dsp_multiplier_accum_with_add_neg___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((0x214ULL & vlSelf->__VactTriggered.word(0U))) {
        Vco_sim_dsp_multiplier_accum_with_add_neg___024root___act_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
}

VL_INLINE_OPT void Vco_sim_dsp_multiplier_accum_with_add_neg___024root___nba_sequent__TOP__1(Vco_sim_dsp_multiplier_accum_with_add_neg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_dsp_multiplier_accum_with_add_neg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_dsp_multiplier_accum_with_add_neg___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__RESET) {
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__accumulator = 0ULL;
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__a_reg = 0U;
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__acc_fir_reg = 0U;
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__shift_right_reg2 = 0U;
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__z_out_reg = 0ULL;
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024techmap46__05c__024mul__Vhsh9CKKBbYb0BWMEz4YAkFLUJYhG8fiZ9OUTHwQ368t = 0U;
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__b_reg = 0U;
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__shift_right_reg1 = 0U;
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__feedback_reg = 0U;
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__unsigned_a_reg = 1U;
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__unsigned_b_reg = 1U;
    } else {
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__accumulator 
            = ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__load_acc_int)
                ? vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__add_sub_out
                : vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__accumulator);
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__a_reg 
            = vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__A;
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__acc_fir_reg 
            = vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__ACC_FIR;
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__shift_right_reg2 
            = vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__shift_right_reg1;
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__z_out_reg 
            = vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__z_out;
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024techmap46__05c__024mul__Vhsh9CKKBbYb0BWMEz4YAkFLUJYhG8fiZ9OUTHwQ368t 
            = vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__B;
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__b_reg 
            = vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__B;
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__shift_right_reg1 
            = vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__SHIFT_RIGHT;
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__feedback_reg = 0U;
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__unsigned_a_reg = 0U;
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__unsigned_b_reg = 0U;
    }
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__subtract_reg 
        = ((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__RESET))) 
           && (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__SUBTRACT));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__load_acc_reg 
        = ((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__RESET))) 
           && (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__LOAD_ACC));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__round_reg2 
        = ((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__RESET))) 
           && (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__round_reg1));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__saturate_reg2 
        = ((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__RESET))) 
           && (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__saturate_reg1));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__mult_a 
        = ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__feedback_int))
            ? 0U : (0xfffffU & ((2U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__feedback_int))
                                 ? ((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__feedback_int))
                                     ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__accumulator)
                                     : vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__a_int)
                                 : vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__a_int)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__round_reg1 
        = ((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__RESET))) 
           && (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__ROUND));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__saturate_reg1 
        = ((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__RESET))) 
           && (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__SATURATE));
}

VL_INLINE_OPT void Vco_sim_dsp_multiplier_accum_with_add_neg___024root___nba_sequent__TOP__2(Vco_sim_dsp_multiplier_accum_with_add_neg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_dsp_multiplier_accum_with_add_neg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_dsp_multiplier_accum_with_add_neg___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241040__Q 
        = ((0x20U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244306__A))
            ? ((0x10U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244306__A))
                ? ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244306__A))
                    ? ((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244306__A) 
                                 >> 2U))) && (1U & 
                                              ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244306__A) 
                                               >> 1U)))
                    : ((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244306__A) 
                                 >> 2U))) && (1U & 
                                              (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244306__A) 
                                                  >> 1U)))))
                : ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244306__A))
                    ? ((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244306__A) 
                                 >> 2U))) && (1U & 
                                              (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244306__A) 
                                                  >> 1U))))
                    : ((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244306__A) 
                                 >> 2U))) && (1U & 
                                              ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244306__A) 
                                               >> 1U)))))
            : ((0x10U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244306__A))
                ? ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244306__A))
                    ? ((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244306__A) 
                                 >> 2U))) && (1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244306__A)))
                    : ((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244306__A) 
                                 >> 2U))) && (1U & 
                                              ((2U 
                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244306__A))
                                                ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244306__A))
                                                : (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244306__A))))))
                : ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244306__A))
                    ? ((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244306__A) 
                                 >> 2U))) && (1U & 
                                              ((2U 
                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244306__A))
                                                ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244306__A))
                                                : (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244306__A)))))
                    : ((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244306__A) 
                                 >> 2U))) && (1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244306__A))))));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241039__Q 
        = ((0x20U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244307__A))
            ? ((0x10U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244307__A))
                ? ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244307__A))
                    ? ((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244307__A) 
                                 >> 2U))) && (1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244307__A)))
                    : ((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244307__A) 
                                 >> 2U))) && (1U & 
                                              ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244307__A) 
                                               >> 1U))))
                : ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244307__A))
                    ? ((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244307__A) 
                                 >> 2U))) && (1U & 
                                              ((2U 
                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244307__A))
                                                ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244307__A))
                                                : (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244307__A)))))
                    : ((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244307__A) 
                                 >> 2U))) && (1U & 
                                              (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244307__A) 
                                                  >> 1U))))))
            : ((0x10U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244307__A))
                ? ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244307__A))
                    ? ((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244307__A) 
                                 >> 2U))) && (1U & 
                                              ((2U 
                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244307__A))
                                                ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244307__A))
                                                : (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244307__A)))))
                    : ((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244307__A) 
                                 >> 2U))) && (1U & 
                                              (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244307__A) 
                                                  >> 1U)))))
                : ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244307__A))
                    ? ((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244307__A) 
                                 >> 2U))) && (1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244307__A)))
                    : ((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244307__A) 
                                 >> 2U))) && (1U & 
                                              ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244307__A) 
                                               >> 1U))))));
    if (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset) {
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__P = 0U;
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__golden__DOT__i3 = 0U;
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__golden__DOT__i4 = 0U;
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__golden__DOT__i2 = 0U;
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__golden__DOT__i1 = 0U;
    } else {
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__P 
            = vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__golden__DOT__add2;
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__golden__DOT__i3 
            = vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C;
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__golden__DOT__i4 
            = vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D;
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__golden__DOT__i2 
            = vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B;
        vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__golden__DOT__i1 
            = vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A;
    }
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241104__Q 
        = ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
           & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D) 
              >> 0xfU));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241056__Q 
        = ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
           & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A) 
              >> 0xfU));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241055__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A) 
                    >> 0xeU)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241054__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A) 
                    >> 0xdU)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241053__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A) 
                    >> 0xcU)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241052__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A) 
                    >> 0xbU)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241051__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A) 
                    >> 0xaU)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241050__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A) 
                    >> 9U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241049__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A) 
                    >> 8U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241048__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A) 
                    >> 7U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241047__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A) 
                    >> 6U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241046__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A) 
                    >> 5U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241045__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A) 
                    >> 4U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241044__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A) 
                    >> 3U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241043__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A) 
                    >> 2U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241042__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A) 
                    >> 1U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241041__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241103__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D) 
                    >> 0xeU)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241102__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D) 
                    >> 0xdU)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241101__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D) 
                    >> 0xcU)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241100__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D) 
                    >> 0xbU)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241099__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D) 
                    >> 0xaU)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241098__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D) 
                    >> 9U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241097__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D) 
                    >> 8U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241096__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D) 
                    >> 7U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241095__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D) 
                    >> 6U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241094__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D) 
                    >> 5U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241093__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D) 
                    >> 4U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241092__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D) 
                    >> 3U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241091__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D) 
                    >> 2U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241090__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D) 
                    >> 1U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241089__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241087__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C) 
                    >> 0xeU)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241086__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C) 
                    >> 0xdU)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241085__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C) 
                    >> 0xcU)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241084__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C) 
                    >> 0xbU)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241083__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C) 
                    >> 0xaU)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241082__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C) 
                    >> 9U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241081__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C) 
                    >> 8U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241080__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C) 
                    >> 7U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241079__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C) 
                    >> 6U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241078__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C) 
                    >> 5U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241077__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C) 
                    >> 4U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241076__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C) 
                    >> 3U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241075__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C) 
                    >> 2U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241074__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C) 
                    >> 1U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241073__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241009__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241038__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                    >> 0x1dU)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241037__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                    >> 0x1cU)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241036__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                    >> 0x1bU)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241035__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                    >> 0x1aU)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241034__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                    >> 0x19U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241033__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                    >> 0x18U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241032__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                    >> 0x17U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241031__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                    >> 0x16U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241030__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                    >> 0x15U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241029__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                    >> 0x14U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241028__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                    >> 0x13U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241027__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                    >> 0x12U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241026__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                    >> 0x11U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241025__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                    >> 0x10U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241024__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                    >> 0xfU)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241023__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                    >> 0xeU)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241022__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                    >> 0xdU)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241021__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                    >> 0xcU)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241020__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                    >> 0xbU)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241019__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                    >> 0xaU)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241018__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                    >> 9U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241017__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                    >> 8U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241016__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                    >> 7U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241015__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                    >> 6U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241014__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                    >> 5U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241013__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                    >> 4U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241012__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                    >> 3U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241011__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                    >> 2U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241010__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                    >> 1U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q 
        = ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
           & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C) 
              >> 0xfU));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241072__Q 
        = ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
           & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B) 
              >> 0xfU));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241071__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B) 
                    >> 0xeU)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241070__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B) 
                    >> 0xdU)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241069__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B) 
                    >> 0xcU)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241068__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B) 
                    >> 0xbU)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241067__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B) 
                    >> 0xaU)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241066__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B) 
                    >> 9U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241065__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B) 
                    >> 8U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241064__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B) 
                    >> 7U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241063__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B) 
                    >> 6U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241062__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B) 
                    >> 5U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241061__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B) 
                    >> 4U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241060__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B) 
                    >> 3U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241059__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B) 
                    >> 2U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241058__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B) 
                    >> 1U)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241057__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                 & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__golden__DOT__add 
        = (VL_EXTENDS_II(32,16, (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__golden__DOT__i1)) 
           + VL_EXTENDS_II(32,16, (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__golden__DOT__i4)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__golden__DOT__mul 
        = VL_MULS_III(32, vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__golden__DOT__add, 
                      VL_EXTENDS_II(32,16, (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__golden__DOT__i2)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__B 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241072__Q) 
            << 0x11U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241072__Q) 
                          << 0x10U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241072__Q) 
                                        << 0xfU) | 
                                       (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241071__Q) 
                                         << 0xeU) | 
                                        (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241070__Q) 
                                          << 0xdU) 
                                         | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241069__Q) 
                                             << 0xcU) 
                                            | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241068__Q) 
                                                << 0xbU) 
                                               | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241067__Q) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241066__Q) 
                                                      << 9U) 
                                                     | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241065__Q) 
                                                         << 8U) 
                                                        | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241064__Q) 
                                                            << 7U) 
                                                           | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241063__Q) 
                                                               << 6U) 
                                                              | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241062__Q) 
                                                                  << 5U) 
                                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241061__Q) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241060__Q) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241059__Q) 
                                                                           << 2U) 
                                                                          | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241058__Q) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241057__Q))))))))))))))))));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__b_int 
        = vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__B;
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__mult_b 
        = ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__feedback_int))
            ? vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__b_int
            : ((2U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__feedback_int))
                ? ((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__feedback_int))
                    ? vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__b_int
                    : 0U) : vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__b_int));
}

VL_INLINE_OPT void Vco_sim_dsp_multiplier_accum_with_add_neg___024root___nba_sequent__TOP__3(Vco_sim_dsp_multiplier_accum_with_add_neg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_dsp_multiplier_accum_with_add_neg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_dsp_multiplier_accum_with_add_neg___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__add_sub_in 
        = ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__feedback_int))
            ? ((2U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__feedback_int))
                ? ((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__feedback_int))
                    ? ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__acc_fir_int)))
                    : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__acc_fir_int))))
                : ((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__feedback_int))
                    ? ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__acc_fir_int)))
                    : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__acc_fir_int)))))
            : ((2U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__feedback_int))
                ? ((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__feedback_int))
                    ? ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__acc_fir_int)))
                    : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__acc_fir_int))))
                : ((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__feedback_int))
                    ? 0ULL : vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__accumulator)));
}

VL_INLINE_OPT void Vco_sim_dsp_multiplier_accum_with_add_neg___024root___nba_comb__TOP__3(Vco_sim_dsp_multiplier_accum_with_add_neg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_dsp_multiplier_accum_with_add_neg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_dsp_multiplier_accum_with_add_neg___024root___nba_comb__TOP__3\n"); );
    // Body
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244338__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241073__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241009__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244366__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241087__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241023__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244364__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241086__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241022__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244362__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241085__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241021__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244360__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241084__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241020__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244358__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241083__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241019__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244356__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241082__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241018__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244354__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241081__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241017__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244352__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241080__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241016__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244350__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241079__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241015__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244348__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241078__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241014__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244346__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241077__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241013__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244344__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241076__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241012__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244342__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241075__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241011__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244340__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241074__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241010__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244375__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241028__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244369__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241025__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244395__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241038__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244393__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241037__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244373__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241027__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244371__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241026__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244398__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241024__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244377__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241029__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244389__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241035__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244381__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241031__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244383__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241032__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244387__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241034__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244385__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241033__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244391__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241036__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244379__A 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
            << 2U) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241088__Q) 
                       << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____05c__024abc__05c__0241008__05c__024auto__05c__024blifparse__02ecc__03a362__03aparse_blif__05c__0241030__Q)));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__golden__DOT__add2 
        = ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p)
            ? (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__golden__DOT__mul 
               + VL_EXTENDS_II(32,16, (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__golden__DOT__i3)))
            : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__P 
               + vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__golden__DOT__mul));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eA 
        = ((0xc0000000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024auto__05c__024alumacc__02ecc__03a485__03areplace_alu__05c__02447__02eA) 
           | ((0x20000000U & (((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244395__A))
                                ? ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244395__A) 
                                   >> 1U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244395__A)) 
                              << 0x1dU)) | ((0x10000000U 
                                             & (((4U 
                                                  & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244393__A))
                                                  ? 
                                                 ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244393__A) 
                                                  >> 1U)
                                                  : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244393__A)) 
                                                << 0x1cU)) 
                                            | ((0x8000000U 
                                                & (((4U 
                                                     & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244391__A))
                                                     ? 
                                                    ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244391__A) 
                                                     >> 1U)
                                                     : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244391__A)) 
                                                   << 0x1bU)) 
                                               | ((0x4000000U 
                                                   & (((4U 
                                                        & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244389__A))
                                                        ? 
                                                       ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244389__A) 
                                                        >> 1U)
                                                        : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244389__A)) 
                                                      << 0x1aU)) 
                                                  | ((0x2000000U 
                                                      & (((4U 
                                                           & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244387__A))
                                                           ? 
                                                          ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244387__A) 
                                                           >> 1U)
                                                           : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244387__A)) 
                                                         << 0x19U)) 
                                                     | ((0x1000000U 
                                                         & (((4U 
                                                              & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244385__A))
                                                              ? 
                                                             ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244385__A) 
                                                              >> 1U)
                                                              : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244385__A)) 
                                                            << 0x18U)) 
                                                        | ((0x800000U 
                                                            & (((4U 
                                                                 & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244383__A))
                                                                 ? 
                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244383__A) 
                                                                 >> 1U)
                                                                 : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244383__A)) 
                                                               << 0x17U)) 
                                                           | ((0x400000U 
                                                               & (((4U 
                                                                    & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244381__A))
                                                                    ? 
                                                                   ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244381__A) 
                                                                    >> 1U)
                                                                    : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244381__A)) 
                                                                  << 0x16U)) 
                                                              | ((0x200000U 
                                                                  & (((4U 
                                                                       & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244379__A))
                                                                       ? 
                                                                      ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244379__A) 
                                                                       >> 1U)
                                                                       : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244379__A)) 
                                                                     << 0x15U)) 
                                                                 | ((0x100000U 
                                                                     & (((4U 
                                                                          & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244377__A))
                                                                          ? 
                                                                         ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244377__A) 
                                                                          >> 1U)
                                                                          : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244377__A)) 
                                                                        << 0x14U)) 
                                                                    | ((0x80000U 
                                                                        & (((4U 
                                                                             & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244375__A))
                                                                             ? 
                                                                            ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244375__A) 
                                                                             >> 1U)
                                                                             : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244375__A)) 
                                                                           << 0x13U)) 
                                                                       | ((0x40000U 
                                                                           & (((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244373__A))
                                                                                ? 
                                                                               ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244373__A) 
                                                                                >> 1U)
                                                                                : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244373__A)) 
                                                                              << 0x12U)) 
                                                                          | ((0x20000U 
                                                                              & (((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244371__A))
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244371__A) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244371__A)) 
                                                                                << 0x11U)) 
                                                                             | ((0x10000U 
                                                                                & (((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244369__A))
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244369__A) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244369__A)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244398__A))
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244398__A) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244398__A)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244366__A))
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244366__A) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244366__A)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244364__A))
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244364__A) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244364__A)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244362__A))
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244362__A) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244362__A)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244360__A))
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244360__A) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244360__A)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244358__A))
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244358__A) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244358__A)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244356__A))
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244356__A) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244356__A)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244354__A))
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244354__A) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244354__A)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244352__A))
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244352__A) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244352__A)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244350__A))
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244350__A) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244350__A)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244348__A))
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244348__A) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244348__A)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244346__A))
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244346__A) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244346__A)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244344__A))
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244344__A) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244344__A)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244342__A))
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244342__A) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244342__A)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244340__A))
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244340__A) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244340__A)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((4U 
                                                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244338__A))
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244338__A) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____05c__024abc__05c__0244240__05c__024auto__05c__024blifparse__02ecc__03a515__03aparse_blif__05c__0244338__A)))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void Vco_sim_dsp_multiplier_accum_with_add_neg___024root___nba_comb__TOP__4(Vco_sim_dsp_multiplier_accum_with_add_neg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_dsp_multiplier_accum_with_add_neg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_dsp_multiplier_accum_with_add_neg___024root___nba_comb__TOP__4\n"); );
    // Body
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__mult_out 
        = ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__unsigned_a_int)
            ? ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__unsigned_b_int)
                ? ((QData)((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__mult_a)) 
                   * (QData)((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__mult_b)))
                : VL_MULS_QQQ(64, VL_EXTENDS_QI(64,21, vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__mult_a), 
                              VL_EXTENDS_QI(64,18, vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__mult_b)))
            : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__unsigned_b_int)
                ? VL_MULS_QQQ(64, VL_EXTENDS_QI(64,20, vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__mult_a), 
                              VL_EXTENDS_QI(64,19, vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__mult_b))
                : VL_MULS_QQQ(64, VL_EXTENDS_QI(64,20, vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__mult_a), 
                              VL_EXTENDS_QI(64,18, vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__mult_b))));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__add_sub_out 
        = ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__subtract_int)
            ? (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__add_sub_in 
               - vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__mult_out)
            : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__add_sub_in 
               + vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__mult_out));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__z_out 
        = (0x3fffffffffULL & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__mult_out);
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__pre_shift 
        = vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__add_sub_out;
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__shift_right 
        = VL_SHIFTRS_QQI(64,64,6, vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__pre_shift, (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__shift_right_int));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__round 
        = (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__round_int) 
            & (0U < (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__shift_right_int)))
            ? ((1U & (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__pre_shift 
                              >> (0x3fU & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__shift_right_int) 
                                           - (IData)(1U))))))
                ? (1ULL + vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__shift_right)
                : vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__shift_right)
            : vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__shift_right);
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__saturate 
        = (0x3fffffffffULL & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__saturate_int)
                               ? (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__unsigned_a_int) 
                                   & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__unsigned_b_int))
                                   ? (VL_GTS_IQQ(64, 0ULL, vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__round)
                                       ? 0ULL : ((0x3fffffffffULL 
                                                  < vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__round)
                                                  ? 0x3fffffffffULL
                                                  : vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__round))
                                   : (VL_LTS_IQQ(64, 0x1fffffffffULL, vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__round)
                                       ? 0x1fffffffffULL
                                       : (VL_GTS_IQQ(64, 0xffffffe000000000ULL, vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__round)
                                           ? 0x2000000000ULL
                                           : vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__round)))
                               : vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__round));
    vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024techmap44__05c__024mul__VhshMZ5DLQDpsnGuRDcE2CUo9QVuRXAJODXCdN7cBSGq 
        = ((0xffffffffULL & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024techmap44__05c__024mul__VhshMZ5DLQDpsnGuRDcE2CUo9QVuRXAJODXCdN7cBSGq) 
           | ((QData)((IData)((0x3fU & (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____05c__024mul__05c__024__02fnfs___VhshgHsEgeOk9URBmOUzMpBmWKcBZPsYfHs4RnzQ1Cey__DOT__z_out 
                                                >> 0x20U))))) 
              << 0x20U));
}

void Vco_sim_dsp_multiplier_accum_with_add_neg___024root___nba_sequent__TOP__0(Vco_sim_dsp_multiplier_accum_with_add_neg___024root* vlSelf);

void Vco_sim_dsp_multiplier_accum_with_add_neg___024root___eval_nba(Vco_sim_dsp_multiplier_accum_with_add_neg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_dsp_multiplier_accum_with_add_neg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_dsp_multiplier_accum_with_add_neg___024root___eval_nba\n"); );
    // Body
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_dsp_multiplier_accum_with_add_neg___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_dsp_multiplier_accum_with_add_neg___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_dsp_multiplier_accum_with_add_neg___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_dsp_multiplier_accum_with_add_neg___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x21ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_dsp_multiplier_accum_with_add_neg___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x22ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_dsp_multiplier_accum_with_add_neg___024root___act_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
    }
    if ((0x28ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_dsp_multiplier_accum_with_add_neg___024root___act_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
    }
    if ((0x220ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_dsp_multiplier_accum_with_add_neg___024root___nba_comb__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
    }
    if ((0x60ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_dsp_multiplier_accum_with_add_neg___024root___nba_comb__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
    }
    if ((0x260ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_dsp_multiplier_accum_with_add_neg___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
    }
    if ((0x270ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_dsp_multiplier_accum_with_add_neg___024root___act_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
    }
}

void Vco_sim_dsp_multiplier_accum_with_add_neg___024root___timing_resume(Vco_sim_dsp_multiplier_accum_with_add_neg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_dsp_multiplier_accum_with_add_neg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_dsp_multiplier_accum_with_add_neg___024root___timing_resume\n"); );
    // Body
    if ((0x200ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h3815ed83__0.resume("@(posedge co_sim_dsp_multiplier_accum_with_add_neg.clk)");
    }
    if ((0x100ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vco_sim_dsp_multiplier_accum_with_add_neg___024root___timing_commit(Vco_sim_dsp_multiplier_accum_with_add_neg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_dsp_multiplier_accum_with_add_neg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_dsp_multiplier_accum_with_add_neg___024root___timing_commit\n"); );
    // Body
    if ((! (0x200ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h3815ed83__0.commit("@(posedge co_sim_dsp_multiplier_accum_with_add_neg.clk)");
    }
}

void Vco_sim_dsp_multiplier_accum_with_add_neg___024root___eval_triggers__act(Vco_sim_dsp_multiplier_accum_with_add_neg___024root* vlSelf);

bool Vco_sim_dsp_multiplier_accum_with_add_neg___024root___eval_phase__act(Vco_sim_dsp_multiplier_accum_with_add_neg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_dsp_multiplier_accum_with_add_neg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_dsp_multiplier_accum_with_add_neg___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<10> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vco_sim_dsp_multiplier_accum_with_add_neg___024root___eval_triggers__act(vlSelf);
    Vco_sim_dsp_multiplier_accum_with_add_neg___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vco_sim_dsp_multiplier_accum_with_add_neg___024root___timing_resume(vlSelf);
        Vco_sim_dsp_multiplier_accum_with_add_neg___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vco_sim_dsp_multiplier_accum_with_add_neg___024root___eval_phase__nba(Vco_sim_dsp_multiplier_accum_with_add_neg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_dsp_multiplier_accum_with_add_neg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_dsp_multiplier_accum_with_add_neg___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vco_sim_dsp_multiplier_accum_with_add_neg___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_dsp_multiplier_accum_with_add_neg___024root___dump_triggers__nba(Vco_sim_dsp_multiplier_accum_with_add_neg___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_dsp_multiplier_accum_with_add_neg___024root___dump_triggers__act(Vco_sim_dsp_multiplier_accum_with_add_neg___024root* vlSelf);
#endif  // VL_DEBUG

void Vco_sim_dsp_multiplier_accum_with_add_neg___024root___eval(Vco_sim_dsp_multiplier_accum_with_add_neg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_dsp_multiplier_accum_with_add_neg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_dsp_multiplier_accum_with_add_neg___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vco_sim_dsp_multiplier_accum_with_add_neg___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/nfs_scratch/scratch/CompilerValidation/abdul_hameed/5th-march/dsp_multiplier_accum_with_add_neg/results_dir/.././sim/co_sim_tb/co_sim_dsp_multiplier_accum_with_add_neg.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vco_sim_dsp_multiplier_accum_with_add_neg___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/nfs_scratch/scratch/CompilerValidation/abdul_hameed/5th-march/dsp_multiplier_accum_with_add_neg/results_dir/.././sim/co_sim_tb/co_sim_dsp_multiplier_accum_with_add_neg.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vco_sim_dsp_multiplier_accum_with_add_neg___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vco_sim_dsp_multiplier_accum_with_add_neg___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vco_sim_dsp_multiplier_accum_with_add_neg___024root___eval_debug_assertions(Vco_sim_dsp_multiplier_accum_with_add_neg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_dsp_multiplier_accum_with_add_neg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_dsp_multiplier_accum_with_add_neg___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
