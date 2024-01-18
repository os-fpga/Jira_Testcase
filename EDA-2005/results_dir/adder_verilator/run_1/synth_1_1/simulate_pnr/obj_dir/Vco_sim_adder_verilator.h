// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VCO_SIM_ADDER_VERILATOR_H_
#define VERILATED_VCO_SIM_ADDER_VERILATOR_H_  // guard

#include "systemc.h"
#include "verilated_sc.h"
#include "verilated.h"

class Vco_sim_adder_verilator__Syms;
class Vco_sim_adder_verilator___024root;
class VerilatedFstSc;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vco_sim_adder_verilator VL_NOT_FINAL : public ::sc_core::sc_module, public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vco_sim_adder_verilator__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    sc_event trigger_eval;

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vco_sim_adder_verilator___024root* const rootp;

    // CONSTRUCTORS
    SC_CTOR(Vco_sim_adder_verilator);
    virtual ~Vco_sim_adder_verilator();
  private:
    VL_UNCOPYABLE(Vco_sim_adder_verilator);  ///< Copying not allowed

  public:
    // API METHODS
  private:
    void eval();
    void eval_sens();
    void eval_step();
  public:
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedFstC* tfp, int levels, int options = 0);
    /// SC tracing; avoid overloaded virtual function lint warning
    void trace(sc_trace_file* tfp) const override { ::sc_core::sc_module::trace(tfp); }

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
};

#endif  // guard
