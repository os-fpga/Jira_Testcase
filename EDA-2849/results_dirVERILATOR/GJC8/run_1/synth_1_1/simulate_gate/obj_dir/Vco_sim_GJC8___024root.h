// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vco_sim_GJC8.h for the primary calling header

#ifndef VERILATED_VCO_SIM_GJC8___024ROOT_H_
#define VERILATED_VCO_SIM_GJC8___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vco_sim_GJC8__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vco_sim_GJC8___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__CLK;
        CData/*0:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__RESET;
        CData/*0:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__CLK;
        CData/*0:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__RESET;
        CData/*2:0*/ co_sim_GJC8__DOT__feedback;
        CData/*0:0*/ co_sim_GJC8__DOT__unsigned_a;
        CData/*0:0*/ co_sim_GJC8__DOT__unsigned_b;
        CData/*5:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__ACC_FIR;
        CData/*0:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__LOAD_ACC;
        CData/*0:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__SATURATE;
        CData/*5:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__SHIFT_RIGHT;
        CData/*0:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__ROUND;
        CData/*0:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__SUBTRACT;
        CData/*0:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__subtract_reg;
        CData/*5:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__acc_fir_reg;
        CData/*2:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__feedback_reg;
        CData/*5:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__shift_right_reg1;
        CData/*5:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__shift_right_reg2;
        CData/*0:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__round_reg1;
        CData/*0:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__round_reg2;
        CData/*0:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__saturate_reg1;
        CData/*0:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__saturate_reg2;
        CData/*0:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__load_acc_reg;
        CData/*0:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__unsigned_a_reg;
        CData/*0:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__unsigned_b_reg;
        CData/*0:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__subtract_int;
        CData/*5:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__acc_fir_int;
        CData/*2:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__feedback_int;
        CData/*5:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__shift_right_int;
        CData/*0:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__round_int;
        CData/*0:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__saturate_int;
        CData/*0:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__load_acc_int;
        CData/*0:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__unsigned_a_int;
        CData/*0:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__unsigned_b_int;
        CData/*5:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__ACC_FIR;
        CData/*0:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__LOAD_ACC;
        CData/*0:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__SATURATE;
        CData/*5:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__SHIFT_RIGHT;
        CData/*0:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__ROUND;
        CData/*0:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__SUBTRACT;
        CData/*0:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__subtract_reg;
        CData/*5:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__acc_fir_reg;
        CData/*2:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__feedback_reg;
        CData/*5:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__shift_right_reg1;
        CData/*5:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__shift_right_reg2;
        CData/*0:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__round_reg1;
        CData/*0:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__round_reg2;
        CData/*0:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__saturate_reg1;
        CData/*0:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__saturate_reg2;
        CData/*0:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__load_acc_reg;
        CData/*0:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__unsigned_a_reg;
        CData/*0:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__unsigned_b_reg;
        CData/*0:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__subtract_int;
        CData/*5:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__acc_fir_int;
        CData/*2:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__feedback_int;
        CData/*5:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__shift_right_int;
        CData/*0:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__round_int;
        CData/*0:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__saturate_int;
        CData/*0:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__load_acc_int;
        CData/*0:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__unsigned_a_int;
        CData/*0:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__unsigned_b_int;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__co_sim_GJC8__DOT__golden__DOT__dut__DOT__CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__co_sim_GJC8__DOT__golden__DOT__dut__DOT__RESET__0;
    };
    struct {
        CData/*5:0*/ __Vtrigprevexpr___TOP__co_sim_GJC8__DOT__golden__DOT__dut__DOT__ACC_FIR__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__RESET__0;
        CData/*5:0*/ __Vtrigprevexpr___TOP__co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__ACC_FIR__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        IData/*19:0*/ co_sim_GJC8__DOT__a;
        IData/*17:0*/ co_sim_GJC8__DOT__b;
        IData/*31:0*/ co_sim_GJC8__DOT__mismatch;
        IData/*31:0*/ co_sim_GJC8__DOT__unnamedblk1__DOT__i;
        IData/*17:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__DLY_B;
        IData/*19:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__a_reg;
        IData/*17:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__b_reg;
        IData/*19:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__a_int;
        IData/*17:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__b_int;
        IData/*19:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__mult_a;
        IData/*17:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__mult_b;
        IData/*17:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__DLY_B;
        IData/*19:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_reg;
        IData/*17:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__b_reg;
        IData/*19:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_int;
        IData/*17:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__b_int;
        IData/*19:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__mult_a;
        IData/*17:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__mult_b;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__accumulator;
        QData/*63:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__add_sub_in;
        QData/*63:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__mult_out;
        QData/*63:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__add_sub_out;
        QData/*63:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__pre_shift;
        QData/*63:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__shift_right;
        QData/*63:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__round;
        QData/*37:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__saturate;
        QData/*37:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__z_out;
        QData/*37:0*/ co_sim_GJC8__DOT__golden__DOT__dut__DOT__z_out_reg;
        QData/*63:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__accumulator;
        QData/*63:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__add_sub_in;
        QData/*63:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__mult_out;
        QData/*63:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__add_sub_out;
        QData/*63:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__pre_shift;
        QData/*63:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__shift_right;
        QData/*63:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__round;
        QData/*37:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__saturate;
        QData/*37:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out;
        QData/*37:0*/ co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out_reg;
        VlUnpacked<CData/*0:0*/, 9> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vco_sim_GJC8__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vco_sim_GJC8___024root(Vco_sim_GJC8__Syms* symsp, const char* v__name);
    ~Vco_sim_GJC8___024root();
    VL_UNCOPYABLE(Vco_sim_GJC8___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
