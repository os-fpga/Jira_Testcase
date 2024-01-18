// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsyn_tb.h for the primary calling header

#ifndef VERILATED_VSYN_TB___024ROOT_H_
#define VERILATED_VSYN_TB___024ROOT_H_  // guard

#include "verilated.h"

class Vsyn_tb__Syms;

class Vsyn_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    CData/*0:0*/ syn_tb__DOT__rtl_model__DOT__lut___024abc__024379__024techmap__VhsheuR8keZROz9PaIm4SC3xs5hR2ngL9uw2TXWToki1;
    VL_IN8(rstn,0,0);
    VL_OUT8(rtl_q,0,0);
    CData/*0:0*/ syn_tb__DOT__d;
    CData/*0:0*/ syn_tb__DOT__rtl_model__DOT__dffr_q_output_0_0;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__syn_tb__DOT__rtl_model__DOT__lut___024abc__024379__024techmap__VhsheuR8keZROz9PaIm4SC3xs5hR2ngL9uw2TXWToki1;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ syn_tb__DOT__state;
    IData/*31:0*/ __Vdly__syn_tb__DOT__state;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsyn_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsyn_tb___024root(Vsyn_tb__Syms* symsp, const char* name);
    ~Vsyn_tb___024root();
    VL_UNCOPYABLE(Vsyn_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
