// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_syn2.h for the primary calling header

#include "Vco_sim_syn2__pch.h"
#include "Vco_sim_syn2_fpu_mul.h"

VL_ATTR_COLD void Vco_sim_syn2_fpu_mul___eval_static__TOP__co_sim_syn2__DOT__golden__DOT__x1_mul(Vco_sim_syn2_fpu_mul* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_syn2_fpu_mul___eval_static__TOP__co_sim_syn2__DOT__golden__DOT__x1_mul\n"); );
    // Body
    vlSelf->__PVT__fpu_op = 0U;
    vlSelf->__PVT__zero = 0U;
    vlSelf->__PVT__opa_r = 0U;
    vlSelf->__PVT__opb_r = 0U;
    vlSelf->out = 0U;
    vlSelf->__PVT__div_by_zero = 0U;
    vlSelf->__PVT__exp_r = 0U;
    vlSelf->__PVT__overflow = 0U;
    vlSelf->__PVT__underflow = 0U;
    vlSelf->__PVT__inf = 0U;
    vlSelf->__PVT__snan = 0U;
    vlSelf->__PVT__qnan = 0U;
    vlSelf->__PVT__ine = 0U;
    vlSelf->__PVT__rmode_r1 = 0U;
    vlSelf->__PVT__rmode_r2 = 0U;
    vlSelf->__PVT__fpu_op_r1 = 0U;
    vlSelf->__PVT__fpu_op_r2 = 0U;
    vlSelf->__PVT__out_o1 = 0U;
    vlSelf->__PVT__inf_o1 = 0U;
    vlSelf->__PVT__snan_o1 = 0U;
    vlSelf->__PVT__qnan_o1 = 0U;
    vlSelf->__PVT__ine_o1 = 0U;
    vlSelf->__PVT__overflow_o1 = 0U;
    vlSelf->__PVT__underflow_o1 = 0U;
    vlSelf->__PVT__zero_o1 = 0U;
    vlSelf->__PVT__div_by_zero_o1 = 0U;
    vlSelf->__PVT__sign_mul_r = 0U;
    vlSelf->__PVT__inf_mul_r = 0U;
    vlSelf->__PVT__exp_ovf_r = 0U;
    vlSelf->__PVT__sign_exe_r = 0U;
    vlSelf->__PVT__fract_denorm = 0ULL;
    vlSelf->__PVT__sign = 0U;
    vlSelf->__PVT__opa_r1 = 0U;
    vlSelf->__PVT__opas_r1 = 0U;
    vlSelf->__PVT__opas_r2 = 0U;
    vlSelf->__PVT__inf_mul2 = 0U;
    vlSelf->__PVT__underflow_fmul_r = 0U;
    vlSelf->__PVT__opa_nan_r = 0U;
    vlSelf->__PVT__u0__DOT__expa_ff = 0U;
    vlSelf->__PVT__u0__DOT__infa_f_r = 0U;
    vlSelf->__PVT__u0__DOT__qnan_r_a = 0U;
    vlSelf->__PVT__u0__DOT__snan_r_a = 0U;
    vlSelf->__PVT__u0__DOT__expb_ff = 0U;
    vlSelf->__PVT__u0__DOT__infb_f_r = 0U;
    vlSelf->__PVT__u0__DOT__qnan_r_b = 0U;
    vlSelf->__PVT__u0__DOT__snan_r_b = 0U;
    vlSelf->__PVT__inf_d = 0U;
    vlSelf->__PVT__ind_d = 0U;
    vlSelf->__PVT__qnan_d = 0U;
    vlSelf->__PVT__snan_d = 0U;
    vlSelf->__PVT__opa_nan = 0U;
    vlSelf->__PVT__opb_nan = 0U;
    vlSelf->__PVT__u0__DOT__expa_00 = 0U;
    vlSelf->__PVT__u0__DOT__expb_00 = 0U;
    vlSelf->__PVT__u0__DOT__fracta_00 = 0U;
    vlSelf->__PVT__u0__DOT__fractb_00 = 0U;
    vlSelf->__PVT__opa_00 = 0U;
    vlSelf->__PVT__opb_00 = 0U;
    vlSelf->__PVT__opa_inf = 0U;
    vlSelf->__PVT__opb_inf = 0U;
    vlSelf->__PVT__opa_dn = 0U;
    vlSelf->__PVT__opb_dn = 0U;
    vlSelf->__PVT__exp_mul = 0U;
    vlSelf->__PVT__sign_mul = 0U;
    vlSelf->__PVT__u2__DOT__sign_d = 0U;
    vlSelf->__PVT__sign_exe = 0U;
    vlSelf->__PVT__inf_mul = 0U;
    vlSelf->__PVT__exp_ovf = 0U;
    vlSelf->__PVT__underflow_fmul_d = 0U;
    vlSelf->__PVT__u5__DOT__prod1 = 0ULL;
    vlSelf->__PVT__prod = 0ULL;
}

VL_ATTR_COLD void Vco_sim_syn2_fpu_mul___stl_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__0(Vco_sim_syn2_fpu_mul* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_syn2_fpu_mul___stl_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__0\n"); );
    // Init
    CData/*0:0*/ __VdfgRegularize_h62b27241_3_10;
    __VdfgRegularize_h62b27241_3_10 = 0;
    // Body
    vlSelf->__PVT__u2__DOT__sign_d = (1U & ((vlSelf->__PVT__opa_r 
                                             >> 0x1fU)
                                             ? (~ (vlSelf->__PVT__opb_r 
                                                   >> 0x1fU))
                                             : (vlSelf->__PVT__opb_r 
                                                >> 0x1fU)));
    vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_10 
        = (1U & ((~ (IData)((0U != (0xffU & (vlSelf->__PVT__opa_r 
                                             >> 0x17U))))) 
                 | (~ (IData)((0U != (0xffU & (vlSelf->__PVT__opb_r 
                                               >> 0x17U)))))));
    vlSelf->__VdfgRegularize_h62b27241_3_3 = ((IData)(vlSelf->__PVT__qnan_d) 
                                              | (IData)(vlSelf->__PVT__snan_d));
    vlSelf->__VdfgRegularize_h62b27241_3_5 = ((IData)(vlSelf->__PVT__opa_00) 
                                              & (IData)(vlSelf->__PVT__opb_inf));
    vlSelf->__VdfgRegularize_h62b27241_3_4 = ((IData)(vlSelf->__PVT__opa_inf) 
                                              & (IData)(vlSelf->__PVT__opb_00));
    __VdfgRegularize_h62b27241_3_10 = ((IData)(vlSelf->__PVT__opa_inf) 
                                       | (IData)(vlSelf->__PVT__opb_inf));
    vlSelf->__VdfgRegularize_h62b27241_3_12 = ((IData)(vlSelf->__PVT__inf_mul2) 
                                               | (IData)(vlSelf->__PVT__inf_mul_r));
    if ((3U == (IData)(vlSelf->__PVT__fpu_op_r1))) {
        vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_8 
            = (0x1ffU & ((0xffU & (vlSelf->__PVT__opa_r 
                                   >> 0x17U)) - (0xffU 
                                                 & (vlSelf->__PVT__opb_r 
                                                    >> 0x17U))));
        vlSelf->__PVT__u2__DOT__exp_tmp5 = (0xffU & 
                                            ((IData)(1U) 
                                             + ((IData)(0x7fU) 
                                                - (IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_8))));
        vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_9 
            = (0x1ffU & ((IData)(0x7fU) + (IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_8)));
        vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_12 
            = (1U & ((IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_9) 
                     >> 8U));
    } else {
        vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_8 
            = (0x1ffU & ((0xffU & (vlSelf->__PVT__opa_r 
                                   >> 0x17U)) + (0xffU 
                                                 & (vlSelf->__PVT__opb_r 
                                                    >> 0x17U))));
        vlSelf->__PVT__u2__DOT__exp_tmp5 = (0xffU & 
                                            (((IData)(0x7fU) 
                                              - (IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_8)) 
                                             - (IData)(1U)));
        vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_9 
            = (0x1ffU & ((IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_8) 
                         - (IData)(0x7fU)));
        vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_12 
            = (1U & (((~ (vlSelf->__PVT__opa_r >> 0x1eU)) 
                      & ((~ (vlSelf->__PVT__opb_r >> 0x1eU)) 
                         & ((IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_9) 
                            >> 7U))) | ((IData)(vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_9) 
                                        >> 8U)));
    }
    vlSelf->__VdfgRegularize_h62b27241_3_2 = ((IData)(vlSelf->__PVT__opa_00) 
                                              | (IData)(vlSelf->__PVT__opb_00));
    vlSelf->__PVT__fract_denorm = vlSelf->__PVT__prod;
    vlSelf->__VdfgRegularize_h62b27241_3_7 = ((IData)(vlSelf->__VdfgRegularize_h62b27241_3_4) 
                                              | (IData)(vlSelf->__VdfgRegularize_h62b27241_3_5));
    vlSelf->__VdfgRegularize_h62b27241_3_11 = ((IData)(vlSelf->__VdfgRegularize_h62b27241_3_12) 
                                               | (IData)(__VdfgRegularize_h62b27241_3_10));
    vlSelf->__VdfgRegularize_h62b27241_3_9 = ((IData)(vlSelf->__VdfgRegularize_h62b27241_3_12) 
                                              & (0U 
                                                 == (IData)(vlSelf->__PVT__rmode_r3)));
    vlSelf->__PVT__or_result = (((2U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                 & (IData)(vlSelf->__VdfgRegularize_h62b27241_3_2)) 
                                | ((3U == (IData)(vlSelf->__PVT__fpu_op_r3)) 
                                   & ((IData)(vlSelf->__PVT__opa_00) 
                                      | (IData)(vlSelf->__PVT__opb_inf))));
    vlSelf->__PVT__inf_fmul = (((IData)(vlSelf->__VdfgRegularize_h62b27241_3_9) 
                                | (IData)(__VdfgRegularize_h62b27241_3_10)) 
                               & ((~ (IData)(vlSelf->__VdfgRegularize_h62b27241_3_7)) 
                                  & (2U == (IData)(vlSelf->__PVT__fpu_op_r3))));
}

VL_ATTR_COLD void Vco_sim_syn2_fpu_mul___ctor_var_reset(Vco_sim_syn2_fpu_mul* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_syn2_fpu_mul___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->opa = VL_RAND_RESET_I(32);
    vlSelf->opb = VL_RAND_RESET_I(32);
    vlSelf->out = VL_RAND_RESET_I(32);
    vlSelf->control = VL_RAND_RESET_I(8);
    vlSelf->__PVT__fpu_op = VL_RAND_RESET_I(3);
    vlSelf->__PVT__zero = VL_RAND_RESET_I(1);
    vlSelf->__PVT__opa_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__opb_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__div_by_zero = VL_RAND_RESET_I(1);
    vlSelf->__PVT__signa = VL_RAND_RESET_I(1);
    vlSelf->__PVT__signb = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sign_fasu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fracta = VL_RAND_RESET_I(27);
    vlSelf->__PVT__fractb = VL_RAND_RESET_I(27);
    vlSelf->__PVT__exp_fasu = VL_RAND_RESET_I(8);
    vlSelf->__PVT__exp_r = VL_RAND_RESET_I(8);
    vlSelf->__PVT__fract_out_d = VL_RAND_RESET_I(27);
    vlSelf->__PVT__co = VL_RAND_RESET_I(1);
    vlSelf->__PVT__overflow = VL_RAND_RESET_I(1);
    vlSelf->__PVT__underflow = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inf = VL_RAND_RESET_I(1);
    vlSelf->__PVT__snan = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qnan = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ine = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rmode_r1 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__rmode_r2 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__rmode_r3 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__fpu_op_r1 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__fpu_op_r2 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__fpu_op_r3 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__out_o1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inf_o1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__snan_o1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qnan_o1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ine_o1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__overflow_o1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__underflow_o1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__zero_o1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_by_zero_o1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__contorl = VL_RAND_RESET_I(8);
    vlSelf->__PVT__inf_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ind_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qnan_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__snan_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__opa_nan = VL_RAND_RESET_I(1);
    vlSelf->__PVT__opb_nan = VL_RAND_RESET_I(1);
    vlSelf->__PVT__opa_00 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__opb_00 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__opa_inf = VL_RAND_RESET_I(1);
    vlSelf->__PVT__opb_inf = VL_RAND_RESET_I(1);
    vlSelf->__PVT__opa_dn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__opb_dn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nan_sign_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__result_zero_sign_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exp_mul = VL_RAND_RESET_I(8);
    vlSelf->__PVT__sign_mul = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sign_mul_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inf_mul = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inf_mul_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exp_ovf = VL_RAND_RESET_I(2);
    vlSelf->__PVT__exp_ovf_r = VL_RAND_RESET_I(2);
    vlSelf->__PVT__sign_exe = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sign_exe_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__underflow_fmul_d = VL_RAND_RESET_I(3);
    vlSelf->__PVT__prod = VL_RAND_RESET_Q(48);
    vlSelf->__PVT__fract_denorm = VL_RAND_RESET_Q(48);
    vlSelf->__PVT__fract_div = VL_RAND_RESET_Q(48);
    vlSelf->__PVT__sign = VL_RAND_RESET_I(1);
    vlSelf->__PVT__opa_r1 = VL_RAND_RESET_I(31);
    vlSelf->__PVT__opas_r1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__opas_r2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__or_result = VL_RAND_RESET_I(1);
    vlSelf->__PVT__output_zero_fasu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__output_zero_fdiv = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inf_mul2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__overflow_fasu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__overflow_fdiv = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inf_fmul = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ine_div = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ine_fasu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__underflow_fasu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__underflow_fdiv = VL_RAND_RESET_I(1);
    vlSelf->__PVT__underflow_fmul1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__underflow_fmul_r = VL_RAND_RESET_I(3);
    vlSelf->__PVT__opa_nan_r = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_h62b27241_3_2 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_h62b27241_3_3 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_h62b27241_3_4 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_h62b27241_3_5 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_h62b27241_3_7 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_h62b27241_3_9 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_h62b27241_3_11 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_h62b27241_3_12 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u0__DOT__expa_ff = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u0__DOT__infa_f_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u0__DOT__qnan_r_a = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u0__DOT__snan_r_a = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u0__DOT__expb_ff = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u0__DOT__infb_f_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u0__DOT__qnan_r_b = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u0__DOT__snan_r_b = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u0__DOT__expa_00 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u0__DOT__expb_00 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u0__DOT__fracta_00 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u0__DOT__fractb_00 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u2__DOT__sign_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u2__DOT__exp_tmp5 = VL_RAND_RESET_I(8);
    vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_8 = VL_RAND_RESET_I(9);
    vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_9 = VL_RAND_RESET_I(9);
    vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_10 = VL_RAND_RESET_I(1);
    vlSelf->u2__DOT____VdfgRegularize_h9edb3666_0_12 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u5__DOT__prod1 = VL_RAND_RESET_Q(48);
}
