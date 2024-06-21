// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCO_SIM_GJC8__SYMS_H_
#define VERILATED_VCO_SIM_GJC8__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_fst_c.h"

// INCLUDE MODEL CLASS

#include "Vco_sim_GJC8.h"

// INCLUDE MODULE CLASSES
#include "Vco_sim_GJC8___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vco_sim_GJC8__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vco_sim_GJC8* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedFstC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vco_sim_GJC8___024root         TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_co_sim_GJC8__golden__dut;
    VerilatedScope __Vscope_co_sim_GJC8__route_net____024auto__024rs_design_edit__02ecc__03a1120__03aexecute__024520__RS_DSP_MULT___024iopadmap__024z__05b37__05d__genblk1__DSP38_MULT;

    // CONSTRUCTORS
    Vco_sim_GJC8__Syms(VerilatedContext* contextp, const char* namep, Vco_sim_GJC8* modelp);
    ~Vco_sim_GJC8__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
