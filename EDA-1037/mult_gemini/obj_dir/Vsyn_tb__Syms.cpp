// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vsyn_tb__Syms.h"
#include "Vsyn_tb.h"
#include "Vsyn_tb___024root.h"

// FUNCTIONS
Vsyn_tb__Syms::~Vsyn_tb__Syms()
{
}

Vsyn_tb__Syms::Vsyn_tb__Syms(VerilatedContext* contextp, const char* namep, Vsyn_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
