// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vco_sim_ram_true_reg_addr_dp_1024x32_verilator.h for the primary calling header

#ifndef VERILATED_VCO_SIM_RAM_TRUE_REG_ADDR_DP_1024X32_VERILATOR___024ROOT_H_
#define VERILATED_VCO_SIM_RAM_TRUE_REG_ADDR_DP_1024X32_VERILATOR___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vco_sim_ram_true_reg_addr_dp_1024x32_verilator__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__clk;
    CData/*0:0*/ co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__weA;
    CData/*0:0*/ co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__weB;
    CData/*0:0*/ __Vtrigprevexpr___TOP__co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__addrA;
    SData/*9:0*/ co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__addrB;
    SData/*9:0*/ co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__reg_addrA;
    SData/*9:0*/ co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__reg_addrB;
    IData/*31:0*/ co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__dinA;
    IData/*31:0*/ co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__dinB;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 1024> co_sim_ram_true_reg_addr_dp_1024x32_verilator__DOT__golden__DOT__ram;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h3990b6cd__0;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vco_sim_ram_true_reg_addr_dp_1024x32_verilator__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root(Vco_sim_ram_true_reg_addr_dp_1024x32_verilator__Syms* symsp, const char* v__name);
    ~Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root();
    VL_UNCOPYABLE(Vco_sim_ram_true_reg_addr_dp_1024x32_verilator___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
