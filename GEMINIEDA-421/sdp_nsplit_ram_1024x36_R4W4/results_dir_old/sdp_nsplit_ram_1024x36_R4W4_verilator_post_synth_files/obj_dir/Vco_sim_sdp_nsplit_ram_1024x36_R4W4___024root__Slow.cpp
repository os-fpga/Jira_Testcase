// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_sdp_nsplit_ram_1024x36_R4W4.h for the primary calling header

#include "verilated.h"

#include "Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms.h"
#include "Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root.h"

void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___ctor_var_reset(Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* vlSelf);

Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root::Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root(Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root___ctor_var_reset(this);
}

void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root::~Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root() {
}
