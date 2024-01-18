// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsyn_tb.h for the primary calling header

#include "verilated.h"

#include "Vsyn_tb__Syms.h"
#include "Vsyn_tb___024root.h"

void Vsyn_tb___024root___ctor_var_reset(Vsyn_tb___024root* vlSelf);

Vsyn_tb___024root::Vsyn_tb___024root(Vsyn_tb__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsyn_tb___024root___ctor_var_reset(this);
}

void Vsyn_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vsyn_tb___024root::~Vsyn_tb___024root() {
}
