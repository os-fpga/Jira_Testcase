// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCO_SIM_ADD_SHIFTED_A_TO_MULT_OUTPUT_COEFF1_INPUT_REGISTERED_DSP19X2__SYMS_H_
#define VERILATED_VCO_SIM_ADD_SHIFTED_A_TO_MULT_OUTPUT_COEFF1_INPUT_REGISTERED_DSP19X2__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_fst_c.h"

// INCLUDE MODEL CLASS

#include "Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2.h"

// INCLUDE MODULE CLASSES
#include "Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedFstC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__netlist__RS_DSP_MULTADD_REGIN_z_out__05b20__05d__genblk1__DSP19X2_MULTADD_REGIN;

    // CONSTRUCTORS
    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__Syms(VerilatedContext* contextp, const char* namep, Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2* modelp);
    ~Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
