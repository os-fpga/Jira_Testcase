// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vco_sim_b_registered_input_to_output_new_primitive.h for the primary calling header

#ifndef VERILATED_VCO_SIM_B_REGISTERED_INPUT_TO_OUTPUT_NEW_PRIMITIVE___024ROOT_H_
#define VERILATED_VCO_SIM_B_REGISTERED_INPUT_TO_OUTPUT_NEW_PRIMITIVE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vco_sim_b_registered_input_to_output_new_primitive__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vco_sim_b_registered_input_to_output_new_primitive___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ co_sim_b_registered_input_to_output_new_primitive__DOT__clk;
    CData/*0:0*/ co_sim_b_registered_input_to_output_new_primitive__DOT__reset;
    CData/*0:0*/ co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__subtract_reg;
    CData/*5:0*/ co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__acc_fir_reg;
    CData/*2:0*/ co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__feedback_reg;
    CData/*5:0*/ co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__shift_right_reg1;
    CData/*5:0*/ co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__shift_right_reg2;
    CData/*0:0*/ co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__round_reg1;
    CData/*0:0*/ co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__round_reg2;
    CData/*0:0*/ co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__saturate_reg1;
    CData/*0:0*/ co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__saturate_reg2;
    CData/*0:0*/ co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__load_acc_reg;
    CData/*0:0*/ co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__unsigned_a_reg;
    CData/*0:0*/ co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__unsigned_b_reg;
    CData/*0:0*/ co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__subtract_int;
    CData/*5:0*/ co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__acc_fir_int;
    CData/*2:0*/ co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__feedback_int;
    CData/*5:0*/ co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__shift_right_int;
    CData/*0:0*/ co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__round_int;
    CData/*0:0*/ co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__saturate_int;
    CData/*0:0*/ co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__load_acc_int;
    CData/*0:0*/ co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__unsigned_a_int;
    CData/*0:0*/ co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__unsigned_b_int;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__co_sim_b_registered_input_to_output_new_primitive__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__co_sim_b_registered_input_to_output_new_primitive__DOT__reset__0;
    CData/*0:0*/ __VactContinue;
    IData/*19:0*/ co_sim_b_registered_input_to_output_new_primitive__DOT__a;
    IData/*17:0*/ co_sim_b_registered_input_to_output_new_primitive__DOT__b;
    IData/*17:0*/ co_sim_b_registered_input_to_output_new_primitive__DOT__dly_b_netlist;
    IData/*31:0*/ co_sim_b_registered_input_to_output_new_primitive__DOT__mismatch;
    IData/*17:0*/ co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT____024iopadmap__024dly_b;
    IData/*19:0*/ co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__a_reg;
    IData/*17:0*/ co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__b_reg;
    IData/*19:0*/ co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__a_int;
    IData/*17:0*/ co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__b_int;
    IData/*19:0*/ co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__mult_a;
    IData/*17:0*/ co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__mult_b;
    IData/*31:0*/ __VactIterCount;
    QData/*37:0*/ co_sim_b_registered_input_to_output_new_primitive__DOT__expected_out;
    QData/*63:0*/ co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__accumulator;
    QData/*63:0*/ co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__add_sub_in;
    QData/*63:0*/ co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__mult_out;
    QData/*63:0*/ co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__add_sub_out;
    QData/*63:0*/ co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__pre_shift;
    QData/*63:0*/ co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__shift_right;
    QData/*63:0*/ co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__round;
    QData/*37:0*/ co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__saturate;
    QData/*37:0*/ co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out;
    QData/*37:0*/ co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out_reg;
    VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h23a7e6cf__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vco_sim_b_registered_input_to_output_new_primitive__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vco_sim_b_registered_input_to_output_new_primitive___024root(Vco_sim_b_registered_input_to_output_new_primitive__Syms* symsp, const char* v__name);
    ~Vco_sim_b_registered_input_to_output_new_primitive___024root();
    VL_UNCOPYABLE(Vco_sim_b_registered_input_to_output_new_primitive___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
