// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpost_pnr_wrapper_lut_ff_mux_post_synth.h for the primary calling header

#ifndef VERILATED_VPOST_PNR_WRAPPER_LUT_FF_MUX_POST_SYNTH___024ROOT_H_
#define VERILATED_VPOST_PNR_WRAPPER_LUT_FF_MUX_POST_SYNTH___024ROOT_H_  // guard

#include "verilated.h"


class Vpost_pnr_wrapper_lut_ff_mux_post_synth__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(in,3,0);
    VL_IN8(rst,0,0);
    VL_OUT8(Q,0,0);
    VL_IN8(mux_sel,0,0);
    CData/*0:0*/ lut_ff_mux_post_route__DOT____024auto__024rs_design_edit__02ecc__03a656__03aexecute__024649__DOT__dffre___024iopadmap__024Q_output_0_0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vpost_pnr_wrapper_lut_ff_mux_post_synth__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root(Vpost_pnr_wrapper_lut_ff_mux_post_synth__Syms* symsp, const char* v__name);
    ~Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root();
    VL_UNCOPYABLE(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
