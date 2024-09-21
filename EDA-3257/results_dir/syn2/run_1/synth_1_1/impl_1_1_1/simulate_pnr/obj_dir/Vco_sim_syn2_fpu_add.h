// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vco_sim_syn2.h for the primary calling header

#ifndef VERILATED_VCO_SIM_SYN2_FPU_ADD_H_
#define VERILATED_VCO_SIM_SYN2_FPU_ADD_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vco_sim_syn2__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vco_sim_syn2_fpu_add final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        CData/*0:0*/ __PVT__u1__DOT__fractb_lt_fracta;
        VL_OUT8(control,7,0);
        CData/*2:0*/ __PVT__fpu_op;
        CData/*0:0*/ __PVT__zero;
        CData/*0:0*/ __PVT__div_by_zero;
        CData/*0:0*/ __PVT__sign_fasu;
        CData/*7:0*/ __PVT__exp_fasu;
        CData/*7:0*/ __PVT__exp_r;
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
        CData/*0:0*/ __PVT__sign_fasu_r;
        CData/*0:0*/ __PVT__fasu_op;
        CData/*0:0*/ __PVT__sign;
        CData/*0:0*/ __PVT__opas_r1;
        CData/*0:0*/ __PVT__opas_r2;
        CData/*0:0*/ __PVT__fasu_op_r1;
        CData/*0:0*/ __PVT__fasu_op_r2;
        CData/*0:0*/ __PVT__output_zero_fasu;
        CData/*0:0*/ __PVT__opa_nan_r;
        CData/*0:0*/ __VdfgRegularize_h16e0ae4d_5_0;
        CData/*0:0*/ __VdfgRegularize_h16e0ae4d_5_1;
        CData/*0:0*/ __VdfgRegularize_h16e0ae4d_5_2;
        CData/*0:0*/ __PVT__u0__DOT__expa_ff;
        CData/*0:0*/ __PVT__u0__DOT__infa_f_r;
        CData/*0:0*/ __PVT__u0__DOT__qnan_r_a;
        CData/*0:0*/ __PVT__u0__DOT__snan_r_a;
        CData/*0:0*/ __PVT__u0__DOT__expb_ff;
        CData/*0:0*/ __PVT__u0__DOT__infb_f_r;
    };
    struct {
        CData/*0:0*/ __PVT__u0__DOT__qnan_r_b;
        CData/*0:0*/ __PVT__u0__DOT__snan_r_b;
        CData/*0:0*/ __PVT__u0__DOT__expa_00;
        CData/*0:0*/ __PVT__u0__DOT__expb_00;
        CData/*0:0*/ __PVT__u0__DOT__fracta_00;
        CData/*0:0*/ __PVT__u0__DOT__fractb_00;
        CData/*0:0*/ __PVT__u1__DOT__expa_lt_expb;
        CData/*7:0*/ __PVT__u1__DOT__exp_large;
        CData/*0:0*/ __PVT__u1__DOT__sign_d;
        CData/*0:0*/ __PVT__u1__DOT__add_d;
        CData/*0:0*/ __PVT__u1__DOT__sticky;
        CData/*0:0*/ __PVT__u1__DOT__add_r;
        CData/*0:0*/ __PVT__u1__DOT__signa_r;
        CData/*0:0*/ __PVT__u1__DOT__signb_r;
        CData/*4:0*/ __PVT__u1__DOT__exp_diff_sft;
        CData/*0:0*/ __PVT__u1__DOT__fracta_lt_fractb;
        CData/*0:0*/ __PVT__u1__DOT__fracta_eq_fractb;
        CData/*7:0*/ __PVT__u1__DOT__exp_diff2;
        CData/*0:0*/ u1__DOT____VdfgRegularize_h05e998eb_0_2;
        CData/*7:0*/ __PVT__u4__DOT__exp_out;
        CData/*0:0*/ __PVT__u4__DOT__dn;
        CData/*0:0*/ __PVT__u4__DOT__exp_rnd_adj;
        CData/*7:0*/ __PVT__u4__DOT__exp_out_final;
        CData/*7:0*/ __PVT__u4__DOT__exp_out_rnd;
        CData/*0:0*/ __PVT__u4__DOT__op_dn;
        CData/*0:0*/ __PVT__u4__DOT__s;
        CData/*0:0*/ __PVT__u4__DOT__ovf0;
        CData/*0:0*/ __PVT__u4__DOT__exp_out_fe;
        CData/*0:0*/ __PVT__u4__DOT__grs_sel;
        CData/*7:0*/ __PVT__u4__DOT__shft2;
        CData/*0:0*/ __PVT__u4__DOT__div_inf;
        CData/*7:0*/ __PVT__u4__DOT__fi_ldz_2;
        CData/*7:0*/ __PVT__u4__DOT__div_exp2;
        CData/*7:0*/ __PVT__u4__DOT__shift_right;
        CData/*7:0*/ __PVT__u4__DOT__shift_left;
        CData/*0:0*/ __PVT__u4__DOT__f2i_zero;
        CData/*0:0*/ __PVT__u4__DOT__f2i_max;
        CData/*0:0*/ __PVT__u4__DOT__max_num;
        CData/*0:0*/ __PVT__u4__DOT__inf_out;
        CData/*0:0*/ __PVT__u4__DOT__overflow_fdiv;
        CData/*0:0*/ __PVT__u4__DOT__z;
        CData/*0:0*/ __PVT__u4__DOT__f2i_ine;
        CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_27;
        CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_30;
        CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_37;
        CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_38;
        CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_46;
        CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_51;
        CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_53;
        CData/*0:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_64;
        CData/*5:0*/ __PVT__u4__DOT__u6__DOT__fi_ldz_r0;
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
        IData/*27:0*/ __PVT__fract_out_q;
        IData/*30:0*/ __PVT__out_d;
    };
    struct {
        IData/*31:0*/ __PVT__out_o1;
        IData/*30:0*/ __PVT__opa_r1;
        IData/*26:0*/ __PVT__u1__DOT__adj_op_tmp;
        IData/*26:0*/ __PVT__u1__DOT__adj_op_out;
        IData/*26:0*/ __PVT__u1__DOT__fracta_n;
        IData/*26:0*/ __PVT__u1__DOT__fractb_n;
        IData/*27:0*/ u3__DOT____VdfgRegularize_h60e48f75_0_0;
        IData/*22:0*/ __PVT__u4__DOT__fract_out_rnd;
        IData/*23:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_54;
        IData/*23:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_55;
        QData/*47:0*/ u1__DOT____Vcellout__u7__shift_out;
        QData/*47:0*/ __PVT__u4__DOT__fract_in_shftr_1;
        QData/*47:0*/ __PVT__u4__DOT__fract_in_shftl_1;
        QData/*47:0*/ u4__DOT____Vcellout__u3__shift_out;
        QData/*47:0*/ u4__DOT____VdfgRegularize_he8d392c1_0_21;
    };

    // INTERNAL VARIABLES
    Vco_sim_syn2__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vco_sim_syn2_fpu_add(Vco_sim_syn2__Syms* symsp, const char* v__name);
    ~Vco_sim_syn2_fpu_add();
    VL_UNCOPYABLE(Vco_sim_syn2_fpu_add);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
