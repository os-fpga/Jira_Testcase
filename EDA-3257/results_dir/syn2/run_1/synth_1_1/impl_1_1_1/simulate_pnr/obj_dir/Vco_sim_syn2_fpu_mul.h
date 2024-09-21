// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vco_sim_syn2.h for the primary calling header

#ifndef VERILATED_VCO_SIM_SYN2_FPU_MUL_H_
#define VERILATED_VCO_SIM_SYN2_FPU_MUL_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vco_sim_syn2__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vco_sim_syn2_fpu_mul final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_OUT8(control,7,0);
        CData/*2:0*/ __PVT__fpu_op;
        CData/*0:0*/ __PVT__zero;
        CData/*0:0*/ __PVT__div_by_zero;
        CData/*0:0*/ __PVT__signa;
        CData/*0:0*/ __PVT__signb;
        CData/*0:0*/ __PVT__sign_fasu;
        CData/*7:0*/ __PVT__exp_fasu;
        CData/*7:0*/ __PVT__exp_r;
        CData/*0:0*/ __PVT__co;
        CData/*0:0*/ __PVT__overflow_d;
        CData/*0:0*/ __PVT__underflow_d;
        CData/*0:0*/ __PVT__overflow;
        CData/*0:0*/ __PVT__underflow;
        CData/*0:0*/ __PVT__inf;
        CData/*0:0*/ __PVT__snan;
        CData/*0:0*/ __PVT__qnan;
        CData/*0:0*/ __PVT__ine;
        CData/*1:0*/ __PVT__rmode_r1;
        CData/*1:0*/ __PVT__rmode_r2;
        CData/*1:0*/ __PVT__rmode_r3;
        CData/*2:0*/ __PVT__fpu_op_r1;
        CData/*2:0*/ __PVT__fpu_op_r2;
        CData/*2:0*/ __PVT__fpu_op_r3;
        CData/*0:0*/ __PVT__inf_o1;
        CData/*0:0*/ __PVT__snan_o1;
        CData/*0:0*/ __PVT__qnan_o1;
        CData/*0:0*/ __PVT__ine_o1;
        CData/*0:0*/ __PVT__overflow_o1;
        CData/*0:0*/ __PVT__underflow_o1;
        CData/*0:0*/ __PVT__zero_o1;
        CData/*0:0*/ __PVT__div_by_zero_o1;
        CData/*7:0*/ __PVT__contorl;
        CData/*0:0*/ __PVT__inf_d;
        CData/*0:0*/ __PVT__ind_d;
        CData/*0:0*/ __PVT__qnan_d;
        CData/*0:0*/ __PVT__snan_d;
        CData/*0:0*/ __PVT__opa_nan;
        CData/*0:0*/ __PVT__opb_nan;
        CData/*0:0*/ __PVT__opa_00;
        CData/*0:0*/ __PVT__opb_00;
        CData/*0:0*/ __PVT__opa_inf;
        CData/*0:0*/ __PVT__opb_inf;
        CData/*0:0*/ __PVT__opa_dn;
        CData/*0:0*/ __PVT__opb_dn;
        CData/*0:0*/ __PVT__nan_sign_d;
        CData/*0:0*/ __PVT__result_zero_sign_d;
        CData/*7:0*/ __PVT__exp_mul;
        CData/*0:0*/ __PVT__sign_mul;
        CData/*0:0*/ __PVT__sign_mul_r;
        CData/*0:0*/ __PVT__inf_mul;
        CData/*0:0*/ __PVT__inf_mul_r;
        CData/*1:0*/ __PVT__exp_ovf;
        CData/*1:0*/ __PVT__exp_ovf_r;
        CData/*0:0*/ __PVT__sign_exe;
        CData/*0:0*/ __PVT__sign_exe_r;
        CData/*2:0*/ __PVT__underflow_fmul_d;
        CData/*0:0*/ __PVT__sign;
        CData/*0:0*/ __PVT__opas_r1;
        CData/*0:0*/ __PVT__opas_r2;
        CData/*0:0*/ __PVT__or_result;
        CData/*0:0*/ __PVT__output_zero_fasu;
        CData/*0:0*/ __PVT__output_zero_fdiv;
    };
    struct {
        CData/*0:0*/ __PVT__inf_mul2;
        CData/*0:0*/ __PVT__overflow_fasu;
        CData/*0:0*/ __PVT__overflow_fdiv;
        CData/*0:0*/ __PVT__inf_fmul;
        CData/*0:0*/ __PVT__ine_mula;
        CData/*0:0*/ __PVT__ine_div;
        CData/*0:0*/ __PVT__ine_fasu;
        CData/*0:0*/ __PVT__underflow_fasu;
        CData/*0:0*/ __PVT__underflow_fdiv;
        CData/*0:0*/ __PVT__underflow_fmul1;
        CData/*2:0*/ __PVT__underflow_fmul_r;
        CData/*0:0*/ __PVT__opa_nan_r;
        CData/*0:0*/ __VdfgRegularize_h62b27241_3_2;
        CData/*0:0*/ __VdfgRegularize_h62b27241_3_3;
        CData/*0:0*/ __VdfgRegularize_h62b27241_3_4;
        CData/*0:0*/ __VdfgRegularize_h62b27241_3_5;
        CData/*0:0*/ __VdfgRegularize_h62b27241_3_7;
        CData/*0:0*/ __VdfgRegularize_h62b27241_3_9;
        CData/*0:0*/ __VdfgRegularize_h62b27241_3_11;
        CData/*0:0*/ __VdfgRegularize_h62b27241_3_12;
        CData/*0:0*/ __PVT__u0__DOT__expa_ff;
        CData/*0:0*/ __PVT__u0__DOT__infa_f_r;
        CData/*0:0*/ __PVT__u0__DOT__qnan_r_a;
        CData/*0:0*/ __PVT__u0__DOT__snan_r_a;
        CData/*0:0*/ __PVT__u0__DOT__expb_ff;
        CData/*0:0*/ __PVT__u0__DOT__infb_f_r;
        CData/*0:0*/ __PVT__u0__DOT__qnan_r_b;
        CData/*0:0*/ __PVT__u0__DOT__snan_r_b;
        CData/*0:0*/ __PVT__u0__DOT__expa_00;
        CData/*0:0*/ __PVT__u0__DOT__expb_00;
        CData/*0:0*/ __PVT__u0__DOT__fracta_00;
        CData/*0:0*/ __PVT__u0__DOT__fractb_00;
        CData/*0:0*/ __PVT__u2__DOT__sign_d;
        CData/*7:0*/ __PVT__u2__DOT__exp_tmp5;
        CData/*0:0*/ u2__DOT____VdfgRegularize_h9edb3666_0_10;
        CData/*0:0*/ u2__DOT____VdfgRegularize_h9edb3666_0_12;
        CData/*7:0*/ __PVT__u4__DOT__exp_out;
        CData/*0:0*/ __PVT__u4__DOT__dn;
        CData/*0:0*/ __PVT__u4__DOT__exp_rnd_adj;
        CData/*7:0*/ __PVT__u4__DOT__exp_out_final;
        CData/*7:0*/ __PVT__u4__DOT__exp_out_rnd;
        CData/*0:0*/ __PVT__u4__DOT__op_dn;
        CData/*0:0*/ __PVT__u4__DOT__r;
        CData/*0:0*/ __PVT__u4__DOT__s;
        CData/*0:0*/ __PVT__u4__DOT__round2_fmul;
        CData/*0:0*/ __PVT__u4__DOT__ovf0;
        CData/*0:0*/ __PVT__u4__DOT__exp_out_fe;
        CData/*0:0*/ __PVT__u4__DOT__grs_sel;
        CData/*7:0*/ __PVT__u4__DOT__exp_div;
        CData/*7:0*/ __PVT__u4__DOT__shft2;
        CData/*0:0*/ __PVT__u4__DOT__div_nr;
        CData/*0:0*/ __PVT__u4__DOT__grs_sel_div;
        CData/*0:0*/ __PVT__u4__DOT__div_inf;
        CData/*7:0*/ __PVT__u4__DOT__fi_ldz_2;
        CData/*7:0*/ __PVT__u4__DOT__div_exp2;
        CData/*7:0*/ __PVT__u4__DOT__shift_right;
        CData/*7:0*/ __PVT__u4__DOT__shift_left;
        CData/*0:0*/ __PVT__u4__DOT__f2i_zero;
        CData/*0:0*/ __PVT__u4__DOT__f2i_max;
        CData/*7:0*/ __PVT__u4__DOT__conv_exp;
        CData/*0:0*/ __PVT__u4__DOT__round2_f2i;
        CData/*0:0*/ __PVT__u4__DOT__exp_in_80;
        CData/*0:0*/ __PVT__u4__DOT__max_num;
        CData/*0:0*/ __PVT__u4__DOT__inf_out;
    };
    struct {
        CData/*0:0*/ __PVT__u4__DOT__underflow_fmul;
        CData/*0:0*/ __PVT__u4__DOT__overflow_fdiv;
        CData/*0:0*/ __PVT__u4__DOT__undeflow_div;
        CData/*0:0*/ __PVT__u4__DOT__f2i_ine;
        CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_13;
        CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_15;
        CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_20;
        CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_27;
        CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_30;
        CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_37;
        CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_38;
        CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_40;
        CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_41;
        CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_48;
        CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_51;
        CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_52;
        CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_53;
        CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_59;
        CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_61;
        CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_62;
        CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_63;
        CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_65;
        CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_66;
        CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_67;
        CData/*5:0*/ __PVT__u4__DOT__u6__DOT__fi_ldz_r0;
        SData/*8:0*/ u2__DOT____VdfgRegularize_h9edb3666_0_8;
        SData/*8:0*/ u2__DOT____VdfgRegularize_h9edb3666_0_9;
        SData/*8:0*/ __PVT__u4__DOT__exp_next_mi;
        SData/*8:0*/ __PVT__u4__DOT__div_exp1;
        SData/*8:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_14;
        SData/*8:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_23;
        VL_IN(opa,31,0);
        VL_IN(opb,31,0);
        VL_OUT(out,31,0);
        IData/*31:0*/ __PVT__opa_r;
        IData/*31:0*/ __PVT__opb_r;
        IData/*26:0*/ __PVT__fracta;
        IData/*26:0*/ __PVT__fractb;
        IData/*26:0*/ __PVT__fract_out_d;
        IData/*30:0*/ __PVT__out_d;
        IData/*31:0*/ __PVT__out_o1;
        IData/*30:0*/ __PVT__opa_r1;
        IData/*22:0*/ __PVT__u4__DOT__fract_out_final;
        IData/*22:0*/ __PVT__u4__DOT__fract_out_rnd;
        IData/*23:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_54;
        IData/*23:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_55;
        QData/*47:0*/ __PVT__prod;
        QData/*47:0*/ __PVT__fract_denorm;
        QData/*47:0*/ __PVT__fract_div;
        QData/*47:0*/ __PVT__u5__DOT__prod1;
        QData/*47:0*/ __PVT__u4__DOT__fract_in_shftr_1;
        QData/*47:0*/ __PVT__u4__DOT__fract_in_shftl_1;
        QData/*47:0*/ u4__DOT____Vcellout__u3__shift_out;
        QData/*47:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_21;
    };

    // INTERNAL VARIABLES
    Vco_sim_syn2__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vco_sim_syn2_fpu_mul(Vco_sim_syn2__Syms* symsp, const char* v__name);
    ~Vco_sim_syn2_fpu_mul();
    VL_UNCOPYABLE(Vco_sim_syn2_fpu_mul);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
