// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vco_sim_syn2.h for the primary calling header

#ifndef VERILATED_VCO_SIM_SYN2_POST_NORM_H_
#define VERILATED_VCO_SIM_SYN2_POST_NORM_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vco_sim_syn2__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vco_sim_syn2_post_norm final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__fpu_op,2,0);
        VL_IN8(__PVT__opas,0,0);
        VL_IN8(__PVT__sign,0,0);
        VL_IN8(__PVT__rmode,1,0);
        VL_IN8(__PVT__exp_in,7,0);
        VL_IN8(__PVT__exp_ovf,1,0);
        VL_IN8(__PVT__opa_dn,0,0);
        VL_IN8(__PVT__opb_dn,0,0);
        VL_IN8(__PVT__rem_00,0,0);
        VL_IN8(__PVT__div_opa_ldz,4,0);
        VL_IN8(__PVT__output_zero,0,0);
        VL_OUT8(__PVT__ine,0,0);
        VL_OUT8(__PVT__overflow,0,0);
        VL_OUT8(__PVT__underflow,0,0);
        VL_OUT8(__PVT__f2i_out_sign,0,0);
        CData/*7:0*/ __PVT__exp_out;
        CData/*0:0*/ __PVT__dn;
        CData/*0:0*/ __PVT__exp_rnd_adj;
        CData/*7:0*/ __PVT__exp_out_final;
        CData/*7:0*/ __PVT__exp_out_rnd;
        CData/*0:0*/ __PVT__op_dn;
        CData/*0:0*/ __PVT__r;
        CData/*0:0*/ __PVT__s;
        CData/*0:0*/ __PVT__ovf0;
        CData/*0:0*/ __PVT__exp_out_fe;
        CData/*0:0*/ __PVT__grs_sel;
        CData/*7:0*/ __PVT__exp_div;
        CData/*7:0*/ __PVT__shft2;
        CData/*0:0*/ __PVT__div_dn;
        CData/*0:0*/ __PVT__grs_sel_div;
        CData/*0:0*/ __PVT__div_inf;
        CData/*7:0*/ __PVT__fi_ldz_2;
        CData/*7:0*/ __PVT__div_exp2;
        CData/*7:0*/ __PVT__shift_right;
        CData/*7:0*/ __PVT__shift_left;
        CData/*0:0*/ __PVT__f2i_zero;
        CData/*0:0*/ __PVT__f2i_max;
        CData/*0:0*/ __PVT__exp_in_80;
        CData/*0:0*/ __PVT__max_num;
        CData/*0:0*/ __PVT__inf_out;
        CData/*0:0*/ __PVT__undeflow_div;
        CData/*0:0*/ __VdfgRegularize_he8d392c1_0_13;
        CData/*0:0*/ __VdfgRegularize_he8d392c1_0_15;
        CData/*0:0*/ __VdfgRegularize_he8d392c1_0_20;
        CData/*0:0*/ __VdfgRegularize_he8d392c1_0_27;
        CData/*0:0*/ __VdfgRegularize_he8d392c1_0_30;
        CData/*0:0*/ __VdfgRegularize_he8d392c1_0_35;
        CData/*0:0*/ __VdfgRegularize_he8d392c1_0_37;
        CData/*0:0*/ __VdfgRegularize_he8d392c1_0_38;
        CData/*0:0*/ __VdfgRegularize_he8d392c1_0_40;
        CData/*0:0*/ __VdfgRegularize_he8d392c1_0_41;
        CData/*0:0*/ __VdfgRegularize_he8d392c1_0_46;
        CData/*0:0*/ __VdfgRegularize_he8d392c1_0_48;
        CData/*0:0*/ __VdfgRegularize_he8d392c1_0_51;
        CData/*0:0*/ __VdfgRegularize_he8d392c1_0_52;
        CData/*0:0*/ __VdfgRegularize_he8d392c1_0_53;
        CData/*0:0*/ __VdfgRegularize_he8d392c1_0_59;
        CData/*0:0*/ __VdfgRegularize_he8d392c1_0_61;
        CData/*0:0*/ __VdfgRegularize_he8d392c1_0_62;
        CData/*0:0*/ __VdfgRegularize_he8d392c1_0_63;
        CData/*0:0*/ __VdfgRegularize_he8d392c1_0_65;
        CData/*0:0*/ __VdfgRegularize_he8d392c1_0_66;
        CData/*0:0*/ __VdfgRegularize_he8d392c1_0_67;
        CData/*5:0*/ __PVT__u6__DOT__fi_ldz_r0;
    };
    struct {
        SData/*8:0*/ __PVT__exp_next_mi;
        SData/*8:0*/ __PVT__div_exp1;
        SData/*8:0*/ __VdfgRegularize_he8d392c1_0_14;
        SData/*8:0*/ __VdfgRegularize_he8d392c1_0_23;
        SData/*8:0*/ __VdfgRegularize_he8d392c1_0_70;
        VL_OUT(__PVT__out,30,0);
        IData/*22:0*/ __PVT__fract_out_rnd;
        IData/*23:0*/ __VdfgRegularize_he8d392c1_0_54;
        IData/*23:0*/ __VdfgRegularize_he8d392c1_0_55;
        VL_IN64(__PVT__fract_in,47,0);
        QData/*47:0*/ __PVT__fract_in_shftr_1;
        QData/*47:0*/ __PVT__fract_in_shftl_1;
        QData/*47:0*/ __Vcellout__u3__shift_out;
        QData/*47:0*/ __VdfgRegularize_he8d392c1_0_21;
    };

    // INTERNAL VARIABLES
    Vco_sim_syn2__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vco_sim_syn2_post_norm(Vco_sim_syn2__Syms* symsp, const char* v__name);
    ~Vco_sim_syn2_post_norm();
    VL_UNCOPYABLE(Vco_sim_syn2_post_norm);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
