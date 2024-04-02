// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_mac_32.h for the primary calling header

#include "Vco_sim_mac_32__pch.h"
#include "Vco_sim_mac_32___024root.h"

VL_ATTR_COLD void Vco_sim_mac_32___024root___eval_initial__TOP(Vco_sim_mac_32___024root* vlSelf);
VlCoroutine Vco_sim_mac_32___024root___eval_initial__TOP__Vtiming__0(Vco_sim_mac_32___024root* vlSelf);
VlCoroutine Vco_sim_mac_32___024root___eval_initial__TOP__Vtiming__1(Vco_sim_mac_32___024root* vlSelf);

void Vco_sim_mac_32___024root___eval_initial(Vco_sim_mac_32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_mac_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_mac_32___024root___eval_initial\n"); );
    // Body
    Vco_sim_mac_32___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vco_sim_mac_32___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vco_sim_mac_32___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC__0 
        = vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC__0 
        = vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC__1 
        = vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC__1 
        = vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_mac_32__DOT__clock0__0 
        = vlSelf->co_sim_mac_32__DOT__clock0;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__CLK__0 
        = vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__CLK;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__RESET__0 
        = vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__RESET;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__ACC_FIR__0 
        = vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__ACC_FIR;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__CLK__0 
        = vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__CLK;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__RESET__0 
        = vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__RESET;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__ACC_FIR__0 
        = vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__ACC_FIR;
}

VL_INLINE_OPT VlCoroutine Vco_sim_mac_32___024root___eval_initial__TOP__Vtiming__0(Vco_sim_mac_32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_mac_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_mac_32___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->co_sim_mac_32__DOT__clock0 = 1U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x4c4b40ULL, 
                                           nullptr, 
                                           "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/25march/EDA-/mac_32/results_dir/.././sim/co_sim_tb/co_sim_mac_32.v", 
                                           50);
        vlSelf->co_sim_mac_32__DOT__clock0 = (1U & 
                                              (~ (IData)(vlSelf->co_sim_mac_32__DOT__clock0)));
    }
}

VL_INLINE_OPT VlCoroutine Vco_sim_mac_32___024root___eval_initial__TOP__Vtiming__1(Vco_sim_mac_32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_mac_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_mac_32___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Init
    IData/*31:0*/ co_sim_mac_32__DOT____Vrepeat2;
    co_sim_mac_32__DOT____Vrepeat2 = 0;
    // Body
    vlSelf->co_sim_mac_32__DOT__reset = 0U;
    vlSelf->co_sim_mac_32__DOT__a = 0U;
    vlSelf->co_sim_mac_32__DOT__b = 0U;
    vlSelf->co_sim_mac_32__DOT__id = 0U;
    co_await vlSelf->__VtrigSched_hf4c4dc1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_mac_32.clock0)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/25march/EDA-/mac_32/results_dir/.././sim/co_sim_tb/co_sim_mac_32.v", 
                                                       60);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->co_sim_mac_32__DOT__reset = 1U;
    VL_WRITEF_NX("\n\n***Reset Test is applied***\n\n\n",0);
    VL_WRITEF_NX("%20#  Test stimulus is: a=%0d, b=%0d, id=%0#\n",0,
                 64,VL_TIME_UNITED_Q(1e+06),16,(IData)(vlSelf->co_sim_mac_32__DOT__a),
                 16,vlSelf->co_sim_mac_32__DOT__b,2,
                 (IData)(vlSelf->co_sim_mac_32__DOT__id));
    co_await vlSelf->__VtrigSched_hf4c4dc1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_mac_32.clock0)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/25march/EDA-/mac_32/results_dir/.././sim/co_sim_tb/co_sim_mac_32.v", 
                                                       64);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hf4c4dc1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_mac_32.clock0)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/25march/EDA-/mac_32/results_dir/.././sim/co_sim_tb/co_sim_mac_32.v", 
                                                       65);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if ((vlSelf->co_sim_mac_32__DOT__out != ((((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241074__Q)
                                                ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244134__DOT__s1) 
                                                   >> 1U)
                                                : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244134__DOT__s1)) 
                                              << 0x1fU) 
                                             | ((0x40000000U 
                                                 & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241073__Q)
                                                      ? 
                                                     ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244135__DOT__s1) 
                                                      >> 1U)
                                                      : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244135__DOT__s1)) 
                                                    << 0x1eU)) 
                                                | ((0x20000000U 
                                                    & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241072__Q)
                                                         ? 
                                                        ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244133__DOT__s1) 
                                                         >> 1U)
                                                         : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244133__DOT__s1)) 
                                                       << 0x1dU)) 
                                                   | ((0x10000000U 
                                                       & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241071__Q)
                                                            ? 
                                                           ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244132__DOT__s1) 
                                                            >> 1U)
                                                            : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244132__DOT__s1)) 
                                                          << 0x1cU)) 
                                                      | ((0x8000000U 
                                                          & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241070__Q)
                                                               ? 
                                                              ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244131__DOT__s1) 
                                                               >> 1U)
                                                               : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244131__DOT__s1)) 
                                                             << 0x1bU)) 
                                                         | ((0x4000000U 
                                                             & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241069__Q)
                                                                  ? 
                                                                 ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244130__DOT__s1) 
                                                                  >> 1U)
                                                                  : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244130__DOT__s1)) 
                                                                << 0x1aU)) 
                                                            | ((0x2000000U 
                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241068__Q)
                                                                     ? 
                                                                    ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244129__DOT__s1) 
                                                                     >> 1U)
                                                                     : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244129__DOT__s1)) 
                                                                   << 0x19U)) 
                                                               | ((0x1000000U 
                                                                   & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241067__Q)
                                                                        ? 
                                                                       ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244128__DOT__s1) 
                                                                        >> 1U)
                                                                        : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244128__DOT__s1)) 
                                                                      << 0x18U)) 
                                                                  | ((0x800000U 
                                                                      & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241066__Q)
                                                                           ? 
                                                                          ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244127__DOT__s1) 
                                                                           >> 1U)
                                                                           : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244127__DOT__s1)) 
                                                                         << 0x17U)) 
                                                                     | ((0x400000U 
                                                                         & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241065__Q)
                                                                              ? 
                                                                             ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244126__DOT__s1) 
                                                                              >> 1U)
                                                                              : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244126__DOT__s1)) 
                                                                            << 0x16U)) 
                                                                        | ((0x200000U 
                                                                            & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241064__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244125__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244125__DOT__s1)) 
                                                                               << 0x15U)) 
                                                                           | ((0x100000U 
                                                                               & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241063__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244124__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244124__DOT__s1)) 
                                                                                << 0x14U)) 
                                                                              | ((0x80000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241062__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244123__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244123__DOT__s1)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241061__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244122__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244122__DOT__s1)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241060__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244120__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244120__DOT__s1)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241059__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244118__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244118__DOT__s1)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241058__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244148__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244148__DOT__s1)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241057__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244116__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244116__DOT__s1)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241056__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244149__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244149__DOT__s1)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241055__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244152__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244152__DOT__s1)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241054__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244114__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244114__DOT__s1)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241053__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244153__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244153__DOT__s1)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241052__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244156__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244156__DOT__s1)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241051__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244112__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244112__DOT__s1)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241050__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244157__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244157__DOT__s1)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241049__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244160__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244160__DOT__s1)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241048__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244110__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244110__DOT__s1)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241047__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244161__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244161__DOT__s1)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241046__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244164__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244164__DOT__s1)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241045__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244108__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244108__DOT__s1)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241044__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244165__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244165__DOT__s1)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241043__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244168__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244168__DOT__s1)))))))))))))))))))))))))))))))))))) {
        VL_WRITEF_NX("Data Mismatch. Golden: %0d, Netlist: %0d, Time: %0t\n",0,
                     32,vlSelf->co_sim_mac_32__DOT__out,
                     32,((((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241074__Q)
                            ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244134__DOT__s1) 
                               >> 1U) : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244134__DOT__s1)) 
                          << 0x1fU) | ((0x40000000U 
                                        & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241073__Q)
                                             ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244135__DOT__s1) 
                                                >> 1U)
                                             : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244135__DOT__s1)) 
                                           << 0x1eU)) 
                                       | ((0x20000000U 
                                           & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241072__Q)
                                                ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244133__DOT__s1) 
                                                   >> 1U)
                                                : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244133__DOT__s1)) 
                                              << 0x1dU)) 
                                          | ((0x10000000U 
                                              & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241071__Q)
                                                   ? 
                                                  ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244132__DOT__s1) 
                                                   >> 1U)
                                                   : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244132__DOT__s1)) 
                                                 << 0x1cU)) 
                                             | ((0x8000000U 
                                                 & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241070__Q)
                                                      ? 
                                                     ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244131__DOT__s1) 
                                                      >> 1U)
                                                      : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244131__DOT__s1)) 
                                                    << 0x1bU)) 
                                                | ((0x4000000U 
                                                    & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241069__Q)
                                                         ? 
                                                        ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244130__DOT__s1) 
                                                         >> 1U)
                                                         : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244130__DOT__s1)) 
                                                       << 0x1aU)) 
                                                   | ((0x2000000U 
                                                       & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241068__Q)
                                                            ? 
                                                           ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244129__DOT__s1) 
                                                            >> 1U)
                                                            : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244129__DOT__s1)) 
                                                          << 0x19U)) 
                                                      | ((0x1000000U 
                                                          & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241067__Q)
                                                               ? 
                                                              ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244128__DOT__s1) 
                                                               >> 1U)
                                                               : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244128__DOT__s1)) 
                                                             << 0x18U)) 
                                                         | ((0x800000U 
                                                             & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241066__Q)
                                                                  ? 
                                                                 ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244127__DOT__s1) 
                                                                  >> 1U)
                                                                  : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244127__DOT__s1)) 
                                                                << 0x17U)) 
                                                            | ((0x400000U 
                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241065__Q)
                                                                     ? 
                                                                    ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244126__DOT__s1) 
                                                                     >> 1U)
                                                                     : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244126__DOT__s1)) 
                                                                   << 0x16U)) 
                                                               | ((0x200000U 
                                                                   & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241064__Q)
                                                                        ? 
                                                                       ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244125__DOT__s1) 
                                                                        >> 1U)
                                                                        : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244125__DOT__s1)) 
                                                                      << 0x15U)) 
                                                                  | ((0x100000U 
                                                                      & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241063__Q)
                                                                           ? 
                                                                          ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244124__DOT__s1) 
                                                                           >> 1U)
                                                                           : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244124__DOT__s1)) 
                                                                         << 0x14U)) 
                                                                     | ((0x80000U 
                                                                         & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241062__Q)
                                                                              ? 
                                                                             ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244123__DOT__s1) 
                                                                              >> 1U)
                                                                              : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244123__DOT__s1)) 
                                                                            << 0x13U)) 
                                                                        | ((0x40000U 
                                                                            & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241061__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244122__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244122__DOT__s1)) 
                                                                               << 0x12U)) 
                                                                           | ((0x20000U 
                                                                               & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241060__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244120__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244120__DOT__s1)) 
                                                                                << 0x11U)) 
                                                                              | ((0x10000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241059__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244118__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244118__DOT__s1)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241058__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244148__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244148__DOT__s1)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241057__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244116__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244116__DOT__s1)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241056__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244149__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244149__DOT__s1)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241055__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244152__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244152__DOT__s1)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241054__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244114__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244114__DOT__s1)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241053__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244153__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244153__DOT__s1)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241052__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244156__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244156__DOT__s1)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241051__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244112__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244112__DOT__s1)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241050__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244157__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244157__DOT__s1)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241049__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244160__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244160__DOT__s1)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241048__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244110__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244110__DOT__s1)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241047__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244161__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244161__DOT__s1)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241046__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244164__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244164__DOT__s1)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241045__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244108__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244108__DOT__s1)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241044__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244165__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244165__DOT__s1)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241043__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244168__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244168__DOT__s1)))))))))))))))))))))))))))))))))),
                     64,VL_TIME_UNITED_Q(1e+06),-9);
        vlSelf->co_sim_mac_32__DOT__mismatch = ((IData)(1U) 
                                                + vlSelf->co_sim_mac_32__DOT__mismatch);
    } else {
        VL_WRITEF_NX("Data Matched. Golden: %0d, Netlist: %0d, Time: %0t\n",0,
                     32,vlSelf->co_sim_mac_32__DOT__out,
                     32,((((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241074__Q)
                            ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244134__DOT__s1) 
                               >> 1U) : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244134__DOT__s1)) 
                          << 0x1fU) | ((0x40000000U 
                                        & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241073__Q)
                                             ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244135__DOT__s1) 
                                                >> 1U)
                                             : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244135__DOT__s1)) 
                                           << 0x1eU)) 
                                       | ((0x20000000U 
                                           & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241072__Q)
                                                ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244133__DOT__s1) 
                                                   >> 1U)
                                                : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244133__DOT__s1)) 
                                              << 0x1dU)) 
                                          | ((0x10000000U 
                                              & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241071__Q)
                                                   ? 
                                                  ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244132__DOT__s1) 
                                                   >> 1U)
                                                   : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244132__DOT__s1)) 
                                                 << 0x1cU)) 
                                             | ((0x8000000U 
                                                 & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241070__Q)
                                                      ? 
                                                     ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244131__DOT__s1) 
                                                      >> 1U)
                                                      : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244131__DOT__s1)) 
                                                    << 0x1bU)) 
                                                | ((0x4000000U 
                                                    & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241069__Q)
                                                         ? 
                                                        ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244130__DOT__s1) 
                                                         >> 1U)
                                                         : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244130__DOT__s1)) 
                                                       << 0x1aU)) 
                                                   | ((0x2000000U 
                                                       & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241068__Q)
                                                            ? 
                                                           ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244129__DOT__s1) 
                                                            >> 1U)
                                                            : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244129__DOT__s1)) 
                                                          << 0x19U)) 
                                                      | ((0x1000000U 
                                                          & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241067__Q)
                                                               ? 
                                                              ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244128__DOT__s1) 
                                                               >> 1U)
                                                               : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244128__DOT__s1)) 
                                                             << 0x18U)) 
                                                         | ((0x800000U 
                                                             & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241066__Q)
                                                                  ? 
                                                                 ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244127__DOT__s1) 
                                                                  >> 1U)
                                                                  : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244127__DOT__s1)) 
                                                                << 0x17U)) 
                                                            | ((0x400000U 
                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241065__Q)
                                                                     ? 
                                                                    ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244126__DOT__s1) 
                                                                     >> 1U)
                                                                     : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244126__DOT__s1)) 
                                                                   << 0x16U)) 
                                                               | ((0x200000U 
                                                                   & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241064__Q)
                                                                        ? 
                                                                       ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244125__DOT__s1) 
                                                                        >> 1U)
                                                                        : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244125__DOT__s1)) 
                                                                      << 0x15U)) 
                                                                  | ((0x100000U 
                                                                      & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241063__Q)
                                                                           ? 
                                                                          ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244124__DOT__s1) 
                                                                           >> 1U)
                                                                           : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244124__DOT__s1)) 
                                                                         << 0x14U)) 
                                                                     | ((0x80000U 
                                                                         & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241062__Q)
                                                                              ? 
                                                                             ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244123__DOT__s1) 
                                                                              >> 1U)
                                                                              : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244123__DOT__s1)) 
                                                                            << 0x13U)) 
                                                                        | ((0x40000U 
                                                                            & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241061__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244122__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244122__DOT__s1)) 
                                                                               << 0x12U)) 
                                                                           | ((0x20000U 
                                                                               & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241060__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244120__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244120__DOT__s1)) 
                                                                                << 0x11U)) 
                                                                              | ((0x10000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241059__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244118__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244118__DOT__s1)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241058__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244148__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244148__DOT__s1)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241057__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244116__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244116__DOT__s1)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241056__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244149__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244149__DOT__s1)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241055__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244152__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244152__DOT__s1)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241054__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244114__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244114__DOT__s1)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241053__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244153__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244153__DOT__s1)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241052__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244156__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244156__DOT__s1)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241051__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244112__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244112__DOT__s1)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241050__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244157__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244157__DOT__s1)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241049__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244160__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244160__DOT__s1)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241048__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244110__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244110__DOT__s1)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241047__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244161__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244161__DOT__s1)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241046__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244164__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244164__DOT__s1)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241045__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244108__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244108__DOT__s1)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241044__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244165__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244165__DOT__s1)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241043__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244168__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244168__DOT__s1)))))))))))))))))))))))))))))))))),
                     64,VL_TIME_UNITED_Q(1e+06),-9);
    }
    VL_WRITEF_NX("\n\n***Reset Test is ended***\n\n\n",0);
    vlSelf->co_sim_mac_32__DOT__reset = 0U;
    co_await vlSelf->__VtrigSched_hf4c4dc1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_mac_32.clock0)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/25march/EDA-/mac_32/results_dir/.././sim/co_sim_tb/co_sim_mac_32.v", 
                                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("\n\n***Directed Functionality Test is applied ***\n\n\n",0);
    vlSelf->co_sim_mac_32__DOT__a = 8U;
    vlSelf->co_sim_mac_32__DOT__b = 4U;
    vlSelf->co_sim_mac_32__DOT__id = 1U;
    VL_WRITEF_NX("%20#  Test stimulus is: a=%0d, b=%0d, id=%0#\n",0,
                 64,VL_TIME_UNITED_Q(1e+06),16,(IData)(vlSelf->co_sim_mac_32__DOT__a),
                 16,vlSelf->co_sim_mac_32__DOT__b,2,
                 (IData)(vlSelf->co_sim_mac_32__DOT__id));
    co_await vlSelf->__VtrigSched_hf4c4dc1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_mac_32.clock0)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/25march/EDA-/mac_32/results_dir/.././sim/co_sim_tb/co_sim_mac_32.v", 
                                                       77);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hf4c4dc1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_mac_32.clock0)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/25march/EDA-/mac_32/results_dir/.././sim/co_sim_tb/co_sim_mac_32.v", 
                                                       77);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hf4c4dc1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_mac_32.clock0)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/25march/EDA-/mac_32/results_dir/.././sim/co_sim_tb/co_sim_mac_32.v", 
                                                       77);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hf4c4dc1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_mac_32.clock0)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/25march/EDA-/mac_32/results_dir/.././sim/co_sim_tb/co_sim_mac_32.v", 
                                                       77);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if ((vlSelf->co_sim_mac_32__DOT__out != ((((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241074__Q)
                                                ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244134__DOT__s1) 
                                                   >> 1U)
                                                : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244134__DOT__s1)) 
                                              << 0x1fU) 
                                             | ((0x40000000U 
                                                 & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241073__Q)
                                                      ? 
                                                     ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244135__DOT__s1) 
                                                      >> 1U)
                                                      : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244135__DOT__s1)) 
                                                    << 0x1eU)) 
                                                | ((0x20000000U 
                                                    & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241072__Q)
                                                         ? 
                                                        ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244133__DOT__s1) 
                                                         >> 1U)
                                                         : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244133__DOT__s1)) 
                                                       << 0x1dU)) 
                                                   | ((0x10000000U 
                                                       & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241071__Q)
                                                            ? 
                                                           ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244132__DOT__s1) 
                                                            >> 1U)
                                                            : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244132__DOT__s1)) 
                                                          << 0x1cU)) 
                                                      | ((0x8000000U 
                                                          & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241070__Q)
                                                               ? 
                                                              ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244131__DOT__s1) 
                                                               >> 1U)
                                                               : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244131__DOT__s1)) 
                                                             << 0x1bU)) 
                                                         | ((0x4000000U 
                                                             & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241069__Q)
                                                                  ? 
                                                                 ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244130__DOT__s1) 
                                                                  >> 1U)
                                                                  : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244130__DOT__s1)) 
                                                                << 0x1aU)) 
                                                            | ((0x2000000U 
                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241068__Q)
                                                                     ? 
                                                                    ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244129__DOT__s1) 
                                                                     >> 1U)
                                                                     : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244129__DOT__s1)) 
                                                                   << 0x19U)) 
                                                               | ((0x1000000U 
                                                                   & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241067__Q)
                                                                        ? 
                                                                       ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244128__DOT__s1) 
                                                                        >> 1U)
                                                                        : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244128__DOT__s1)) 
                                                                      << 0x18U)) 
                                                                  | ((0x800000U 
                                                                      & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241066__Q)
                                                                           ? 
                                                                          ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244127__DOT__s1) 
                                                                           >> 1U)
                                                                           : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244127__DOT__s1)) 
                                                                         << 0x17U)) 
                                                                     | ((0x400000U 
                                                                         & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241065__Q)
                                                                              ? 
                                                                             ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244126__DOT__s1) 
                                                                              >> 1U)
                                                                              : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244126__DOT__s1)) 
                                                                            << 0x16U)) 
                                                                        | ((0x200000U 
                                                                            & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241064__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244125__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244125__DOT__s1)) 
                                                                               << 0x15U)) 
                                                                           | ((0x100000U 
                                                                               & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241063__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244124__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244124__DOT__s1)) 
                                                                                << 0x14U)) 
                                                                              | ((0x80000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241062__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244123__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244123__DOT__s1)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241061__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244122__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244122__DOT__s1)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241060__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244120__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244120__DOT__s1)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241059__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244118__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244118__DOT__s1)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241058__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244148__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244148__DOT__s1)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241057__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244116__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244116__DOT__s1)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241056__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244149__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244149__DOT__s1)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241055__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244152__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244152__DOT__s1)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241054__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244114__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244114__DOT__s1)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241053__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244153__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244153__DOT__s1)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241052__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244156__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244156__DOT__s1)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241051__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244112__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244112__DOT__s1)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241050__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244157__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244157__DOT__s1)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241049__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244160__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244160__DOT__s1)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241048__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244110__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244110__DOT__s1)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241047__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244161__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244161__DOT__s1)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241046__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244164__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244164__DOT__s1)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241045__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244108__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244108__DOT__s1)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241044__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244165__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244165__DOT__s1)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241043__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244168__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244168__DOT__s1)))))))))))))))))))))))))))))))))))) {
        VL_WRITEF_NX("Data Mismatch. Golden: %0d, Netlist: %0d, Time: %0t\n",0,
                     32,vlSelf->co_sim_mac_32__DOT__out,
                     32,((((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241074__Q)
                            ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244134__DOT__s1) 
                               >> 1U) : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244134__DOT__s1)) 
                          << 0x1fU) | ((0x40000000U 
                                        & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241073__Q)
                                             ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244135__DOT__s1) 
                                                >> 1U)
                                             : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244135__DOT__s1)) 
                                           << 0x1eU)) 
                                       | ((0x20000000U 
                                           & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241072__Q)
                                                ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244133__DOT__s1) 
                                                   >> 1U)
                                                : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244133__DOT__s1)) 
                                              << 0x1dU)) 
                                          | ((0x10000000U 
                                              & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241071__Q)
                                                   ? 
                                                  ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244132__DOT__s1) 
                                                   >> 1U)
                                                   : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244132__DOT__s1)) 
                                                 << 0x1cU)) 
                                             | ((0x8000000U 
                                                 & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241070__Q)
                                                      ? 
                                                     ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244131__DOT__s1) 
                                                      >> 1U)
                                                      : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244131__DOT__s1)) 
                                                    << 0x1bU)) 
                                                | ((0x4000000U 
                                                    & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241069__Q)
                                                         ? 
                                                        ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244130__DOT__s1) 
                                                         >> 1U)
                                                         : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244130__DOT__s1)) 
                                                       << 0x1aU)) 
                                                   | ((0x2000000U 
                                                       & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241068__Q)
                                                            ? 
                                                           ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244129__DOT__s1) 
                                                            >> 1U)
                                                            : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244129__DOT__s1)) 
                                                          << 0x19U)) 
                                                      | ((0x1000000U 
                                                          & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241067__Q)
                                                               ? 
                                                              ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244128__DOT__s1) 
                                                               >> 1U)
                                                               : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244128__DOT__s1)) 
                                                             << 0x18U)) 
                                                         | ((0x800000U 
                                                             & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241066__Q)
                                                                  ? 
                                                                 ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244127__DOT__s1) 
                                                                  >> 1U)
                                                                  : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244127__DOT__s1)) 
                                                                << 0x17U)) 
                                                            | ((0x400000U 
                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241065__Q)
                                                                     ? 
                                                                    ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244126__DOT__s1) 
                                                                     >> 1U)
                                                                     : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244126__DOT__s1)) 
                                                                   << 0x16U)) 
                                                               | ((0x200000U 
                                                                   & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241064__Q)
                                                                        ? 
                                                                       ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244125__DOT__s1) 
                                                                        >> 1U)
                                                                        : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244125__DOT__s1)) 
                                                                      << 0x15U)) 
                                                                  | ((0x100000U 
                                                                      & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241063__Q)
                                                                           ? 
                                                                          ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244124__DOT__s1) 
                                                                           >> 1U)
                                                                           : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244124__DOT__s1)) 
                                                                         << 0x14U)) 
                                                                     | ((0x80000U 
                                                                         & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241062__Q)
                                                                              ? 
                                                                             ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244123__DOT__s1) 
                                                                              >> 1U)
                                                                              : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244123__DOT__s1)) 
                                                                            << 0x13U)) 
                                                                        | ((0x40000U 
                                                                            & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241061__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244122__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244122__DOT__s1)) 
                                                                               << 0x12U)) 
                                                                           | ((0x20000U 
                                                                               & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241060__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244120__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244120__DOT__s1)) 
                                                                                << 0x11U)) 
                                                                              | ((0x10000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241059__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244118__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244118__DOT__s1)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241058__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244148__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244148__DOT__s1)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241057__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244116__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244116__DOT__s1)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241056__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244149__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244149__DOT__s1)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241055__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244152__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244152__DOT__s1)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241054__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244114__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244114__DOT__s1)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241053__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244153__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244153__DOT__s1)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241052__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244156__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244156__DOT__s1)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241051__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244112__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244112__DOT__s1)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241050__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244157__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244157__DOT__s1)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241049__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244160__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244160__DOT__s1)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241048__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244110__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244110__DOT__s1)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241047__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244161__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244161__DOT__s1)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241046__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244164__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244164__DOT__s1)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241045__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244108__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244108__DOT__s1)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241044__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244165__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244165__DOT__s1)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241043__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244168__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244168__DOT__s1)))))))))))))))))))))))))))))))))),
                     64,VL_TIME_UNITED_Q(1e+06),-9);
        vlSelf->co_sim_mac_32__DOT__mismatch = ((IData)(1U) 
                                                + vlSelf->co_sim_mac_32__DOT__mismatch);
    } else {
        VL_WRITEF_NX("Data Matched. Golden: %0d, Netlist: %0d, Time: %0t\n",0,
                     32,vlSelf->co_sim_mac_32__DOT__out,
                     32,((((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241074__Q)
                            ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244134__DOT__s1) 
                               >> 1U) : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244134__DOT__s1)) 
                          << 0x1fU) | ((0x40000000U 
                                        & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241073__Q)
                                             ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244135__DOT__s1) 
                                                >> 1U)
                                             : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244135__DOT__s1)) 
                                           << 0x1eU)) 
                                       | ((0x20000000U 
                                           & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241072__Q)
                                                ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244133__DOT__s1) 
                                                   >> 1U)
                                                : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244133__DOT__s1)) 
                                              << 0x1dU)) 
                                          | ((0x10000000U 
                                              & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241071__Q)
                                                   ? 
                                                  ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244132__DOT__s1) 
                                                   >> 1U)
                                                   : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244132__DOT__s1)) 
                                                 << 0x1cU)) 
                                             | ((0x8000000U 
                                                 & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241070__Q)
                                                      ? 
                                                     ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244131__DOT__s1) 
                                                      >> 1U)
                                                      : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244131__DOT__s1)) 
                                                    << 0x1bU)) 
                                                | ((0x4000000U 
                                                    & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241069__Q)
                                                         ? 
                                                        ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244130__DOT__s1) 
                                                         >> 1U)
                                                         : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244130__DOT__s1)) 
                                                       << 0x1aU)) 
                                                   | ((0x2000000U 
                                                       & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241068__Q)
                                                            ? 
                                                           ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244129__DOT__s1) 
                                                            >> 1U)
                                                            : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244129__DOT__s1)) 
                                                          << 0x19U)) 
                                                      | ((0x1000000U 
                                                          & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241067__Q)
                                                               ? 
                                                              ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244128__DOT__s1) 
                                                               >> 1U)
                                                               : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244128__DOT__s1)) 
                                                             << 0x18U)) 
                                                         | ((0x800000U 
                                                             & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241066__Q)
                                                                  ? 
                                                                 ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244127__DOT__s1) 
                                                                  >> 1U)
                                                                  : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244127__DOT__s1)) 
                                                                << 0x17U)) 
                                                            | ((0x400000U 
                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241065__Q)
                                                                     ? 
                                                                    ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244126__DOT__s1) 
                                                                     >> 1U)
                                                                     : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244126__DOT__s1)) 
                                                                   << 0x16U)) 
                                                               | ((0x200000U 
                                                                   & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241064__Q)
                                                                        ? 
                                                                       ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244125__DOT__s1) 
                                                                        >> 1U)
                                                                        : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244125__DOT__s1)) 
                                                                      << 0x15U)) 
                                                                  | ((0x100000U 
                                                                      & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241063__Q)
                                                                           ? 
                                                                          ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244124__DOT__s1) 
                                                                           >> 1U)
                                                                           : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244124__DOT__s1)) 
                                                                         << 0x14U)) 
                                                                     | ((0x80000U 
                                                                         & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241062__Q)
                                                                              ? 
                                                                             ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244123__DOT__s1) 
                                                                              >> 1U)
                                                                              : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244123__DOT__s1)) 
                                                                            << 0x13U)) 
                                                                        | ((0x40000U 
                                                                            & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241061__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244122__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244122__DOT__s1)) 
                                                                               << 0x12U)) 
                                                                           | ((0x20000U 
                                                                               & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241060__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244120__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244120__DOT__s1)) 
                                                                                << 0x11U)) 
                                                                              | ((0x10000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241059__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244118__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244118__DOT__s1)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241058__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244148__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244148__DOT__s1)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241057__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244116__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244116__DOT__s1)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241056__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244149__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244149__DOT__s1)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241055__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244152__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244152__DOT__s1)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241054__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244114__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244114__DOT__s1)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241053__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244153__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244153__DOT__s1)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241052__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244156__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244156__DOT__s1)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241051__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244112__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244112__DOT__s1)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241050__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244157__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244157__DOT__s1)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241049__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244160__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244160__DOT__s1)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241048__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244110__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244110__DOT__s1)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241047__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244161__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244161__DOT__s1)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241046__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244164__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244164__DOT__s1)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241045__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244108__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244108__DOT__s1)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241044__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244165__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244165__DOT__s1)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241043__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244168__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244168__DOT__s1)))))))))))))))))))))))))))))))))),
                     64,VL_TIME_UNITED_Q(1e+06),-9);
    }
    VL_WRITEF_NX("\n\n***Directed Functionality Test is ended***\n\n\n\n\n***Directed Functionality Test is applied ***\n\n\n",0);
    vlSelf->co_sim_mac_32__DOT__a = 0xfffbU;
    vlSelf->co_sim_mac_32__DOT__b = 3U;
    vlSelf->co_sim_mac_32__DOT__id = 3U;
    VL_WRITEF_NX("%20#  Test stimulus is: a=%0d, b=%0d, id=%0#\n",0,
                 64,VL_TIME_UNITED_Q(1e+06),16,(IData)(vlSelf->co_sim_mac_32__DOT__a),
                 16,vlSelf->co_sim_mac_32__DOT__b,2,
                 (IData)(vlSelf->co_sim_mac_32__DOT__id));
    co_await vlSelf->__VtrigSched_hf4c4dc1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_mac_32.clock0)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/25march/EDA-/mac_32/results_dir/.././sim/co_sim_tb/co_sim_mac_32.v", 
                                                       86);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hf4c4dc1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_mac_32.clock0)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/25march/EDA-/mac_32/results_dir/.././sim/co_sim_tb/co_sim_mac_32.v", 
                                                       86);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hf4c4dc1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_mac_32.clock0)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/25march/EDA-/mac_32/results_dir/.././sim/co_sim_tb/co_sim_mac_32.v", 
                                                       86);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hf4c4dc1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_mac_32.clock0)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/25march/EDA-/mac_32/results_dir/.././sim/co_sim_tb/co_sim_mac_32.v", 
                                                       86);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if ((vlSelf->co_sim_mac_32__DOT__out != ((((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241074__Q)
                                                ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244134__DOT__s1) 
                                                   >> 1U)
                                                : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244134__DOT__s1)) 
                                              << 0x1fU) 
                                             | ((0x40000000U 
                                                 & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241073__Q)
                                                      ? 
                                                     ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244135__DOT__s1) 
                                                      >> 1U)
                                                      : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244135__DOT__s1)) 
                                                    << 0x1eU)) 
                                                | ((0x20000000U 
                                                    & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241072__Q)
                                                         ? 
                                                        ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244133__DOT__s1) 
                                                         >> 1U)
                                                         : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244133__DOT__s1)) 
                                                       << 0x1dU)) 
                                                   | ((0x10000000U 
                                                       & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241071__Q)
                                                            ? 
                                                           ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244132__DOT__s1) 
                                                            >> 1U)
                                                            : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244132__DOT__s1)) 
                                                          << 0x1cU)) 
                                                      | ((0x8000000U 
                                                          & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241070__Q)
                                                               ? 
                                                              ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244131__DOT__s1) 
                                                               >> 1U)
                                                               : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244131__DOT__s1)) 
                                                             << 0x1bU)) 
                                                         | ((0x4000000U 
                                                             & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241069__Q)
                                                                  ? 
                                                                 ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244130__DOT__s1) 
                                                                  >> 1U)
                                                                  : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244130__DOT__s1)) 
                                                                << 0x1aU)) 
                                                            | ((0x2000000U 
                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241068__Q)
                                                                     ? 
                                                                    ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244129__DOT__s1) 
                                                                     >> 1U)
                                                                     : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244129__DOT__s1)) 
                                                                   << 0x19U)) 
                                                               | ((0x1000000U 
                                                                   & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241067__Q)
                                                                        ? 
                                                                       ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244128__DOT__s1) 
                                                                        >> 1U)
                                                                        : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244128__DOT__s1)) 
                                                                      << 0x18U)) 
                                                                  | ((0x800000U 
                                                                      & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241066__Q)
                                                                           ? 
                                                                          ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244127__DOT__s1) 
                                                                           >> 1U)
                                                                           : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244127__DOT__s1)) 
                                                                         << 0x17U)) 
                                                                     | ((0x400000U 
                                                                         & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241065__Q)
                                                                              ? 
                                                                             ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244126__DOT__s1) 
                                                                              >> 1U)
                                                                              : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244126__DOT__s1)) 
                                                                            << 0x16U)) 
                                                                        | ((0x200000U 
                                                                            & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241064__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244125__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244125__DOT__s1)) 
                                                                               << 0x15U)) 
                                                                           | ((0x100000U 
                                                                               & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241063__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244124__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244124__DOT__s1)) 
                                                                                << 0x14U)) 
                                                                              | ((0x80000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241062__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244123__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244123__DOT__s1)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241061__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244122__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244122__DOT__s1)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241060__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244120__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244120__DOT__s1)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241059__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244118__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244118__DOT__s1)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241058__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244148__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244148__DOT__s1)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241057__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244116__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244116__DOT__s1)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241056__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244149__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244149__DOT__s1)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241055__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244152__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244152__DOT__s1)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241054__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244114__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244114__DOT__s1)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241053__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244153__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244153__DOT__s1)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241052__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244156__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244156__DOT__s1)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241051__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244112__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244112__DOT__s1)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241050__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244157__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244157__DOT__s1)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241049__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244160__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244160__DOT__s1)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241048__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244110__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244110__DOT__s1)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241047__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244161__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244161__DOT__s1)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241046__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244164__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244164__DOT__s1)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241045__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244108__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244108__DOT__s1)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241044__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244165__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244165__DOT__s1)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241043__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244168__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244168__DOT__s1)))))))))))))))))))))))))))))))))))) {
        VL_WRITEF_NX("Data Mismatch. Golden: %0d, Netlist: %0d, Time: %0t\n",0,
                     32,vlSelf->co_sim_mac_32__DOT__out,
                     32,((((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241074__Q)
                            ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244134__DOT__s1) 
                               >> 1U) : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244134__DOT__s1)) 
                          << 0x1fU) | ((0x40000000U 
                                        & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241073__Q)
                                             ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244135__DOT__s1) 
                                                >> 1U)
                                             : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244135__DOT__s1)) 
                                           << 0x1eU)) 
                                       | ((0x20000000U 
                                           & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241072__Q)
                                                ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244133__DOT__s1) 
                                                   >> 1U)
                                                : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244133__DOT__s1)) 
                                              << 0x1dU)) 
                                          | ((0x10000000U 
                                              & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241071__Q)
                                                   ? 
                                                  ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244132__DOT__s1) 
                                                   >> 1U)
                                                   : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244132__DOT__s1)) 
                                                 << 0x1cU)) 
                                             | ((0x8000000U 
                                                 & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241070__Q)
                                                      ? 
                                                     ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244131__DOT__s1) 
                                                      >> 1U)
                                                      : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244131__DOT__s1)) 
                                                    << 0x1bU)) 
                                                | ((0x4000000U 
                                                    & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241069__Q)
                                                         ? 
                                                        ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244130__DOT__s1) 
                                                         >> 1U)
                                                         : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244130__DOT__s1)) 
                                                       << 0x1aU)) 
                                                   | ((0x2000000U 
                                                       & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241068__Q)
                                                            ? 
                                                           ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244129__DOT__s1) 
                                                            >> 1U)
                                                            : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244129__DOT__s1)) 
                                                          << 0x19U)) 
                                                      | ((0x1000000U 
                                                          & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241067__Q)
                                                               ? 
                                                              ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244128__DOT__s1) 
                                                               >> 1U)
                                                               : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244128__DOT__s1)) 
                                                             << 0x18U)) 
                                                         | ((0x800000U 
                                                             & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241066__Q)
                                                                  ? 
                                                                 ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244127__DOT__s1) 
                                                                  >> 1U)
                                                                  : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244127__DOT__s1)) 
                                                                << 0x17U)) 
                                                            | ((0x400000U 
                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241065__Q)
                                                                     ? 
                                                                    ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244126__DOT__s1) 
                                                                     >> 1U)
                                                                     : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244126__DOT__s1)) 
                                                                   << 0x16U)) 
                                                               | ((0x200000U 
                                                                   & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241064__Q)
                                                                        ? 
                                                                       ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244125__DOT__s1) 
                                                                        >> 1U)
                                                                        : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244125__DOT__s1)) 
                                                                      << 0x15U)) 
                                                                  | ((0x100000U 
                                                                      & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241063__Q)
                                                                           ? 
                                                                          ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244124__DOT__s1) 
                                                                           >> 1U)
                                                                           : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244124__DOT__s1)) 
                                                                         << 0x14U)) 
                                                                     | ((0x80000U 
                                                                         & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241062__Q)
                                                                              ? 
                                                                             ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244123__DOT__s1) 
                                                                              >> 1U)
                                                                              : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244123__DOT__s1)) 
                                                                            << 0x13U)) 
                                                                        | ((0x40000U 
                                                                            & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241061__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244122__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244122__DOT__s1)) 
                                                                               << 0x12U)) 
                                                                           | ((0x20000U 
                                                                               & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241060__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244120__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244120__DOT__s1)) 
                                                                                << 0x11U)) 
                                                                              | ((0x10000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241059__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244118__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244118__DOT__s1)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241058__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244148__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244148__DOT__s1)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241057__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244116__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244116__DOT__s1)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241056__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244149__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244149__DOT__s1)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241055__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244152__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244152__DOT__s1)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241054__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244114__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244114__DOT__s1)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241053__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244153__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244153__DOT__s1)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241052__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244156__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244156__DOT__s1)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241051__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244112__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244112__DOT__s1)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241050__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244157__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244157__DOT__s1)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241049__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244160__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244160__DOT__s1)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241048__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244110__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244110__DOT__s1)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241047__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244161__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244161__DOT__s1)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241046__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244164__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244164__DOT__s1)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241045__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244108__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244108__DOT__s1)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241044__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244165__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244165__DOT__s1)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241043__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244168__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244168__DOT__s1)))))))))))))))))))))))))))))))))),
                     64,VL_TIME_UNITED_Q(1e+06),-9);
        vlSelf->co_sim_mac_32__DOT__mismatch = ((IData)(1U) 
                                                + vlSelf->co_sim_mac_32__DOT__mismatch);
    } else {
        VL_WRITEF_NX("Data Matched. Golden: %0d, Netlist: %0d, Time: %0t\n",0,
                     32,vlSelf->co_sim_mac_32__DOT__out,
                     32,((((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241074__Q)
                            ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244134__DOT__s1) 
                               >> 1U) : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244134__DOT__s1)) 
                          << 0x1fU) | ((0x40000000U 
                                        & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241073__Q)
                                             ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244135__DOT__s1) 
                                                >> 1U)
                                             : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244135__DOT__s1)) 
                                           << 0x1eU)) 
                                       | ((0x20000000U 
                                           & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241072__Q)
                                                ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244133__DOT__s1) 
                                                   >> 1U)
                                                : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244133__DOT__s1)) 
                                              << 0x1dU)) 
                                          | ((0x10000000U 
                                              & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241071__Q)
                                                   ? 
                                                  ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244132__DOT__s1) 
                                                   >> 1U)
                                                   : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244132__DOT__s1)) 
                                                 << 0x1cU)) 
                                             | ((0x8000000U 
                                                 & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241070__Q)
                                                      ? 
                                                     ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244131__DOT__s1) 
                                                      >> 1U)
                                                      : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244131__DOT__s1)) 
                                                    << 0x1bU)) 
                                                | ((0x4000000U 
                                                    & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241069__Q)
                                                         ? 
                                                        ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244130__DOT__s1) 
                                                         >> 1U)
                                                         : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244130__DOT__s1)) 
                                                       << 0x1aU)) 
                                                   | ((0x2000000U 
                                                       & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241068__Q)
                                                            ? 
                                                           ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244129__DOT__s1) 
                                                            >> 1U)
                                                            : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244129__DOT__s1)) 
                                                          << 0x19U)) 
                                                      | ((0x1000000U 
                                                          & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241067__Q)
                                                               ? 
                                                              ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244128__DOT__s1) 
                                                               >> 1U)
                                                               : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244128__DOT__s1)) 
                                                             << 0x18U)) 
                                                         | ((0x800000U 
                                                             & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241066__Q)
                                                                  ? 
                                                                 ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244127__DOT__s1) 
                                                                  >> 1U)
                                                                  : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244127__DOT__s1)) 
                                                                << 0x17U)) 
                                                            | ((0x400000U 
                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241065__Q)
                                                                     ? 
                                                                    ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244126__DOT__s1) 
                                                                     >> 1U)
                                                                     : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244126__DOT__s1)) 
                                                                   << 0x16U)) 
                                                               | ((0x200000U 
                                                                   & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241064__Q)
                                                                        ? 
                                                                       ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244125__DOT__s1) 
                                                                        >> 1U)
                                                                        : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244125__DOT__s1)) 
                                                                      << 0x15U)) 
                                                                  | ((0x100000U 
                                                                      & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241063__Q)
                                                                           ? 
                                                                          ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244124__DOT__s1) 
                                                                           >> 1U)
                                                                           : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244124__DOT__s1)) 
                                                                         << 0x14U)) 
                                                                     | ((0x80000U 
                                                                         & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241062__Q)
                                                                              ? 
                                                                             ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244123__DOT__s1) 
                                                                              >> 1U)
                                                                              : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244123__DOT__s1)) 
                                                                            << 0x13U)) 
                                                                        | ((0x40000U 
                                                                            & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241061__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244122__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244122__DOT__s1)) 
                                                                               << 0x12U)) 
                                                                           | ((0x20000U 
                                                                               & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241060__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244120__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244120__DOT__s1)) 
                                                                                << 0x11U)) 
                                                                              | ((0x10000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241059__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244118__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244118__DOT__s1)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241058__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244148__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244148__DOT__s1)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241057__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244116__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244116__DOT__s1)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241056__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244149__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244149__DOT__s1)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241055__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244152__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244152__DOT__s1)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241054__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244114__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244114__DOT__s1)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241053__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244153__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244153__DOT__s1)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241052__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244156__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244156__DOT__s1)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241051__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244112__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244112__DOT__s1)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241050__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244157__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244157__DOT__s1)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241049__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244160__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244160__DOT__s1)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241048__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244110__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244110__DOT__s1)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241047__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244161__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244161__DOT__s1)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241046__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244164__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244164__DOT__s1)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241045__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244108__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244108__DOT__s1)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241044__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244165__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244165__DOT__s1)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241043__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244168__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244168__DOT__s1)))))))))))))))))))))))))))))))))),
                     64,VL_TIME_UNITED_Q(1e+06),-9);
    }
    VL_WRITEF_NX("\n\n***Directed Functionality Test is ended***\n\n\n\n\n*** Random Functionality Tests are applied***\n\n\n",0);
    co_sim_mac_32__DOT____Vrepeat2 = 0x3e8U;
    while (VL_LTS_III(32, 0U, co_sim_mac_32__DOT____Vrepeat2)) {
        vlSelf->co_sim_mac_32__DOT__a = (0xffffU & 
                                         VL_RANDOM_I());
        vlSelf->co_sim_mac_32__DOT__b = (0xffffU & 
                                         VL_RANDOM_I());
        vlSelf->co_sim_mac_32__DOT__id = (3U & VL_RANDOM_I());
        VL_WRITEF_NX("%20#  Test stimulus is: a=%0d, b=%0d, id=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1e+06),16,
                     (IData)(vlSelf->co_sim_mac_32__DOT__a),
                     16,vlSelf->co_sim_mac_32__DOT__b,
                     2,(IData)(vlSelf->co_sim_mac_32__DOT__id));
        co_await vlSelf->__VtrigSched_hf4c4dc1d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge co_sim_mac_32.clock0)", 
                                                           "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/25march/EDA-/mac_32/results_dir/.././sim/co_sim_tb/co_sim_mac_32.v", 
                                                           98);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if ((vlSelf->co_sim_mac_32__DOT__out != ((((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241074__Q)
                                                    ? 
                                                   ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244134__DOT__s1) 
                                                    >> 1U)
                                                    : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244134__DOT__s1)) 
                                                  << 0x1fU) 
                                                 | ((0x40000000U 
                                                     & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241073__Q)
                                                          ? 
                                                         ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244135__DOT__s1) 
                                                          >> 1U)
                                                          : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244135__DOT__s1)) 
                                                        << 0x1eU)) 
                                                    | ((0x20000000U 
                                                        & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241072__Q)
                                                             ? 
                                                            ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244133__DOT__s1) 
                                                             >> 1U)
                                                             : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244133__DOT__s1)) 
                                                           << 0x1dU)) 
                                                       | ((0x10000000U 
                                                           & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241071__Q)
                                                                ? 
                                                               ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244132__DOT__s1) 
                                                                >> 1U)
                                                                : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244132__DOT__s1)) 
                                                              << 0x1cU)) 
                                                          | ((0x8000000U 
                                                              & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241070__Q)
                                                                   ? 
                                                                  ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244131__DOT__s1) 
                                                                   >> 1U)
                                                                   : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244131__DOT__s1)) 
                                                                 << 0x1bU)) 
                                                             | ((0x4000000U 
                                                                 & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241069__Q)
                                                                      ? 
                                                                     ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244130__DOT__s1) 
                                                                      >> 1U)
                                                                      : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244130__DOT__s1)) 
                                                                    << 0x1aU)) 
                                                                | ((0x2000000U 
                                                                    & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241068__Q)
                                                                         ? 
                                                                        ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244129__DOT__s1) 
                                                                         >> 1U)
                                                                         : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244129__DOT__s1)) 
                                                                       << 0x19U)) 
                                                                   | ((0x1000000U 
                                                                       & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241067__Q)
                                                                            ? 
                                                                           ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244128__DOT__s1) 
                                                                            >> 1U)
                                                                            : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244128__DOT__s1)) 
                                                                          << 0x18U)) 
                                                                      | ((0x800000U 
                                                                          & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241066__Q)
                                                                               ? 
                                                                              ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244127__DOT__s1) 
                                                                               >> 1U)
                                                                               : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244127__DOT__s1)) 
                                                                             << 0x17U)) 
                                                                         | ((0x400000U 
                                                                             & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241065__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244126__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244126__DOT__s1)) 
                                                                                << 0x16U)) 
                                                                            | ((0x200000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241064__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244125__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244125__DOT__s1)) 
                                                                                << 0x15U)) 
                                                                               | ((0x100000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241063__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244124__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244124__DOT__s1)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241062__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244123__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244123__DOT__s1)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241061__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244122__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244122__DOT__s1)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241060__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244120__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244120__DOT__s1)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241059__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244118__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244118__DOT__s1)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241058__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244148__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244148__DOT__s1)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241057__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244116__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244116__DOT__s1)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241056__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244149__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244149__DOT__s1)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241055__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244152__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244152__DOT__s1)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241054__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244114__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244114__DOT__s1)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241053__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244153__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244153__DOT__s1)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241052__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244156__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244156__DOT__s1)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241051__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244112__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244112__DOT__s1)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241050__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244157__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244157__DOT__s1)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241049__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244160__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244160__DOT__s1)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241048__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244110__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244110__DOT__s1)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241047__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244161__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244161__DOT__s1)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241046__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244164__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244164__DOT__s1)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241045__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244108__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244108__DOT__s1)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241044__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244165__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244165__DOT__s1)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241043__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244168__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244168__DOT__s1)))))))))))))))))))))))))))))))))))) {
            VL_WRITEF_NX("Data Mismatch. Golden: %0d, Netlist: %0d, Time: %0t\n",0,
                         32,vlSelf->co_sim_mac_32__DOT__out,
                         32,((((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241074__Q)
                                ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244134__DOT__s1) 
                                   >> 1U) : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244134__DOT__s1)) 
                              << 0x1fU) | ((0x40000000U 
                                            & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241073__Q)
                                                 ? 
                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244135__DOT__s1) 
                                                 >> 1U)
                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244135__DOT__s1)) 
                                               << 0x1eU)) 
                                           | ((0x20000000U 
                                               & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241072__Q)
                                                    ? 
                                                   ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244133__DOT__s1) 
                                                    >> 1U)
                                                    : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244133__DOT__s1)) 
                                                  << 0x1dU)) 
                                              | ((0x10000000U 
                                                  & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241071__Q)
                                                       ? 
                                                      ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244132__DOT__s1) 
                                                       >> 1U)
                                                       : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244132__DOT__s1)) 
                                                     << 0x1cU)) 
                                                 | ((0x8000000U 
                                                     & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241070__Q)
                                                          ? 
                                                         ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244131__DOT__s1) 
                                                          >> 1U)
                                                          : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244131__DOT__s1)) 
                                                        << 0x1bU)) 
                                                    | ((0x4000000U 
                                                        & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241069__Q)
                                                             ? 
                                                            ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244130__DOT__s1) 
                                                             >> 1U)
                                                             : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244130__DOT__s1)) 
                                                           << 0x1aU)) 
                                                       | ((0x2000000U 
                                                           & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241068__Q)
                                                                ? 
                                                               ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244129__DOT__s1) 
                                                                >> 1U)
                                                                : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244129__DOT__s1)) 
                                                              << 0x19U)) 
                                                          | ((0x1000000U 
                                                              & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241067__Q)
                                                                   ? 
                                                                  ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244128__DOT__s1) 
                                                                   >> 1U)
                                                                   : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244128__DOT__s1)) 
                                                                 << 0x18U)) 
                                                             | ((0x800000U 
                                                                 & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241066__Q)
                                                                      ? 
                                                                     ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244127__DOT__s1) 
                                                                      >> 1U)
                                                                      : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244127__DOT__s1)) 
                                                                    << 0x17U)) 
                                                                | ((0x400000U 
                                                                    & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241065__Q)
                                                                         ? 
                                                                        ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244126__DOT__s1) 
                                                                         >> 1U)
                                                                         : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244126__DOT__s1)) 
                                                                       << 0x16U)) 
                                                                   | ((0x200000U 
                                                                       & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241064__Q)
                                                                            ? 
                                                                           ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244125__DOT__s1) 
                                                                            >> 1U)
                                                                            : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244125__DOT__s1)) 
                                                                          << 0x15U)) 
                                                                      | ((0x100000U 
                                                                          & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241063__Q)
                                                                               ? 
                                                                              ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244124__DOT__s1) 
                                                                               >> 1U)
                                                                               : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244124__DOT__s1)) 
                                                                             << 0x14U)) 
                                                                         | ((0x80000U 
                                                                             & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241062__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244123__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244123__DOT__s1)) 
                                                                                << 0x13U)) 
                                                                            | ((0x40000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241061__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244122__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244122__DOT__s1)) 
                                                                                << 0x12U)) 
                                                                               | ((0x20000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241060__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244120__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244120__DOT__s1)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241059__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244118__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244118__DOT__s1)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241058__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244148__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244148__DOT__s1)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241057__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244116__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244116__DOT__s1)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241056__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244149__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244149__DOT__s1)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241055__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244152__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244152__DOT__s1)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241054__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244114__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244114__DOT__s1)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241053__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244153__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244153__DOT__s1)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241052__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244156__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244156__DOT__s1)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241051__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244112__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244112__DOT__s1)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241050__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244157__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244157__DOT__s1)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241049__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244160__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244160__DOT__s1)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241048__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244110__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244110__DOT__s1)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241047__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244161__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244161__DOT__s1)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241046__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244164__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244164__DOT__s1)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241045__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244108__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244108__DOT__s1)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241044__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244165__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244165__DOT__s1)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241043__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244168__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244168__DOT__s1)))))))))))))))))))))))))))))))))),
                         64,VL_TIME_UNITED_Q(1e+06),
                         -9);
            vlSelf->co_sim_mac_32__DOT__mismatch = 
                ((IData)(1U) + vlSelf->co_sim_mac_32__DOT__mismatch);
        } else {
            VL_WRITEF_NX("Data Matched. Golden: %0d, Netlist: %0d, Time: %0t\n",0,
                         32,vlSelf->co_sim_mac_32__DOT__out,
                         32,((((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241074__Q)
                                ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244134__DOT__s1) 
                                   >> 1U) : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244134__DOT__s1)) 
                              << 0x1fU) | ((0x40000000U 
                                            & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241073__Q)
                                                 ? 
                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244135__DOT__s1) 
                                                 >> 1U)
                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244135__DOT__s1)) 
                                               << 0x1eU)) 
                                           | ((0x20000000U 
                                               & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241072__Q)
                                                    ? 
                                                   ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244133__DOT__s1) 
                                                    >> 1U)
                                                    : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244133__DOT__s1)) 
                                                  << 0x1dU)) 
                                              | ((0x10000000U 
                                                  & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241071__Q)
                                                       ? 
                                                      ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244132__DOT__s1) 
                                                       >> 1U)
                                                       : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244132__DOT__s1)) 
                                                     << 0x1cU)) 
                                                 | ((0x8000000U 
                                                     & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241070__Q)
                                                          ? 
                                                         ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244131__DOT__s1) 
                                                          >> 1U)
                                                          : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244131__DOT__s1)) 
                                                        << 0x1bU)) 
                                                    | ((0x4000000U 
                                                        & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241069__Q)
                                                             ? 
                                                            ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244130__DOT__s1) 
                                                             >> 1U)
                                                             : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244130__DOT__s1)) 
                                                           << 0x1aU)) 
                                                       | ((0x2000000U 
                                                           & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241068__Q)
                                                                ? 
                                                               ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244129__DOT__s1) 
                                                                >> 1U)
                                                                : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244129__DOT__s1)) 
                                                              << 0x19U)) 
                                                          | ((0x1000000U 
                                                              & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241067__Q)
                                                                   ? 
                                                                  ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244128__DOT__s1) 
                                                                   >> 1U)
                                                                   : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244128__DOT__s1)) 
                                                                 << 0x18U)) 
                                                             | ((0x800000U 
                                                                 & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241066__Q)
                                                                      ? 
                                                                     ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244127__DOT__s1) 
                                                                      >> 1U)
                                                                      : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244127__DOT__s1)) 
                                                                    << 0x17U)) 
                                                                | ((0x400000U 
                                                                    & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241065__Q)
                                                                         ? 
                                                                        ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244126__DOT__s1) 
                                                                         >> 1U)
                                                                         : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244126__DOT__s1)) 
                                                                       << 0x16U)) 
                                                                   | ((0x200000U 
                                                                       & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241064__Q)
                                                                            ? 
                                                                           ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244125__DOT__s1) 
                                                                            >> 1U)
                                                                            : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244125__DOT__s1)) 
                                                                          << 0x15U)) 
                                                                      | ((0x100000U 
                                                                          & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241063__Q)
                                                                               ? 
                                                                              ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244124__DOT__s1) 
                                                                               >> 1U)
                                                                               : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244124__DOT__s1)) 
                                                                             << 0x14U)) 
                                                                         | ((0x80000U 
                                                                             & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241062__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244123__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244123__DOT__s1)) 
                                                                                << 0x13U)) 
                                                                            | ((0x40000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241061__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244122__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244122__DOT__s1)) 
                                                                                << 0x12U)) 
                                                                               | ((0x20000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241060__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244120__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244120__DOT__s1)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241059__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244118__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244118__DOT__s1)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241058__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244148__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244148__DOT__s1)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241057__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244116__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244116__DOT__s1)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241056__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244149__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244149__DOT__s1)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241055__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244152__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244152__DOT__s1)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241054__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244114__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244114__DOT__s1)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241053__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244153__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244153__DOT__s1)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241052__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244156__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244156__DOT__s1)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241051__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244112__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244112__DOT__s1)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241050__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244157__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244157__DOT__s1)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241049__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244160__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244160__DOT__s1)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241048__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244110__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244110__DOT__s1)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241047__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244161__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244161__DOT__s1)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241046__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244164__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244164__DOT__s1)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241045__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244108__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244108__DOT__s1)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241044__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244165__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244165__DOT__s1)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241043__Q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244168__DOT__s1) 
                                                                                >> 1U)
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244168__DOT__s1)))))))))))))))))))))))))))))))))),
                         64,VL_TIME_UNITED_Q(1e+06),
                         -9);
        }
        co_sim_mac_32__DOT____Vrepeat2 = (co_sim_mac_32__DOT____Vrepeat2 
                                          - (IData)(1U));
    }
    VL_WRITEF_NX("\n\n***Random Functionality Tests are ended***\n\n\n",0);
    if ((0U == vlSelf->co_sim_mac_32__DOT__mismatch)) {
        VL_WRITEF_NX("\n**** All Comparison Matched ***\nSimulation Passed\n",0);
    } else {
        VL_WRITEF_NX("%0d comparison(s) mismatched\nERROR: SIM: Simulation Failed\n",0,
                     32,vlSelf->co_sim_mac_32__DOT__mismatch);
    }
    co_await vlSelf->__VdlySched.delay(0x5f5e100ULL, 
                                       nullptr, "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/25march/EDA-/mac_32/results_dir/.././sim/co_sim_tb/co_sim_mac_32.v", 
                                       108);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("/nfs_scratch/scratch/CompilerValidation/abdul_hameed/25march/EDA-/mac_32/results_dir/.././sim/co_sim_tb/co_sim_mac_32.v", 109, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

void Vco_sim_mac_32___024root___act_comb__TOP__0(Vco_sim_mac_32___024root* vlSelf);
void Vco_sim_mac_32___024root___act_comb__TOP__1(Vco_sim_mac_32___024root* vlSelf);
void Vco_sim_mac_32___024root___act_comb__TOP__2(Vco_sim_mac_32___024root* vlSelf);

void Vco_sim_mac_32___024root___eval_act(Vco_sim_mac_32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_mac_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_mac_32___024root___eval_act\n"); );
    // Body
    if ((0x180ULL & vlSelf->__VactTriggered.word(0U))) {
        Vco_sim_mac_32___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((0x181ULL & vlSelf->__VactTriggered.word(0U))) {
        Vco_sim_mac_32___024root___act_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((0x182ULL & vlSelf->__VactTriggered.word(0U))) {
        Vco_sim_mac_32___024root___act_comb__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
}

VL_INLINE_OPT void Vco_sim_mac_32___024root___act_comb__TOP__0(Vco_sim_mac_32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_mac_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_mac_32___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->co_sim_mac_32__DOT__golden__DOT__input_a[0U] = 0U;
    vlSelf->co_sim_mac_32__DOT__golden__DOT__input_a[1U] = 0U;
    vlSelf->co_sim_mac_32__DOT__golden__DOT__input_a[(1U 
                                                      & (IData)(vlSelf->co_sim_mac_32__DOT__id))] 
        = vlSelf->co_sim_mac_32__DOT__a;
    vlSelf->co_sim_mac_32__DOT__golden__DOT__input_b[0U] = 0U;
    vlSelf->co_sim_mac_32__DOT__golden__DOT__input_b[1U] = 0U;
    vlSelf->co_sim_mac_32__DOT__golden__DOT__input_b[(1U 
                                                      & (IData)(vlSelf->co_sim_mac_32__DOT__id))] 
        = vlSelf->co_sim_mac_32__DOT__b;
    vlSelf->co_sim_mac_32__DOT__out = vlSelf->co_sim_mac_32__DOT__golden__DOT__output_bus
        [(1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))];
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244114__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241086__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244108__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241077__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244110__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241080__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244112__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241083__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244116__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241089__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244118__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241091__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244120__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241092__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244122__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241093__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244128__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241099__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244125__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241096__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244126__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241097__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244132__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241103__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244129__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241100__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244130__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241101__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244133__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241104__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244148__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241090__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244152__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241087__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244149__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241088__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244153__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241085__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244156__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241084__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244157__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241082__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244160__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241081__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244161__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241079__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244164__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241078__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244165__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241076__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244168__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241075__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244135__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241105__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244131__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241102__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244127__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241098__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244124__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241095__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244123__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241094__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244208__Y 
        = ((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
           & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
              >> 0xfU));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244096__Y 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
           & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
              >> 0xfU));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244200__Y 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
           & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
              >> 0xfU));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244222__Y 
        = ((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
           & ((IData)(vlSelf->co_sim_mac_32__DOT__a) 
              >> 0xfU));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT__genblk1__05b0__05d__02ea0__02eb 
        = (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244208__Y) 
            << 0xfU) | ((0x4000U & (((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                     << 0xeU) & (IData)(vlSelf->co_sim_mac_32__DOT__b))) 
                        | ((0x2000U & (((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                        << 0xdU) & (IData)(vlSelf->co_sim_mac_32__DOT__b))) 
                           | ((0x1000U & (((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                           << 0xcU) 
                                          & (IData)(vlSelf->co_sim_mac_32__DOT__b))) 
                              | ((0x800U & (((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                             << 0xbU) 
                                            & (IData)(vlSelf->co_sim_mac_32__DOT__b))) 
                                 | ((0x400U & (((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                                << 0xaU) 
                                               & (IData)(vlSelf->co_sim_mac_32__DOT__b))) 
                                    | ((0x200U & ((
                                                   (~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                                   << 9U) 
                                                  & (IData)(vlSelf->co_sim_mac_32__DOT__b))) 
                                       | ((0x100U & 
                                           (((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                             << 8U) 
                                            & (IData)(vlSelf->co_sim_mac_32__DOT__b))) 
                                          | ((0x80U 
                                              & (((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                                  << 7U) 
                                                 & (IData)(vlSelf->co_sim_mac_32__DOT__b))) 
                                             | ((0x40U 
                                                 & (((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                                     << 6U) 
                                                    & (IData)(vlSelf->co_sim_mac_32__DOT__b))) 
                                                | ((0x20U 
                                                    & (((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                                        << 5U) 
                                                       & (IData)(vlSelf->co_sim_mac_32__DOT__b))) 
                                                   | ((0x10U 
                                                       & (((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                                           << 4U) 
                                                          & (IData)(vlSelf->co_sim_mac_32__DOT__b))) 
                                                      | ((8U 
                                                          & (((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                                              << 3U) 
                                                             & (IData)(vlSelf->co_sim_mac_32__DOT__b))) 
                                                         | ((4U 
                                                             & (((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                                                 << 2U) 
                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__b))) 
                                                            | ((2U 
                                                                & (((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                                                    << 1U) 
                                                                   & (IData)(vlSelf->co_sim_mac_32__DOT__b))) 
                                                               | (1U 
                                                                  & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                                                     & (IData)(vlSelf->co_sim_mac_32__DOT__b))))))))))))))))));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT__genblk1__05b1__05d__02ea0__02eb 
        = (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244096__Y) 
            << 0xfU) | ((0x4000U & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                    & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                       << 0xeU))) | 
                        ((0x2000U & ((IData)(vlSelf->co_sim_mac_32__DOT__b) 
                                     & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                        << 0xdU))) 
                         | ((0x1000U & (((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                         << 0xcU) & (IData)(vlSelf->co_sim_mac_32__DOT__b))) 
                            | ((0x800U & (((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                           << 0xbU) 
                                          & (IData)(vlSelf->co_sim_mac_32__DOT__b))) 
                               | ((0x400U & (((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                              << 0xaU) 
                                             & (IData)(vlSelf->co_sim_mac_32__DOT__b))) 
                                  | ((0x200U & (((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                                 << 9U) 
                                                & (IData)(vlSelf->co_sim_mac_32__DOT__b))) 
                                     | ((0x100U & (
                                                   ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                                    << 8U) 
                                                   & (IData)(vlSelf->co_sim_mac_32__DOT__b))) 
                                        | ((0x80U & 
                                            (((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                              << 7U) 
                                             & (IData)(vlSelf->co_sim_mac_32__DOT__b))) 
                                           | ((0x40U 
                                               & (((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                                   << 6U) 
                                                  & (IData)(vlSelf->co_sim_mac_32__DOT__b))) 
                                              | ((0x20U 
                                                  & (((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                                      << 5U) 
                                                     & (IData)(vlSelf->co_sim_mac_32__DOT__b))) 
                                                 | ((0x10U 
                                                     & (((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                                         << 4U) 
                                                        & (IData)(vlSelf->co_sim_mac_32__DOT__b))) 
                                                    | ((8U 
                                                        & (((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                                            << 3U) 
                                                           & (IData)(vlSelf->co_sim_mac_32__DOT__b))) 
                                                       | ((4U 
                                                           & (((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                                               << 2U) 
                                                              & (IData)(vlSelf->co_sim_mac_32__DOT__b))) 
                                                          | ((2U 
                                                              & (((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                                                  << 1U) 
                                                                 & (IData)(vlSelf->co_sim_mac_32__DOT__b))) 
                                                             | (1U 
                                                                & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                                                   & (IData)(vlSelf->co_sim_mac_32__DOT__b))))))))))))))))));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT__genblk1__05b1__05d__02ea0__02ea 
        = (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244200__Y) 
            << 0xfU) | ((0x4000U & (((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                     << 0xeU) & (IData)(vlSelf->co_sim_mac_32__DOT__a))) 
                        | ((0x2000U & (((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                        << 0xdU) & (IData)(vlSelf->co_sim_mac_32__DOT__a))) 
                           | ((0x1000U & (((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                           << 0xcU) 
                                          & (IData)(vlSelf->co_sim_mac_32__DOT__a))) 
                              | ((0x800U & (((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                             << 0xbU) 
                                            & (IData)(vlSelf->co_sim_mac_32__DOT__a))) 
                                 | ((0x400U & (((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                                << 0xaU) 
                                               & (IData)(vlSelf->co_sim_mac_32__DOT__a))) 
                                    | ((0x200U & (((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                                   << 9U) 
                                                  & (IData)(vlSelf->co_sim_mac_32__DOT__a))) 
                                       | ((0x100U & 
                                           (((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                             << 8U) 
                                            & (IData)(vlSelf->co_sim_mac_32__DOT__a))) 
                                          | ((0x80U 
                                              & (((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                                  << 7U) 
                                                 & (IData)(vlSelf->co_sim_mac_32__DOT__a))) 
                                             | ((0x40U 
                                                 & (((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                                     << 6U) 
                                                    & (IData)(vlSelf->co_sim_mac_32__DOT__a))) 
                                                | ((0x20U 
                                                    & (((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                                        << 5U) 
                                                       & (IData)(vlSelf->co_sim_mac_32__DOT__a))) 
                                                   | ((0x10U 
                                                       & (((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                                           << 4U) 
                                                          & (IData)(vlSelf->co_sim_mac_32__DOT__a))) 
                                                      | ((8U 
                                                          & (((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                                              << 3U) 
                                                             & (IData)(vlSelf->co_sim_mac_32__DOT__a))) 
                                                         | ((4U 
                                                             & (((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                                                 << 2U) 
                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__a))) 
                                                            | ((2U 
                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                                                    << 1U) 
                                                                   & (IData)(vlSelf->co_sim_mac_32__DOT__a))) 
                                                               | (1U 
                                                                  & ((IData)(vlSelf->co_sim_mac_32__DOT__id) 
                                                                     & (IData)(vlSelf->co_sim_mac_32__DOT__a))))))))))))))))));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT__genblk1__05b0__05d__02ea0__02ea 
        = (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244222__Y) 
            << 0xfU) | ((0x4000U & (((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                     << 0xeU) & (IData)(vlSelf->co_sim_mac_32__DOT__a))) 
                        | ((0x2000U & (((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                        << 0xdU) & (IData)(vlSelf->co_sim_mac_32__DOT__a))) 
                           | ((0x1000U & (((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                           << 0xcU) 
                                          & (IData)(vlSelf->co_sim_mac_32__DOT__a))) 
                              | ((0x800U & (((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                             << 0xbU) 
                                            & (IData)(vlSelf->co_sim_mac_32__DOT__a))) 
                                 | ((0x400U & (((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                                << 0xaU) 
                                               & (IData)(vlSelf->co_sim_mac_32__DOT__a))) 
                                    | ((0x200U & ((
                                                   (~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                                   << 9U) 
                                                  & (IData)(vlSelf->co_sim_mac_32__DOT__a))) 
                                       | ((0x100U & 
                                           (((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                             << 8U) 
                                            & (IData)(vlSelf->co_sim_mac_32__DOT__a))) 
                                          | ((0x80U 
                                              & (((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                                  << 7U) 
                                                 & (IData)(vlSelf->co_sim_mac_32__DOT__a))) 
                                             | ((0x40U 
                                                 & (((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                                     << 6U) 
                                                    & (IData)(vlSelf->co_sim_mac_32__DOT__a))) 
                                                | ((0x20U 
                                                    & (((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                                        << 5U) 
                                                       & (IData)(vlSelf->co_sim_mac_32__DOT__a))) 
                                                   | ((0x10U 
                                                       & (((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                                           << 4U) 
                                                          & (IData)(vlSelf->co_sim_mac_32__DOT__a))) 
                                                      | ((8U 
                                                          & (((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                                              << 3U) 
                                                             & (IData)(vlSelf->co_sim_mac_32__DOT__a))) 
                                                         | ((4U 
                                                             & (((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                                                 << 2U) 
                                                                & (IData)(vlSelf->co_sim_mac_32__DOT__a))) 
                                                            | ((2U 
                                                                & (((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                                                    << 1U) 
                                                                   & (IData)(vlSelf->co_sim_mac_32__DOT__a))) 
                                                               | (1U 
                                                                  & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__id)) 
                                                                     & (IData)(vlSelf->co_sim_mac_32__DOT__a))))))))))))))))));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellinp____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__B 
        = (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244208__Y) 
            << 0x11U) | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244208__Y) 
                          << 0x10U) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT__genblk1__05b0__05d__02ea0__02eb)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellinp____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__B 
        = (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244096__Y) 
            << 0x11U) | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244096__Y) 
                          << 0x10U) | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT__genblk1__05b1__05d__02ea0__02eb)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellinp____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__A 
        = (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244200__Y) 
            << 0x13U) | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244200__Y) 
                          << 0x12U) | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244200__Y) 
                                        << 0x11U) | 
                                       (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244200__Y) 
                                         << 0x10U) 
                                        | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT__genblk1__05b1__05d__02ea0__02ea)))));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellinp____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__A 
        = (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244222__Y) 
            << 0x13U) | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244222__Y) 
                          << 0x12U) | (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244222__Y) 
                                        << 0x11U) | 
                                       (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244222__Y) 
                                         << 0x10U) 
                                        | (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT__genblk1__05b0__05d__02ea0__02ea)))));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__b_int 
        = vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellinp____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__B;
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__b_int 
        = vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellinp____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__B;
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__a_int 
        = vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellinp____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__A;
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__a_int 
        = vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellinp____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__A;
    if ((4U & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__feedback_int))) {
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__mult_b 
            = vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__b_int;
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__add_sub_in 
            = ((2U & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__feedback_int))
                ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__feedback_int))
                    ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__acc_fir_int)))
                    : ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__acc_fir_int))))
                : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__feedback_int))
                    ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__acc_fir_int)))
                    : ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__acc_fir_int)))));
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__mult_a = 0U;
    } else if ((2U & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__feedback_int))) {
        if ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__feedback_int))) {
            vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__mult_b 
                = vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__b_int;
            vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__add_sub_in 
                = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__unsigned_a_int)
                    ? ((QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__a_int)) 
                       << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__acc_fir_int))
                    : ((((- (QData)((IData)((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__a_int 
                                                   >> 0x13U))))) 
                         << 0x14U) | (QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__a_int))) 
                       << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__acc_fir_int)));
            vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__mult_a 
                = (0xfffffU & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__accumulator));
        } else {
            vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__mult_b = 0U;
            vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__add_sub_in 
                = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__unsigned_a_int)
                    ? ((QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__a_int)) 
                       << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__acc_fir_int))
                    : ((((- (QData)((IData)((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__a_int 
                                                   >> 0x13U))))) 
                         << 0x14U) | (QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__a_int))) 
                       << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__acc_fir_int)));
            vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__mult_a 
                = (0xfffffU & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__a_int);
        }
    } else {
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__mult_b 
            = vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__b_int;
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__add_sub_in 
            = ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__feedback_int))
                ? 0ULL : vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__accumulator);
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__mult_a 
            = (0xfffffU & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__a_int);
    }
    if ((4U & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__feedback_int))) {
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__mult_b 
            = vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__b_int;
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__add_sub_in 
            = ((2U & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__feedback_int))
                ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__feedback_int))
                    ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__acc_fir_int)))
                    : ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__acc_fir_int))))
                : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__feedback_int))
                    ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__acc_fir_int)))
                    : ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__acc_fir_int)))));
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__mult_a = 0U;
    } else if ((2U & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__feedback_int))) {
        if ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__feedback_int))) {
            vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__mult_b 
                = vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__b_int;
            vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__add_sub_in 
                = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__unsigned_a_int)
                    ? ((QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__a_int)) 
                       << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__acc_fir_int))
                    : ((((- (QData)((IData)((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__a_int 
                                                   >> 0x13U))))) 
                         << 0x14U) | (QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__a_int))) 
                       << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__acc_fir_int)));
            vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__mult_a 
                = (0xfffffU & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__accumulator));
        } else {
            vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__mult_b = 0U;
            vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__add_sub_in 
                = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__unsigned_a_int)
                    ? ((QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__a_int)) 
                       << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__acc_fir_int))
                    : ((((- (QData)((IData)((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__a_int 
                                                   >> 0x13U))))) 
                         << 0x14U) | (QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__a_int))) 
                       << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__acc_fir_int)));
            vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__mult_a 
                = (0xfffffU & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__a_int);
        }
    } else {
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__mult_b 
            = vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__b_int;
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__add_sub_in 
            = ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__feedback_int))
                ? 0ULL : vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__accumulator);
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__mult_a 
            = (0xfffffU & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__a_int);
    }
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__mult_out 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__unsigned_a_int)
            ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__unsigned_b_int)
                ? ((QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__mult_a)) 
                   * (QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__mult_b)))
                : VL_MULS_QQQ(64, VL_EXTENDS_QI(64,21, vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__mult_a), 
                              VL_EXTENDS_QI(64,18, vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__mult_b)))
            : ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__unsigned_b_int)
                ? VL_MULS_QQQ(64, VL_EXTENDS_QI(64,20, vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__mult_a), 
                              VL_EXTENDS_QI(64,19, vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__mult_b))
                : VL_MULS_QQQ(64, VL_EXTENDS_QI(64,20, vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__mult_a), 
                              VL_EXTENDS_QI(64,18, vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__mult_b))));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__mult_out 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__unsigned_a_int)
            ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__unsigned_b_int)
                ? ((QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__mult_a)) 
                   * (QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__mult_b)))
                : VL_MULS_QQQ(64, VL_EXTENDS_QI(64,21, vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__mult_a), 
                              VL_EXTENDS_QI(64,18, vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__mult_b)))
            : ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__unsigned_b_int)
                ? VL_MULS_QQQ(64, VL_EXTENDS_QI(64,20, vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__mult_a), 
                              VL_EXTENDS_QI(64,19, vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__mult_b))
                : VL_MULS_QQQ(64, VL_EXTENDS_QI(64,20, vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__mult_a), 
                              VL_EXTENDS_QI(64,18, vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__mult_b))));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__add_sub_out 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__subtract_int)
            ? (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__add_sub_in 
               - vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__mult_out)
            : (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__add_sub_in 
               + vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__mult_out));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
        = (0x3fffffffffULL & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__mult_out);
    if (vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241106__Q) {
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244134__DOT__s1 
            = ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U);
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244053__DOT__s4 
            = ((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                              >> 0x1fU))) ? 0xe8U : 0x17U);
    } else {
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244134__DOT__s1 
            = ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 0U : 2U);
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244053__DOT__s4 
            = ((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                              >> 0x1fU))) ? 0x17U : 0xe8U);
    }
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__add_sub_out 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__subtract_int)
            ? (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__add_sub_in 
               - vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__mult_out)
            : (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__add_sub_in 
               + vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__mult_out));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
        = (0x3fffffffffULL & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__mult_out);
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__pre_shift 
        = vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__add_sub_out;
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__shift_right 
        = VL_SHIFTRS_QQI(64,64,6, vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__pre_shift, (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__shift_right_int));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__round 
        = (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__round_int) 
            & (0U < (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__shift_right_int)))
            ? ((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__pre_shift 
                              >> (0x3fU & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__shift_right_int) 
                                           - (IData)(1U))))))
                ? (1ULL + vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__shift_right)
                : vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__shift_right)
            : vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__shift_right);
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__saturate 
        = (0x3fffffffffULL & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__saturate_int)
                               ? (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__unsigned_a_int) 
                                   & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__unsigned_b_int))
                                   ? (VL_GTS_IQQ(64, 0ULL, vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__round)
                                       ? 0ULL : ((0x3fffffffffULL 
                                                  < vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__round)
                                                  ? 0x3fffffffffULL
                                                  : vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__round))
                                   : (VL_LTS_IQQ(64, 0x1fffffffffULL, vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__round)
                                       ? 0x1fffffffffULL
                                       : (VL_GTS_IQQ(64, 0xffffffe000000000ULL, vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__round)
                                           ? 0x2000000000ULL
                                           : vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__round)))
                               : vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__round));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024techmap48__024flatten____VhshcxkILnAxJK1ec9BpMm9TSPgHFVCSeZuaOT9t9sVz 
        = ((0xffffffffULL & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024techmap48__024flatten____VhshcxkILnAxJK1ec9BpMm9TSPgHFVCSeZuaOT9t9sVz) 
           | ((QData)((IData)((0x3fU & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                >> 0x20U))))) 
              << 0x20U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
        = ((0xc0000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS) 
           | ((0x20000000U & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241104__Q)
                                ? (~ (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                              >> 0x1dU)))
                                : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                           >> 0x1dU))) 
                              << 0x1dU)) | ((0x10000000U 
                                             & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241103__Q)
                                                  ? 
                                                 (~ (IData)(
                                                            (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                             >> 0x1cU)))
                                                  : (IData)(
                                                            (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                             >> 0x1cU))) 
                                                << 0x1cU)) 
                                            | ((0x8000000U 
                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241102__Q)
                                                     ? 
                                                    (~ (IData)(
                                                               (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                >> 0x1bU)))
                                                     : (IData)(
                                                               (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                >> 0x1bU))) 
                                                   << 0x1bU)) 
                                               | ((0x4000000U 
                                                   & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241101__Q)
                                                        ? 
                                                       (~ (IData)(
                                                                  (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                   >> 0x1aU)))
                                                        : (IData)(
                                                                  (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                   >> 0x1aU))) 
                                                      << 0x1aU)) 
                                                  | ((0x2000000U 
                                                      & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241100__Q)
                                                           ? 
                                                          (~ (IData)(
                                                                     (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                      >> 0x19U)))
                                                           : (IData)(
                                                                     (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                      >> 0x19U))) 
                                                         << 0x19U)) 
                                                     | ((0x1000000U 
                                                         & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241099__Q)
                                                              ? 
                                                             (~ (IData)(
                                                                        (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                         >> 0x18U)))
                                                              : (IData)(
                                                                        (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                         >> 0x18U))) 
                                                            << 0x18U)) 
                                                        | ((0x800000U 
                                                            & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241098__Q)
                                                                 ? 
                                                                (~ (IData)(
                                                                           (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                            >> 0x17U)))
                                                                 : (IData)(
                                                                           (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                            >> 0x17U))) 
                                                               << 0x17U)) 
                                                           | ((0x400000U 
                                                               & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241097__Q)
                                                                    ? 
                                                                   (~ (IData)(
                                                                              (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                               >> 0x16U)))
                                                                    : (IData)(
                                                                              (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                               >> 0x16U))) 
                                                                  << 0x16U)) 
                                                              | ((0x200000U 
                                                                  & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241096__Q)
                                                                       ? 
                                                                      (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0x15U)))
                                                                       : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0x15U))) 
                                                                     << 0x15U)) 
                                                                 | ((0x100000U 
                                                                     & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241095__Q)
                                                                          ? 
                                                                         (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0x14U)))
                                                                          : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0x14U))) 
                                                                        << 0x14U)) 
                                                                    | ((0x80000U 
                                                                        & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241094__Q)
                                                                             ? 
                                                                            (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0x13U)))
                                                                             : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0x13U))) 
                                                                           << 0x13U)) 
                                                                       | ((0x40000U 
                                                                           & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241093__Q)
                                                                                ? 
                                                                               (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0x12U)))
                                                                                : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0x12U))) 
                                                                              << 0x12U)) 
                                                                          | ((0x20000U 
                                                                              & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241092__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0x11U)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0x11U))) 
                                                                                << 0x11U)) 
                                                                             | ((0x10000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241091__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0x10U)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0x10U))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241090__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0xfU)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0xfU))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241089__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0xeU)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0xeU))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241088__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0xdU)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0xdU))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241087__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0xcU)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0xcU))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241086__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0xbU)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0xbU))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241085__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0xaU)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0xaU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241084__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 9U)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 9U))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241083__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 8U)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 8U))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241082__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 7U)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 7U))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241081__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 6U)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 6U))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241080__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 5U)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 5U))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241079__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 4U)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 4U))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241078__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 3U)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 3U))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241077__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 2U)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 2U))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241076__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 1U)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 1U))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241075__Q)
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out))
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out)))))))))))))))))))))))))))))))));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__pre_shift 
        = vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__add_sub_out;
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__shift_right 
        = VL_SHIFTRS_QQI(64,64,6, vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__pre_shift, (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__shift_right_int));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__round 
        = (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__round_int) 
            & (0U < (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__shift_right_int)))
            ? ((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__pre_shift 
                              >> (0x3fU & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__shift_right_int) 
                                           - (IData)(1U))))))
                ? (1ULL + vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__shift_right)
                : vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__shift_right)
            : vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__shift_right);
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__saturate 
        = (0x3fffffffffULL & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__saturate_int)
                               ? (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__unsigned_a_int) 
                                   & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__unsigned_b_int))
                                   ? (VL_GTS_IQQ(64, 0ULL, vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__round)
                                       ? 0ULL : ((0x3fffffffffULL 
                                                  < vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__round)
                                                  ? 0x3fffffffffULL
                                                  : vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__round))
                                   : (VL_LTS_IQQ(64, 0x1fffffffffULL, vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__round)
                                       ? 0x1fffffffffULL
                                       : (VL_GTS_IQQ(64, 0xffffffe000000000ULL, vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__round)
                                           ? 0x2000000000ULL
                                           : vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__round)))
                               : vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__round));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024techmap49__024flatten____VhsheoAgw3cNQWfKc6y2YBKCNarIVv6pcbe2QYQiEhya 
        = ((0xffffffffULL & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024techmap49__024flatten____VhsheoAgw3cNQWfKc6y2YBKCNarIVv6pcbe2QYQiEhya) 
           | ((QData)((IData)((0x3fU & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                >> 0x20U))))) 
              << 0x20U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244269__DOT__s4 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241074__Q)
            ? ((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                              >> 0x1fU))) ? 0xe8U : 0x17U)
            : ((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                              >> 0x1fU))) ? 0x17U : 0xe8U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
        = ((0xc0000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS) 
           | ((0x20000000U & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241072__Q)
                                ? (~ (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                              >> 0x1dU)))
                                : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                           >> 0x1dU))) 
                              << 0x1dU)) | ((0x10000000U 
                                             & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241071__Q)
                                                  ? 
                                                 (~ (IData)(
                                                            (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                             >> 0x1cU)))
                                                  : (IData)(
                                                            (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                             >> 0x1cU))) 
                                                << 0x1cU)) 
                                            | ((0x8000000U 
                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241070__Q)
                                                     ? 
                                                    (~ (IData)(
                                                               (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                >> 0x1bU)))
                                                     : (IData)(
                                                               (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                >> 0x1bU))) 
                                                   << 0x1bU)) 
                                               | ((0x4000000U 
                                                   & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241069__Q)
                                                        ? 
                                                       (~ (IData)(
                                                                  (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                   >> 0x1aU)))
                                                        : (IData)(
                                                                  (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                   >> 0x1aU))) 
                                                      << 0x1aU)) 
                                                  | ((0x2000000U 
                                                      & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241068__Q)
                                                           ? 
                                                          (~ (IData)(
                                                                     (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                      >> 0x19U)))
                                                           : (IData)(
                                                                     (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                      >> 0x19U))) 
                                                         << 0x19U)) 
                                                     | ((0x1000000U 
                                                         & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241067__Q)
                                                              ? 
                                                             (~ (IData)(
                                                                        (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                         >> 0x18U)))
                                                              : (IData)(
                                                                        (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                         >> 0x18U))) 
                                                            << 0x18U)) 
                                                        | ((0x800000U 
                                                            & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241066__Q)
                                                                 ? 
                                                                (~ (IData)(
                                                                           (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                            >> 0x17U)))
                                                                 : (IData)(
                                                                           (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                            >> 0x17U))) 
                                                               << 0x17U)) 
                                                           | ((0x400000U 
                                                               & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241065__Q)
                                                                    ? 
                                                                   (~ (IData)(
                                                                              (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                               >> 0x16U)))
                                                                    : (IData)(
                                                                              (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                               >> 0x16U))) 
                                                                  << 0x16U)) 
                                                              | ((0x200000U 
                                                                  & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241064__Q)
                                                                       ? 
                                                                      (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0x15U)))
                                                                       : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0x15U))) 
                                                                     << 0x15U)) 
                                                                 | ((0x100000U 
                                                                     & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241063__Q)
                                                                          ? 
                                                                         (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0x14U)))
                                                                          : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0x14U))) 
                                                                        << 0x14U)) 
                                                                    | ((0x80000U 
                                                                        & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241062__Q)
                                                                             ? 
                                                                            (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0x13U)))
                                                                             : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0x13U))) 
                                                                           << 0x13U)) 
                                                                       | ((0x40000U 
                                                                           & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241061__Q)
                                                                                ? 
                                                                               (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0x12U)))
                                                                                : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0x12U))) 
                                                                              << 0x12U)) 
                                                                          | ((0x20000U 
                                                                              & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241060__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0x11U)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0x11U))) 
                                                                                << 0x11U)) 
                                                                             | ((0x10000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241059__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0x10U)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0x10U))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241058__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0xfU)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0xfU))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241057__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0xeU)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0xeU))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241056__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0xdU)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0xdU))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241055__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0xcU)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0xcU))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241054__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0xbU)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0xbU))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241053__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0xaU)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0xaU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241052__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 9U)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 9U))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241051__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 8U)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 8U))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241050__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 7U)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 7U))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241049__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 6U)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 6U))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241048__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 5U)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 5U))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241047__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 4U)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 4U))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241046__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 3U)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 3U))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241045__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 2U)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 2U))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241044__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 1U)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 1U))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241043__Q)
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out))
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out)))))))))))))))))))))))))))))))));
    if (vlSelf->co_sim_mac_32__DOT__reset) {
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244053__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244053__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244269__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244269__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244053__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244053__DOT__s4));
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244269__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244269__DOT__s4));
    }
}

VL_INLINE_OPT void Vco_sim_mac_32___024root___act_comb__TOP__1(Vco_sim_mac_32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_mac_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_mac_32___024root___act_comb__TOP__1\n"); );
    // Init
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b0__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b0__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b10__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b10__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b11__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b11__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b12__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b12__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b13__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b13__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b14__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b14__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b15__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b15__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b16__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b16__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b17__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b17__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b18__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b18__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b19__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b19__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b1__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b1__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b20__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b20__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b21__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b21__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b22__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b22__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b23__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b23__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b24__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b24__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b25__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b25__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b26__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b26__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b27__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b27__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b28__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b28__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b29__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b29__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b2__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b2__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b3__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b3__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b4__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b4__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b5__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b5__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b6__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b6__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b7__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b7__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b8__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b8__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b9__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b9__05d__02egenblk1__02emy_adder__COUT = 0;
    // Body
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b29__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x20000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 0x1dU)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                   >> 0x1dU))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b28__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x10000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 0x1cU)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                   >> 0x1cU))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b27__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x8000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 0x1bU)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                   >> 0x1bU))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b26__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x4000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 0x1aU)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                   >> 0x1aU))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b25__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x2000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 0x19U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                   >> 0x19U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b24__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x1000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 0x18U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                   >> 0x18U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b23__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x800000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 0x17U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                   >> 0x17U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b22__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x400000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 0x16U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                   >> 0x16U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b21__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x200000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 0x15U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                   >> 0x15U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b20__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x100000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 0x14U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                   >> 0x14U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b19__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x80000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 0x13U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                   >> 0x13U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b18__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x40000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 0x12U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                   >> 0x12U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b17__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x20000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 0x11U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                   >> 0x11U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b16__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x10000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 0x10U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                   >> 0x10U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b15__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x8000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 0xfU)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0xfU))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b14__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x4000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 0xeU)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0xeU))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b13__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x2000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 0xdU)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0xdU))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b12__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x1000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 0xcU)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0xcU))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b11__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x800U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 0xbU)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0xbU))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b10__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x400U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 0xaU)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0xaU))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b9__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x200U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 9U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                >> 9U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b8__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x100U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 8U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                >> 8U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b7__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x80U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 7U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                >> 7U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b6__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x40U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 6U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                >> 6U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b5__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x20U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 5U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                >> 5U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b4__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x10U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 4U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                >> 4U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b3__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((8U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 3U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                >> 3U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b2__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((4U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 2U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                >> 2U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b1__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((2U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 1U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                >> 1U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b0__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((1U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC)
                  : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
        = ((0x180000000ULL & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC) 
           | (IData)((IData)((((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b29__05d__02egenblk1__02emy_adder__COUT) 
                               << 0x1eU) | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b28__05d__02egenblk1__02emy_adder__COUT) 
                                             << 0x1dU) 
                                            | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b27__05d__02egenblk1__02emy_adder__COUT) 
                                                << 0x1cU) 
                                               | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b26__05d__02egenblk1__02emy_adder__COUT) 
                                                   << 0x1bU) 
                                                  | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b25__05d__02egenblk1__02emy_adder__COUT) 
                                                      << 0x1aU) 
                                                     | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b24__05d__02egenblk1__02emy_adder__COUT) 
                                                         << 0x19U) 
                                                        | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b23__05d__02egenblk1__02emy_adder__COUT) 
                                                            << 0x18U) 
                                                           | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b22__05d__02egenblk1__02emy_adder__COUT) 
                                                               << 0x17U) 
                                                              | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b21__05d__02egenblk1__02emy_adder__COUT) 
                                                                  << 0x16U) 
                                                                 | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b20__05d__02egenblk1__02emy_adder__COUT) 
                                                                     << 0x15U) 
                                                                    | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b19__05d__02egenblk1__02emy_adder__COUT) 
                                                                        << 0x14U) 
                                                                       | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b18__05d__02egenblk1__02emy_adder__COUT) 
                                                                           << 0x13U) 
                                                                          | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b17__05d__02egenblk1__02emy_adder__COUT) 
                                                                              << 0x12U) 
                                                                             | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b16__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 0x11U) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b15__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 0x10U) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b14__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 0xfU) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b13__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 0xeU) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b12__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 0xdU) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b11__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 0xcU) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b10__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 0xbU) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b9__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 0xaU) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b8__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 9U) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b7__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 8U) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b6__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 7U) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b5__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 6U) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b4__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 5U) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b3__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 4U) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b2__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 3U) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b1__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 2U) 
                                                                                | ((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b0__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 1U)))))))))))))))))))))))))))))))));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
        = ((0xc0000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY) 
           | (0x3fffffffU & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC) 
                             ^ vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244053__DOT__s2 
        = (0xfU & ((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                  >> 0x1eU))) ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244053__DOT__s3) 
                                                 >> 4U)
                    : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244053__DOT__s3)));
    if ((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                       >> 0x1eU)))) {
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244054__DOT__s2 
            = ((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                              >> 0x1eU))) ? 4U : 1U);
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244053__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244053__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244054__DOT__s2 
            = ((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                              >> 0x1eU))) ? 1U : 4U);
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244053__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244053__DOT__s2));
    }
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244054__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241105__Q)
                  ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244054__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244054__DOT__s2)));
}

VL_INLINE_OPT void Vco_sim_mac_32___024root___act_comb__TOP__2(Vco_sim_mac_32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_mac_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_mac_32___024root___act_comb__TOP__2\n"); );
    // Init
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b0__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b0__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b10__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b10__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b11__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b11__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b12__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b12__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b13__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b13__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b14__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b14__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b15__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b15__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b16__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b16__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b17__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b17__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b18__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b18__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b19__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b19__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b1__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b1__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b20__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b20__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b21__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b21__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b22__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b22__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b23__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b23__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b24__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b24__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b25__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b25__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b26__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b26__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b27__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b27__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b28__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b28__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b29__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b29__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b2__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b2__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b3__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b3__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b4__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b4__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b5__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b5__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b6__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b6__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b7__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b7__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b8__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b8__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b9__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b9__05d__02egenblk1__02emy_adder__COUT = 0;
    // Body
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b29__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x20000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 0x1dU)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                   >> 0x1dU))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b28__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x10000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 0x1cU)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                   >> 0x1cU))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b27__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x8000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 0x1bU)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                   >> 0x1bU))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b26__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x4000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 0x1aU)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                   >> 0x1aU))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b25__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x2000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 0x19U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                   >> 0x19U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b24__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x1000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 0x18U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                   >> 0x18U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b23__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x800000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 0x17U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                   >> 0x17U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b22__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x400000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 0x16U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                   >> 0x16U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b21__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x200000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 0x15U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                   >> 0x15U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b20__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x100000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 0x14U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                   >> 0x14U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b19__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x80000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 0x13U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                   >> 0x13U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b18__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x40000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 0x12U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                   >> 0x12U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b17__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x20000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 0x11U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                   >> 0x11U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b16__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x10000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 0x10U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                   >> 0x10U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b15__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x8000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 0xfU)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0xfU))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b14__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x4000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 0xeU)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0xeU))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b13__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x2000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 0xdU)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0xdU))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b12__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x1000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 0xcU)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0xcU))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b11__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x800U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 0xbU)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0xbU))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b10__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x400U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 0xaU)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0xaU))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b9__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x200U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 9U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                >> 9U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b8__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x100U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 8U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                >> 8U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b7__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x80U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 7U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                >> 7U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b6__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x40U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 6U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                >> 6U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b5__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x20U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 5U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                >> 5U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b4__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x10U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 4U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                >> 4U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b3__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((8U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 3U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                >> 3U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b2__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((4U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 2U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                >> 2U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b1__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((2U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 1U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                >> 1U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b0__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((1U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC)
                  : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
        = ((0x180000000ULL & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC) 
           | (IData)((IData)((((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b29__05d__02egenblk1__02emy_adder__COUT) 
                               << 0x1eU) | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b28__05d__02egenblk1__02emy_adder__COUT) 
                                             << 0x1dU) 
                                            | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b27__05d__02egenblk1__02emy_adder__COUT) 
                                                << 0x1cU) 
                                               | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b26__05d__02egenblk1__02emy_adder__COUT) 
                                                   << 0x1bU) 
                                                  | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b25__05d__02egenblk1__02emy_adder__COUT) 
                                                      << 0x1aU) 
                                                     | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b24__05d__02egenblk1__02emy_adder__COUT) 
                                                         << 0x19U) 
                                                        | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b23__05d__02egenblk1__02emy_adder__COUT) 
                                                            << 0x18U) 
                                                           | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b22__05d__02egenblk1__02emy_adder__COUT) 
                                                               << 0x17U) 
                                                              | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b21__05d__02egenblk1__02emy_adder__COUT) 
                                                                  << 0x16U) 
                                                                 | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b20__05d__02egenblk1__02emy_adder__COUT) 
                                                                     << 0x15U) 
                                                                    | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b19__05d__02egenblk1__02emy_adder__COUT) 
                                                                        << 0x14U) 
                                                                       | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b18__05d__02egenblk1__02emy_adder__COUT) 
                                                                           << 0x13U) 
                                                                          | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b17__05d__02egenblk1__02emy_adder__COUT) 
                                                                              << 0x12U) 
                                                                             | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b16__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 0x11U) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b15__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 0x10U) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b14__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 0xfU) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b13__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 0xeU) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b12__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 0xdU) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b11__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 0xcU) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b10__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 0xbU) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b9__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 0xaU) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b8__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 9U) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b7__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 8U) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b6__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 7U) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b5__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 6U) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b4__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 5U) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b3__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 4U) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b2__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 3U) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b1__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 2U) 
                                                                                | ((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b0__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 1U)))))))))))))))))))))))))))))))));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
        = ((0xc0000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY) 
           | (0x3fffffffU & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC) 
                             ^ vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244269__DOT__s2 
        = (0xfU & ((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                  >> 0x1eU))) ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244269__DOT__s3) 
                                                 >> 4U)
                    : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244269__DOT__s3)));
    if ((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                       >> 0x1eU)))) {
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244268__DOT__s2 
            = ((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                              >> 0x1eU))) ? 4U : 1U);
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244269__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244269__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244268__DOT__s2 
            = ((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                              >> 0x1eU))) ? 1U : 4U);
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244269__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244269__DOT__s2));
    }
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244268__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241073__Q)
                  ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244268__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244268__DOT__s2)));
}

void Vco_sim_mac_32___024root___nba_sequent__TOP__0(Vco_sim_mac_32___024root* vlSelf);
void Vco_sim_mac_32___024root___nba_sequent__TOP__1(Vco_sim_mac_32___024root* vlSelf);
void Vco_sim_mac_32___024root___nba_sequent__TOP__2(Vco_sim_mac_32___024root* vlSelf);
void Vco_sim_mac_32___024root___nba_sequent__TOP__3(Vco_sim_mac_32___024root* vlSelf);
void Vco_sim_mac_32___024root___nba_sequent__TOP__4(Vco_sim_mac_32___024root* vlSelf);
void Vco_sim_mac_32___024root___nba_comb__TOP__0(Vco_sim_mac_32___024root* vlSelf);
void Vco_sim_mac_32___024root___nba_comb__TOP__1(Vco_sim_mac_32___024root* vlSelf);
void Vco_sim_mac_32___024root___nba_comb__TOP__2(Vco_sim_mac_32___024root* vlSelf);
void Vco_sim_mac_32___024root___nba_comb__TOP__3(Vco_sim_mac_32___024root* vlSelf);
void Vco_sim_mac_32___024root___nba_comb__TOP__4(Vco_sim_mac_32___024root* vlSelf);
void Vco_sim_mac_32___024root___nba_comb__TOP__5(Vco_sim_mac_32___024root* vlSelf);
void Vco_sim_mac_32___024root___nba_comb__TOP__6(Vco_sim_mac_32___024root* vlSelf);
void Vco_sim_mac_32___024root___nba_comb__TOP__7(Vco_sim_mac_32___024root* vlSelf);
void Vco_sim_mac_32___024root___nba_comb__TOP__8(Vco_sim_mac_32___024root* vlSelf);
void Vco_sim_mac_32___024root___nba_comb__TOP__9(Vco_sim_mac_32___024root* vlSelf);

void Vco_sim_mac_32___024root___eval_nba(Vco_sim_mac_32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_mac_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_mac_32___024root___eval_nba\n"); );
    // Body
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_mac_32___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_mac_32___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_mac_32___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_mac_32___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_mac_32___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if ((0x180ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_mac_32___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    if ((0x184ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_mac_32___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0xcULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_mac_32___024root___nba_comb__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
    }
    if ((0x24ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_mac_32___024root___nba_comb__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
    }
    if ((0x18cULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_mac_32___024root___nba_comb__TOP__4(vlSelf);
    }
    if ((0xeULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_mac_32___024root___nba_comb__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
    }
    if ((0x1a4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_mac_32___024root___nba_comb__TOP__6(vlSelf);
    }
    if ((0x25ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_mac_32___024root___nba_comb__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
    }
    if ((0x18eULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_mac_32___024root___nba_comb__TOP__8(vlSelf);
    }
    if ((0x1a5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_mac_32___024root___nba_comb__TOP__9(vlSelf);
    }
}

VL_INLINE_OPT void Vco_sim_mac_32___024root___nba_sequent__TOP__2(Vco_sim_mac_32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_mac_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_mac_32___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241074__Q 
        = (1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241073__Q)
                  ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244269__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244269__DOT__s1)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241106__Q 
        = (1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241105__Q)
                  ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244053__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244053__DOT__s1)));
    if (vlSelf->co_sim_mac_32__DOT__reset) {
        vlSelf->co_sim_mac_32__DOT__golden__DOT____Vcellout__genblk1__BRA__1__KET____DOT__a0____pinNumber5 = 0U;
        vlSelf->co_sim_mac_32__DOT__golden__DOT____Vcellout__genblk1__BRA__0__KET____DOT__a0____pinNumber5 = 0U;
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241073__Q 
            = (1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244268__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241105__Q 
            = (1U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244054__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_mac_32__DOT__golden__DOT____Vcellout__genblk1__BRA__1__KET____DOT__a0____pinNumber5 
            = (vlSelf->co_sim_mac_32__DOT__golden__DOT____Vcellout__genblk1__BRA__1__KET____DOT__a0____pinNumber5 
               + VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                               vlSelf->co_sim_mac_32__DOT__golden__DOT__input_a
                                               [1U]), 
                             VL_EXTENDS_II(32,16, vlSelf->co_sim_mac_32__DOT__golden__DOT__input_b
                                           [1U])));
        vlSelf->co_sim_mac_32__DOT__golden__DOT____Vcellout__genblk1__BRA__0__KET____DOT__a0____pinNumber5 
            = (vlSelf->co_sim_mac_32__DOT__golden__DOT____Vcellout__genblk1__BRA__0__KET____DOT__a0____pinNumber5 
               + VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                               vlSelf->co_sim_mac_32__DOT__golden__DOT__input_a
                                               [0U]), 
                             VL_EXTENDS_II(32,16, vlSelf->co_sim_mac_32__DOT__golden__DOT__input_b
                                           [0U])));
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241073__Q 
            = (1U & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244268__DOT__s1));
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241105__Q 
            = (1U & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244054__DOT__s1));
    }
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241072__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                    >> 0x1dU)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241071__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                    >> 0x1cU)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241070__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                    >> 0x1bU)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241069__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                    >> 0x1aU)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241068__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                    >> 0x19U)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241067__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                    >> 0x18U)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241066__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                    >> 0x17U)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241065__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                    >> 0x16U)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241064__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                    >> 0x15U)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241063__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                    >> 0x14U)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241062__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                    >> 0x13U)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241061__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                    >> 0x12U)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241060__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                    >> 0x11U)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241059__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                    >> 0x10U)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241058__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                    >> 0xfU)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241057__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                    >> 0xeU)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241056__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                    >> 0xdU)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241055__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                    >> 0xcU)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241054__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                    >> 0xbU)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241053__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                    >> 0xaU)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241052__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                    >> 9U)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241051__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                    >> 8U)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241050__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                    >> 7U)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241049__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                    >> 6U)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241048__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                    >> 5U)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241047__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                    >> 4U)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241046__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                    >> 3U)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241045__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                    >> 2U)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241044__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
                    >> 1U)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241043__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241104__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                    >> 0x1dU)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241103__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                    >> 0x1cU)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241102__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                    >> 0x1bU)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241101__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                    >> 0x1aU)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241100__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                    >> 0x19U)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241099__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                    >> 0x18U)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241098__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                    >> 0x17U)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241097__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                    >> 0x16U)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241096__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                    >> 0x15U)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241095__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                    >> 0x14U)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241094__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                    >> 0x13U)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241093__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                    >> 0x12U)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241092__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                    >> 0x11U)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241091__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                    >> 0x10U)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241090__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                    >> 0xfU)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241089__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                    >> 0xeU)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241088__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                    >> 0xdU)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241087__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                    >> 0xcU)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241086__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                    >> 0xbU)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241085__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                    >> 0xaU)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241084__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                    >> 9U)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241083__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                    >> 8U)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241082__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                    >> 7U)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241081__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                    >> 6U)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241080__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                    >> 5U)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241079__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                    >> 4U)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241078__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                    >> 3U)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241077__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                    >> 2U)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241076__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
                    >> 1U)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241075__Q 
        = (1U & ((~ (IData)(vlSelf->co_sim_mac_32__DOT__reset)) 
                 & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY));
    vlSelf->co_sim_mac_32__DOT__golden__DOT__output_bus[1U] 
        = vlSelf->co_sim_mac_32__DOT__golden__DOT____Vcellout__genblk1__BRA__1__KET____DOT__a0____pinNumber5;
    vlSelf->co_sim_mac_32__DOT__golden__DOT__output_bus[0U] 
        = vlSelf->co_sim_mac_32__DOT__golden__DOT____Vcellout__genblk1__BRA__0__KET____DOT__a0____pinNumber5;
}

VL_INLINE_OPT void Vco_sim_mac_32___024root___nba_sequent__TOP__3(Vco_sim_mac_32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_mac_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_mac_32___024root___nba_sequent__TOP__3\n"); );
    // Body
    if (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__RESET) {
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__accumulator = 0ULL;
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__a_reg = 0U;
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024techmap52__024flatten____VhshJXbdi8WnllpjFwre4tph1UjrTup4fbvkZrW8Ny0Z = 0U;
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__acc_fir_reg = 0U;
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__b_reg = 0U;
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__shift_right_reg2 = 0U;
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out_reg = 0ULL;
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__shift_right_reg1 = 0U;
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__feedback_reg = 0U;
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__unsigned_a_reg = 1U;
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__unsigned_b_reg = 1U;
    } else {
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__accumulator 
            = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__load_acc_int)
                ? vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__add_sub_out
                : vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__accumulator);
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__a_reg 
            = vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellinp____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__A;
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024techmap52__024flatten____VhshJXbdi8WnllpjFwre4tph1UjrTup4fbvkZrW8Ny0Z 
            = vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellinp____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__B;
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__acc_fir_reg 
            = vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__ACC_FIR;
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__b_reg 
            = vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellinp____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__B;
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__shift_right_reg2 
            = vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__shift_right_reg1;
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out_reg 
            = vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out;
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__shift_right_reg1 
            = vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__SHIFT_RIGHT;
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__feedback_reg = 0U;
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__unsigned_a_reg = 0U;
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__unsigned_b_reg = 0U;
    }
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__subtract_reg 
        = ((1U & (~ (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__RESET))) 
           && (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__SUBTRACT));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__load_acc_reg 
        = ((1U & (~ (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__RESET))) 
           && (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__LOAD_ACC));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__round_reg2 
        = ((1U & (~ (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__RESET))) 
           && (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__round_reg1));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__saturate_reg2 
        = ((1U & (~ (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__RESET))) 
           && (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__saturate_reg1));
    if ((4U & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__feedback_int))) {
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__add_sub_in 
            = ((2U & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__feedback_int))
                ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__feedback_int))
                    ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__acc_fir_int)))
                    : ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__acc_fir_int))))
                : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__feedback_int))
                    ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__acc_fir_int)))
                    : ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__acc_fir_int)))));
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__mult_a = 0U;
    } else if ((2U & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__feedback_int))) {
        if ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__feedback_int))) {
            vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__add_sub_in 
                = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__unsigned_a_int)
                    ? ((QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__a_int)) 
                       << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__acc_fir_int))
                    : ((((- (QData)((IData)((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__a_int 
                                                   >> 0x13U))))) 
                         << 0x14U) | (QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__a_int))) 
                       << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__acc_fir_int)));
            vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__mult_a 
                = (0xfffffU & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__accumulator));
        } else {
            vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__add_sub_in 
                = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__unsigned_a_int)
                    ? ((QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__a_int)) 
                       << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__acc_fir_int))
                    : ((((- (QData)((IData)((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__a_int 
                                                   >> 0x13U))))) 
                         << 0x14U) | (QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__a_int))) 
                       << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__acc_fir_int)));
            vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__mult_a 
                = (0xfffffU & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__a_int);
        }
    } else {
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__add_sub_in 
            = ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__feedback_int))
                ? 0ULL : vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__accumulator);
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__mult_a 
            = (0xfffffU & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__a_int);
    }
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__round_reg1 
        = ((1U & (~ (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__RESET))) 
           && (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__ROUND));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__saturate_reg1 
        = ((1U & (~ (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__RESET))) 
           && (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__SATURATE));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__mult_out 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__unsigned_a_int)
            ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__unsigned_b_int)
                ? ((QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__mult_a)) 
                   * (QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__mult_b)))
                : VL_MULS_QQQ(64, VL_EXTENDS_QI(64,21, vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__mult_a), 
                              VL_EXTENDS_QI(64,18, vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__mult_b)))
            : ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__unsigned_b_int)
                ? VL_MULS_QQQ(64, VL_EXTENDS_QI(64,20, vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__mult_a), 
                              VL_EXTENDS_QI(64,19, vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__mult_b))
                : VL_MULS_QQQ(64, VL_EXTENDS_QI(64,20, vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__mult_a), 
                              VL_EXTENDS_QI(64,18, vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__mult_b))));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__add_sub_out 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__subtract_int)
            ? (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__add_sub_in 
               - vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__mult_out)
            : (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__add_sub_in 
               + vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__mult_out));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
        = (0x3fffffffffULL & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__mult_out);
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__pre_shift 
        = vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__add_sub_out;
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__shift_right 
        = VL_SHIFTRS_QQI(64,64,6, vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__pre_shift, (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__shift_right_int));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__round 
        = (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__round_int) 
            & (0U < (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__shift_right_int)))
            ? ((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__pre_shift 
                              >> (0x3fU & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__shift_right_int) 
                                           - (IData)(1U))))))
                ? (1ULL + vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__shift_right)
                : vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__shift_right)
            : vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__shift_right);
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__saturate 
        = (0x3fffffffffULL & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__saturate_int)
                               ? (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__unsigned_a_int) 
                                   & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__unsigned_b_int))
                                   ? (VL_GTS_IQQ(64, 0ULL, vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__round)
                                       ? 0ULL : ((0x3fffffffffULL 
                                                  < vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__round)
                                                  ? 0x3fffffffffULL
                                                  : vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__round))
                                   : (VL_LTS_IQQ(64, 0x1fffffffffULL, vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__round)
                                       ? 0x1fffffffffULL
                                       : (VL_GTS_IQQ(64, 0xffffffe000000000ULL, vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__round)
                                           ? 0x2000000000ULL
                                           : vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__round)))
                               : vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__round));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024techmap49__024flatten____VhsheoAgw3cNQWfKc6y2YBKCNarIVv6pcbe2QYQiEhya 
        = ((0xffffffffULL & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024techmap49__024flatten____VhsheoAgw3cNQWfKc6y2YBKCNarIVv6pcbe2QYQiEhya) 
           | ((QData)((IData)((0x3fU & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                >> 0x20U))))) 
              << 0x20U));
}

VL_INLINE_OPT void Vco_sim_mac_32___024root___nba_sequent__TOP__4(Vco_sim_mac_32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_mac_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_mac_32___024root___nba_sequent__TOP__4\n"); );
    // Body
    if (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__RESET) {
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__accumulator = 0ULL;
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__a_reg = 0U;
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024techmap53__024flatten____Vhshxo3f2g22HpVZ6KGU25oz8smEEmsLZQF9DGiVqIYD = 0U;
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__acc_fir_reg = 0U;
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__b_reg = 0U;
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__shift_right_reg2 = 0U;
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out_reg = 0ULL;
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__shift_right_reg1 = 0U;
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__feedback_reg = 0U;
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__unsigned_a_reg = 1U;
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__unsigned_b_reg = 1U;
    } else {
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__accumulator 
            = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__load_acc_int)
                ? vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__add_sub_out
                : vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__accumulator);
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__a_reg 
            = vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellinp____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__A;
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024techmap53__024flatten____Vhshxo3f2g22HpVZ6KGU25oz8smEEmsLZQF9DGiVqIYD 
            = vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellinp____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__B;
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__acc_fir_reg 
            = vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__ACC_FIR;
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__b_reg 
            = vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellinp____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__B;
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__shift_right_reg2 
            = vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__shift_right_reg1;
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out_reg 
            = vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out;
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__shift_right_reg1 
            = vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__SHIFT_RIGHT;
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__feedback_reg = 0U;
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__unsigned_a_reg = 0U;
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__unsigned_b_reg = 0U;
    }
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__subtract_reg 
        = ((1U & (~ (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__RESET))) 
           && (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__SUBTRACT));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__load_acc_reg 
        = ((1U & (~ (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__RESET))) 
           && (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__LOAD_ACC));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__round_reg2 
        = ((1U & (~ (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__RESET))) 
           && (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__round_reg1));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__saturate_reg2 
        = ((1U & (~ (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__RESET))) 
           && (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__saturate_reg1));
    if ((4U & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__feedback_int))) {
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__add_sub_in 
            = ((2U & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__feedback_int))
                ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__feedback_int))
                    ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__acc_fir_int)))
                    : ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__acc_fir_int))))
                : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__feedback_int))
                    ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__acc_fir_int)))
                    : ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__unsigned_a_int)
                        ? ((QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__a_int)) 
                           << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__acc_fir_int))
                        : ((((- (QData)((IData)((1U 
                                                 & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__a_int 
                                                    >> 0x13U))))) 
                             << 0x14U) | (QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__a_int))) 
                           << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__acc_fir_int)))));
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__mult_a = 0U;
    } else if ((2U & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__feedback_int))) {
        if ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__feedback_int))) {
            vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__add_sub_in 
                = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__unsigned_a_int)
                    ? ((QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__a_int)) 
                       << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__acc_fir_int))
                    : ((((- (QData)((IData)((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__a_int 
                                                   >> 0x13U))))) 
                         << 0x14U) | (QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__a_int))) 
                       << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__acc_fir_int)));
            vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__mult_a 
                = (0xfffffU & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__accumulator));
        } else {
            vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__add_sub_in 
                = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__unsigned_a_int)
                    ? ((QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__a_int)) 
                       << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__acc_fir_int))
                    : ((((- (QData)((IData)((1U & (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__a_int 
                                                   >> 0x13U))))) 
                         << 0x14U) | (QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__a_int))) 
                       << (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__acc_fir_int)));
            vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__mult_a 
                = (0xfffffU & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__a_int);
        }
    } else {
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__add_sub_in 
            = ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__feedback_int))
                ? 0ULL : vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__accumulator);
        vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__mult_a 
            = (0xfffffU & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__a_int);
    }
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__round_reg1 
        = ((1U & (~ (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__RESET))) 
           && (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__ROUND));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__saturate_reg1 
        = ((1U & (~ (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__RESET))) 
           && (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__SATURATE));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__mult_out 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__unsigned_a_int)
            ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__unsigned_b_int)
                ? ((QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__mult_a)) 
                   * (QData)((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__mult_b)))
                : VL_MULS_QQQ(64, VL_EXTENDS_QI(64,21, vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__mult_a), 
                              VL_EXTENDS_QI(64,18, vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__mult_b)))
            : ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__unsigned_b_int)
                ? VL_MULS_QQQ(64, VL_EXTENDS_QI(64,20, vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__mult_a), 
                              VL_EXTENDS_QI(64,19, vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__mult_b))
                : VL_MULS_QQQ(64, VL_EXTENDS_QI(64,20, vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__mult_a), 
                              VL_EXTENDS_QI(64,18, vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__mult_b))));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__add_sub_out 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__subtract_int)
            ? (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__add_sub_in 
               - vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__mult_out)
            : (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__add_sub_in 
               + vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__mult_out));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
        = (0x3fffffffffULL & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__mult_out);
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__pre_shift 
        = vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__add_sub_out;
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__shift_right 
        = VL_SHIFTRS_QQI(64,64,6, vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__pre_shift, (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__shift_right_int));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__round 
        = (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__round_int) 
            & (0U < (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__shift_right_int)))
            ? ((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__pre_shift 
                              >> (0x3fU & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__shift_right_int) 
                                           - (IData)(1U))))))
                ? (1ULL + vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__shift_right)
                : vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__shift_right)
            : vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__shift_right);
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__saturate 
        = (0x3fffffffffULL & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__saturate_int)
                               ? (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__unsigned_a_int) 
                                   & (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__unsigned_b_int))
                                   ? (VL_GTS_IQQ(64, 0ULL, vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__round)
                                       ? 0ULL : ((0x3fffffffffULL 
                                                  < vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__round)
                                                  ? 0x3fffffffffULL
                                                  : vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__round))
                                   : (VL_LTS_IQQ(64, 0x1fffffffffULL, vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__round)
                                       ? 0x1fffffffffULL
                                       : (VL_GTS_IQQ(64, 0xffffffe000000000ULL, vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__round)
                                           ? 0x2000000000ULL
                                           : vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__round)))
                               : vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__round));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024techmap48__024flatten____VhshcxkILnAxJK1ec9BpMm9TSPgHFVCSeZuaOT9t9sVz 
        = ((0xffffffffULL & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024techmap48__024flatten____VhshcxkILnAxJK1ec9BpMm9TSPgHFVCSeZuaOT9t9sVz) 
           | ((QData)((IData)((0x3fU & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                >> 0x20U))))) 
              << 0x20U));
}

VL_INLINE_OPT void Vco_sim_mac_32___024root___nba_comb__TOP__0(Vco_sim_mac_32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_mac_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_mac_32___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->co_sim_mac_32__DOT__golden__DOT__input_a[0U] = 0U;
    vlSelf->co_sim_mac_32__DOT__golden__DOT__input_a[1U] = 0U;
    vlSelf->co_sim_mac_32__DOT__golden__DOT__input_a[(1U 
                                                      & (IData)(vlSelf->co_sim_mac_32__DOT__id))] 
        = vlSelf->co_sim_mac_32__DOT__a;
    vlSelf->co_sim_mac_32__DOT__golden__DOT__input_b[0U] = 0U;
    vlSelf->co_sim_mac_32__DOT__golden__DOT__input_b[1U] = 0U;
    vlSelf->co_sim_mac_32__DOT__golden__DOT__input_b[(1U 
                                                      & (IData)(vlSelf->co_sim_mac_32__DOT__id))] 
        = vlSelf->co_sim_mac_32__DOT__b;
}

VL_INLINE_OPT void Vco_sim_mac_32___024root___nba_comb__TOP__1(Vco_sim_mac_32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_mac_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_mac_32___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244134__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241106__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244133__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241104__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244132__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241103__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244131__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241102__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244130__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241101__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244129__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241100__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244128__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241099__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244127__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241098__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244126__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241097__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244125__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241096__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244124__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241095__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244123__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241094__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244122__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241093__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244120__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241092__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244118__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241091__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244148__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241090__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244116__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241089__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244149__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241088__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244152__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241087__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244114__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241086__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244153__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241085__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244156__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241084__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244112__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241083__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244157__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241082__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244160__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241081__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244110__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241080__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244161__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241079__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244164__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241078__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244108__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241077__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244165__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241076__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244168__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241075__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
    vlSelf->co_sim_mac_32__DOT__out = vlSelf->co_sim_mac_32__DOT__golden__DOT__output_bus
        [(1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))];
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244135__DOT__s1 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241105__Q)
            ? ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                ? 3U : 2U) : ((1U & (IData)(vlSelf->co_sim_mac_32__DOT__id))
                               ? 0U : 2U));
}

VL_INLINE_OPT void Vco_sim_mac_32___024root___nba_comb__TOP__2(Vco_sim_mac_32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_mac_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_mac_32___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244269__DOT__s4 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241074__Q)
            ? ((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                              >> 0x1fU))) ? 0xe8U : 0x17U)
            : ((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                              >> 0x1fU))) ? 0x17U : 0xe8U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS 
        = ((0xc0000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS) 
           | ((0x20000000U & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241072__Q)
                                ? (~ (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                              >> 0x1dU)))
                                : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                           >> 0x1dU))) 
                              << 0x1dU)) | ((0x10000000U 
                                             & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241071__Q)
                                                  ? 
                                                 (~ (IData)(
                                                            (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                             >> 0x1cU)))
                                                  : (IData)(
                                                            (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                             >> 0x1cU))) 
                                                << 0x1cU)) 
                                            | ((0x8000000U 
                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241070__Q)
                                                     ? 
                                                    (~ (IData)(
                                                               (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                >> 0x1bU)))
                                                     : (IData)(
                                                               (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                >> 0x1bU))) 
                                                   << 0x1bU)) 
                                               | ((0x4000000U 
                                                   & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241069__Q)
                                                        ? 
                                                       (~ (IData)(
                                                                  (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                   >> 0x1aU)))
                                                        : (IData)(
                                                                  (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                   >> 0x1aU))) 
                                                      << 0x1aU)) 
                                                  | ((0x2000000U 
                                                      & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241068__Q)
                                                           ? 
                                                          (~ (IData)(
                                                                     (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                      >> 0x19U)))
                                                           : (IData)(
                                                                     (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                      >> 0x19U))) 
                                                         << 0x19U)) 
                                                     | ((0x1000000U 
                                                         & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241067__Q)
                                                              ? 
                                                             (~ (IData)(
                                                                        (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                         >> 0x18U)))
                                                              : (IData)(
                                                                        (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                         >> 0x18U))) 
                                                            << 0x18U)) 
                                                        | ((0x800000U 
                                                            & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241066__Q)
                                                                 ? 
                                                                (~ (IData)(
                                                                           (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                            >> 0x17U)))
                                                                 : (IData)(
                                                                           (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                            >> 0x17U))) 
                                                               << 0x17U)) 
                                                           | ((0x400000U 
                                                               & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241065__Q)
                                                                    ? 
                                                                   (~ (IData)(
                                                                              (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                               >> 0x16U)))
                                                                    : (IData)(
                                                                              (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                               >> 0x16U))) 
                                                                  << 0x16U)) 
                                                              | ((0x200000U 
                                                                  & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241064__Q)
                                                                       ? 
                                                                      (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0x15U)))
                                                                       : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0x15U))) 
                                                                     << 0x15U)) 
                                                                 | ((0x100000U 
                                                                     & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241063__Q)
                                                                          ? 
                                                                         (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0x14U)))
                                                                          : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0x14U))) 
                                                                        << 0x14U)) 
                                                                    | ((0x80000U 
                                                                        & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241062__Q)
                                                                             ? 
                                                                            (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0x13U)))
                                                                             : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0x13U))) 
                                                                           << 0x13U)) 
                                                                       | ((0x40000U 
                                                                           & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241061__Q)
                                                                                ? 
                                                                               (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0x12U)))
                                                                                : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0x12U))) 
                                                                              << 0x12U)) 
                                                                          | ((0x20000U 
                                                                              & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241060__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0x11U)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0x11U))) 
                                                                                << 0x11U)) 
                                                                             | ((0x10000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241059__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0x10U)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0x10U))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241058__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0xfU)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0xfU))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241057__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0xeU)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0xeU))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241056__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0xdU)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0xdU))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241055__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0xcU)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0xcU))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241054__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0xbU)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0xbU))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241053__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0xaU)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 0xaU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241052__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 9U)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 9U))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241051__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 8U)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 8U))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241050__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 7U)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 7U))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241049__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 6U)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 6U))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241048__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 5U)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 5U))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241047__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 4U)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 4U))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241046__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 3U)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 3U))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241045__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 2U)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 2U))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241044__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 1U)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                                                >> 1U))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241043__Q)
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out))
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out)))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void Vco_sim_mac_32___024root___nba_comb__TOP__3(Vco_sim_mac_32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_mac_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_mac_32___024root___nba_comb__TOP__3\n"); );
    // Body
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244053__DOT__s4 
        = ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241106__Q)
            ? ((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                              >> 0x1fU))) ? 0xe8U : 0x17U)
            : ((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                              >> 0x1fU))) ? 0x17U : 0xe8U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS 
        = ((0xc0000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS) 
           | ((0x20000000U & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241104__Q)
                                ? (~ (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                              >> 0x1dU)))
                                : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                           >> 0x1dU))) 
                              << 0x1dU)) | ((0x10000000U 
                                             & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241103__Q)
                                                  ? 
                                                 (~ (IData)(
                                                            (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                             >> 0x1cU)))
                                                  : (IData)(
                                                            (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                             >> 0x1cU))) 
                                                << 0x1cU)) 
                                            | ((0x8000000U 
                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241102__Q)
                                                     ? 
                                                    (~ (IData)(
                                                               (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                >> 0x1bU)))
                                                     : (IData)(
                                                               (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                >> 0x1bU))) 
                                                   << 0x1bU)) 
                                               | ((0x4000000U 
                                                   & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241101__Q)
                                                        ? 
                                                       (~ (IData)(
                                                                  (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                   >> 0x1aU)))
                                                        : (IData)(
                                                                  (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                   >> 0x1aU))) 
                                                      << 0x1aU)) 
                                                  | ((0x2000000U 
                                                      & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241100__Q)
                                                           ? 
                                                          (~ (IData)(
                                                                     (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                      >> 0x19U)))
                                                           : (IData)(
                                                                     (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                      >> 0x19U))) 
                                                         << 0x19U)) 
                                                     | ((0x1000000U 
                                                         & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241099__Q)
                                                              ? 
                                                             (~ (IData)(
                                                                        (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                         >> 0x18U)))
                                                              : (IData)(
                                                                        (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                         >> 0x18U))) 
                                                            << 0x18U)) 
                                                        | ((0x800000U 
                                                            & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241098__Q)
                                                                 ? 
                                                                (~ (IData)(
                                                                           (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                            >> 0x17U)))
                                                                 : (IData)(
                                                                           (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                            >> 0x17U))) 
                                                               << 0x17U)) 
                                                           | ((0x400000U 
                                                               & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241097__Q)
                                                                    ? 
                                                                   (~ (IData)(
                                                                              (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                               >> 0x16U)))
                                                                    : (IData)(
                                                                              (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                               >> 0x16U))) 
                                                                  << 0x16U)) 
                                                              | ((0x200000U 
                                                                  & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241096__Q)
                                                                       ? 
                                                                      (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0x15U)))
                                                                       : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0x15U))) 
                                                                     << 0x15U)) 
                                                                 | ((0x100000U 
                                                                     & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241095__Q)
                                                                          ? 
                                                                         (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0x14U)))
                                                                          : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0x14U))) 
                                                                        << 0x14U)) 
                                                                    | ((0x80000U 
                                                                        & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241094__Q)
                                                                             ? 
                                                                            (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0x13U)))
                                                                             : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0x13U))) 
                                                                           << 0x13U)) 
                                                                       | ((0x40000U 
                                                                           & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241093__Q)
                                                                                ? 
                                                                               (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0x12U)))
                                                                                : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0x12U))) 
                                                                              << 0x12U)) 
                                                                          | ((0x20000U 
                                                                              & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241092__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0x11U)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0x11U))) 
                                                                                << 0x11U)) 
                                                                             | ((0x10000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241091__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0x10U)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0x10U))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241090__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0xfU)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0xfU))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241089__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0xeU)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0xeU))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241088__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0xdU)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0xdU))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241087__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0xcU)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0xcU))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241086__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0xbU)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0xbU))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241085__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0xaU)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 0xaU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241084__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 9U)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 9U))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241083__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 8U)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 8U))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241082__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 7U)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 7U))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241081__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 6U)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 6U))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241080__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 5U)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 5U))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241079__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 4U)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 4U))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241078__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 3U)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 3U))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241077__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 2U)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 2U))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241076__Q)
                                                                                 ? 
                                                                                (~ (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 1U)))
                                                                                 : (IData)(
                                                                                (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                                                >> 1U))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241075__Q)
                                                                                 ? 
                                                                                (~ (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out))
                                                                                 : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out)))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void Vco_sim_mac_32___024root___nba_comb__TOP__4(Vco_sim_mac_32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_mac_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_mac_32___024root___nba_comb__TOP__4\n"); );
    // Body
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244269__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_mac_32__DOT__reset)
                     ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244269__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244269__DOT__s4)));
}

VL_INLINE_OPT void Vco_sim_mac_32___024root___nba_comb__TOP__5(Vco_sim_mac_32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_mac_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_mac_32___024root___nba_comb__TOP__5\n"); );
    // Init
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b0__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b0__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b10__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b10__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b11__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b11__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b12__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b12__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b13__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b13__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b14__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b14__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b15__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b15__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b16__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b16__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b17__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b17__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b18__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b18__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b19__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b19__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b1__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b1__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b20__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b20__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b21__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b21__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b22__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b22__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b23__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b23__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b24__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b24__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b25__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b25__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b26__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b26__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b27__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b27__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b28__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b28__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b29__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b29__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b2__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b2__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b3__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b3__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b4__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b4__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b5__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b5__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b6__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b6__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b7__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b7__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b8__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b8__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b9__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b9__05d__02egenblk1__02emy_adder__COUT = 0;
    // Body
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b29__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x20000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 0x1dU)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                   >> 0x1dU))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b28__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x10000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 0x1cU)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                   >> 0x1cU))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b27__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x8000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 0x1bU)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                   >> 0x1bU))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b26__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x4000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 0x1aU)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                   >> 0x1aU))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b25__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x2000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 0x19U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                   >> 0x19U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b24__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x1000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 0x18U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                   >> 0x18U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b23__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x800000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 0x17U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                   >> 0x17U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b22__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x400000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 0x16U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                   >> 0x16U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b21__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x200000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 0x15U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                   >> 0x15U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b20__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x100000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 0x14U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                   >> 0x14U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b19__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x80000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 0x13U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                   >> 0x13U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b18__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x40000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 0x12U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                   >> 0x12U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b17__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x20000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 0x11U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                   >> 0x11U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b16__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x10000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 0x10U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                   >> 0x10U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b15__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x8000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 0xfU)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0xfU))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b14__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x4000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 0xeU)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0xeU))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b13__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x2000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 0xdU)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0xdU))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b12__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x1000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 0xcU)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0xcU))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b11__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x800U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 0xbU)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0xbU))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b10__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x400U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 0xaU)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                  >> 0xaU))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b9__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x200U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 9U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                >> 9U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b8__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x100U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 8U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                >> 8U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b7__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x80U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 7U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                >> 7U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b6__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x40U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 6U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                >> 6U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b5__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x20U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 5U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                >> 5U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b4__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x10U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 4U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                >> 4U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b3__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((8U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 3U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                >> 3U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b2__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((4U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 2U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                >> 2U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b1__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((2U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                             >> 1U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                                >> 1U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b0__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((1U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)
                  ? (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC)
                  : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
        = ((0x180000000ULL & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC) 
           | (IData)((IData)((((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b29__05d__02egenblk1__02emy_adder__COUT) 
                               << 0x1eU) | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b28__05d__02egenblk1__02emy_adder__COUT) 
                                             << 0x1dU) 
                                            | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b27__05d__02egenblk1__02emy_adder__COUT) 
                                                << 0x1cU) 
                                               | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b26__05d__02egenblk1__02emy_adder__COUT) 
                                                   << 0x1bU) 
                                                  | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b25__05d__02egenblk1__02emy_adder__COUT) 
                                                      << 0x1aU) 
                                                     | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b24__05d__02egenblk1__02emy_adder__COUT) 
                                                         << 0x19U) 
                                                        | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b23__05d__02egenblk1__02emy_adder__COUT) 
                                                            << 0x18U) 
                                                           | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b22__05d__02egenblk1__02emy_adder__COUT) 
                                                               << 0x17U) 
                                                              | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b21__05d__02egenblk1__02emy_adder__COUT) 
                                                                  << 0x16U) 
                                                                 | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b20__05d__02egenblk1__02emy_adder__COUT) 
                                                                     << 0x15U) 
                                                                    | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b19__05d__02egenblk1__02emy_adder__COUT) 
                                                                        << 0x14U) 
                                                                       | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b18__05d__02egenblk1__02emy_adder__COUT) 
                                                                           << 0x13U) 
                                                                          | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b17__05d__02egenblk1__02emy_adder__COUT) 
                                                                              << 0x12U) 
                                                                             | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b16__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 0x11U) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b15__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 0x10U) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b14__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 0xfU) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b13__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 0xeU) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b12__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 0xdU) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b11__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 0xcU) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b10__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 0xbU) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b9__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 0xaU) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b8__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 9U) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b7__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 8U) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b6__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 7U) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b5__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 6U) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b4__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 5U) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b3__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 4U) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b2__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 3U) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b1__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 2U) 
                                                                                | ((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02egenblk1__02eslice__05b0__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 1U)))))))))))))))))))))))))))))))));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY 
        = ((0xc0000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eY) 
           | (0x3fffffffU & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC) 
                             ^ vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eS)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244268__DOT__s2 
        = ((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                          >> 0x1eU))) ? ((1U & (IData)(
                                                       (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                                        >> 0x1eU)))
                                          ? 4U : 1U)
            : ((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                              >> 0x1eU))) ? 1U : 4U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244268__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241073__Q)
                  ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244268__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244268__DOT__s2)));
}

VL_INLINE_OPT void Vco_sim_mac_32___024root___nba_comb__TOP__6(Vco_sim_mac_32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_mac_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_mac_32___024root___nba_comb__TOP__6\n"); );
    // Body
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244053__DOT__s3 
        = (0xffU & ((IData)(vlSelf->co_sim_mac_32__DOT__reset)
                     ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244053__DOT__s4) 
                        >> 8U) : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244053__DOT__s4)));
}

VL_INLINE_OPT void Vco_sim_mac_32___024root___nba_comb__TOP__7(Vco_sim_mac_32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_mac_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_mac_32___024root___nba_comb__TOP__7\n"); );
    // Init
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b0__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b0__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b10__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b10__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b11__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b11__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b12__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b12__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b13__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b13__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b14__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b14__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b15__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b15__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b16__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b16__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b17__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b17__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b18__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b18__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b19__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b19__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b1__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b1__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b20__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b20__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b21__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b21__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b22__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b22__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b23__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b23__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b24__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b24__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b25__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b25__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b26__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b26__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b27__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b27__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b28__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b28__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b29__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b29__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b2__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b2__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b3__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b3__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b4__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b4__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b5__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b5__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b6__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b6__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b7__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b7__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b8__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b8__05d__02egenblk1__02emy_adder__COUT = 0;
    CData/*0:0*/ co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b9__05d__02egenblk1__02emy_adder__COUT;
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b9__05d__02egenblk1__02emy_adder__COUT = 0;
    // Body
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b29__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x20000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 0x1dU)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                   >> 0x1dU))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b28__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x10000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 0x1cU)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                   >> 0x1cU))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b27__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x8000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 0x1bU)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                   >> 0x1bU))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b26__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x4000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 0x1aU)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                   >> 0x1aU))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b25__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x2000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 0x19U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                   >> 0x19U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b24__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x1000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 0x18U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                   >> 0x18U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b23__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x800000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 0x17U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                   >> 0x17U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b22__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x400000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 0x16U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                   >> 0x16U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b21__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x200000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 0x15U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                   >> 0x15U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b20__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x100000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 0x14U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                   >> 0x14U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b19__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x80000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 0x13U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                   >> 0x13U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b18__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x40000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 0x12U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                   >> 0x12U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b17__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x20000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 0x11U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                   >> 0x11U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b16__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x10000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 0x10U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                   >> 0x10U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b15__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x8000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 0xfU)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0xfU))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b14__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x4000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 0xeU)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0xeU))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b13__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x2000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 0xdU)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0xdU))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b12__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x1000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 0xcU)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0xcU))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b11__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x800U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 0xbU)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0xbU))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b10__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x400U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 0xaU)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                  >> 0xaU))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b9__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x200U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 9U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                >> 9U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b8__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x100U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 8U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                >> 8U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b7__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x80U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 7U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                >> 7U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b6__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x40U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 6U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                >> 6U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b5__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x20U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 5U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                >> 5U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b4__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((0x10U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 4U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                >> 4U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b3__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((8U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 3U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                >> 3U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b2__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((4U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 2U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                >> 2U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b1__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((2U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                             >> 1U)) : (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                                >> 1U))));
    co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b0__05d__02egenblk1__02emy_adder__COUT 
        = (1U & ((1U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)
                  ? (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC)
                  : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
        = ((0x180000000ULL & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC) 
           | (IData)((IData)((((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b29__05d__02egenblk1__02emy_adder__COUT) 
                               << 0x1eU) | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b28__05d__02egenblk1__02emy_adder__COUT) 
                                             << 0x1dU) 
                                            | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b27__05d__02egenblk1__02emy_adder__COUT) 
                                                << 0x1cU) 
                                               | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b26__05d__02egenblk1__02emy_adder__COUT) 
                                                   << 0x1bU) 
                                                  | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b25__05d__02egenblk1__02emy_adder__COUT) 
                                                      << 0x1aU) 
                                                     | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b24__05d__02egenblk1__02emy_adder__COUT) 
                                                         << 0x19U) 
                                                        | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b23__05d__02egenblk1__02emy_adder__COUT) 
                                                            << 0x18U) 
                                                           | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b22__05d__02egenblk1__02emy_adder__COUT) 
                                                               << 0x17U) 
                                                              | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b21__05d__02egenblk1__02emy_adder__COUT) 
                                                                  << 0x16U) 
                                                                 | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b20__05d__02egenblk1__02emy_adder__COUT) 
                                                                     << 0x15U) 
                                                                    | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b19__05d__02egenblk1__02emy_adder__COUT) 
                                                                        << 0x14U) 
                                                                       | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b18__05d__02egenblk1__02emy_adder__COUT) 
                                                                           << 0x13U) 
                                                                          | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b17__05d__02egenblk1__02emy_adder__COUT) 
                                                                              << 0x12U) 
                                                                             | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b16__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 0x11U) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b15__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 0x10U) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b14__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 0xfU) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b13__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 0xeU) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b12__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 0xdU) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b11__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 0xcU) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b10__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 0xbU) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b9__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 0xaU) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b8__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 9U) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b7__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 8U) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b6__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 7U) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b5__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 6U) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b4__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 5U) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b3__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 4U) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b2__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 3U) 
                                                                                | (((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b1__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 2U) 
                                                                                | ((IData)(co_sim_mac_32__DOT__netlist__DOT____Vcellout____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02egenblk1__02eslice__05b0__05d__02egenblk1__02emy_adder__COUT) 
                                                                                << 1U)))))))))))))))))))))))))))))))));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY 
        = ((0xc0000000U & vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eY) 
           | (0x3fffffffU & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC) 
                             ^ vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eS)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244054__DOT__s2 
        = ((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                          >> 0x1eU))) ? ((1U & (IData)(
                                                       (vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                                        >> 0x1eU)))
                                          ? 4U : 1U)
            : ((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                              >> 0x1eU))) ? 1U : 4U));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244054__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____Vcellout____024abc__0241042__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241105__Q)
                  ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244054__DOT__s2) 
                     >> 2U) : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244054__DOT__s2)));
}

VL_INLINE_OPT void Vco_sim_mac_32___024root___nba_comb__TOP__8(Vco_sim_mac_32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_mac_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_mac_32___024root___nba_comb__TOP__8\n"); );
    // Body
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244269__DOT__s2 
        = (0xfU & ((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02454__02eC 
                                  >> 0x1eU))) ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244269__DOT__s3) 
                                                 >> 4U)
                    : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244269__DOT__s3)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244269__DOT__s1 
        = (3U & ((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5__DOT__z_out 
                                >> 0x1eU))) ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244269__DOT__s2) 
                                               >> 2U)
                  : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244269__DOT__s2)));
}

VL_INLINE_OPT void Vco_sim_mac_32___024root___nba_comb__TOP__9(Vco_sim_mac_32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_mac_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_mac_32___024root___nba_comb__TOP__9\n"); );
    // Body
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244053__DOT__s2 
        = (0xfU & ((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02457__02eC 
                                  >> 0x1eU))) ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244053__DOT__s3) 
                                                 >> 4U)
                    : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244053__DOT__s3)));
    vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244053__DOT__s1 
        = (3U & ((1U & (IData)((vlSelf->co_sim_mac_32__DOT__netlist__DOT____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE__DOT__z_out 
                                >> 0x1eU))) ? ((IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244053__DOT__s2) 
                                               >> 2U)
                  : (IData)(vlSelf->co_sim_mac_32__DOT__netlist__DOT____024abc__0244052__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244053__DOT__s2)));
}

void Vco_sim_mac_32___024root___timing_resume(Vco_sim_mac_32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_mac_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_mac_32___024root___timing_resume\n"); );
    // Body
    if ((0x100ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hf4c4dc1d__0.resume("@(negedge co_sim_mac_32.clock0)");
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vco_sim_mac_32___024root___timing_commit(Vco_sim_mac_32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_mac_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_mac_32___024root___timing_commit\n"); );
    // Body
    if ((! (0x100ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hf4c4dc1d__0.commit("@(negedge co_sim_mac_32.clock0)");
    }
}

void Vco_sim_mac_32___024root___eval_triggers__act(Vco_sim_mac_32___024root* vlSelf);

bool Vco_sim_mac_32___024root___eval_phase__act(Vco_sim_mac_32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_mac_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_mac_32___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<9> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vco_sim_mac_32___024root___eval_triggers__act(vlSelf);
    Vco_sim_mac_32___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vco_sim_mac_32___024root___timing_resume(vlSelf);
        Vco_sim_mac_32___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vco_sim_mac_32___024root___eval_phase__nba(Vco_sim_mac_32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_mac_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_mac_32___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vco_sim_mac_32___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_mac_32___024root___dump_triggers__nba(Vco_sim_mac_32___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_mac_32___024root___dump_triggers__act(Vco_sim_mac_32___024root* vlSelf);
#endif  // VL_DEBUG

void Vco_sim_mac_32___024root___eval(Vco_sim_mac_32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_mac_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_mac_32___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vco_sim_mac_32___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/nfs_scratch/scratch/CompilerValidation/abdul_hameed/25march/EDA-/mac_32/results_dir/.././sim/co_sim_tb/co_sim_mac_32.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vco_sim_mac_32___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/nfs_scratch/scratch/CompilerValidation/abdul_hameed/25march/EDA-/mac_32/results_dir/.././sim/co_sim_tb/co_sim_mac_32.v", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vco_sim_mac_32___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vco_sim_mac_32___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vco_sim_mac_32___024root___eval_debug_assertions(Vco_sim_mac_32___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_mac_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_mac_32___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
