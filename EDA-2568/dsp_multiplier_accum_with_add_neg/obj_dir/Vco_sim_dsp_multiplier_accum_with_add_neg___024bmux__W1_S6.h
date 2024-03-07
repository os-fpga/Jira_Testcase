// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vco_sim_dsp_multiplier_accum_with_add_neg.h for the primary calling header

#ifndef VERILATED_VCO_SIM_DSP_MULTIPLIER_ACCUM_WITH_ADD_NEG___024BMUX__W1_S6_H_
#define VERILATED_VCO_SIM_DSP_MULTIPLIER_ACCUM_WITH_ADD_NEG___024BMUX__W1_S6_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vco_sim_dsp_multiplier_accum_with_add_neg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vco_sim_dsp_multiplier_accum_with_add_neg___024bmux__W1_S6 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(S,5,0);
        VL_OUT8(Y,0,0);
        CData/*0:0*/ __PVT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__bm0_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__bm1_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__bm0_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__bm1_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__bm0_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__bm1_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__bm0_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__bm1_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__bm0_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__bm1_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__bm0_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__bm1_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__bm0_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__bm1_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__bm0_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__bm1_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__bm0_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__bm1_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__bm0_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__bm1_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__bm0_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__bm1_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__bm0_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__bm1_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__bm0_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__bm1_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__bm0_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__bm1_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__bm0_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__bm1_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__bm0_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__bm1_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__bm0_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__bm1_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__bm0_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__bm1_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__bm0_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__bm1_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__bm0_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__bm1_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__bm0_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__bm1_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__bm0_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__bm1_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__bm0_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__bm1_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__bm0_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__bm1_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__bm0_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__bm1_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__bm0_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__bm1_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__bm0_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__bm1_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__bm0_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__bm1_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__bm0_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm0__DOT__bm1_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__bm0_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__muxlogic__DOT__bm1__DOT__bm1_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__bm0_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm0__DOT__bm1_out;
    };
    struct {
        CData/*0:0*/ __PVT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__bm0_out;
        CData/*0:0*/ __PVT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__muxlogic__DOT__bm1__DOT__bm1_out;
        VL_IN64(A,63,0);
    };

    // INTERNAL VARIABLES
    Vco_sim_dsp_multiplier_accum_with_add_neg__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vco_sim_dsp_multiplier_accum_with_add_neg___024bmux__W1_S6(Vco_sim_dsp_multiplier_accum_with_add_neg__Syms* symsp, const char* v__name);
    ~Vco_sim_dsp_multiplier_accum_with_add_neg___024bmux__W1_S6();
    VL_UNCOPYABLE(Vco_sim_dsp_multiplier_accum_with_add_neg___024bmux__W1_S6);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
