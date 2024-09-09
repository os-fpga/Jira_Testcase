// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_GJC46_edit.h for the primary calling header

#include "Vco_sim_GJC46_edit__pch.h"
#include "Vco_sim_GJC46_edit___024root.h"

VL_ATTR_COLD void Vco_sim_GJC46_edit___024root___eval_static__TOP(Vco_sim_GJC46_edit___024root* vlSelf);

VL_ATTR_COLD void Vco_sim_GJC46_edit___024root___eval_static(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___eval_static\n"); );
    // Body
    Vco_sim_GJC46_edit___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[0x22U] = 1U;
    vlSelf->__Vm_traceActivity[0x21U] = 1U;
    vlSelf->__Vm_traceActivity[0x20U] = 1U;
    vlSelf->__Vm_traceActivity[0x1fU] = 1U;
    vlSelf->__Vm_traceActivity[0x1eU] = 1U;
    vlSelf->__Vm_traceActivity[0x1dU] = 1U;
    vlSelf->__Vm_traceActivity[0x1cU] = 1U;
    vlSelf->__Vm_traceActivity[0x1bU] = 1U;
    vlSelf->__Vm_traceActivity[0x1aU] = 1U;
    vlSelf->__Vm_traceActivity[0x19U] = 1U;
    vlSelf->__Vm_traceActivity[0x18U] = 1U;
    vlSelf->__Vm_traceActivity[0x17U] = 1U;
    vlSelf->__Vm_traceActivity[0x16U] = 1U;
    vlSelf->__Vm_traceActivity[0x15U] = 1U;
    vlSelf->__Vm_traceActivity[0x14U] = 1U;
    vlSelf->__Vm_traceActivity[0x13U] = 1U;
    vlSelf->__Vm_traceActivity[0x12U] = 1U;
    vlSelf->__Vm_traceActivity[0x11U] = 1U;
    vlSelf->__Vm_traceActivity[0x10U] = 1U;
    vlSelf->__Vm_traceActivity[0xfU] = 1U;
    vlSelf->__Vm_traceActivity[0xeU] = 1U;
    vlSelf->__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__Vm_traceActivity[0xcU] = 1U;
    vlSelf->__Vm_traceActivity[0xbU] = 1U;
    vlSelf->__Vm_traceActivity[0xaU] = 1U;
    vlSelf->__Vm_traceActivity[9U] = 1U;
    vlSelf->__Vm_traceActivity[8U] = 1U;
    vlSelf->__Vm_traceActivity[7U] = 1U;
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vco_sim_GJC46_edit___024root___eval_static__TOP(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->co_sim_GJC46_edit__DOT__mismatch = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__pllstart = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__pllstart_ff1 = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__pllstart_ff2 = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__vcostart = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__vcostart_ff = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__lose_lock = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_out_div2 = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_out_div3 = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_out_div4 = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__div3_count = 1U;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__PLL_DIV_ff = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__PLL_MULT_ff = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__lock_counter = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_delay__DOT__dly_tap_val = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_0 = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_90 = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_180 = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_270 = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_start = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_lock = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_clk = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_dout = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_error = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__core_clk = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_core_clk = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__core_clk = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_delay__DOT__dly_tap_val = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b0__05d = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b1__05d = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b2__05d = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b3__05d = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b4__05d = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b5__05d = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b6__05d = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b0__05d = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b1__05d = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b2__05d = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b3__05d = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b4__05d = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b5__05d = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b6__05d = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b7__05d = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b8__05d = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b9__05d = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__pllstart = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__pllstart_ff1 = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__pllstart_ff2 = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__vcostart = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__vcostart_ff = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__lose_lock = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_out_div2 = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_out_div3 = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_out_div4 = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__div3_count = 1U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__PLL_DIV_ff = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__PLL_MULT_ff = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__lock_counter = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_delay__DOT__dly_tap_val = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__core_clk = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_delay__DOT__dly_tap_val = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_0 = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_90 = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_180 = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_270 = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_start = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_lock = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_clk = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_dout = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_error = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_core_clk = 0U;
}

VL_ATTR_COLD void Vco_sim_GJC46_edit___024root___eval_final(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_GJC46_edit___024root___dump_triggers__stl(Vco_sim_GJC46_edit___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vco_sim_GJC46_edit___024root___eval_phase__stl(Vco_sim_GJC46_edit___024root* vlSelf);

VL_ATTR_COLD void Vco_sim_GJC46_edit___024root___eval_settle(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vco_sim_GJC46_edit___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/nfs_scratch/scratch/CompilerValidation/abdul_hameed/GJC_INVALID_UPDATE/Validation/RTL_testcases/GJC-IO-Testcases/GJC46/EDA-3196/./sim/co_sim_tb/co_sim_GJC46_edit.v", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vco_sim_GJC46_edit___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_GJC46_edit___024root___dump_triggers__stl(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vco_sim_GJC46_edit___024root___stl_sequent__TOP__0(Vco_sim_GJC46_edit___024root* vlSelf);

VL_ATTR_COLD void Vco_sim_GJC46_edit___024root___eval_stl(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0x22U] = 1U;
        vlSelf->__Vm_traceActivity[0x21U] = 1U;
        vlSelf->__Vm_traceActivity[0x20U] = 1U;
        vlSelf->__Vm_traceActivity[0x1fU] = 1U;
        vlSelf->__Vm_traceActivity[0x1eU] = 1U;
        vlSelf->__Vm_traceActivity[0x1dU] = 1U;
        vlSelf->__Vm_traceActivity[0x1cU] = 1U;
        vlSelf->__Vm_traceActivity[0x1bU] = 1U;
        vlSelf->__Vm_traceActivity[0x1aU] = 1U;
        vlSelf->__Vm_traceActivity[0x19U] = 1U;
        vlSelf->__Vm_traceActivity[0x18U] = 1U;
        vlSelf->__Vm_traceActivity[0x17U] = 1U;
        vlSelf->__Vm_traceActivity[0x16U] = 1U;
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VlCoroutine Vco_sim_GJC46_edit___024root___nba_comb__TOP__1____Vfork_2__0(Vco_sim_GJC46_edit___024root* vlSelf, CData/*0:0*/ __Vintraval_h799703ce__0);
VlCoroutine Vco_sim_GJC46_edit___024root___nba_comb__TOP__2____Vfork_3__0(Vco_sim_GJC46_edit___024root* vlSelf, CData/*0:0*/ __Vintraval_h14381aad__0);
VlCoroutine Vco_sim_GJC46_edit___024root___act_comb__TOP__0____Vfork_1__0(Vco_sim_GJC46_edit___024root* vlSelf, CData/*0:0*/ __Vintraval_h14e37c4a__0);
VlCoroutine Vco_sim_GJC46_edit___024root___act_comb__TOP__0____Vfork_4__0(Vco_sim_GJC46_edit___024root* vlSelf, CData/*0:0*/ __Vintraval_h8ba0df61__0);

VL_ATTR_COLD void Vco_sim_GJC46_edit___024root___stl_sequent__TOP__0(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li0_li0 
        = (1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b0__05d)));
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__LOCK 
        = (0x1f4U <= (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__lock_counter));
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__next_wr_addr 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__wr_addr)));
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__next_rd_addr 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__rd_addr)));
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__next_wr_addr 
        = (0x7ffU & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__wr_addr)));
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__next_rd_addr 
        = (0x7ffU & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__rd_addr)));
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__LOCK 
        = (0x1f4U <= (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__lock_counter));
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__next_wr_addr 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__wr_addr)));
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__next_rd_addr 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__rd_addr)));
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__next_wr_addr 
        = (0x7ffU & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__wr_addr)));
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__next_rd_addr 
        = (0x7ffU & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__rd_addr)));
    if (((((((((0U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_counter)) 
               | (1U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_counter))) 
              | (2U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_counter))) 
             | (3U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_counter))) 
            | (4U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_counter))) 
           | (5U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_counter))) 
          | (6U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_counter))) 
         | (7U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_counter)))) {
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_shifter_out 
            = (1U & ((0U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_counter))
                      ? ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bit_shifter) 
                         >> 9U) : ((1U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_counter))
                                    ? ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bit_shifter) 
                                       >> 8U) : ((2U 
                                                  == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_counter))
                                                  ? 
                                                 ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bit_shifter) 
                                                  >> 7U)
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_counter))
                                                   ? 
                                                  ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bit_shifter) 
                                                   >> 6U)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_counter))
                                                    ? 
                                                   ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bit_shifter) 
                                                    >> 5U)
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_counter))
                                                     ? 
                                                    ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bit_shifter) 
                                                     >> 4U)
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_counter))
                                                      ? 
                                                     ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bit_shifter) 
                                                      >> 3U)
                                                      : 
                                                     ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bit_shifter) 
                                                      >> 2U)))))))));
    } else if ((8U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_counter))) {
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_shifter_out 
            = (1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bit_shifter) 
                     >> 1U));
    } else if ((9U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_counter))) {
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_shifter_out 
            = (1U & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bit_shifter));
    }
    if (((((((((0U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_counter)) 
               | (1U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_counter))) 
              | (2U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_counter))) 
             | (3U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_counter))) 
            | (4U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_counter))) 
           | (5U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_counter))) 
          | (6U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_counter))) 
         | (7U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_counter)))) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_shifter_out 
            = (1U & ((0U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_counter))
                      ? ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bit_shifter) 
                         >> 9U) : ((1U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_counter))
                                    ? ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bit_shifter) 
                                       >> 8U) : ((2U 
                                                  == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_counter))
                                                  ? 
                                                 ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bit_shifter) 
                                                  >> 7U)
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_counter))
                                                   ? 
                                                  ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bit_shifter) 
                                                   >> 6U)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_counter))
                                                    ? 
                                                   ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bit_shifter) 
                                                    >> 5U)
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_counter))
                                                     ? 
                                                    ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bit_shifter) 
                                                     >> 4U)
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_counter))
                                                      ? 
                                                     ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bit_shifter) 
                                                      >> 3U)
                                                      : 
                                                     ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bit_shifter) 
                                                      >> 2U)))))))));
    } else if ((8U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_counter))) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_shifter_out 
            = (1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bit_shifter) 
                     >> 1U));
    } else if ((9U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_counter))) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_shifter_out 
            = (1U & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bit_shifter));
    }
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_fifo_full 
        = (vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__wr_sync_register
           [1U] == ((0x18U & ((~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__wgray) 
                                  >> 3U)) << 3U)) | 
                    (7U & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__wgray))));
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__read_empty 
        = (vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register
           [1U] == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__rgray));
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__read_empty 
        = (vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__rd_sync_register
           [1U] == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__rgray));
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo_empty 
        = ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr) 
           == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr));
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__full 
        = (((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr) 
            == ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr) 
                - (IData)(1U))) | ((3U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr)) 
                                   & (0U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr))));
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo_empty 
        = ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr) 
           == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr));
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__full 
        = (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr) 
            == ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr) 
                - (IData)(1U))) | ((3U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr)) 
                                   & (0U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr))));
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_fifo_full 
        = (vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__wr_sync_register
           [1U] == ((0x18U & ((~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__wgray) 
                                  >> 3U)) << 3U)) | 
                    (7U & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__wgray))));
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__read_empty 
        = (vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register
           [1U] == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__rgray));
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__read_empty 
        = (vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__rd_sync_register
           [1U] == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__rgray));
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__word_load_en_sync 
        = ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__enable_n)) 
           & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo_read_en) 
              & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__word_load_en)));
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__word_load_en_sync 
        = ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__enable_n)) 
           & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo_read_en) 
              & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__word_load_en)));
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_lock 
        = ((0x10U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_data_count)) 
           || ((0x10U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_data_count)) 
               || ((0x10U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_data_count)) 
                   || (0x10U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_data_count)))));
    if ((0x10U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_data_count))) {
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_error = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_clk 
            = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_0;
    } else if ((0x10U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_data_count))) {
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_error = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_clk 
            = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_90;
    } else if ((0x10U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_data_count))) {
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_error = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_clk 
            = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_180;
    } else if ((0x10U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_data_count))) {
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_error = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_clk 
            = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_270;
    }
    if ((0x10U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_data_count))) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_error = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_clk 
            = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_0;
    } else if ((0x10U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_data_count))) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_error = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_clk 
            = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_90;
    } else if ((0x10U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_data_count))) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_error = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_clk 
            = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_180;
    } else if ((0x10U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_data_count))) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_error = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_clk 
            = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_270;
    }
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__des_fifo_full 
        = (vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register
           [1U] == ((0x600U & ((~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__wgray) 
                                   >> 9U)) << 9U)) 
                    | (0x1ffU & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__wgray))));
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__des_fifo_full 
        = (vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register
           [1U] == ((0x600U & ((~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__wgray) 
                                   >> 9U)) << 9U)) 
                    | (0x1ffU & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__wgray))));
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_lock 
        = ((0x10U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_data_count)) 
           || ((0x10U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_data_count)) 
               || ((0x10U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_data_count)) 
                   || (0x10U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_data_count)))));
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1737__DOT__s2 
        = ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b2__05d)
            ? ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b3__05d)
                ? 7U : 8U) : ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b3__05d)
                               ? 0xfU : 0U));
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1738__DOT__s1 
        = ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b1__05d)
            ? ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b2__05d)
                ? 1U : 2U) : ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b2__05d)
                               ? 3U : 0U));
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li1_li1 
        = (1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b0__05d)
                  ? (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b1__05d))
                  : (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b1__05d)));
    Vco_sim_GJC46_edit___024root___nba_comb__TOP__1____Vfork_2__0(vlSelf, vlSelf->__Vintraval_h799703ce__0);
    Vco_sim_GJC46_edit___024root___nba_comb__TOP__2____Vfork_3__0(vlSelf, vlSelf->__Vintraval_h14381aad__0);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1736__DOT__s3 
        = ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b2__05d)
            ? ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b4__05d)
                ? 0x7fU : 0x80U) : ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b4__05d)
                                     ? 0xffU : 0U));
    Vco_sim_GJC46_edit___024root___act_comb__TOP__0____Vfork_1__0(vlSelf, vlSelf->__Vintraval_h14e37c4a__0);
    Vco_sim_GJC46_edit___024root___act_comb__TOP__0____Vfork_4__0(vlSelf, vlSelf->__Vintraval_h8ba0df61__0);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1735__DOT__s4 
        = ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b2__05d)
            ? ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b5__05d)
                ? 0x7fffU : 0x8000U) : ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b5__05d)
                                         ? 0xffffU : 0U));
    if (vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b1__05d) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1730__DOT__s4 
            = ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b2__05d)
                ? 0x8000U : 0U);
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1737__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1737__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1736__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1736__DOT__s3) 
                       >> 4U));
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1735__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1735__DOT__s4) 
                        >> 8U));
    } else {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1730__DOT__s4 = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1737__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1737__DOT__s2));
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1736__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1736__DOT__s3));
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1735__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1735__DOT__s4));
    }
    if (vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b0__05d) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li2_li2 
            = (1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1738__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1730__DOT__s3 
            = (0xffU & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1730__DOT__s4) 
                        >> 8U));
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li3_li3 
            = (1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1737__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1736__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1736__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1735__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1735__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li2_li2 
            = (1U & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1738__DOT__s1));
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1730__DOT__s3 
            = (0xffU & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1730__DOT__s4));
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li3_li3 
            = (1U & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1737__DOT__s1));
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1736__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1736__DOT__s2));
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1735__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1735__DOT__s3));
    }
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT____Vcellinp__afifo_inst__wr 
        = ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__des_fifo_full)) 
           & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__word_load_en));
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT____Vcellinp__afifo_inst__wr 
        = ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__des_fifo_full)) 
           & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__word_load_en));
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__delay_out 
        = vlSelf->__VassignWtmp_co_sim_GJC46_edit__DOT__golden__DOT__delay_out__0;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__delay_out 
        = vlSelf->__VassignWtmp_co_sim_GJC46_edit__DOT__synth_net__DOT__delay_out__0;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__data_i_delay 
        = vlSelf->__VassignWtmp_co_sim_GJC46_edit__DOT__golden__DOT__data_i_delay__0;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_delay 
        = vlSelf->__VassignWtmp_co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_delay__0;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_dout 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__data_i_delay;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_dout 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_delay;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1730__DOT__s2 
        = (0xfU & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b5__05d)
                    ? ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1730__DOT__s3) 
                       >> 4U) : (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1730__DOT__s3)));
    if (vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b4__05d) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1735__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1735__DOT__s2) 
                     >> 2U));
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1730__DOT__s1 
            = (3U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1730__DOT__s2) 
                     >> 2U));
    } else {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1735__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1735__DOT__s2));
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1730__DOT__s1 
            = (3U & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1730__DOT__s2));
    }
    if (vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b3__05d) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li4_li4 
            = (1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1736__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li5_li5 
            = (1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1735__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F 
            = (1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1730__DOT__s1) 
                     >> 1U));
    } else {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li4_li4 
            = (1U & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1736__DOT__s1));
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li5_li5 
            = (1U & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1735__DOT__s1));
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F 
            = (1U & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1730__DOT__s1));
    }
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1733__DOT__s1 
        = ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
            ? ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                ? 1U : 2U) : ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                               ? 3U : 0U));
    if (vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d) {
        if (vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F) {
            vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1740__DOT__s1 = 1U;
            vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1731__DOT__s3 = 0x80U;
        } else {
            vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1740__DOT__s1 = 3U;
            vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1731__DOT__s3 = 0U;
        }
    } else {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1740__DOT__s1 = 3U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1731__DOT__s3 = 0U;
    }
    if (vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b6__05d) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li6_li6 
            = (1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)));
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li7_li7 
            = (1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1733__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024techmap____VhshMglinVWZCHfXbBuWRBrMeAkj83jPwEwlQ2Lgda8W 
            = (1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1740__DOT__s1) 
                     >> 1U));
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1731__DOT__s2 
            = (0xfU & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1731__DOT__s3) 
                       >> 4U));
    } else {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li6_li6 
            = (1U & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F));
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li7_li7 
            = (1U & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1733__DOT__s1));
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024techmap____VhshMglinVWZCHfXbBuWRBrMeAkj83jPwEwlQ2Lgda8W 
            = (1U & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1740__DOT__s1));
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1731__DOT__s2 
            = (0xfU & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1731__DOT__s3));
    }
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1731__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__des_fifo_empty)
                  ? (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1731__DOT__s2)
                  : ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1731__DOT__s2) 
                     >> 2U)));
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc____VhshGVgqBU6wRRDtA5Ir9Uo4M9yi2GGlyR1rSX1aUOlb 
        = (1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_lock)
                  ? ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1731__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1731__DOT__s1)));
}

VL_ATTR_COLD void Vco_sim_GJC46_edit___024root___eval_triggers__stl(Vco_sim_GJC46_edit___024root* vlSelf);

VL_ATTR_COLD bool Vco_sim_GJC46_edit___024root___eval_phase__stl(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vco_sim_GJC46_edit___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vco_sim_GJC46_edit___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_GJC46_edit___024root___dump_triggers__act(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge co_sim_GJC46_edit.golden.clk_pll_gen0.clk_vco)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge co_sim_GJC46_edit.synth_net.clk_pll_gen0.clk_vco)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge co_sim_GJC46_edit.golden.input_data_serdes.core_clk or posedge co_sim_GJC46_edit.reset)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge co_sim_GJC46_edit.golden.clk_pll_gen0.clk_vco or posedge co_sim_GJC46_edit.reset)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge co_sim_GJC46_edit.clkGHz)\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([changed] co_sim_GJC46_edit.golden.clk_pll_gen0.clk_vco)\n");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @(posedge co_sim_GJC46_edit.golden.clk_pll_gen0.clk_out_div2)\n");
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @(edge co_sim_GJC46_edit.golden.clk_pll_gen0.clk_vco)\n");
    }
    if ((0x100ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @(posedge co_sim_GJC46_edit.golden.input_data_serdes.clk_0 or posedge co_sim_GJC46_edit.reset)\n");
    }
    if ((0x200ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @(posedge co_sim_GJC46_edit.golden.input_data_serdes.clk_90 or posedge co_sim_GJC46_edit.reset)\n");
    }
    if ((0x400ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @(posedge co_sim_GJC46_edit.golden.input_data_serdes.clk_180 or posedge co_sim_GJC46_edit.reset)\n");
    }
    if ((0x800ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @(posedge co_sim_GJC46_edit.golden.input_data_serdes.clk_270 or posedge co_sim_GJC46_edit.reset)\n");
    }
    if ((0x1000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @(posedge co_sim_GJC46_edit.golden.input_data_serdes.cdr_clk or posedge co_sim_GJC46_edit.reset)\n");
    }
    if ((0x2000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 13 is active: @(posedge co_sim_GJC46_edit.golden.input_data_serdes.cdr_clk)\n");
    }
    if ((0x4000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 14 is active: @(posedge co_sim_GJC46_edit.clkGHz or posedge co_sim_GJC46_edit.reset)\n");
    }
    if ((0x8000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 15 is active: @(posedge co_sim_GJC46_edit.reset or posedge co_sim_GJC46_edit.synth_net.clk_pll_gen0.clk_vco)\n");
    }
    if ((0x10000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 16 is active: @(posedge co_sim_GJC46_edit.reset or posedge co_sim_GJC46_edit.synth_net.input_data_serdes.core_clk)\n");
    }
    if ((0x20000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 17 is active: @([changed] co_sim_GJC46_edit.synth_net.clk_pll_gen0.clk_vco)\n");
    }
    if ((0x40000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 18 is active: @(posedge co_sim_GJC46_edit.synth_net.clk_pll_gen0.clk_out_div2)\n");
    }
    if ((0x80000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 19 is active: @(edge co_sim_GJC46_edit.synth_net.clk_pll_gen0.clk_vco)\n");
    }
    if ((0x100000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 20 is active: @(posedge co_sim_GJC46_edit.reset or posedge co_sim_GJC46_edit.synth_net.input_data_serdes.clk_0)\n");
    }
    if ((0x200000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 21 is active: @(posedge co_sim_GJC46_edit.reset or posedge co_sim_GJC46_edit.synth_net.input_data_serdes.clk_90)\n");
    }
    if ((0x400000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 22 is active: @(posedge co_sim_GJC46_edit.reset or posedge co_sim_GJC46_edit.synth_net.input_data_serdes.clk_180)\n");
    }
    if ((0x800000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 23 is active: @(posedge co_sim_GJC46_edit.reset or posedge co_sim_GJC46_edit.synth_net.input_data_serdes.clk_270)\n");
    }
    if ((0x1000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 24 is active: @(posedge co_sim_GJC46_edit.reset or posedge co_sim_GJC46_edit.synth_net.input_data_serdes.cdr_clk)\n");
    }
    if ((0x2000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 25 is active: @(posedge co_sim_GJC46_edit.synth_net.input_data_serdes.cdr_clk)\n");
    }
    if ((0x4000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 26 is active: @(edge co_sim_GJC46_edit.golden.input_data_serdes.clk_0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x8000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 27 is active: @(edge co_sim_GJC46_edit.golden.input_data_serdes.clk_180 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x10000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 28 is active: @(edge co_sim_GJC46_edit.synth_net.input_data_serdes.clk_0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x20000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 29 is active: @(edge co_sim_GJC46_edit.synth_net.input_data_serdes.clk_180 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x40000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 30 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x80000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 31 is active: @(negedge co_sim_GJC46_edit.clkGHz)\n");
    }
    if ((0x100000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 32 is active: @([changed] co_sim_GJC46_edit.golden.clk_pll_gen0.vcostart_ff)\n");
    }
    if ((0x200000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 33 is active: @([changed] co_sim_GJC46_edit.synth_net.clk_pll_gen0.vcostart_ff)\n");
    }
    if ((0x400000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 34 is active: @(edge co_sim_GJC46_edit.golden.input_data_serdes.clk_0)\n");
    }
    if ((0x800000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 35 is active: @(edge co_sim_GJC46_edit.golden.input_data_serdes.clk_180)\n");
    }
    if ((0x1000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 36 is active: @(edge co_sim_GJC46_edit.synth_net.input_data_serdes.clk_0)\n");
    }
    if ((0x2000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 37 is active: @(edge co_sim_GJC46_edit.synth_net.input_data_serdes.clk_180)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_GJC46_edit___024root___dump_triggers__nba(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge co_sim_GJC46_edit.golden.clk_pll_gen0.clk_vco)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge co_sim_GJC46_edit.synth_net.clk_pll_gen0.clk_vco)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge co_sim_GJC46_edit.golden.input_data_serdes.core_clk or posedge co_sim_GJC46_edit.reset)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge co_sim_GJC46_edit.golden.clk_pll_gen0.clk_vco or posedge co_sim_GJC46_edit.reset)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge co_sim_GJC46_edit.clkGHz)\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([changed] co_sim_GJC46_edit.golden.clk_pll_gen0.clk_vco)\n");
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @(posedge co_sim_GJC46_edit.golden.clk_pll_gen0.clk_out_div2)\n");
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @(edge co_sim_GJC46_edit.golden.clk_pll_gen0.clk_vco)\n");
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @(posedge co_sim_GJC46_edit.golden.input_data_serdes.clk_0 or posedge co_sim_GJC46_edit.reset)\n");
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @(posedge co_sim_GJC46_edit.golden.input_data_serdes.clk_90 or posedge co_sim_GJC46_edit.reset)\n");
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @(posedge co_sim_GJC46_edit.golden.input_data_serdes.clk_180 or posedge co_sim_GJC46_edit.reset)\n");
    }
    if ((0x800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @(posedge co_sim_GJC46_edit.golden.input_data_serdes.clk_270 or posedge co_sim_GJC46_edit.reset)\n");
    }
    if ((0x1000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @(posedge co_sim_GJC46_edit.golden.input_data_serdes.cdr_clk or posedge co_sim_GJC46_edit.reset)\n");
    }
    if ((0x2000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 13 is active: @(posedge co_sim_GJC46_edit.golden.input_data_serdes.cdr_clk)\n");
    }
    if ((0x4000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 14 is active: @(posedge co_sim_GJC46_edit.clkGHz or posedge co_sim_GJC46_edit.reset)\n");
    }
    if ((0x8000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 15 is active: @(posedge co_sim_GJC46_edit.reset or posedge co_sim_GJC46_edit.synth_net.clk_pll_gen0.clk_vco)\n");
    }
    if ((0x10000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 16 is active: @(posedge co_sim_GJC46_edit.reset or posedge co_sim_GJC46_edit.synth_net.input_data_serdes.core_clk)\n");
    }
    if ((0x20000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 17 is active: @([changed] co_sim_GJC46_edit.synth_net.clk_pll_gen0.clk_vco)\n");
    }
    if ((0x40000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 18 is active: @(posedge co_sim_GJC46_edit.synth_net.clk_pll_gen0.clk_out_div2)\n");
    }
    if ((0x80000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 19 is active: @(edge co_sim_GJC46_edit.synth_net.clk_pll_gen0.clk_vco)\n");
    }
    if ((0x100000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 20 is active: @(posedge co_sim_GJC46_edit.reset or posedge co_sim_GJC46_edit.synth_net.input_data_serdes.clk_0)\n");
    }
    if ((0x200000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 21 is active: @(posedge co_sim_GJC46_edit.reset or posedge co_sim_GJC46_edit.synth_net.input_data_serdes.clk_90)\n");
    }
    if ((0x400000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 22 is active: @(posedge co_sim_GJC46_edit.reset or posedge co_sim_GJC46_edit.synth_net.input_data_serdes.clk_180)\n");
    }
    if ((0x800000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 23 is active: @(posedge co_sim_GJC46_edit.reset or posedge co_sim_GJC46_edit.synth_net.input_data_serdes.clk_270)\n");
    }
    if ((0x1000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 24 is active: @(posedge co_sim_GJC46_edit.reset or posedge co_sim_GJC46_edit.synth_net.input_data_serdes.cdr_clk)\n");
    }
    if ((0x2000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 25 is active: @(posedge co_sim_GJC46_edit.synth_net.input_data_serdes.cdr_clk)\n");
    }
    if ((0x4000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 26 is active: @(edge co_sim_GJC46_edit.golden.input_data_serdes.clk_0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x8000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 27 is active: @(edge co_sim_GJC46_edit.golden.input_data_serdes.clk_180 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x10000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 28 is active: @(edge co_sim_GJC46_edit.synth_net.input_data_serdes.clk_0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x20000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 29 is active: @(edge co_sim_GJC46_edit.synth_net.input_data_serdes.clk_180 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x40000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 30 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x80000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 31 is active: @(negedge co_sim_GJC46_edit.clkGHz)\n");
    }
    if ((0x100000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 32 is active: @([changed] co_sim_GJC46_edit.golden.clk_pll_gen0.vcostart_ff)\n");
    }
    if ((0x200000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 33 is active: @([changed] co_sim_GJC46_edit.synth_net.clk_pll_gen0.vcostart_ff)\n");
    }
    if ((0x400000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 34 is active: @(edge co_sim_GJC46_edit.golden.input_data_serdes.clk_0)\n");
    }
    if ((0x800000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 35 is active: @(edge co_sim_GJC46_edit.golden.input_data_serdes.clk_180)\n");
    }
    if ((0x1000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 36 is active: @(edge co_sim_GJC46_edit.synth_net.input_data_serdes.clk_0)\n");
    }
    if ((0x2000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 37 is active: @(edge co_sim_GJC46_edit.synth_net.input_data_serdes.clk_180)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vco_sim_GJC46_edit___024root___ctor_var_reset(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->co_sim_GJC46_edit__DOT__clkGHz = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__bitslip_ctrl_n = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__data_i = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__enable_n = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__mismatch = VL_RAND_RESET_I(32);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__data_i_delay = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_in = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__data_i_serdes = VL_RAND_RESET_I(10);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__data_i_serdes_reg = VL_RAND_RESET_I(10);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__wait_pll = VL_RAND_RESET_I(8);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__delay_out = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__LOCK = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__t0 = 0;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__t1 = 0;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__ref_period = 0;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__vco_period = 0;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__postdiv_period = 0;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__old_ref_period = 0;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_pll = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__pllstart = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__pllstart_ff1 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__pllstart_ff2 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__vcostart = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__vcostart_ff = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__lose_lock = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_out_div2 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_out_div3 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_out_div4 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_vco = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_postdiv = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__div3_count = VL_RAND_RESET_I(32);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__PLL_DIV_ff = VL_RAND_RESET_I(6);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__PLL_MULT_ff = VL_RAND_RESET_I(12);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__lock_counter = VL_RAND_RESET_I(9);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_delay__DOT__dly_ld_0 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_delay__DOT__dly_ld_1 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_delay__DOT__dly_adj_0 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_delay__DOT__dly_adj_1 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_delay__DOT__dly_tap_val = VL_RAND_RESET_I(6);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_0 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_90 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_180 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_270 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__start_point = 0;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__end_point = 0;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_period = 0;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__period_quarter = 0;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_start = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_data_reg = VL_RAND_RESET_I(4);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_data_comp = VL_RAND_RESET_I(4);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_data_reg = VL_RAND_RESET_I(4);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_data_comp = VL_RAND_RESET_I(4);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_data_reg = VL_RAND_RESET_I(4);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_data_comp = VL_RAND_RESET_I(4);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_data_reg = VL_RAND_RESET_I(4);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_data_comp = VL_RAND_RESET_I(4);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_data_count = VL_RAND_RESET_I(5);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_data_count = VL_RAND_RESET_I(5);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_data_count = VL_RAND_RESET_I(5);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_data_count = VL_RAND_RESET_I(5);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_reg_data_count = VL_RAND_RESET_I(2);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_reg_data_count = VL_RAND_RESET_I(2);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_reg_data_count = VL_RAND_RESET_I(2);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_reg_data_count = VL_RAND_RESET_I(2);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_lock = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_clk = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_dout = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_error = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_fifo_empty = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_fifo_full = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_fifo_dout = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_adj_1 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_adj_0 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_dout = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_shifter_out = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bit_shifter = VL_RAND_RESET_I(10);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_counter = VL_RAND_RESET_I(4);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__core_clk = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__word_load_en = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__pll_lock_count = VL_RAND_RESET_I(9);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__core_clk_count = VL_RAND_RESET_I(4);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_core_clk = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_word_load_en = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_pll_lock_count = VL_RAND_RESET_I(9);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_core_clk_count = VL_RAND_RESET_I(4);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__des_shifter = VL_RAND_RESET_I(10);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__des_parallel_reg = VL_RAND_RESET_I(10);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__des_fifo_empty = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__des_fifo_full = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT____Vcellinp__afifo_inst__wr = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__rd_addr = VL_RAND_RESET_I(5);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__wr_addr = VL_RAND_RESET_I(5);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__next_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__next_wr_addr = VL_RAND_RESET_I(5);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__rgray = VL_RAND_RESET_I(5);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__wgray = VL_RAND_RESET_I(5);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__read_empty = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__wr_sync_register[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__rd_addr = VL_RAND_RESET_I(11);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__wr_addr = VL_RAND_RESET_I(11);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__next_rd_addr = VL_RAND_RESET_I(11);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__next_wr_addr = VL_RAND_RESET_I(11);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__rgray = VL_RAND_RESET_I(11);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__wgray = VL_RAND_RESET_I(11);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__read_empty = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__rd_sync_register[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__dual_port_ram__DOT__genblk1__DOT__mem[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__CHANNEL_BOND_SYNC_IN = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__core_clk = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__word_load_en = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__pll_lock_count = VL_RAND_RESET_I(9);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__core_clk_count = VL_RAND_RESET_I(4);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fast_clk_sync_out = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__read_en = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo_empty = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo_read_en = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__word_load_en_sync = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__data_parallel_reg = VL_RAND_RESET_I(10);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__data_shift_reg = VL_RAND_RESET_I(10);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__oe_parallel_reg = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__oe_shift_reg = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__full = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_data_reg = VL_RAND_RESET_I(11);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr = VL_RAND_RESET_I(2);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr = VL_RAND_RESET_I(2);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_delay__DOT__dly_ld_0 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_delay__DOT__dly_ld_1 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_delay__DOT__dly_adj_0 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_delay__DOT__dly_adj_1 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_delay__DOT__dly_tap_val = VL_RAND_RESET_I(6);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc____VhshGVgqBU6wRRDtA5Ir9Uo4M9yi2GGlyR1rSX1aUOlb = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li0_li0 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li1_li1 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li2_li2 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li3_li3 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li4_li4 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li5_li5 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li6_li6 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li7_li7 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024techmap____VhshMglinVWZCHfXbBuWRBrMeAkj83jPwEwlQ2Lgda8W = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_delay = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b0__05d = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b1__05d = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b2__05d = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b3__05d = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b4__05d = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b5__05d = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b6__05d = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b7__05d = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b8__05d = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b9__05d = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__delay_out = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b0__05d = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b1__05d = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b2__05d = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b3__05d = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b4__05d = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b5__05d = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b6__05d = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q = VL_RAND_RESET_I(10);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1730__DOT__s4 = VL_RAND_RESET_I(16);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1730__DOT__s3 = VL_RAND_RESET_I(8);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1730__DOT__s2 = VL_RAND_RESET_I(4);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1730__DOT__s1 = VL_RAND_RESET_I(2);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1731__DOT__s3 = VL_RAND_RESET_I(8);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1731__DOT__s2 = VL_RAND_RESET_I(4);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1731__DOT__s1 = VL_RAND_RESET_I(2);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1733__DOT__s1 = VL_RAND_RESET_I(2);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1735__DOT__s4 = VL_RAND_RESET_I(16);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1735__DOT__s3 = VL_RAND_RESET_I(8);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1735__DOT__s2 = VL_RAND_RESET_I(4);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1735__DOT__s1 = VL_RAND_RESET_I(2);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1736__DOT__s3 = VL_RAND_RESET_I(8);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1736__DOT__s2 = VL_RAND_RESET_I(4);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1736__DOT__s1 = VL_RAND_RESET_I(2);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1737__DOT__s2 = VL_RAND_RESET_I(4);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1737__DOT__s1 = VL_RAND_RESET_I(2);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1738__DOT__s1 = VL_RAND_RESET_I(2);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1740__DOT__s1 = VL_RAND_RESET_I(2);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__LOCK = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__t0 = 0;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__t1 = 0;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__ref_period = 0;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__vco_period = 0;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__postdiv_period = 0;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__old_ref_period = 0;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_pll = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__pllstart = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__pllstart_ff1 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__pllstart_ff2 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__vcostart = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__vcostart_ff = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__lose_lock = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_out_div2 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_out_div3 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_out_div4 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_postdiv = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__div3_count = VL_RAND_RESET_I(32);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__PLL_DIV_ff = VL_RAND_RESET_I(6);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__PLL_MULT_ff = VL_RAND_RESET_I(12);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__lock_counter = VL_RAND_RESET_I(9);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_delay__DOT__dly_ld_0 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_delay__DOT__dly_ld_1 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_delay__DOT__dly_adj_0 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_delay__DOT__dly_adj_1 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_delay__DOT__dly_tap_val = VL_RAND_RESET_I(6);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__CHANNEL_BOND_SYNC_IN = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__core_clk = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__word_load_en = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__pll_lock_count = VL_RAND_RESET_I(9);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__core_clk_count = VL_RAND_RESET_I(4);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fast_clk_sync_out = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__read_en = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo_empty = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo_read_en = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__word_load_en_sync = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__data_parallel_reg = VL_RAND_RESET_I(10);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__data_shift_reg = VL_RAND_RESET_I(10);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__oe_parallel_reg = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__oe_shift_reg = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__full = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_data_reg = VL_RAND_RESET_I(11);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr = VL_RAND_RESET_I(2);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr = VL_RAND_RESET_I(2);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_delay__DOT__dly_ld_0 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_delay__DOT__dly_ld_1 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_delay__DOT__dly_adj_0 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_delay__DOT__dly_adj_1 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_delay__DOT__dly_tap_val = VL_RAND_RESET_I(6);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_0 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_90 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_180 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_270 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__start_point = 0;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__end_point = 0;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_period = 0;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__period_quarter = 0;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_start = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_data_reg = VL_RAND_RESET_I(4);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_data_comp = VL_RAND_RESET_I(4);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_data_reg = VL_RAND_RESET_I(4);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_data_comp = VL_RAND_RESET_I(4);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_data_reg = VL_RAND_RESET_I(4);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_data_comp = VL_RAND_RESET_I(4);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_data_reg = VL_RAND_RESET_I(4);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_data_comp = VL_RAND_RESET_I(4);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_data_count = VL_RAND_RESET_I(5);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_data_count = VL_RAND_RESET_I(5);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_data_count = VL_RAND_RESET_I(5);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_data_count = VL_RAND_RESET_I(5);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_reg_data_count = VL_RAND_RESET_I(2);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_reg_data_count = VL_RAND_RESET_I(2);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_reg_data_count = VL_RAND_RESET_I(2);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_reg_data_count = VL_RAND_RESET_I(2);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_lock = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_clk = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_dout = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_error = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_fifo_empty = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_fifo_full = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_fifo_dout = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_adj_1 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_adj_0 = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_dout = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_shifter_out = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bit_shifter = VL_RAND_RESET_I(10);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_counter = VL_RAND_RESET_I(4);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__word_load_en = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__pll_lock_count = VL_RAND_RESET_I(9);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk_count = VL_RAND_RESET_I(4);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_core_clk = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_word_load_en = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_pll_lock_count = VL_RAND_RESET_I(9);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_core_clk_count = VL_RAND_RESET_I(4);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__des_shifter = VL_RAND_RESET_I(10);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__des_parallel_reg = VL_RAND_RESET_I(10);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__des_fifo_empty = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__des_fifo_full = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT____Vcellinp__afifo_inst__wr = VL_RAND_RESET_I(1);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__rd_addr = VL_RAND_RESET_I(5);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__wr_addr = VL_RAND_RESET_I(5);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__next_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__next_wr_addr = VL_RAND_RESET_I(5);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__rgray = VL_RAND_RESET_I(5);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__wgray = VL_RAND_RESET_I(5);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__read_empty = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__wr_sync_register[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__rd_addr = VL_RAND_RESET_I(11);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__wr_addr = VL_RAND_RESET_I(11);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__next_rd_addr = VL_RAND_RESET_I(11);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__next_wr_addr = VL_RAND_RESET_I(11);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__rgray = VL_RAND_RESET_I(11);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__wgray = VL_RAND_RESET_I(11);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__read_empty = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__rd_sync_register[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__dual_port_ram__DOT__genblk1__DOT__mem[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->__VassignWtmp_co_sim_GJC46_edit__DOT__golden__DOT__data_i_delay__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vintraval_h14e37c4a__0 = VL_RAND_RESET_I(1);
    vlSelf->__VassignWtmp_co_sim_GJC46_edit__DOT__golden__DOT__delay_out__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vintraval_h799703ce__0 = VL_RAND_RESET_I(1);
    vlSelf->__VassignWtmp_co_sim_GJC46_edit__DOT__synth_net__DOT__delay_out__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vintraval_h14381aad__0 = VL_RAND_RESET_I(1);
    vlSelf->__VassignWtmp_co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_delay__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vintraval_h8ba0df61__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__co_sim_GJC46_edit__DOT__golden__DOT__wait_pll = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_90__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_90__v0 = 0;
    vlSelf->__Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_180__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_180__v0 = 0;
    vlSelf->__Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_270__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_270__v0 = 0;
    vlSelf->__Vdlyvdim0__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem__v0 = 0;
    vlSelf->__Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem__v0 = 0;
    vlSelf->__Vdlyvdim0__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__dual_port_ram__DOT__genblk1__DOT__mem__v0 = 0;
    vlSelf->__Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__dual_port_ram__DOT__genblk1__DOT__mem__v0 = VL_RAND_RESET_I(10);
    vlSelf->__Vdlyvset__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__dual_port_ram__DOT__genblk1__DOT__mem__v0 = 0;
    vlSelf->__Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_90__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_90__v0 = 0;
    vlSelf->__Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_180__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_180__v0 = 0;
    vlSelf->__Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_270__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_270__v0 = 0;
    vlSelf->__Vdlyvdim0__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem__v0 = 0;
    vlSelf->__Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem__v0 = 0;
    vlSelf->__Vdlyvdim0__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__dual_port_ram__DOT__genblk1__DOT__mem__v0 = 0;
    vlSelf->__Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__dual_port_ram__DOT__genblk1__DOT__mem__v0 = VL_RAND_RESET_I(10);
    vlSelf->__Vdlyvset__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__dual_port_ram__DOT__genblk1__DOT__mem__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_vco__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__core_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__reset__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__clkGHz__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_out_div2__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_0__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_90__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_180__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_270__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_out_div2__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_0__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_90__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_180__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_270__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__vcostart_ff__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__vcostart_ff__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 35; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
