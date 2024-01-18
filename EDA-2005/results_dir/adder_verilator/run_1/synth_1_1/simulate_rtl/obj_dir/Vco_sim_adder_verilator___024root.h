// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vco_sim_adder_verilator.h for the primary calling header

#ifndef VERILATED_VCO_SIM_ADDER_VERILATOR___024ROOT_H_
#define VERILATED_VCO_SIM_ADDER_VERILATOR___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vco_sim_adder_verilator__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vco_sim_adder_verilator___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ co_sim_adder_verilator__DOT__clock;
    CData/*0:0*/ co_sim_adder_verilator__DOT__reset;
    CData/*3:0*/ co_sim_adder_verilator__DOT__a;
    CData/*3:0*/ co_sim_adder_verilator__DOT__b;
    CData/*4:0*/ co_sim_adder_verilator__DOT__sum;
    CData/*0:0*/ __Vtrigprevexpr___TOP__co_sim_adder_verilator__DOT__clock__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h7979c960__0;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vco_sim_adder_verilator__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vco_sim_adder_verilator___024root(Vco_sim_adder_verilator__Syms* symsp, const char* v__name);
    ~Vco_sim_adder_verilator___024root();
    VL_UNCOPYABLE(Vco_sim_adder_verilator___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
