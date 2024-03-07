// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_dsp_multiplier_accum_with_add_neg.h for the primary calling header

#include "Vco_sim_dsp_multiplier_accum_with_add_neg__pch.h"
#include "Vco_sim_dsp_multiplier_accum_with_add_neg_LUT3__Iz2.h"
#include "Vco_sim_dsp_multiplier_accum_with_add_neg__Syms.h"

void Vco_sim_dsp_multiplier_accum_with_add_neg_LUT3__Iz2___ctor_var_reset(Vco_sim_dsp_multiplier_accum_with_add_neg_LUT3__Iz2* vlSelf);

Vco_sim_dsp_multiplier_accum_with_add_neg_LUT3__Iz2::Vco_sim_dsp_multiplier_accum_with_add_neg_LUT3__Iz2(Vco_sim_dsp_multiplier_accum_with_add_neg__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vco_sim_dsp_multiplier_accum_with_add_neg_LUT3__Iz2___ctor_var_reset(this);
}

void Vco_sim_dsp_multiplier_accum_with_add_neg_LUT3__Iz2::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vco_sim_dsp_multiplier_accum_with_add_neg_LUT3__Iz2::~Vco_sim_dsp_multiplier_accum_with_add_neg_LUT3__Iz2() {
}
