// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCO_SIM_SDP_NSPLIT_RAM_1024X36_R4W4__SYMS_H_
#define VERILATED_VCO_SIM_SDP_NSPLIT_RAM_1024X36_R4W4__SYMS_H_  // guard

#include "systemc.h"
#include "verilated_sc.h"
#include "verilated.h"
#include "verilated_vcd_sc.h"

// INCLUDE MODEL CLASS

#include "Vco_sim_sdp_nsplit_ram_1024x36_R4W4.h"

// INCLUDE MODULE CLASSES
#include "Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root.h"

// SYMS CLASS (contains all model state)
class Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdSc* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root TOP;

    // CONSTRUCTORS
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms(VerilatedContext* contextp, const char* namep, Vco_sim_sdp_nsplit_ram_1024x36_R4W4* modelp);
    ~Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDumpOpen();
    void _traceDumpClose();
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
