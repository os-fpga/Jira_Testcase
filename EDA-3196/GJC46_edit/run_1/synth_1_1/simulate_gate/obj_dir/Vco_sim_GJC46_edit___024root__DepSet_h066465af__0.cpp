// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_GJC46_edit.h for the primary calling header

#include "Vco_sim_GJC46_edit__pch.h"
#include "Vco_sim_GJC46_edit___024root.h"

VL_ATTR_COLD void Vco_sim_GJC46_edit___024root___eval_initial__TOP(Vco_sim_GJC46_edit___024root* vlSelf);
VlCoroutine Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__0(Vco_sim_GJC46_edit___024root* vlSelf);
VlCoroutine Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__1(Vco_sim_GJC46_edit___024root* vlSelf);
VlCoroutine Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__2(Vco_sim_GJC46_edit___024root* vlSelf);
VlCoroutine Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__3(Vco_sim_GJC46_edit___024root* vlSelf);
VlCoroutine Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__4(Vco_sim_GJC46_edit___024root* vlSelf);
VlCoroutine Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__5(Vco_sim_GJC46_edit___024root* vlSelf);
VlCoroutine Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__6(Vco_sim_GJC46_edit___024root* vlSelf);
VlCoroutine Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__7(Vco_sim_GJC46_edit___024root* vlSelf);
VlCoroutine Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__8(Vco_sim_GJC46_edit___024root* vlSelf);
VlCoroutine Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__9(Vco_sim_GJC46_edit___024root* vlSelf);
VlCoroutine Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__10(Vco_sim_GJC46_edit___024root* vlSelf);
VlCoroutine Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__11(Vco_sim_GJC46_edit___024root* vlSelf);
VlCoroutine Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__12(Vco_sim_GJC46_edit___024root* vlSelf);
VlCoroutine Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__13(Vco_sim_GJC46_edit___024root* vlSelf);

void Vco_sim_GJC46_edit___024root___eval_initial(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___eval_initial\n"); );
    // Body
    Vco_sim_GJC46_edit___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__3(vlSelf);
    Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__4(vlSelf);
    Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__5(vlSelf);
    Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__6(vlSelf);
    Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__7(vlSelf);
    Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__8(vlSelf);
    Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__9(vlSelf);
    Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__10(vlSelf);
    Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__11(vlSelf);
    Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__12(vlSelf);
    Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__13(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_vco__0 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_vco;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco__0 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__core_clk__0 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__core_clk;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__reset__0 
        = vlSelf->co_sim_GJC46_edit__DOT__reset;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__clkGHz__0 
        = vlSelf->co_sim_GJC46_edit__DOT__clkGHz;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_out_div2__0 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_out_div2;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_0__0 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_0;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_90__0 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_90;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_180__0 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_180;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_270__0 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_270;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_clk__0 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_clk;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk__0 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_out_div2__0 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_out_div2;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_0__0 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_0;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_90__0 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_90;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_180__0 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_180;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_270__0 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_270;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_clk__0 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_clk;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__vcostart_ff__0 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__vcostart_ff;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__vcostart_ff__0 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__vcostart_ff;
}

VL_INLINE_OPT VlCoroutine Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__0(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->co_sim_GJC46_edit__DOT__clkGHz = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1e8480ULL, 
                                           nullptr, 
                                           "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/GJC_INVALID_UPDATE/Validation/RTL_testcases/GJC-IO-Testcases/GJC46/EDA-3196/./sim/co_sim_tb/co_sim_GJC46_edit.v", 
                                           33);
        vlSelf->co_sim_GJC46_edit__DOT__clkGHz = (1U 
                                                  & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__clkGHz)));
    }
}

VL_INLINE_OPT VlCoroutine Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__2(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_vco = 0U;
    while (1U) {
        while ((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__vcostart_ff)))) {
            co_await vlSelf->__VtrigSched_h8ca313d9__0.trigger(1U, 
                                                               nullptr, 
                                                               "@([changed] co_sim_GJC46_edit.golden.clk_pll_gen0.vcostart_ff)", 
                                                               "/nfs_eda_sw/softwares/Raptor/instl_dir/09_08_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/PLL.v", 
                                                               105);
        }
        co_await vlSelf->__VdlySched.delay(VL_RTOIROUND_Q_D(
                                                            (100.0 
                                                             * 
                                                             (vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__vco_period 
                                                              / 2.0))), 
                                           nullptr, 
                                           "/nfs_eda_sw/softwares/Raptor/instl_dir/09_08_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/PLL.v", 
                                           106);
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_vco 
            = (1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_vco)));
    }
}

VL_INLINE_OPT VlCoroutine Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__3(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__3\n"); );
    // Body
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_postdiv = 0U;
    while (1U) {
        while ((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__vcostart_ff)))) {
            co_await vlSelf->__VtrigSched_h8ca313d9__0.trigger(1U, 
                                                               nullptr, 
                                                               "@([changed] co_sim_GJC46_edit.golden.clk_pll_gen0.vcostart_ff)", 
                                                               "/nfs_eda_sw/softwares/Raptor/instl_dir/09_08_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/PLL.v", 
                                                               114);
        }
        co_await vlSelf->__VdlySched.delay(VL_RTOIROUND_Q_D(
                                                            (100.0 
                                                             * 
                                                             (vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__postdiv_period 
                                                              / 2.0))), 
                                           nullptr, 
                                           "/nfs_eda_sw/softwares/Raptor/instl_dir/09_08_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/PLL.v", 
                                           115);
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_postdiv 
            = (1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_postdiv)));
    }
}

VL_INLINE_OPT VlCoroutine Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__4(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__4\n"); );
    // Body
    co_await vlSelf->__VtrigSched_h602354a6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge co_sim_GJC46_edit.golden.clk_pll_gen0.clk_vco)", 
                                                       "/nfs_eda_sw/softwares/Raptor/instl_dir/09_08_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/I_SERDES.v", 
                                                       341);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__start_point 
        = VL_TIME_UNITED_D(100000);
    co_await vlSelf->__VtrigSched_h602354a6__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge co_sim_GJC46_edit.golden.clk_pll_gen0.clk_vco)", 
                                                       "/nfs_eda_sw/softwares/Raptor/instl_dir/09_08_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/I_SERDES.v", 
                                                       343);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__end_point 
        = VL_TIME_UNITED_D(100000);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_period 
        = (vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__end_point 
           - vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__start_point);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__period_quarter 
        = (vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_period 
           / 4.0);
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_start = 1U;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "/nfs_eda_sw/softwares/Raptor/instl_dir/09_08_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/I_SERDES.v", 
                                       348);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__5(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__5\n"); );
    // Body
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco = 0U;
    while (1U) {
        while ((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__vcostart_ff)))) {
            co_await vlSelf->__VtrigSched_hfece4fe3__0.trigger(1U, 
                                                               nullptr, 
                                                               "@([changed] co_sim_GJC46_edit.synth_net.clk_pll_gen0.vcostart_ff)", 
                                                               "/nfs_eda_sw/softwares/Raptor/instl_dir/09_08_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/PLL.v", 
                                                               105);
            vlSelf->__Vm_traceActivity[4U] = 1U;
        }
        co_await vlSelf->__VdlySched.delay(VL_RTOIROUND_Q_D(
                                                            (100.0 
                                                             * 
                                                             (vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__vco_period 
                                                              / 2.0))), 
                                           nullptr, 
                                           "/nfs_eda_sw/softwares/Raptor/instl_dir/09_08_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/PLL.v", 
                                           106);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco 
            = (1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco)));
    }
    vlSelf->__Vm_traceActivity[4U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__6(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__6\n"); );
    // Body
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_postdiv = 0U;
    while (1U) {
        while ((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__vcostart_ff)))) {
            co_await vlSelf->__VtrigSched_hfece4fe3__0.trigger(1U, 
                                                               nullptr, 
                                                               "@([changed] co_sim_GJC46_edit.synth_net.clk_pll_gen0.vcostart_ff)", 
                                                               "/nfs_eda_sw/softwares/Raptor/instl_dir/09_08_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/PLL.v", 
                                                               114);
        }
        co_await vlSelf->__VdlySched.delay(VL_RTOIROUND_Q_D(
                                                            (100.0 
                                                             * 
                                                             (vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__postdiv_period 
                                                              / 2.0))), 
                                           nullptr, 
                                           "/nfs_eda_sw/softwares/Raptor/instl_dir/09_08_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/PLL.v", 
                                           115);
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_postdiv 
            = (1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_postdiv)));
    }
}

VL_INLINE_OPT VlCoroutine Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__7(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__7\n"); );
    // Body
    co_await vlSelf->__VtrigSched_hedea8e0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge co_sim_GJC46_edit.synth_net.clk_pll_gen0.clk_vco)", 
                                                       "/nfs_eda_sw/softwares/Raptor/instl_dir/09_08_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/I_SERDES.v", 
                                                       341);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__start_point 
        = VL_TIME_UNITED_D(100000);
    co_await vlSelf->__VtrigSched_hedea8e0c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge co_sim_GJC46_edit.synth_net.clk_pll_gen0.clk_vco)", 
                                                       "/nfs_eda_sw/softwares/Raptor/instl_dir/09_08_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/I_SERDES.v", 
                                                       343);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__end_point 
        = VL_TIME_UNITED_D(100000);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_period 
        = (vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__end_point 
           - vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__start_point);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__period_quarter 
        = (vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_period 
           / 4.0);
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_start = 1U;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "/nfs_eda_sw/softwares/Raptor/instl_dir/09_08_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/I_SERDES.v", 
                                       348);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__8(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__8\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h90ee1c21__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge co_sim_GJC46_edit.clkGHz)", 
                                                           "/nfs_eda_sw/softwares/Raptor/instl_dir/09_08_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/PLL.v", 
                                                           90);
        vlSelf->__Vm_traceActivity[6U] = 1U;
        co_await vlSelf->__VtrigSched_h90ee1c21__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge co_sim_GJC46_edit.clkGHz)", 
                                                           "/nfs_eda_sw/softwares/Raptor/instl_dir/09_08_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/PLL.v", 
                                                           91);
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__t0 
            = VL_TIME_UNITED_D(100);
        co_await vlSelf->__VtrigSched_h90ee1c21__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge co_sim_GJC46_edit.clkGHz)", 
                                                           "/nfs_eda_sw/softwares/Raptor/instl_dir/09_08_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/PLL.v", 
                                                           92);
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__t1 
            = VL_TIME_UNITED_D(100);
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__ref_period 
            = (vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__t1 
               - vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__t0);
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__vco_period 
            = ((2.0 * vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__ref_period) 
               / 50.0);
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__postdiv_period 
            = ((2.0 * vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__ref_period) 
               / 50.0);
    }
    vlSelf->__Vm_traceActivity[6U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__9(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__9\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h6dbc2dfd__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(edge co_sim_GJC46_edit.golden.input_data_serdes.clk_0)", 
                                                           "/nfs_eda_sw/softwares/Raptor/instl_dir/09_08_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/I_SERDES.v", 
                                                           359);
        if (vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_start) {
            co_await vlSelf->__VdlySched.delay(VL_RTOIROUND_Q_D(
                                                                (1.00000000000000000e+05 
                                                                 * vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__period_quarter)), 
                                               nullptr, 
                                               "/nfs_eda_sw/softwares/Raptor/instl_dir/09_08_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/I_SERDES.v", 
                                               363);
            vlSelf->__Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_90__v0 
                = (1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_90)));
            vlSelf->__Vdlyvset__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_90__v0 = 1U;
            co_await vlSelf->__VdlySched.delay(VL_RTOIROUND_Q_D(
                                                                (1.00000000000000000e+05 
                                                                 * vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__period_quarter)), 
                                               nullptr, 
                                               "/nfs_eda_sw/softwares/Raptor/instl_dir/09_08_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/I_SERDES.v", 
                                               365);
            vlSelf->__Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_180__v0 
                = (1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_180)));
            vlSelf->__Vdlyvset__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_180__v0 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__10(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__10\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h0738c86a__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(edge co_sim_GJC46_edit.golden.input_data_serdes.clk_180)", 
                                                           "/nfs_eda_sw/softwares/Raptor/instl_dir/09_08_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/I_SERDES.v", 
                                                           371);
        if (vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_start) {
            co_await vlSelf->__VdlySched.delay(VL_RTOIROUND_Q_D(
                                                                (1.00000000000000000e+05 
                                                                 * vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__period_quarter)), 
                                               nullptr, 
                                               "/nfs_eda_sw/softwares/Raptor/instl_dir/09_08_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/I_SERDES.v", 
                                               375);
            vlSelf->__Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_270__v0 
                = (1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_270)));
            vlSelf->__Vdlyvset__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_270__v0 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__11(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__11\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h90ee1c21__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge co_sim_GJC46_edit.clkGHz)", 
                                                           "/nfs_eda_sw/softwares/Raptor/instl_dir/09_08_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/PLL.v", 
                                                           90);
        vlSelf->__Vm_traceActivity[7U] = 1U;
        co_await vlSelf->__VtrigSched_h90ee1c21__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge co_sim_GJC46_edit.clkGHz)", 
                                                           "/nfs_eda_sw/softwares/Raptor/instl_dir/09_08_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/PLL.v", 
                                                           91);
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__t0 
            = VL_TIME_UNITED_D(100);
        co_await vlSelf->__VtrigSched_h90ee1c21__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge co_sim_GJC46_edit.clkGHz)", 
                                                           "/nfs_eda_sw/softwares/Raptor/instl_dir/09_08_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/PLL.v", 
                                                           92);
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__t1 
            = VL_TIME_UNITED_D(100);
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__ref_period 
            = (vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__t1 
               - vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__t0);
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__vco_period 
            = ((2.0 * vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__ref_period) 
               / 50.0);
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__postdiv_period 
            = ((2.0 * vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__ref_period) 
               / 50.0);
    }
    vlSelf->__Vm_traceActivity[7U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__12(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__12\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_hc7d82c34__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(edge co_sim_GJC46_edit.synth_net.input_data_serdes.clk_0)", 
                                                           "/nfs_eda_sw/softwares/Raptor/instl_dir/09_08_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/I_SERDES.v", 
                                                           359);
        if (vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_start) {
            co_await vlSelf->__VdlySched.delay(VL_RTOIROUND_Q_D(
                                                                (1.00000000000000000e+05 
                                                                 * vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__period_quarter)), 
                                               nullptr, 
                                               "/nfs_eda_sw/softwares/Raptor/instl_dir/09_08_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/I_SERDES.v", 
                                               363);
            vlSelf->__Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_90__v0 
                = (1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_90)));
            vlSelf->__Vdlyvset__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_90__v0 = 1U;
            co_await vlSelf->__VdlySched.delay(VL_RTOIROUND_Q_D(
                                                                (1.00000000000000000e+05 
                                                                 * vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__period_quarter)), 
                                               nullptr, 
                                               "/nfs_eda_sw/softwares/Raptor/instl_dir/09_08_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/I_SERDES.v", 
                                               365);
            vlSelf->__Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_180__v0 
                = (1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_180)));
            vlSelf->__Vdlyvset__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_180__v0 = 1U;
        }
    }
}

VL_INLINE_OPT VlCoroutine Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__13(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__13\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h73cec462__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(edge co_sim_GJC46_edit.synth_net.input_data_serdes.clk_180)", 
                                                           "/nfs_eda_sw/softwares/Raptor/instl_dir/09_08_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/I_SERDES.v", 
                                                           371);
        if (vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_start) {
            co_await vlSelf->__VdlySched.delay(VL_RTOIROUND_Q_D(
                                                                (1.00000000000000000e+05 
                                                                 * vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__period_quarter)), 
                                               nullptr, 
                                               "/nfs_eda_sw/softwares/Raptor/instl_dir/09_08_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/I_SERDES.v", 
                                               375);
            vlSelf->__Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_270__v0 
                = (1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_270)));
            vlSelf->__Vdlyvset__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_270__v0 = 1U;
        }
    }
}

void Vco_sim_GJC46_edit___024root___act_sequent__TOP__0(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___act_sequent__TOP__1(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___act_sequent__TOP__2(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___act_comb__TOP__0(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___act_comb__TOP__1(Vco_sim_GJC46_edit___024root* vlSelf);

void Vco_sim_GJC46_edit___024root___eval_act(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___eval_act\n"); );
    // Body
    if ((0x40000000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((0x80000010ULL & vlSelf->__VactTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___act_comb__TOP__0(vlSelf);
    }
    if ((0xc0000010ULL & vlSelf->__VactTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___act_comb__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___act_sequent__TOP__0(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__delay_out 
        = vlSelf->__VassignWtmp_co_sim_GJC46_edit__DOT__golden__DOT__delay_out__0;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__delay_out 
        = vlSelf->__VassignWtmp_co_sim_GJC46_edit__DOT__synth_net__DOT__delay_out__0;
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___act_sequent__TOP__1(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___act_sequent__TOP__1\n"); );
    // Body
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_out_div2 
        = (1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_out_div2)));
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___act_sequent__TOP__2(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___act_sequent__TOP__2\n"); );
    // Body
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_out_div2 
        = (1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_out_div2)));
}

VlCoroutine Vco_sim_GJC46_edit___024root___act_comb__TOP__0____Vfork_1__0(Vco_sim_GJC46_edit___024root* vlSelf, CData/*0:0*/ __Vintraval_h14e37c4a__0);
VlCoroutine Vco_sim_GJC46_edit___024root___act_comb__TOP__0____Vfork_4__0(Vco_sim_GJC46_edit___024root* vlSelf, CData/*0:0*/ __Vintraval_h8ba0df61__0);

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___act_comb__TOP__0(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__word_load_en_sync 
        = ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__enable_n)) 
           & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo_read_en) 
              & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__word_load_en)));
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__word_load_en_sync 
        = ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__enable_n)) 
           & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo_read_en) 
              & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__word_load_en)));
    Vco_sim_GJC46_edit___024root___act_comb__TOP__0____Vfork_1__0(vlSelf, vlSelf->__Vintraval_h14e37c4a__0);
    Vco_sim_GJC46_edit___024root___act_comb__TOP__0____Vfork_4__0(vlSelf, vlSelf->__Vintraval_h8ba0df61__0);
}

VL_INLINE_OPT VlCoroutine Vco_sim_GJC46_edit___024root___act_comb__TOP__0____Vfork_4__0(Vco_sim_GJC46_edit___024root* vlSelf, CData/*0:0*/ __Vintraval_h8ba0df61__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___act_comb__TOP__0____Vfork_4__0\n"); );
    // Body
    __Vintraval_h8ba0df61__0 = vlSelf->co_sim_GJC46_edit__DOT__data_i;
    co_await vlSelf->__VdlySched.delay(VL_RTOIROUND_Q_D(
                                                        (100.0 
                                                         * 
                                                         (30.0 
                                                          + 
                                                          (2.15599999999999987e+01 
                                                           * 
                                                           VL_ITOR_D_I(6, (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_delay__DOT__dly_tap_val)))))), 
                                       nullptr, "/nfs_eda_sw/softwares/Raptor/instl_dir/09_08_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/I_DELAY.v", 
                                       57);
    vlSelf->__VassignWtmp_co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_delay__0 
        = __Vintraval_h8ba0df61__0;
}

VL_INLINE_OPT VlCoroutine Vco_sim_GJC46_edit___024root___act_comb__TOP__0____Vfork_1__0(Vco_sim_GJC46_edit___024root* vlSelf, CData/*0:0*/ __Vintraval_h14e37c4a__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___act_comb__TOP__0____Vfork_1__0\n"); );
    // Body
    __Vintraval_h14e37c4a__0 = vlSelf->co_sim_GJC46_edit__DOT__data_i;
    co_await vlSelf->__VdlySched.delay(VL_RTOIROUND_Q_D(
                                                        (100.0 
                                                         * 
                                                         (30.0 
                                                          + 
                                                          (2.15599999999999987e+01 
                                                           * 
                                                           VL_ITOR_D_I(6, (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_delay__DOT__dly_tap_val)))))), 
                                       nullptr, "/nfs_eda_sw/softwares/Raptor/instl_dir/09_08_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/I_DELAY.v", 
                                       57);
    vlSelf->__VassignWtmp_co_sim_GJC46_edit__DOT__golden__DOT__data_i_delay__0 
        = __Vintraval_h14e37c4a__0;
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___act_comb__TOP__1(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___act_comb__TOP__1\n"); );
    // Body
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__data_i_delay 
        = vlSelf->__VassignWtmp_co_sim_GJC46_edit__DOT__golden__DOT__data_i_delay__0;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_delay 
        = vlSelf->__VassignWtmp_co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_delay__0;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_dout 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__data_i_delay;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_dout 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_delay;
}

void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__0(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__1(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__2(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__3(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__4(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__5(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__6(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__7(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__8(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__9(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__10(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__11(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__12(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__13(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__14(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__15(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__16(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__17(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__18(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__19(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__20(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__21(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__22(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__23(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__24(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__25(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__26(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__27(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_comb__TOP__0(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__28(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__29(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_comb__TOP__1(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__30(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__31(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_comb__TOP__2(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__32(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__33(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__34(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_comb__TOP__3(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__35(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__36(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_comb__TOP__4(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_comb__TOP__5(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_comb__TOP__6(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_comb__TOP__7(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__37(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_comb__TOP__9(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__38(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_comb__TOP__10(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__39(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_comb__TOP__11(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_comb__TOP__12(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__40(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__41(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_comb__TOP__13(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__42(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__43(Vco_sim_GJC46_edit___024root* vlSelf);
void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__44(Vco_sim_GJC46_edit___024root* vlSelf);

void Vco_sim_GJC46_edit___024root___eval_nba(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___eval_nba\n"); );
    // Body
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    if ((0x1000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
    }
    if ((0x8000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
    }
    if ((0x1000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
    }
    if ((0x4000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_sequent__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
    }
    if ((0x2000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((0x2000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_sequent__TOP__9(vlSelf);
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_sequent__TOP__10(vlSelf);
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_sequent__TOP__11(vlSelf);
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_sequent__TOP__12(vlSelf);
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
    }
    if ((0x800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_sequent__TOP__13(vlSelf);
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
    }
    if ((0x100000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_sequent__TOP__14(vlSelf);
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
    }
    if ((0x200000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_sequent__TOP__15(vlSelf);
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
    }
    if ((0x400000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_sequent__TOP__16(vlSelf);
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
    }
    if ((0x800000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_sequent__TOP__17(vlSelf);
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_sequent__TOP__18(vlSelf);
    }
    if ((0x40000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_sequent__TOP__19(vlSelf);
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_sequent__TOP__20(vlSelf);
    }
    if ((0x20000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_sequent__TOP__21(vlSelf);
    }
    if ((0x4000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_sequent__TOP__22(vlSelf);
    }
    if ((0x8000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_sequent__TOP__23(vlSelf);
    }
    if ((0x10000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_sequent__TOP__24(vlSelf);
    }
    if ((0x20000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_sequent__TOP__25(vlSelf);
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_sequent__TOP__26(vlSelf);
    }
    if ((0x80000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_sequent__TOP__27(vlSelf);
    }
    if ((0x80000010ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_sequent__TOP__28(vlSelf);
        vlSelf->__Vm_traceActivity[0x16U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_sequent__TOP__29(vlSelf);
        vlSelf->__Vm_traceActivity[0x17U] = 1U;
    }
    if ((0x18ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_sequent__TOP__30(vlSelf);
        vlSelf->__Vm_traceActivity[0x18U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_sequent__TOP__31(vlSelf);
        vlSelf->__Vm_traceActivity[0x19U] = 1U;
    }
    if ((0x8010ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x8000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_sequent__TOP__32(vlSelf);
        vlSelf->__Vm_traceActivity[0x1aU] = 1U;
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_sequent__TOP__33(vlSelf);
    }
    if ((0x10000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_sequent__TOP__34(vlSelf);
        vlSelf->__Vm_traceActivity[0x1bU] = 1U;
    }
    if ((0xc000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((0x1000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_sequent__TOP__35(vlSelf);
        vlSelf->__Vm_traceActivity[0x1cU] = 1U;
    }
    if ((0x1000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_sequent__TOP__36(vlSelf);
        vlSelf->__Vm_traceActivity[0x1dU] = 1U;
    }
    if ((0xf00ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_comb__TOP__4(vlSelf);
    }
    if ((0xf00000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_comb__TOP__5(vlSelf);
    }
    if ((0xc000f80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_comb__TOP__6(vlSelf);
    }
    if ((0x30f80000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_comb__TOP__7(vlSelf);
    }
    if ((0xc0000010ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___act_comb__TOP__1(vlSelf);
    }
    if ((0x2000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_sequent__TOP__37(vlSelf);
        vlSelf->__Vm_traceActivity[0x1eU] = 1U;
    }
    if ((0x40000018ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_comb__TOP__9(vlSelf);
    }
    if ((0x4000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_sequent__TOP__38(vlSelf);
        vlSelf->__Vm_traceActivity[0x1fU] = 1U;
    }
    if ((0x80000018ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_comb__TOP__10(vlSelf);
    }
    if ((0x2000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_sequent__TOP__39(vlSelf);
        vlSelf->__Vm_traceActivity[0x20U] = 1U;
    }
    if ((0x40008010ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_comb__TOP__11(vlSelf);
    }
    if ((0x80008010ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_comb__TOP__12(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_sequent__TOP__40(vlSelf);
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_sequent__TOP__41(vlSelf);
        vlSelf->__Vm_traceActivity[0x21U] = 1U;
    }
    if ((0xf0c000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_comb__TOP__13(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_sequent__TOP__42(vlSelf);
    }
    if ((0x4000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_sequent__TOP__43(vlSelf);
        vlSelf->__Vm_traceActivity[0x22U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_GJC46_edit___024root___nba_sequent__TOP__44(vlSelf);
    }
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__3(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_sequent__TOP__3\n"); );
    // Init
    SData/*8:0*/ __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__pll_lock_count;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__pll_lock_count = 0;
    CData/*3:0*/ __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__core_clk_count;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__core_clk_count = 0;
    SData/*8:0*/ __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__pll_lock_count;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__pll_lock_count = 0;
    CData/*3:0*/ __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__core_clk_count;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__core_clk_count = 0;
    CData/*3:0*/ __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_counter;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_counter = 0;
    SData/*9:0*/ __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__des_shifter;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__des_shifter = 0;
    CData/*4:0*/ __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register__v0;
    __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register__v0 = 0;
    CData/*4:0*/ __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register__v1;
    __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register__v1 = 0;
    SData/*10:0*/ __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register__v0;
    __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register__v0 = 0;
    SData/*10:0*/ __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register__v1;
    __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register__v1 = 0;
    // Body
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__pll_lock_count 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__pll_lock_count;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__pll_lock_count 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__pll_lock_count;
    vlSelf->__Vdly__co_sim_GJC46_edit__DOT__golden__DOT__wait_pll 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__wait_pll;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__core_clk_count 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__core_clk_count;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__core_clk_count 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__core_clk_count;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_counter 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_counter;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__des_shifter 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__des_shifter;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_fifo_empty 
        = ((IData)(vlSelf->co_sim_GJC46_edit__DOT__reset) 
           || (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__read_empty));
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fast_clk_sync_out 
        = ((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset))) 
           && ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__CHANNEL_BOND_SYNC_IN) 
               & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__core_clk)));
    if (vlSelf->co_sim_GJC46_edit__DOT__reset) {
        __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__pll_lock_count = 0U;
        __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__pll_lock_count = 0U;
        vlSelf->__Vdly__co_sim_GJC46_edit__DOT__golden__DOT__wait_pll = 0U;
        __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register__v1 = 0U;
        __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register__v1 = 0U;
        __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_counter = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_counter 
            = __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_counter;
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bit_shifter = 0U;
        __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register__v0 = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register[0U] 
            = __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register__v0;
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register[1U] 
            = __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register__v1;
        __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register__v0 = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register[0U] 
            = __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register__v0;
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register[1U] 
            = __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register__v1;
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__data_shift_reg = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__oe_shift_reg = 0U;
        __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__des_shifter = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__des_parallel_reg = 0U;
    } else {
        if ((0xffU >= (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__pll_lock_count))) {
            __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__pll_lock_count 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__pll_lock_count)));
        }
        if ((0xffU >= (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__pll_lock_count))) {
            __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__pll_lock_count 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__pll_lock_count)));
        }
        if ((0xffU > (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__wait_pll))) {
            vlSelf->__Vdly__co_sim_GJC46_edit__DOT__golden__DOT__wait_pll 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__wait_pll)));
        }
        __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register__v1 
            = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register
            [0U];
        __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register__v1 
            = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register
            [0U];
        if (((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_adj_0)) 
             & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_adj_1))) {
            __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_counter 
                = ((9U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_counter))
                    ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_counter))));
        }
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_counter 
            = __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_counter;
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bit_shifter 
            = ((0x3feU & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bit_shifter) 
                          << 1U)) | ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__enable_n)) 
                                     & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_fifo_dout)));
        __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register__v0 
            = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__wgray;
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register[0U] 
            = __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register__v0;
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register[1U] 
            = __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register__v1;
        __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register__v0 
            = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__rgray;
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register[0U] 
            = __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register__v0;
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register[1U] 
            = __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register__v1;
        if (vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__word_load_en_sync) {
            vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__data_shift_reg 
                = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__data_parallel_reg;
            vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__oe_shift_reg 
                = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__oe_parallel_reg;
        } else {
            vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__data_shift_reg 
                = (0x3feU & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__data_shift_reg) 
                             << 1U));
        }
        __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__des_shifter 
            = ((0x3feU & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__des_shifter) 
                          << 1U)) | (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_dout));
        if (vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__word_load_en) {
            vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__des_parallel_reg 
                = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__des_shifter;
        }
    }
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__des_shifter 
        = __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__des_shifter;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_dout 
        = ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset)) 
           & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_shifter_out));
    if (vlSelf->co_sim_GJC46_edit__DOT__reset) {
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__data_parallel_reg = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__core_clk = 0U;
        __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__core_clk_count = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__word_load_en = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__core_clk_count 
            = __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__core_clk_count;
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__pll_lock_count 
            = __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__pll_lock_count;
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__oe_parallel_reg = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__core_clk = 0U;
        __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__core_clk_count = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__word_load_en = 0U;
    } else {
        if (vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__word_load_en_sync) {
            vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__data_parallel_reg 
                = (0x3ffU & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_data_reg));
            vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__oe_parallel_reg 
                = (1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_data_reg) 
                         >> 0xaU));
        }
        if ((9U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__core_clk_count))) {
            __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__core_clk_count = 0U;
            vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__word_load_en = 1U;
        } else if ((0xffU <= (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__pll_lock_count))) {
            __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__core_clk_count 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__core_clk_count)));
            vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__core_clk 
                = (5U > (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__core_clk_count));
            vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__word_load_en = 0U;
        }
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__core_clk_count 
            = __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__core_clk_count;
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__pll_lock_count 
            = __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__pll_lock_count;
        if ((9U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__core_clk_count))) {
            __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__core_clk_count = 0U;
            vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__word_load_en = 1U;
        } else if ((0xffU <= (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__pll_lock_count))) {
            __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__core_clk_count 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__core_clk_count)));
            vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__core_clk 
                = (5U > (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__core_clk_count));
            vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__word_load_en = 0U;
        }
    }
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__core_clk_count 
        = __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__core_clk_count;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__pll_lock_count 
        = __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__pll_lock_count;
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
    if (vlSelf->co_sim_GJC46_edit__DOT__reset) {
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_shifter_out = 0U;
    }
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__4(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_sequent__TOP__4\n"); );
    // Init
    SData/*8:0*/ __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_pll_lock_count;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_pll_lock_count = 0;
    CData/*3:0*/ __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_core_clk_count;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_core_clk_count = 0;
    CData/*4:0*/ __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__wr_sync_register__v0;
    __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__wr_sync_register__v0 = 0;
    CData/*4:0*/ __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__wr_sync_register__v1;
    __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__wr_sync_register__v1 = 0;
    // Body
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_pll_lock_count 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_pll_lock_count;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_core_clk_count 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_core_clk_count;
    if (vlSelf->co_sim_GJC46_edit__DOT__reset) {
        __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_pll_lock_count = 0U;
        __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__wr_sync_register__v1 = 0U;
        __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__wr_sync_register__v0 = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_core_clk = 0U;
        __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_core_clk_count = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_word_load_en = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__wgray = 0U;
    } else {
        if ((0xffU >= (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_pll_lock_count))) {
            __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_pll_lock_count 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_pll_lock_count)));
        }
        __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__wr_sync_register__v1 
            = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__wr_sync_register
            [0U];
        __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__wr_sync_register__v0 
            = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__rgray;
        if ((9U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_core_clk_count))) {
            __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_core_clk_count = 0U;
            vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_word_load_en = 1U;
        } else if ((0xffU <= (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_pll_lock_count))) {
            __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_core_clk_count 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_core_clk_count)));
            vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_core_clk 
                = (5U > (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_core_clk_count));
            vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_word_load_en = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_fifo_full)))) {
            vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__wgray 
                = (0x1fU & (((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__wr_addr)) 
                            ^ VL_SHIFTR_III(5,5,32, 
                                            (0x1fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__wr_addr))), 1U)));
        }
    }
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__wr_sync_register[0U] 
        = __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__wr_sync_register__v0;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__wr_sync_register[1U] 
        = __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__wr_sync_register__v1;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_core_clk_count 
        = __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_core_clk_count;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_pll_lock_count 
        = __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_pll_lock_count;
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__5(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_sequent__TOP__5\n"); );
    // Init
    SData/*8:0*/ __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__pll_lock_count;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__pll_lock_count = 0;
    CData/*3:0*/ __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__core_clk_count;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__core_clk_count = 0;
    SData/*8:0*/ __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__pll_lock_count;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__pll_lock_count = 0;
    CData/*3:0*/ __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk_count;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk_count = 0;
    CData/*3:0*/ __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_counter;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_counter = 0;
    SData/*9:0*/ __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__des_shifter;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__des_shifter = 0;
    CData/*4:0*/ __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register__v0;
    __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register__v0 = 0;
    CData/*4:0*/ __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register__v1;
    __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register__v1 = 0;
    SData/*10:0*/ __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register__v0;
    __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register__v0 = 0;
    SData/*10:0*/ __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register__v1;
    __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register__v1 = 0;
    // Body
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__pll_lock_count 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__pll_lock_count;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__pll_lock_count 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__pll_lock_count;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk_count 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk_count;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__core_clk_count 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__core_clk_count;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_counter 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_counter;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__des_shifter 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__des_shifter;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_fifo_empty 
        = ((IData)(vlSelf->co_sim_GJC46_edit__DOT__reset) 
           || (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__read_empty));
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fast_clk_sync_out 
        = ((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset))) 
           && ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__CHANNEL_BOND_SYNC_IN) 
               & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__core_clk)));
    if (vlSelf->co_sim_GJC46_edit__DOT__reset) {
        __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__pll_lock_count = 0U;
        __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__pll_lock_count = 0U;
        __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register__v1 = 0U;
        __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register__v1 = 0U;
        __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_counter = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_counter 
            = __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_counter;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bit_shifter = 0U;
        __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register__v0 = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register[0U] 
            = __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register__v0;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register[1U] 
            = __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register__v1;
        __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register__v0 = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register[0U] 
            = __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register__v0;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register[1U] 
            = __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register__v1;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__data_shift_reg = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b6__05d = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b3__05d = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b5__05d = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b4__05d = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b0__05d = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b1__05d = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b2__05d = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__oe_shift_reg = 0U;
        __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__des_shifter = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__des_parallel_reg = 0U;
    } else {
        if ((0xffU >= (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__pll_lock_count))) {
            __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__pll_lock_count 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__pll_lock_count)));
        }
        if ((0xffU >= (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__pll_lock_count))) {
            __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__pll_lock_count 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__pll_lock_count)));
        }
        __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register__v1 
            = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register
            [0U];
        __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register__v1 
            = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register
            [0U];
        if (((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_adj_0)) 
             & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_adj_1))) {
            __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_counter 
                = ((9U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_counter))
                    ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_counter))));
        }
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_counter 
            = __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_counter;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bit_shifter 
            = ((0x3feU & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bit_shifter) 
                          << 1U)) | ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__enable_n)) 
                                     & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_fifo_dout)));
        __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register__v0 
            = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__wgray;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register[0U] 
            = __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register__v0;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register[1U] 
            = __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register__v1;
        __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register__v0 
            = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__rgray;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register[0U] 
            = __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register__v0;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register[1U] 
            = __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register__v1;
        if (vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__word_load_en_sync) {
            vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__data_shift_reg 
                = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__data_parallel_reg;
            vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__oe_shift_reg 
                = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__oe_parallel_reg;
        } else {
            vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__data_shift_reg 
                = (0x3feU & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__data_shift_reg) 
                             << 1U));
        }
        if (vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024techmap____VhshMglinVWZCHfXbBuWRBrMeAkj83jPwEwlQ2Lgda8W) {
            vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b6__05d 
                = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li6_li6;
            vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d 
                = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li7_li7;
            vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b3__05d 
                = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li3_li3;
            vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b5__05d 
                = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li5_li5;
            vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b4__05d 
                = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li4_li4;
            vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b0__05d 
                = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li0_li0;
            vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b1__05d 
                = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li1_li1;
            vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b2__05d 
                = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li2_li2;
        }
        __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__des_shifter 
            = ((0x3feU & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__des_shifter) 
                          << 1U)) | (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_dout));
        if (vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__word_load_en) {
            vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__des_parallel_reg 
                = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__des_shifter;
        }
    }
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__des_shifter 
        = __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__des_shifter;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li0_li0 
        = (1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b0__05d)));
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1738__DOT__s1 
        = ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b1__05d)
            ? ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b2__05d)
                ? 1U : 2U) : ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b2__05d)
                               ? 3U : 0U));
    if (vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b2__05d) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1737__DOT__s2 
            = ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b3__05d)
                ? 7U : 8U);
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1736__DOT__s3 
            = ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b4__05d)
                ? 0x7fU : 0x80U);
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1735__DOT__s4 
            = ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b5__05d)
                ? 0x7fffU : 0x8000U);
    } else {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1737__DOT__s2 
            = ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b3__05d)
                ? 0xfU : 0U);
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1736__DOT__s3 
            = ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b4__05d)
                ? 0xffU : 0U);
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1735__DOT__s4 
            = ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b5__05d)
                ? 0xffffU : 0U);
    }
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
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li1_li1 
            = (1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b1__05d)));
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
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li1_li1 
            = (1U & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b1__05d));
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
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_dout 
        = ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset)) 
           & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_shifter_out));
    if (vlSelf->co_sim_GJC46_edit__DOT__reset) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__data_parallel_reg = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__core_clk = 0U;
        __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__core_clk_count = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__word_load_en = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__core_clk_count 
            = __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__core_clk_count;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__pll_lock_count 
            = __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__pll_lock_count;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__oe_parallel_reg = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk = 0U;
        __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk_count = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__word_load_en = 0U;
    } else {
        if (vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__word_load_en_sync) {
            vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__data_parallel_reg 
                = (0x3ffU & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_data_reg));
            vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__oe_parallel_reg 
                = (1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_data_reg) 
                         >> 0xaU));
        }
        if ((9U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__core_clk_count))) {
            __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__core_clk_count = 0U;
            vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__word_load_en = 1U;
        } else if ((0xffU <= (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__pll_lock_count))) {
            __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__core_clk_count 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__core_clk_count)));
            vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__core_clk 
                = (5U > (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__core_clk_count));
            vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__word_load_en = 0U;
        }
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__core_clk_count 
            = __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__core_clk_count;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__pll_lock_count 
            = __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__pll_lock_count;
        if ((9U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk_count))) {
            __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk_count = 0U;
            vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__word_load_en = 1U;
        } else if ((0xffU <= (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__pll_lock_count))) {
            __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk_count 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk_count)));
            vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk 
                = (5U > (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk_count));
            vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__word_load_en = 0U;
        }
    }
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk_count 
        = __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk_count;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__pll_lock_count 
        = __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__pll_lock_count;
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
    if (vlSelf->co_sim_GJC46_edit__DOT__reset) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_shifter_out = 0U;
    }
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
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__6(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_sequent__TOP__6\n"); );
    // Init
    SData/*8:0*/ __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_pll_lock_count;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_pll_lock_count = 0;
    CData/*3:0*/ __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_core_clk_count;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_core_clk_count = 0;
    CData/*4:0*/ __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__wr_sync_register__v0;
    __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__wr_sync_register__v0 = 0;
    CData/*4:0*/ __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__wr_sync_register__v1;
    __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__wr_sync_register__v1 = 0;
    // Body
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_pll_lock_count 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_pll_lock_count;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_core_clk_count 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_core_clk_count;
    if (vlSelf->co_sim_GJC46_edit__DOT__reset) {
        __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_pll_lock_count = 0U;
        __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__wr_sync_register__v1 = 0U;
        __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__wr_sync_register__v0 = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_core_clk = 0U;
        __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_core_clk_count = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_word_load_en = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__wgray = 0U;
    } else {
        if ((0xffU >= (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_pll_lock_count))) {
            __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_pll_lock_count 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_pll_lock_count)));
        }
        __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__wr_sync_register__v1 
            = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__wr_sync_register
            [0U];
        __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__wr_sync_register__v0 
            = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__rgray;
        if ((9U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_core_clk_count))) {
            __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_core_clk_count = 0U;
            vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_word_load_en = 1U;
        } else if ((0xffU <= (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_pll_lock_count))) {
            __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_core_clk_count 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_core_clk_count)));
            vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_core_clk 
                = (5U > (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_core_clk_count));
            vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_word_load_en = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_fifo_full)))) {
            vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__wgray 
                = (0x1fU & (((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__wr_addr)) 
                            ^ VL_SHIFTR_III(5,5,32, 
                                            (0x1fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__wr_addr))), 1U)));
        }
    }
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__wr_sync_register[0U] 
        = __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__wr_sync_register__v0;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__wr_sync_register[1U] 
        = __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__wr_sync_register__v1;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_core_clk_count 
        = __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_core_clk_count;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_pll_lock_count 
        = __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_pll_lock_count;
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__7(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_sequent__TOP__7\n"); );
    // Init
    SData/*10:0*/ __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__rd_sync_register__v0;
    __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__rd_sync_register__v0 = 0;
    SData/*10:0*/ __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__rd_sync_register__v1;
    __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__rd_sync_register__v1 = 0;
    CData/*1:0*/ __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr = 0;
    CData/*0:0*/ __Vdlyvset__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo__v0;
    __Vdlyvset__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo__v4;
    __Vdlyvdim0__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo__v4 = 0;
    SData/*10:0*/ __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo__v4;
    __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo__v4 = 0;
    CData/*0:0*/ __Vdlyvset__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo__v4;
    __Vdlyvset__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo__v4 = 0;
    CData/*1:0*/ __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr = 0;
    CData/*1:0*/ __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr = 0;
    CData/*0:0*/ __Vdlyvset__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo__v0;
    __Vdlyvset__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo__v4;
    __Vdlyvdim0__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo__v4 = 0;
    SData/*10:0*/ __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo__v4;
    __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo__v4 = 0;
    CData/*0:0*/ __Vdlyvset__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo__v4;
    __Vdlyvset__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo__v4 = 0;
    CData/*1:0*/ __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr = 0;
    SData/*10:0*/ __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__rd_sync_register__v0;
    __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__rd_sync_register__v0 = 0;
    SData/*10:0*/ __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__rd_sync_register__v1;
    __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__rd_sync_register__v1 = 0;
    // Body
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr;
    __Vdlyvset__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo__v0 = 0U;
    __Vdlyvset__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo__v4 = 0U;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr;
    __Vdlyvset__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo__v0 = 0U;
    __Vdlyvset__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo__v4 = 0U;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr;
    if (vlSelf->co_sim_GJC46_edit__DOT__reset) {
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__unnamedblk1__DOT__i = 4U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__unnamedblk1__DOT__i = 4U;
        __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__rd_sync_register__v1 = 0U;
        __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__rd_sync_register__v1 = 0U;
        __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__rd_sync_register__v0 = 0U;
        __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__rd_sync_register__v0 = 0U;
        __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr = 0U;
        __Vdlyvset__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo__v0 = 1U;
        __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr = 0U;
        __Vdlyvset__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo__v0 = 1U;
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__rgray = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_data_reg = 0U;
        __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__rgray = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_data_reg = 0U;
        __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr = 0U;
    } else {
        __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__rd_sync_register__v1 
            = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__rd_sync_register
            [0U];
        __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__rd_sync_register__v1 
            = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__rd_sync_register
            [0U];
        __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__rd_sync_register__v0 
            = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__wgray;
        __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__rd_sync_register__v0 
            = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__wgray;
        if ((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__full)))) {
            __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo__v4 
                = ((0x400U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__enable_n)) 
                              << 0xaU)) | (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__data_i_serdes_reg));
            __Vdlyvset__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo__v4 = 1U;
            __Vdlyvdim0__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo__v4 
                = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr;
            __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr)));
        }
        if ((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__full)))) {
            __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo__v4 
                = ((0x400U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__enable_n)) 
                              << 0xaU)) | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b9__05d) 
                                            << 9U) 
                                           | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b8__05d) 
                                               << 8U) 
                                              | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b7__05d) 
                                                  << 7U) 
                                                 | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b6__05d) 
                                                     << 6U) 
                                                    | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b5__05d) 
                                                        << 5U) 
                                                       | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b4__05d) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b3__05d) 
                                                              << 3U) 
                                                             | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b2__05d) 
                                                                 << 2U) 
                                                                | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b1__05d) 
                                                                    << 1U) 
                                                                   | (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b0__05d)))))))))));
            __Vdlyvset__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo__v4 = 1U;
            __Vdlyvdim0__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo__v4 
                = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr;
            __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr)));
        }
        if ((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__read_empty)))) {
            vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__rgray 
                = (0x7ffU & (((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__rd_addr)) 
                             ^ VL_SHIFTR_III(11,11,32, 
                                             (0x7ffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__rd_addr))), 1U)));
        }
        if (((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo_read_en) 
             & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo_empty)))) {
            vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_data_reg 
                = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo
                [vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr];
            __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr)));
        }
        if ((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__read_empty)))) {
            vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__rgray 
                = (0x7ffU & (((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__rd_addr)) 
                             ^ VL_SHIFTR_III(11,11,32, 
                                             (0x7ffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__rd_addr))), 1U)));
        }
        if (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo_read_en) 
             & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo_empty)))) {
            vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_data_reg 
                = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo
                [vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr];
            __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr)));
        }
    }
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__read_en 
        = (1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset)) 
                 & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo_empty))));
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__read_en 
        = (1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset)) 
                 & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo_empty))));
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__des_fifo_empty 
        = ((IData)(vlSelf->co_sim_GJC46_edit__DOT__reset) 
           || (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__read_empty));
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__rd_sync_register[0U] 
        = __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__rd_sync_register__v0;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__rd_sync_register[1U] 
        = __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__rd_sync_register__v1;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__rd_sync_register[0U] 
        = __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__rd_sync_register__v0;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__rd_sync_register[1U] 
        = __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__rd_sync_register__v1;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr 
        = __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr 
        = __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr;
    if (__Vdlyvset__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo__v0) {
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo[0U] = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo[1U] = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo[2U] = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo[3U] = 0U;
    }
    if (__Vdlyvset__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo__v4) {
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo[__Vdlyvdim0__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo__v4] 
            = __Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo__v4;
    }
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr 
        = __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr;
    if (__Vdlyvset__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo__v0) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo[0U] = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo[1U] = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo[2U] = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo[3U] = 0U;
    }
    if (__Vdlyvset__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo__v4) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo[__Vdlyvdim0__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo__v4] 
            = __Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo__v4;
    }
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr 
        = __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__full 
        = (((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr) 
            == ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr) 
                - (IData)(1U))) | ((3U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr)) 
                                   & (0U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr))));
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__full 
        = (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr) 
            == ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr) 
                - (IData)(1U))) | ((3U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr)) 
                                   & (0U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr))));
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__8(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_sequent__TOP__8\n"); );
    // Body
    vlSelf->__Vdlyvset__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem__v0 = 0U;
    if ((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_fifo_full)))) {
        vlSelf->__Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem__v0 
            = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_dout;
        vlSelf->__Vdlyvset__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem__v0 = 1U;
        vlSelf->__Vdlyvdim0__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem__v0 
            = (0xfU & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__wr_addr));
    }
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__9(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_sequent__TOP__9\n"); );
    // Body
    vlSelf->__Vdlyvset__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem__v0 = 0U;
    if ((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_fifo_full)))) {
        vlSelf->__Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem__v0 
            = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_dout;
        vlSelf->__Vdlyvset__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem__v0 = 1U;
        vlSelf->__Vdlyvdim0__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem__v0 
            = (0xfU & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__wr_addr));
    }
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__10(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_sequent__TOP__10\n"); );
    // Init
    CData/*3:0*/ __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_data_reg;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_data_reg = 0;
    CData/*3:0*/ __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_data_comp;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_data_comp = 0;
    CData/*4:0*/ __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_data_count;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_data_count = 0;
    CData/*1:0*/ __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_reg_data_count;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_reg_data_count = 0;
    // Body
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_reg_data_count 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_reg_data_count;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_data_comp 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_data_comp;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_data_reg 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_data_reg;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_data_count 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_data_count;
    if (vlSelf->co_sim_GJC46_edit__DOT__reset) {
        __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_data_reg = 0U;
        __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_data_comp = 0U;
        __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_data_count = 0U;
        __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_reg_data_count = 0U;
    } else if ((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_lock)) 
                      & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__enable_n))))) {
        __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_data_reg 
            = ((0xeU & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_data_reg) 
                        << 1U)) | (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__data_i_delay));
        __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_reg_data_count 
            = (3U & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_reg_data_count)));
        if ((3U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_reg_data_count))) {
            if (((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_data_comp) 
                 == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_data_reg))) {
                __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_data_count 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_data_count)));
            } else {
                __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_data_comp 
                    = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_data_reg;
                __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_data_count = 0U;
            }
        }
    }
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_data_reg 
        = __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_data_reg;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_data_comp 
        = __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_data_comp;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_reg_data_count 
        = __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_reg_data_count;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_data_count 
        = __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_data_count;
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__11(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_sequent__TOP__11\n"); );
    // Init
    CData/*3:0*/ __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_data_reg;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_data_reg = 0;
    CData/*3:0*/ __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_data_comp;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_data_comp = 0;
    CData/*4:0*/ __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_data_count;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_data_count = 0;
    CData/*1:0*/ __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_reg_data_count;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_reg_data_count = 0;
    // Body
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_reg_data_count 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_reg_data_count;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_data_comp 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_data_comp;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_data_reg 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_data_reg;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_data_count 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_data_count;
    if (vlSelf->co_sim_GJC46_edit__DOT__reset) {
        __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_data_reg = 0U;
        __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_data_comp = 0U;
        __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_data_count = 0U;
        __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_reg_data_count = 0U;
    } else if ((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_lock)) 
                      & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__enable_n))))) {
        __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_data_reg 
            = ((0xeU & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_data_reg) 
                        << 1U)) | (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__data_i_delay));
        __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_reg_data_count 
            = (3U & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_reg_data_count)));
        if ((3U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_reg_data_count))) {
            if (((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_data_comp) 
                 == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_data_reg))) {
                __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_data_count 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_data_count)));
            } else {
                __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_data_comp 
                    = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_data_reg;
                __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_data_count = 0U;
            }
        }
    }
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_data_reg 
        = __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_data_reg;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_data_comp 
        = __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_data_comp;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_reg_data_count 
        = __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_reg_data_count;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_data_count 
        = __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_data_count;
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__12(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_sequent__TOP__12\n"); );
    // Init
    CData/*3:0*/ __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_data_reg;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_data_reg = 0;
    CData/*3:0*/ __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_data_comp;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_data_comp = 0;
    CData/*4:0*/ __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_data_count;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_data_count = 0;
    CData/*1:0*/ __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_reg_data_count;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_reg_data_count = 0;
    // Body
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_reg_data_count 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_reg_data_count;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_data_comp 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_data_comp;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_data_reg 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_data_reg;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_data_count 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_data_count;
    if (vlSelf->co_sim_GJC46_edit__DOT__reset) {
        __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_data_reg = 0U;
        __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_data_comp = 0U;
        __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_data_count = 0U;
        __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_reg_data_count = 0U;
    } else if ((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_lock)) 
                      & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__enable_n))))) {
        __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_data_reg 
            = ((0xeU & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_data_reg) 
                        << 1U)) | (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__data_i_delay));
        __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_reg_data_count 
            = (3U & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_reg_data_count)));
        if ((3U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_reg_data_count))) {
            if (((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_data_comp) 
                 == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_data_reg))) {
                __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_data_count 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_data_count)));
            } else {
                __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_data_comp 
                    = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_data_reg;
                __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_data_count = 0U;
            }
        }
    }
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_data_reg 
        = __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_data_reg;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_data_comp 
        = __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_data_comp;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_reg_data_count 
        = __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_reg_data_count;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_data_count 
        = __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_data_count;
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__13(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_sequent__TOP__13\n"); );
    // Init
    CData/*3:0*/ __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_data_reg;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_data_reg = 0;
    CData/*3:0*/ __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_data_comp;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_data_comp = 0;
    CData/*4:0*/ __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_data_count;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_data_count = 0;
    CData/*1:0*/ __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_reg_data_count;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_reg_data_count = 0;
    // Body
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_reg_data_count 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_reg_data_count;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_data_comp 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_data_comp;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_data_reg 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_data_reg;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_data_count 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_data_count;
    if (vlSelf->co_sim_GJC46_edit__DOT__reset) {
        __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_data_reg = 0U;
        __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_data_comp = 0U;
        __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_data_count = 0U;
        __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_reg_data_count = 0U;
    } else if ((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_lock)) 
                      & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__enable_n))))) {
        __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_data_reg 
            = ((0xeU & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_data_reg) 
                        << 1U)) | (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__data_i_delay));
        __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_reg_data_count 
            = (3U & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_reg_data_count)));
        if ((3U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_reg_data_count))) {
            if (((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_data_comp) 
                 == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_data_reg))) {
                __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_data_count 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_data_count)));
            } else {
                __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_data_comp 
                    = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_data_reg;
                __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_data_count = 0U;
            }
        }
    }
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_data_reg 
        = __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_data_reg;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_data_comp 
        = __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_data_comp;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_reg_data_count 
        = __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_reg_data_count;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_data_count 
        = __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_data_count;
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__14(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_sequent__TOP__14\n"); );
    // Init
    CData/*3:0*/ __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_data_reg;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_data_reg = 0;
    CData/*3:0*/ __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_data_comp;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_data_comp = 0;
    CData/*4:0*/ __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_data_count;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_data_count = 0;
    CData/*1:0*/ __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_reg_data_count;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_reg_data_count = 0;
    // Body
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_reg_data_count 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_reg_data_count;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_data_comp 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_data_comp;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_data_reg 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_data_reg;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_data_count 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_data_count;
    if (vlSelf->co_sim_GJC46_edit__DOT__reset) {
        __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_data_reg = 0U;
        __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_data_comp = 0U;
        __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_data_count = 0U;
        __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_reg_data_count = 0U;
    } else if ((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_lock)) 
                      & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__enable_n))))) {
        __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_data_reg 
            = ((0xeU & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_data_reg) 
                        << 1U)) | (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_delay));
        __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_reg_data_count 
            = (3U & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_reg_data_count)));
        if ((3U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_reg_data_count))) {
            if (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_data_comp) 
                 == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_data_reg))) {
                __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_data_count 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_data_count)));
            } else {
                __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_data_comp 
                    = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_data_reg;
                __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_data_count = 0U;
            }
        }
    }
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_data_reg 
        = __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_data_reg;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_data_comp 
        = __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_data_comp;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_reg_data_count 
        = __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_reg_data_count;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_data_count 
        = __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_data_count;
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__15(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_sequent__TOP__15\n"); );
    // Init
    CData/*3:0*/ __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_data_reg;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_data_reg = 0;
    CData/*3:0*/ __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_data_comp;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_data_comp = 0;
    CData/*4:0*/ __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_data_count;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_data_count = 0;
    CData/*1:0*/ __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_reg_data_count;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_reg_data_count = 0;
    // Body
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_reg_data_count 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_reg_data_count;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_data_comp 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_data_comp;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_data_reg 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_data_reg;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_data_count 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_data_count;
    if (vlSelf->co_sim_GJC46_edit__DOT__reset) {
        __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_data_reg = 0U;
        __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_data_comp = 0U;
        __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_data_count = 0U;
        __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_reg_data_count = 0U;
    } else if ((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_lock)) 
                      & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__enable_n))))) {
        __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_data_reg 
            = ((0xeU & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_data_reg) 
                        << 1U)) | (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_delay));
        __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_reg_data_count 
            = (3U & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_reg_data_count)));
        if ((3U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_reg_data_count))) {
            if (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_data_comp) 
                 == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_data_reg))) {
                __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_data_count 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_data_count)));
            } else {
                __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_data_comp 
                    = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_data_reg;
                __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_data_count = 0U;
            }
        }
    }
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_data_reg 
        = __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_data_reg;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_data_comp 
        = __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_data_comp;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_reg_data_count 
        = __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_reg_data_count;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_data_count 
        = __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_data_count;
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__16(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_sequent__TOP__16\n"); );
    // Init
    CData/*3:0*/ __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_data_reg;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_data_reg = 0;
    CData/*3:0*/ __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_data_comp;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_data_comp = 0;
    CData/*4:0*/ __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_data_count;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_data_count = 0;
    CData/*1:0*/ __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_reg_data_count;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_reg_data_count = 0;
    // Body
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_reg_data_count 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_reg_data_count;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_data_comp 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_data_comp;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_data_reg 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_data_reg;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_data_count 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_data_count;
    if (vlSelf->co_sim_GJC46_edit__DOT__reset) {
        __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_data_reg = 0U;
        __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_data_comp = 0U;
        __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_data_count = 0U;
        __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_reg_data_count = 0U;
    } else if ((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_lock)) 
                      & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__enable_n))))) {
        __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_data_reg 
            = ((0xeU & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_data_reg) 
                        << 1U)) | (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_delay));
        __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_reg_data_count 
            = (3U & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_reg_data_count)));
        if ((3U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_reg_data_count))) {
            if (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_data_comp) 
                 == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_data_reg))) {
                __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_data_count 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_data_count)));
            } else {
                __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_data_comp 
                    = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_data_reg;
                __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_data_count = 0U;
            }
        }
    }
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_data_reg 
        = __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_data_reg;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_data_comp 
        = __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_data_comp;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_reg_data_count 
        = __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_reg_data_count;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_data_count 
        = __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_data_count;
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__17(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_sequent__TOP__17\n"); );
    // Init
    CData/*3:0*/ __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_data_reg;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_data_reg = 0;
    CData/*3:0*/ __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_data_comp;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_data_comp = 0;
    CData/*4:0*/ __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_data_count;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_data_count = 0;
    CData/*1:0*/ __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_reg_data_count;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_reg_data_count = 0;
    // Body
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_reg_data_count 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_reg_data_count;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_data_comp 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_data_comp;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_data_reg 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_data_reg;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_data_count 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_data_count;
    if (vlSelf->co_sim_GJC46_edit__DOT__reset) {
        __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_data_reg = 0U;
        __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_data_comp = 0U;
        __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_data_count = 0U;
        __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_reg_data_count = 0U;
    } else if ((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_lock)) 
                      & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__enable_n))))) {
        __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_data_reg 
            = ((0xeU & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_data_reg) 
                        << 1U)) | (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_delay));
        __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_reg_data_count 
            = (3U & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_reg_data_count)));
        if ((3U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_reg_data_count))) {
            if (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_data_comp) 
                 == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_data_reg))) {
                __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_data_count 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_data_count)));
            } else {
                __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_data_comp 
                    = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_data_reg;
                __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_data_count = 0U;
            }
        }
    }
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_data_reg 
        = __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_data_reg;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_data_comp 
        = __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_data_comp;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_reg_data_count 
        = __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_reg_data_count;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_data_count 
        = __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_data_count;
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__18(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_sequent__TOP__18\n"); );
    // Body
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_out_div4 
        = (1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_out_div4)));
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__19(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_sequent__TOP__19\n"); );
    // Body
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_out_div4 
        = (1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_out_div4)));
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__20(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_sequent__TOP__20\n"); );
    // Body
    if ((2U == vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__div3_count)) {
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_out_div3 
            = (1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_out_div3)));
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__div3_count = 0U;
    } else {
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__div3_count 
            = ((IData)(1U) + vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__div3_count);
    }
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__21(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_sequent__TOP__21\n"); );
    // Body
    if ((2U == vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__div3_count)) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_out_div3 
            = (1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_out_div3)));
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__div3_count = 0U;
    } else {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__div3_count 
            = ((IData)(1U) + vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__div3_count);
    }
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__22(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_sequent__TOP__22\n"); );
    // Body
    if (vlSelf->__Vdlyvset__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_90__v0) {
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_90 
            = vlSelf->__Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_90__v0;
        vlSelf->__Vdlyvset__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_90__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_180__v0) {
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_180 
            = vlSelf->__Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_180__v0;
        vlSelf->__Vdlyvset__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_180__v0 = 0U;
    }
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__23(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_sequent__TOP__23\n"); );
    // Body
    if (vlSelf->__Vdlyvset__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_270__v0) {
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_270 
            = vlSelf->__Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_270__v0;
        vlSelf->__Vdlyvset__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_270__v0 = 0U;
    }
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__24(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_sequent__TOP__24\n"); );
    // Body
    if (vlSelf->__Vdlyvset__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_90__v0) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_90 
            = vlSelf->__Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_90__v0;
        vlSelf->__Vdlyvset__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_90__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_180__v0) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_180 
            = vlSelf->__Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_180__v0;
        vlSelf->__Vdlyvset__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_180__v0 = 0U;
    }
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__25(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_sequent__TOP__25\n"); );
    // Body
    if (vlSelf->__Vdlyvset__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_270__v0) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_270 
            = vlSelf->__Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_270__v0;
        vlSelf->__Vdlyvset__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_270__v0 = 0U;
    }
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__26(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_sequent__TOP__26\n"); );
    // Body
    if (vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_start) {
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_0 
            = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_vco;
    }
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__27(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_sequent__TOP__27\n"); );
    // Body
    if (vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_start) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_0 
            = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco;
    }
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_comb__TOP__0(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_comb__TOP__0\n"); );
    // Body
    Vco_sim_GJC46_edit___024root___act_comb__TOP__0____Vfork_1__0(vlSelf, vlSelf->__Vintraval_h14e37c4a__0);
    Vco_sim_GJC46_edit___024root___act_comb__TOP__0____Vfork_4__0(vlSelf, vlSelf->__Vintraval_h8ba0df61__0);
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__28(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_sequent__TOP__28\n"); );
    // Body
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__vcostart_ff 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__vcostart;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__vcostart_ff 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__vcostart;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__vcostart 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__pllstart_ff2;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__vcostart 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__pllstart_ff2;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__pllstart_ff2 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__pllstart_ff1;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__pllstart_ff2 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__pllstart_ff1;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__pllstart_ff1 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__pllstart;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__pllstart_ff1 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__pllstart;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__pllstart = 1U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__pllstart = 1U;
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__29(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_sequent__TOP__29\n"); );
    // Body
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_adj_0 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_adj_1;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_fifo_dout 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem
        [(0xfU & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__rd_addr))];
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_adj_1 
        = (1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__bitslip_ctrl_n)));
}

VlCoroutine Vco_sim_GJC46_edit___024root___nba_comb__TOP__1____Vfork_2__0(Vco_sim_GJC46_edit___024root* vlSelf, CData/*0:0*/ __Vintraval_h799703ce__0);

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_comb__TOP__1(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_comb__TOP__1\n"); );
    // Body
    Vco_sim_GJC46_edit___024root___nba_comb__TOP__1____Vfork_2__0(vlSelf, vlSelf->__Vintraval_h799703ce__0);
}

VL_INLINE_OPT VlCoroutine Vco_sim_GJC46_edit___024root___nba_comb__TOP__1____Vfork_2__0(Vco_sim_GJC46_edit___024root* vlSelf, CData/*0:0*/ __Vintraval_h799703ce__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_comb__TOP__1____Vfork_2__0\n"); );
    // Body
    __Vintraval_h799703ce__0 = (1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__data_shift_reg) 
                                      >> 9U));
    co_await vlSelf->__VdlySched.delay(VL_RTOIROUND_Q_D(
                                                        (100.0 
                                                         * 
                                                         (30.0 
                                                          + 
                                                          (2.15599999999999987e+01 
                                                           * 
                                                           VL_ITOR_D_I(6, (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_delay__DOT__dly_tap_val)))))), 
                                       nullptr, "/nfs_eda_sw/softwares/Raptor/instl_dir/09_08_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/O_DELAY.v", 
                                       57);
    vlSelf->__VassignWtmp_co_sim_GJC46_edit__DOT__golden__DOT__delay_out__0 
        = __Vintraval_h799703ce__0;
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__30(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_sequent__TOP__30\n"); );
    // Body
    if (vlSelf->co_sim_GJC46_edit__DOT__reset) {
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__rgray = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__wgray = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo_read_en = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__rd_addr = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__wr_addr = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__read_empty)))) {
            vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__rgray 
                = (0x1fU & (((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__rd_addr)) 
                            ^ VL_SHIFTR_III(5,5,32, 
                                            (0x1fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__rd_addr))), 1U)));
            vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__rd_addr 
                = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__next_rd_addr;
        }
        if (((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT____Vcellinp__afifo_inst__wr) 
             & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__des_fifo_full)))) {
            vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__wgray 
                = (0x7ffU & (((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__wr_addr)) 
                             ^ VL_SHIFTR_III(11,11,32, 
                                             (0x7ffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__wr_addr))), 1U)));
            vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__wr_addr 
                = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__next_wr_addr;
        }
        if (vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo_empty) {
            vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo_read_en = 0U;
        } else if ((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo_empty)))) {
            vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo_read_en = 1U;
        }
    }
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__read_empty 
        = (vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register
           [1U] == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__rgray));
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__des_fifo_full 
        = (vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register
           [1U] == ((0x600U & ((~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__wgray) 
                                   >> 9U)) << 9U)) 
                    | (0x1ffU & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__wgray))));
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__next_rd_addr 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__rd_addr)));
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__next_wr_addr 
        = (0x7ffU & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__wr_addr)));
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT____Vcellinp__afifo_inst__wr 
        = ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__des_fifo_full)) 
           & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__word_load_en));
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__31(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_sequent__TOP__31\n"); );
    // Body
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_adj_0 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_adj_1;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_fifo_dout 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem
        [(0xfU & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__rd_addr))];
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_adj_1 
        = (1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__bitslip_ctrl_n)));
}

VlCoroutine Vco_sim_GJC46_edit___024root___nba_comb__TOP__2____Vfork_3__0(Vco_sim_GJC46_edit___024root* vlSelf, CData/*0:0*/ __Vintraval_h14381aad__0);

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_comb__TOP__2(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_comb__TOP__2\n"); );
    // Body
    Vco_sim_GJC46_edit___024root___nba_comb__TOP__2____Vfork_3__0(vlSelf, vlSelf->__Vintraval_h14381aad__0);
}

VL_INLINE_OPT VlCoroutine Vco_sim_GJC46_edit___024root___nba_comb__TOP__2____Vfork_3__0(Vco_sim_GJC46_edit___024root* vlSelf, CData/*0:0*/ __Vintraval_h14381aad__0) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_comb__TOP__2____Vfork_3__0\n"); );
    // Body
    __Vintraval_h14381aad__0 = (1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__data_shift_reg) 
                                      >> 9U));
    co_await vlSelf->__VdlySched.delay(VL_RTOIROUND_Q_D(
                                                        (100.0 
                                                         * 
                                                         (30.0 
                                                          + 
                                                          (2.15599999999999987e+01 
                                                           * 
                                                           VL_ITOR_D_I(6, (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_delay__DOT__dly_tap_val)))))), 
                                       nullptr, "/nfs_eda_sw/softwares/Raptor/instl_dir/09_08_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/O_DELAY.v", 
                                       57);
    vlSelf->__VassignWtmp_co_sim_GJC46_edit__DOT__synth_net__DOT__delay_out__0 
        = __Vintraval_h14381aad__0;
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__32(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_sequent__TOP__32\n"); );
    // Body
    if (vlSelf->co_sim_GJC46_edit__DOT__reset) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__rgray = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__wgray = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo_read_en = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__rd_addr = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__wr_addr = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__read_empty)))) {
            vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__rgray 
                = (0x1fU & (((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__rd_addr)) 
                            ^ VL_SHIFTR_III(5,5,32, 
                                            (0x1fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__rd_addr))), 1U)));
            vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__rd_addr 
                = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__next_rd_addr;
        }
        if (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT____Vcellinp__afifo_inst__wr) 
             & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__des_fifo_full)))) {
            vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__wgray 
                = (0x7ffU & (((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__wr_addr)) 
                             ^ VL_SHIFTR_III(11,11,32, 
                                             (0x7ffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__wr_addr))), 1U)));
            vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__wr_addr 
                = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__next_wr_addr;
        }
        if (vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo_empty) {
            vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo_read_en = 0U;
        } else if ((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo_empty)))) {
            vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo_read_en = 1U;
        }
    }
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__read_empty 
        = (vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register
           [1U] == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__rgray));
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__des_fifo_full 
        = (vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register
           [1U] == ((0x600U & ((~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__wgray) 
                                   >> 9U)) << 9U)) 
                    | (0x1ffU & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__wgray))));
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__next_rd_addr 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__rd_addr)));
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__next_wr_addr 
        = (0x7ffU & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__wr_addr)));
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT____Vcellinp__afifo_inst__wr 
        = ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__des_fifo_full)) 
           & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__word_load_en));
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__33(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_sequent__TOP__33\n"); );
    // Body
    if (vlSelf->co_sim_GJC46_edit__DOT__reset) {
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__data_i_serdes_reg = 0U;
    } else if (((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__des_fifo_empty)) 
                & ((0xffU == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__wait_pll)) 
                   & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_lock)))) {
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__data_i_serdes_reg 
            = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__data_i_serdes;
    }
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__34(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_sequent__TOP__34\n"); );
    // Body
    if (vlSelf->co_sim_GJC46_edit__DOT__reset) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b9__05d = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b8__05d = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b7__05d = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b6__05d = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b5__05d = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b4__05d = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b3__05d = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b2__05d = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b1__05d = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b0__05d = 0U;
    } else if (vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc____VhshGVgqBU6wRRDtA5Ir9Uo4M9yi2GGlyR1rSX1aUOlb) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b9__05d 
            = (1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                     >> 9U));
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b8__05d 
            = (1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                     >> 8U));
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b7__05d 
            = (1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                     >> 7U));
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b6__05d 
            = (1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                     >> 6U));
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b5__05d 
            = (1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                     >> 5U));
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b4__05d 
            = (1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                     >> 4U));
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b3__05d 
            = (1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                     >> 3U));
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b2__05d 
            = (1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                     >> 2U));
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b1__05d 
            = (1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                     >> 1U));
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b0__05d 
            = (1U & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q));
    }
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_comb__TOP__3(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_comb__TOP__3\n"); );
    // Body
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1731__DOT__s1 
        = (3U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__des_fifo_empty)
                  ? (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1731__DOT__s2)
                  : ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1731__DOT__s2) 
                     >> 2U)));
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__35(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_sequent__TOP__35\n"); );
    // Body
    if (vlSelf->co_sim_GJC46_edit__DOT__reset) {
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__wr_addr = 0U;
    } else if ((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_fifo_full)))) {
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__wr_addr 
            = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__next_wr_addr;
    }
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_fifo_full 
        = (vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__wr_sync_register
           [1U] == ((0x18U & ((~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__wgray) 
                                  >> 3U)) << 3U)) | 
                    (7U & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__wgray))));
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__next_wr_addr 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__wr_addr)));
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__36(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_sequent__TOP__36\n"); );
    // Body
    if (vlSelf->co_sim_GJC46_edit__DOT__reset) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__wr_addr = 0U;
    } else if ((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_fifo_full)))) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__wr_addr 
            = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__next_wr_addr;
    }
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_fifo_full 
        = (vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__wr_sync_register
           [1U] == ((0x18U & ((~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__wgray) 
                                  >> 3U)) << 3U)) | 
                    (7U & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__wgray))));
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__next_wr_addr 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__wr_addr)));
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_comb__TOP__4(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_comb__TOP__4\n"); );
    // Body
    if ((0x10U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_data_count))) {
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_error = 0U;
    } else if ((0x10U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_data_count))) {
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_error = 0U;
    } else if ((0x10U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_data_count))) {
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_error = 0U;
    } else if ((0x10U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_data_count))) {
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_error = 0U;
    }
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_lock 
        = ((0x10U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_data_count)) 
           || ((0x10U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_data_count)) 
               || ((0x10U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_data_count)) 
                   || (0x10U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_data_count)))));
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_comb__TOP__5(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_comb__TOP__5\n"); );
    // Body
    if ((0x10U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_data_count))) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_error = 0U;
    } else if ((0x10U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_data_count))) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_error = 0U;
    } else if ((0x10U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_data_count))) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_error = 0U;
    } else if ((0x10U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_data_count))) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_error = 0U;
    }
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_lock 
        = ((0x10U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_data_count)) 
           || ((0x10U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_data_count)) 
               || ((0x10U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_data_count)) 
                   || (0x10U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_data_count)))));
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_comb__TOP__6(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_comb__TOP__6\n"); );
    // Body
    if ((0x10U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_data_count))) {
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_clk 
            = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_0;
    } else if ((0x10U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_data_count))) {
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_clk 
            = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_90;
    } else if ((0x10U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_data_count))) {
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_clk 
            = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_180;
    } else if ((0x10U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_data_count))) {
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_clk 
            = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_270;
    }
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_comb__TOP__7(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_comb__TOP__7\n"); );
    // Body
    if ((0x10U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_data_count))) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_clk 
            = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_0;
    } else if ((0x10U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_data_count))) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_clk 
            = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_90;
    } else if ((0x10U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_data_count))) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_clk 
            = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_180;
    } else if ((0x10U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_data_count))) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_clk 
            = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_270;
    }
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__37(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_sequent__TOP__37\n"); );
    // Body
    if (vlSelf->__Vdlyvset__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem__v0) {
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[vlSelf->__Vdlyvdim0__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem__v0] 
            = vlSelf->__Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem__v0;
    }
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_comb__TOP__9(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_comb__TOP__9\n"); );
    // Body
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__delay_out 
        = vlSelf->__VassignWtmp_co_sim_GJC46_edit__DOT__golden__DOT__delay_out__0;
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__38(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_sequent__TOP__38\n"); );
    // Body
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo_empty 
        = ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr) 
           == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr));
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo_empty 
        = ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr) 
           == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr));
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__des_fifo_empty 
        = ((IData)(vlSelf->co_sim_GJC46_edit__DOT__reset) 
           || (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__read_empty));
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_comb__TOP__10(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_comb__TOP__10\n"); );
    // Body
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__word_load_en_sync 
        = ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__enable_n)) 
           & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo_read_en) 
              & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__word_load_en)));
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__39(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_sequent__TOP__39\n"); );
    // Body
    if (vlSelf->__Vdlyvset__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem__v0) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[vlSelf->__Vdlyvdim0__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem__v0] 
            = vlSelf->__Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem__v0;
    }
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_comb__TOP__11(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_comb__TOP__11\n"); );
    // Body
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__delay_out 
        = vlSelf->__VassignWtmp_co_sim_GJC46_edit__DOT__synth_net__DOT__delay_out__0;
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_comb__TOP__12(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_comb__TOP__12\n"); );
    // Body
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__word_load_en_sync 
        = ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__enable_n)) 
           & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo_read_en) 
              & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__word_load_en)));
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__40(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_sequent__TOP__40\n"); );
    // Body
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__wait_pll 
        = vlSelf->__Vdly__co_sim_GJC46_edit__DOT__golden__DOT__wait_pll;
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__41(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_sequent__TOP__41\n"); );
    // Body
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__data_i_serdes 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__dual_port_ram__DOT__genblk1__DOT__mem
        [(0x3ffU & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__rd_addr))];
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__dual_port_ram__DOT__genblk1__DOT__mem
        [(0x3ffU & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__rd_addr))];
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_comb__TOP__13(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_comb__TOP__13\n"); );
    // Body
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc____VhshGVgqBU6wRRDtA5Ir9Uo4M9yi2GGlyR1rSX1aUOlb 
        = (1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_lock)
                  ? ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1731__DOT__s1) 
                     >> 1U) : (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1731__DOT__s1)));
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__42(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_sequent__TOP__42\n"); );
    // Body
    if (vlSelf->__Vdlyvset__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__dual_port_ram__DOT__genblk1__DOT__mem__v0) {
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__dual_port_ram__DOT__genblk1__DOT__mem[vlSelf->__Vdlyvdim0__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__dual_port_ram__DOT__genblk1__DOT__mem__v0] 
            = vlSelf->__Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__dual_port_ram__DOT__genblk1__DOT__mem__v0;
    }
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__43(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_sequent__TOP__43\n"); );
    // Body
    if (vlSelf->co_sim_GJC46_edit__DOT__reset) {
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__rd_addr = 0U;
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__rd_addr = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__read_empty)))) {
            vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__rd_addr 
                = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__next_rd_addr;
        }
        if ((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__read_empty)))) {
            vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__rd_addr 
                = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__next_rd_addr;
        }
    }
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__read_empty 
        = (vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__rd_sync_register
           [1U] == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__rgray));
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__read_empty 
        = (vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__rd_sync_register
           [1U] == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__rgray));
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__next_rd_addr 
        = (0x7ffU & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__rd_addr)));
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__next_rd_addr 
        = (0x7ffU & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__rd_addr)));
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__44(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_sequent__TOP__44\n"); );
    // Body
    if (vlSelf->__Vdlyvset__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__dual_port_ram__DOT__genblk1__DOT__mem__v0) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__dual_port_ram__DOT__genblk1__DOT__mem[vlSelf->__Vdlyvdim0__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__dual_port_ram__DOT__genblk1__DOT__mem__v0] 
            = vlSelf->__Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__dual_port_ram__DOT__genblk1__DOT__mem__v0;
    }
}

void Vco_sim_GJC46_edit___024root___timing_resume(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___timing_resume\n"); );
    // Body
    if ((0x80000000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h90ee1be2__0.resume("@(negedge co_sim_GJC46_edit.clkGHz)");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h90ee1c21__0.resume("@(posedge co_sim_GJC46_edit.clkGHz)");
    }
    if ((0x100000000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h8ca313d9__0.resume("@([changed] co_sim_GJC46_edit.golden.clk_pll_gen0.vcostart_ff)");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h602354a6__0.resume("@(posedge co_sim_GJC46_edit.golden.clk_pll_gen0.clk_vco)");
    }
    if ((0x200000000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hfece4fe3__0.resume("@([changed] co_sim_GJC46_edit.synth_net.clk_pll_gen0.vcostart_ff)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hedea8e0c__0.resume("@(posedge co_sim_GJC46_edit.synth_net.clk_pll_gen0.clk_vco)");
    }
    if ((0x400000000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h6dbc2dfd__0.resume("@(edge co_sim_GJC46_edit.golden.input_data_serdes.clk_0)");
    }
    if ((0x800000000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h0738c86a__0.resume("@(edge co_sim_GJC46_edit.golden.input_data_serdes.clk_180)");
    }
    if ((0x1000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hc7d82c34__0.resume("@(edge co_sim_GJC46_edit.synth_net.input_data_serdes.clk_0)");
    }
    if ((0x2000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h73cec462__0.resume("@(edge co_sim_GJC46_edit.synth_net.input_data_serdes.clk_180)");
    }
    if ((0x40000000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vco_sim_GJC46_edit___024root___timing_commit(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___timing_commit\n"); );
    // Body
    if ((! (0x80000000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h90ee1be2__0.commit("@(negedge co_sim_GJC46_edit.clkGHz)");
    }
    if ((! (0x10ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h90ee1c21__0.commit("@(posedge co_sim_GJC46_edit.clkGHz)");
    }
    if ((! (0x100000000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h8ca313d9__0.commit("@([changed] co_sim_GJC46_edit.golden.clk_pll_gen0.vcostart_ff)");
    }
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h602354a6__0.commit("@(posedge co_sim_GJC46_edit.golden.clk_pll_gen0.clk_vco)");
    }
    if ((! (0x200000000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hfece4fe3__0.commit("@([changed] co_sim_GJC46_edit.synth_net.clk_pll_gen0.vcostart_ff)");
    }
    if ((! (2ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hedea8e0c__0.commit("@(posedge co_sim_GJC46_edit.synth_net.clk_pll_gen0.clk_vco)");
    }
    if ((! (0x400000000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h6dbc2dfd__0.commit("@(edge co_sim_GJC46_edit.golden.input_data_serdes.clk_0)");
    }
    if ((! (0x800000000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h0738c86a__0.commit("@(edge co_sim_GJC46_edit.golden.input_data_serdes.clk_180)");
    }
    if ((! (0x1000000000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hc7d82c34__0.commit("@(edge co_sim_GJC46_edit.synth_net.input_data_serdes.clk_0)");
    }
    if ((! (0x2000000000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h73cec462__0.commit("@(edge co_sim_GJC46_edit.synth_net.input_data_serdes.clk_180)");
    }
}

void Vco_sim_GJC46_edit___024root___eval_triggers__act(Vco_sim_GJC46_edit___024root* vlSelf);

bool Vco_sim_GJC46_edit___024root___eval_phase__act(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<38> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vco_sim_GJC46_edit___024root___eval_triggers__act(vlSelf);
    Vco_sim_GJC46_edit___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vco_sim_GJC46_edit___024root___timing_resume(vlSelf);
        Vco_sim_GJC46_edit___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vco_sim_GJC46_edit___024root___eval_phase__nba(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vco_sim_GJC46_edit___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_GJC46_edit___024root___dump_triggers__nba(Vco_sim_GJC46_edit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_GJC46_edit___024root___dump_triggers__act(Vco_sim_GJC46_edit___024root* vlSelf);
#endif  // VL_DEBUG

void Vco_sim_GJC46_edit___024root___eval(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vco_sim_GJC46_edit___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/nfs_scratch/scratch/CompilerValidation/abdul_hameed/GJC_INVALID_UPDATE/Validation/RTL_testcases/GJC-IO-Testcases/GJC46/EDA-3196/./sim/co_sim_tb/co_sim_GJC46_edit.v", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vco_sim_GJC46_edit___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/nfs_scratch/scratch/CompilerValidation/abdul_hameed/GJC_INVALID_UPDATE/Validation/RTL_testcases/GJC-IO-Testcases/GJC46/EDA-3196/./sim/co_sim_tb/co_sim_GJC46_edit.v", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vco_sim_GJC46_edit___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vco_sim_GJC46_edit___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vco_sim_GJC46_edit___024root___eval_debug_assertions(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
