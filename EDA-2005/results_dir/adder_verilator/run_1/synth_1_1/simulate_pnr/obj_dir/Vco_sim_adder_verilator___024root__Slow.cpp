// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_adder_verilator.h for the primary calling header

#include "verilated.h"

#include "Vco_sim_adder_verilator__Syms.h"
#include "Vco_sim_adder_verilator__Syms.h"
#include "Vco_sim_adder_verilator___024root.h"

void Vco_sim_adder_verilator___024root___ctor_var_reset(Vco_sim_adder_verilator___024root* vlSelf);

Vco_sim_adder_verilator___024root::Vco_sim_adder_verilator___024root(Vco_sim_adder_verilator__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vco_sim_adder_verilator___024root___ctor_var_reset(this);
}

void Vco_sim_adder_verilator___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vco_sim_adder_verilator___024root::~Vco_sim_adder_verilator___024root() {
}
