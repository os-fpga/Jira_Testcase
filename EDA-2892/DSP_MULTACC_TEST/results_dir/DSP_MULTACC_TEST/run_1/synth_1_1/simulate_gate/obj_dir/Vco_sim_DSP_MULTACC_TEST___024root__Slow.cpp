// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_DSP_MULTACC_TEST.h for the primary calling header

#include "Vco_sim_DSP_MULTACC_TEST__pch.h"
#include "Vco_sim_DSP_MULTACC_TEST__Syms.h"
#include "Vco_sim_DSP_MULTACC_TEST___024root.h"

void Vco_sim_DSP_MULTACC_TEST___024root___ctor_var_reset(Vco_sim_DSP_MULTACC_TEST___024root* vlSelf);

Vco_sim_DSP_MULTACC_TEST___024root::Vco_sim_DSP_MULTACC_TEST___024root(Vco_sim_DSP_MULTACC_TEST__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vco_sim_DSP_MULTACC_TEST___024root___ctor_var_reset(this);
}

void Vco_sim_DSP_MULTACC_TEST___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vco_sim_DSP_MULTACC_TEST___024root::~Vco_sim_DSP_MULTACC_TEST___024root() {
}
