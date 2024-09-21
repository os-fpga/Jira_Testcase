// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCO_SIM_SYN2__SYMS_H_
#define VERILATED_VCO_SIM_SYN2__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_fst_c.h"

// INCLUDE MODEL CLASS

#include "Vco_sim_syn2.h"

// INCLUDE MODULE CLASSES
#include "Vco_sim_syn2___024root.h"
#include "Vco_sim_syn2_fpu_mul.h"
#include "Vco_sim_syn2_fpu_add.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vco_sim_syn2__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vco_sim_syn2* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedFstC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vco_sim_syn2___024root         TOP;
    Vco_sim_syn2_fpu_add           TOP__co_sim_syn2__DOT__golden__DOT__add1_add;
    Vco_sim_syn2_fpu_add           TOP__co_sim_syn2__DOT__golden__DOT__add2_add;
    Vco_sim_syn2_fpu_add           TOP__co_sim_syn2__DOT__golden__DOT__add3_add;
    Vco_sim_syn2_fpu_add           TOP__co_sim_syn2__DOT__golden__DOT__add4_add;
    Vco_sim_syn2_fpu_add           TOP__co_sim_syn2__DOT__golden__DOT__add5_add;
    Vco_sim_syn2_fpu_mul           TOP__co_sim_syn2__DOT__golden__DOT__x1_mul;
    Vco_sim_syn2_fpu_mul           TOP__co_sim_syn2__DOT__golden__DOT__x2_mul;
    Vco_sim_syn2_fpu_mul           TOP__co_sim_syn2__DOT__golden__DOT__x3_mul;
    Vco_sim_syn2_fpu_mul           TOP__co_sim_syn2__DOT__golden__DOT__x4_mul;

    // SCOPE NAMES
    VerilatedScope __Vscope_co_sim_syn2;
    VerilatedScope __Vscope_co_sim_syn2__golden__add1_add__u1;
    VerilatedScope __Vscope_co_sim_syn2__golden__add2_add__u1;
    VerilatedScope __Vscope_co_sim_syn2__golden__add3_add__u1;
    VerilatedScope __Vscope_co_sim_syn2__golden__add4_add__u1;
    VerilatedScope __Vscope_co_sim_syn2__golden__add5_add__u1;
    VerilatedScope __Vscope_co_sim_syn2__route_net__fabric_instance__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__genblk1__DSP38_MULT_REGIN_REGOUT;
    VerilatedScope __Vscope_co_sim_syn2__route_net__fabric_instance__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__genblk1__DSP38_MULT_REGIN_REGOUT;
    VerilatedScope __Vscope_co_sim_syn2__route_net__fabric_instance__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__genblk1__DSP38_MULT_REGIN_REGOUT;
    VerilatedScope __Vscope_co_sim_syn2__route_net__fabric_instance__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__genblk1__DSP38_MULT_REGIN_REGOUT;

    // CONSTRUCTORS
    Vco_sim_syn2__Syms(VerilatedContext* contextp, const char* namep, Vco_sim_syn2* modelp);
    ~Vco_sim_syn2__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
