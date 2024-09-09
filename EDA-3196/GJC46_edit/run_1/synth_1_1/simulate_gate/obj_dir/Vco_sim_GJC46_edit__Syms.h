// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCO_SIM_GJC46_EDIT__SYMS_H_
#define VERILATED_VCO_SIM_GJC46_EDIT__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_fst_c.h"

// INCLUDE MODEL CLASS

#include "Vco_sim_GJC46_edit.h"

// INCLUDE MODULE CLASSES
#include "Vco_sim_GJC46_edit___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vco_sim_GJC46_edit__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vco_sim_GJC46_edit* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedFstC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vco_sim_GJC46_edit___024root   TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_co_sim_GJC46_edit;
    VerilatedScope __Vscope_co_sim_GJC46_edit__golden__clk_pll_gen0;
    VerilatedScope __Vscope_co_sim_GJC46_edit__synth_net__clk_pll_gen0;

    // CONSTRUCTORS
    Vco_sim_GJC46_edit__Syms(VerilatedContext* contextp, const char* namep, Vco_sim_GJC46_edit* modelp);
    ~Vco_sim_GJC46_edit__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
