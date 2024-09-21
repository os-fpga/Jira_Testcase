// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_syn2.h for the primary calling header

#include "Vco_sim_syn2__pch.h"
#include "Vco_sim_syn2__Syms.h"
#include "Vco_sim_syn2_fpu_mul.h"

void Vco_sim_syn2_fpu_mul___ctor_var_reset(Vco_sim_syn2_fpu_mul* vlSelf);

Vco_sim_syn2_fpu_mul::Vco_sim_syn2_fpu_mul(Vco_sim_syn2__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vco_sim_syn2_fpu_mul___ctor_var_reset(this);
}

void Vco_sim_syn2_fpu_mul::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vco_sim_syn2_fpu_mul::~Vco_sim_syn2_fpu_mul() {
}
