// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_syn2.h for the primary calling header

#include "Vco_sim_syn2__pch.h"
#include "Vco_sim_syn2_post_norm.h"

VL_ATTR_COLD void Vco_sim_syn2_post_norm___eval_static__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4(Vco_sim_syn2_post_norm* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vco_sim_syn2_post_norm___eval_static__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4\n"); );
    // Body
    vlSelf->__PVT__fract_out_rnd = 0U;
    vlSelf->__PVT__exp_out_rnd = 0U;
    vlSelf->__PVT__fract_in_shftr_1 = 0ULL;
    vlSelf->__PVT__fract_in_shftl_1 = 0ULL;
    vlSelf->__Vcellout__u3__shift_out = 0ULL;
}

VL_ATTR_COLD void Vco_sim_syn2_post_norm___ctor_var_reset(Vco_sim_syn2_post_norm* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vco_sim_syn2_post_norm___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__fpu_op = VL_RAND_RESET_I(3);
    vlSelf->__PVT__opas = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sign = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rmode = VL_RAND_RESET_I(2);
    vlSelf->__PVT__fract_in = VL_RAND_RESET_Q(48);
    vlSelf->__PVT__exp_in = VL_RAND_RESET_I(8);
    vlSelf->__PVT__exp_ovf = VL_RAND_RESET_I(2);
    vlSelf->__PVT__opa_dn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__opb_dn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rem_00 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_opa_ldz = VL_RAND_RESET_I(5);
    vlSelf->__PVT__output_zero = VL_RAND_RESET_I(1);
    vlSelf->__PVT__out = VL_RAND_RESET_I(31);
    vlSelf->__PVT__ine = VL_RAND_RESET_I(1);
    vlSelf->__PVT__overflow = VL_RAND_RESET_I(1);
    vlSelf->__PVT__underflow = VL_RAND_RESET_I(1);
    vlSelf->__PVT__f2i_out_sign = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exp_out = VL_RAND_RESET_I(8);
    vlSelf->__PVT__fract_out_rnd = VL_RAND_RESET_I(23);
    vlSelf->__PVT__exp_next_mi = VL_RAND_RESET_I(9);
    vlSelf->__PVT__dn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exp_rnd_adj = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exp_out_final = VL_RAND_RESET_I(8);
    vlSelf->__PVT__exp_out_rnd = VL_RAND_RESET_I(8);
    vlSelf->__PVT__op_dn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ovf0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exp_out_fe = VL_RAND_RESET_I(1);
    vlSelf->__PVT__grs_sel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fract_in_shftr_1 = VL_RAND_RESET_Q(48);
    vlSelf->__PVT__fract_in_shftl_1 = VL_RAND_RESET_Q(48);
    vlSelf->__PVT__exp_div = VL_RAND_RESET_I(8);
    vlSelf->__PVT__shft2 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__div_dn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__grs_sel_div = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_inf = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fi_ldz_2 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__div_exp1 = VL_RAND_RESET_I(9);
    vlSelf->__PVT__div_exp2 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__shift_right = VL_RAND_RESET_I(8);
    vlSelf->__PVT__shift_left = VL_RAND_RESET_I(8);
    vlSelf->__PVT__f2i_zero = VL_RAND_RESET_I(1);
    vlSelf->__PVT__f2i_max = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exp_in_80 = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__u3__shift_out = VL_RAND_RESET_Q(48);
    vlSelf->__PVT__max_num = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inf_out = VL_RAND_RESET_I(1);
    vlSelf->__PVT__undeflow_div = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_he8d392c1_0_13 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_he8d392c1_0_14 = VL_RAND_RESET_I(9);
    vlSelf->__VdfgRegularize_he8d392c1_0_15 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_he8d392c1_0_20 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_he8d392c1_0_21 = VL_RAND_RESET_Q(48);
    vlSelf->__VdfgRegularize_he8d392c1_0_23 = VL_RAND_RESET_I(9);
    vlSelf->__VdfgRegularize_he8d392c1_0_27 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_he8d392c1_0_30 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_he8d392c1_0_35 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_he8d392c1_0_37 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_he8d392c1_0_38 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_he8d392c1_0_40 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_he8d392c1_0_41 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_he8d392c1_0_46 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_he8d392c1_0_48 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_he8d392c1_0_51 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_he8d392c1_0_52 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_he8d392c1_0_53 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_he8d392c1_0_54 = VL_RAND_RESET_I(24);
    vlSelf->__VdfgRegularize_he8d392c1_0_55 = VL_RAND_RESET_I(24);
    vlSelf->__VdfgRegularize_he8d392c1_0_59 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_he8d392c1_0_61 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_he8d392c1_0_62 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_he8d392c1_0_63 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_he8d392c1_0_65 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_he8d392c1_0_66 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_he8d392c1_0_67 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_he8d392c1_0_70 = VL_RAND_RESET_I(9);
    vlSelf->__PVT__u6__DOT__fi_ldz_r0 = VL_RAND_RESET_I(6);
}
