// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2.h for the primary calling header

#ifndef VERILATED_VCO_SIM_ADD_SHIFTED_A_TO_MULT_OUTPUT_COEFF1_INPUT_REGISTERED_DSP19X2___024ROOT_H_
#define VERILATED_VCO_SIM_ADD_SHIFTED_A_TO_MULT_OUTPUT_COEFF1_INPUT_REGISTERED_DSP19X2___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__clk;
        CData/*0:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__reset;
        CData/*4:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__acc_fir;
        CData/*0:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__subtract_reg;
        CData/*4:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__acc_fir_reg;
        CData/*2:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__feedback_reg;
        CData/*4:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__shift_right_reg1;
        CData/*4:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__shift_right_reg2;
        CData/*0:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__round_reg1;
        CData/*0:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__round_reg2;
        CData/*0:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__saturate_reg1;
        CData/*0:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__saturate_reg2;
        CData/*0:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__load_acc_reg;
        CData/*0:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__unsigned_a_reg;
        CData/*0:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__unsigned_b_reg;
        CData/*0:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__subtract_int;
        CData/*4:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__acc_fir_int;
        CData/*2:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__feedback_int;
        CData/*4:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__shift_right_int;
        CData/*0:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__round_int;
        CData/*0:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__saturate_int;
        CData/*0:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__load_acc_int;
        CData/*0:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__unsigned_a_int;
        CData/*0:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__unsigned_b_int;
        CData/*0:0*/ __Vtrigprevexpr___TOP__co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__reset__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__acc_fir__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*9:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a1_reg;
        SData/*9:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a2_reg;
        SData/*8:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__b1_reg;
        SData/*8:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__b2_reg;
        SData/*9:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a1_int;
        SData/*9:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a2_int;
        SData/*8:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__b1_int;
        SData/*8:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__b2_int;
        SData/*8:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__dly_b1;
        SData/*8:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__dly_b2;
        SData/*9:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_a1;
        SData/*9:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_a2;
        SData/*8:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_b1;
        SData/*8:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_b2;
        IData/*19:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a;
        IData/*17:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b;
        IData/*31:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__mult1;
        IData/*31:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__mult2;
        IData/*31:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__mismatch;
        IData/*31:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_out1;
        IData/*31:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_out2;
        IData/*31:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__shift_right_f0;
        IData/*31:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__shift_right_f1;
        IData/*31:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__round_f0;
        IData/*31:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__round_f1;
        IData/*18:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__saturate_f0;
        IData/*18:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__saturate_f1;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_in;
        QData/*63:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_out;
        QData/*37:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__expected_out;
        QData/*63:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__accumulator;
        QData/*63:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__add_sub_in;
        QData/*63:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_out;
    };
    struct {
        QData/*63:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__add_sub_out;
        QData/*63:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__pre_shift;
        QData/*37:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out;
        QData/*37:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out_reg;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hfedab95c__0;
    VlTriggerScheduler __VtrigSched_hc605704e__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root(Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__Syms* symsp, const char* v__name);
    ~Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root();
    VL_UNCOPYABLE(Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
