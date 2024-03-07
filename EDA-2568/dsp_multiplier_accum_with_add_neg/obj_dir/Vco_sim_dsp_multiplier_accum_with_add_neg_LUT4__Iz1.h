// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vco_sim_dsp_multiplier_accum_with_add_neg.h for the primary calling header

#ifndef VERILATED_VCO_SIM_DSP_MULTIPLIER_ACCUM_WITH_ADD_NEG_LUT4__IZ1_H_
#define VERILATED_VCO_SIM_DSP_MULTIPLIER_ACCUM_WITH_ADD_NEG_LUT4__IZ1_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vco_sim_dsp_multiplier_accum_with_add_neg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vco_sim_dsp_multiplier_accum_with_add_neg_LUT4__Iz1 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(A,3,0);
    VL_OUT8(Y,0,0);
    CData/*0:0*/ __PVT__mux__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__bm0_out;
    CData/*0:0*/ __PVT__mux__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__bm1_out;
    CData/*0:0*/ __PVT__mux__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__bm0_out;
    CData/*0:0*/ __PVT__mux__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__bm1_out;
    CData/*0:0*/ __PVT__mux__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__bm0_out;
    CData/*0:0*/ __PVT__mux__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__bm1_out;
    CData/*0:0*/ __PVT__mux__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__bm0_out;
    CData/*0:0*/ __PVT__mux__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__bm1_out;
    CData/*0:0*/ __PVT__mux__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__bm0_out;
    CData/*0:0*/ __PVT__mux__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__bm1_out;
    CData/*0:0*/ __PVT__mux__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__bm0_out;
    CData/*0:0*/ __PVT__mux__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__bm1_out;
    CData/*0:0*/ __PVT__mux__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__bm0_out;
    CData/*0:0*/ __PVT__mux__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__bm1_out;
    CData/*0:0*/ __PVT__mux__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__bm0_out;
    CData/*0:0*/ __PVT__mux__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__bm1_out;

    // INTERNAL VARIABLES
    Vco_sim_dsp_multiplier_accum_with_add_neg__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vco_sim_dsp_multiplier_accum_with_add_neg_LUT4__Iz1(Vco_sim_dsp_multiplier_accum_with_add_neg__Syms* symsp, const char* v__name);
    ~Vco_sim_dsp_multiplier_accum_with_add_neg_LUT4__Iz1();
    VL_UNCOPYABLE(Vco_sim_dsp_multiplier_accum_with_add_neg_LUT4__Iz1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
