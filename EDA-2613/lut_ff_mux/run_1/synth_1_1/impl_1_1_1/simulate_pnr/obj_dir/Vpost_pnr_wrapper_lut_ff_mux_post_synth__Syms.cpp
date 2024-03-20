// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vpost_pnr_wrapper_lut_ff_mux_post_synth__pch.h"
#include "Vpost_pnr_wrapper_lut_ff_mux_post_synth.h"
#include "Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root.h"

// FUNCTIONS
Vpost_pnr_wrapper_lut_ff_mux_post_synth__Syms::~Vpost_pnr_wrapper_lut_ff_mux_post_synth__Syms()
{
}

Vpost_pnr_wrapper_lut_ff_mux_post_synth__Syms::Vpost_pnr_wrapper_lut_ff_mux_post_synth__Syms(VerilatedContext* contextp, const char* namep, Vpost_pnr_wrapper_lut_ff_mux_post_synth* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(18);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-15);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
