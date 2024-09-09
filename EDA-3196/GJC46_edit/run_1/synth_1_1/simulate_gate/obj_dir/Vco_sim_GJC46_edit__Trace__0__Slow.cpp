// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vco_sim_GJC46_edit__Syms.h"


VL_ATTR_COLD void Vco_sim_GJC46_edit___024root__trace_init_sub__TOP__0(Vco_sim_GJC46_edit___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("co_sim_GJC46_edit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+510,0,"clkGHz",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"bitslip_ctrl_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"data_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+511,0,"data_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+512,0,"data_o_netlist",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"enable_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+513,0,"ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+514,0,"ready_netlist",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"mismatch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("golden", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+559,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"enable_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"bitslip_ctrl_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,0,"clkGHz",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+511,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+513,0,"ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+560,0,"const1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"reset_buf_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"enable_buf_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"enable_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"data_i_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+515,0,"data_i_delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+561,0,"clk_pll_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,0,"clkGHz_clkbuf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+516,0,"pll_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"fabric_clk_div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+492,0,"data_i_serdes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+517,0,"data_i_serdes_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+470,0,"data_i_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+518,0,"wait_pll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+513,0,"ready_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+519,0,"serdes_dpa_lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"bitslip_ctrl_n_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"bitslip_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,0,"clkGHz_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"buf_output_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"delay_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+520,0,"delay_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("bitslip_buffer0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+562,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+564,0,"IOSTANDARD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBit(c+2,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+560,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("clk_i_buffer0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+566,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+564,0,"IOSTANDARD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBit(c+510,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+560,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("clk_pll_gen0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+568,0,"DEV_FAMILY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+570,0,"DIVIDE_CLK_IN_BY_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBus(c+572,0,"PLL_MULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+573,0,"PLL_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+574,0,"PLL_MULT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+575,0,"PLL_POST_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+560,0,"PLL_EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,0,"CLK_IN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+516,0,"CLK_OUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+521,0,"CLK_OUT_DIV2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+522,0,"CLK_OUT_DIV3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+523,0,"CLK_OUT_DIV4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+516,0,"FAST_CLK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"LOCK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+574,0,"FAST_LOCK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declDouble(c+576,0,"REF_MAX_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+578,0,"REF_MIN_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+580,0,"VCO_MAX_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+582,0,"VCO_MIN_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+584,0,"LOCK_TIMER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+585,0,"PLL_POST_DIV0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+585,0,"PLL_POST_DIV1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declDouble(c+95,0,"t0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+97,0,"t1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+99,0,"ref_period",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+101,0,"vco_period",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+103,0,"postdiv_period",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+116,0,"old_ref_period",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBit(c+586,0,"clk_pll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+393,0,"pllen_rse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+394,0,"pllstart",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+395,0,"pllstart_ff1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+396,0,"pllstart_ff2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+397,0,"vcostart",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+398,0,"vcostart_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"lose_lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+521,0,"clk_out_div2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+522,0,"clk_out_div3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+523,0,"clk_out_div4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+516,0,"clk_vco",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+524,0,"clk_postdiv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+525,0,"div3_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+119,0,"PLL_DIV_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+120,0,"PLL_MULT_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+121,0,"lock_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->popPrefix();
    tracep->pushPrefix("clock_buffer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+510,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("counter_o_buft", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+587,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+564,0,"IOSTANDARD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBus(c+573,0,"DRIVE_STRENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+588,0,"SLEW_RATE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+520,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"T",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+511,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("counter_o_delay", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+574,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+159,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"DLY_LOAD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"DLY_ADJ",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"DLY_INCDEC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+122,0,"DLY_TAP_VALUE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+510,0,"CLK_IN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+520,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"dly_ld_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"dly_ld_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"dly_ld_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"dly_adj_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"dly_adj_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"dly_adj_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+122,0,"dly_tap_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("counter_o_serdes", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+590,0,"DATA_RATE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+559,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+517,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+6,0,"RST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,0,"CLK_IN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"OE_IN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"OE_OUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+591,0,"CHANNEL_BOND_SYNC_IN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"CHANNEL_BOND_SYNC_OUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+560,0,"PLL_LOCK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+516,0,"PLL_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"core_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"word_load_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+163,0,"pll_lock_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+164,0,"core_clk_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+160,0,"fast_clk_sync_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+327,0,"read_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+471,0,"afull",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+472,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+409,0,"fifo_read_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+526,0,"word_load_en_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+165,0,"data_parallel_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+166,0,"data_shift_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+167,0,"oe_parallel_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"oe_shift_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+328,0,"fifo_data_oe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+329,0,"fifo_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->pushPrefix("fifo1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+592,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+559,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+510,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+560,0,"wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+409,0,"rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+527,0,"wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+330,0,"rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+472,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+331,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+471,0,"almost_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("fifo", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+332+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 10,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+330,0,"rd_data_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+336,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+337,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+338,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("data_i_buffer0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+566,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+564,0,"IOSTANDARD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBit(c+3,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+560,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("enable_buffer0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+562,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+564,0,"IOSTANDARD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBit(c+4,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+560,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("input_data_delay", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+574,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+3,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"DLY_LOAD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"DLY_ADJ",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"DLY_INCDEC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+129,0,"DLY_TAP_VALUE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+510,0,"CLK_IN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+515,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"dly_ld_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"dly_ld_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"dly_ld_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"dly_adj_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"dly_adj_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"dly_adj_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+129,0,"dly_tap_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("input_data_serdes", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+590,0,"DATA_RATE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+559,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+593,0,"DPA_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+515,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"RST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"BITSLIP_ADJ",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,0,"CLK_IN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"CLK_OUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+492,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+470,0,"DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+519,0,"DPA_LOCK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"DPA_ERROR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+560,0,"PLL_LOCK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+516,0,"PLL_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+529,0,"clk_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+530,0,"clk_90",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+531,0,"clk_180",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"clk_270",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+45,0,"start_point",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+47,0,"end_point",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+49,0,"clk_period",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+51,0,"period_quarter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBit(c+53,0,"clk_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+361,0,"clk0_data_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+362,0,"clk0_data_comp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+365,0,"clk90_data_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+366,0,"clk90_data_comp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+369,0,"clk180_data_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+370,0,"clk180_data_comp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+373,0,"clk270_data_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+374,0,"clk270_data_comp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+363,0,"clk0_data_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+367,0,"clk90_data_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+371,0,"clk180_data_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+375,0,"clk270_data_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+364,0,"clk0_reg_data_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+368,0,"clk90_reg_data_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+372,0,"clk180_reg_data_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+376,0,"clk270_reg_data_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+519,0,"dpa_lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+533,0,"cdr_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+534,0,"dpa_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"dpa_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"dpa_fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+446,0,"dpa_fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,0,"dpa_fifo_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,0,"bitslip_din_mux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+535,0,"bitslip_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+516,0,"bitslip_des_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+406,0,"bitslip_adj_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+407,0,"bitslip_adj_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+408,0,"bitslip_adj_pulse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"bitslip_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"bitslip_shifter_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+171,0,"bit_shifter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+172,0,"bitslip_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+157,0,"core_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"word_load_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+174,0,"pll_lock_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+175,0,"core_clk_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+185,0,"cdr_core_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"cdr_word_load_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+187,0,"cdr_pll_lock_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+188,0,"cdr_core_clk_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+176,0,"des_shifter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+177,0,"des_parallel_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+173,0,"des_word_load_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+473,0,"des_fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+410,0,"des_fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("afifo_dpa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+592,0,"ADDRSIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+594,0,"DATASIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+573,0,"SYNC_STAGES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+574,0,"MEM_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+533,0,"wclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"wr_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+447,0,"wr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+534,0,"wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+446,0,"wr_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+516,0,"rclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rd_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+405,0,"rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+168,0,"rd_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+411,0,"rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+448,0,"wr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+179,0,"rd_wgray",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+189,0,"wr_rgray",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+412,0,"next_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+449,0,"next_wr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+413,0,"rgray",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+190,0,"wgray",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+560,0,"ren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+414,0,"read_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dual_port_ram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+594,0,"DATASIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+592,0,"ADDRSIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+574,0,"MEM_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+405,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+533,0,"wr_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+516,0,"rd_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+447,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+560,0,"ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+534,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+448,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+411,0,"raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+454+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("synchronizer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+573,0,"SYNC_STAGES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+592,0,"ADDRSIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"wptr_reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+179,0,"rptr_reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+533,0,"wr_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+516,0,"rd_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"wr_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rd_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+190,0,"wptr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+413,0,"rptr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("wr_sync_register", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+191+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rd_sync_register", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+180+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("afifo_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+559,0,"ADDRSIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+559,0,"DATASIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+573,0,"SYNC_STAGES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+574,0,"MEM_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+516,0,"wclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"wr_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+415,0,"wr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+177,0,"wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+410,0,"wr_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,0,"rclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rd_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+470,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+492,0,"rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+473,0,"rd_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+504,0,"rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+416,0,"wr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+339,0,"rd_wgray",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+182,0,"wr_rgray",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+505,0,"next_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+417,0,"next_wr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+340,0,"rgray",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+418,0,"wgray",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+560,0,"ren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"read_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dual_port_ram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+559,0,"DATASIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+559,0,"ADDRSIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+574,0,"MEM_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+492,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+516,0,"wr_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,0,"rd_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+419,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+560,0,"ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+177,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+416,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+504,0,"raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("synchronizer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+573,0,"SYNC_STAGES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+559,0,"ADDRSIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+182,0,"wptr_reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+339,0,"rptr_reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+516,0,"wr_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,0,"rd_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"wr_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rd_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+418,0,"wptr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+340,0,"rptr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("wr_sync_register", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+183+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 10,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rd_sync_register", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+341+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 10,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ready_o_buffer0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+564,0,"IOSTANDARD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBus(c+573,0,"DRIVE_STRENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+588,0,"SLEW_RATE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+513,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+513,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("reset_buffer0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+566,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+564,0,"IOSTANDARD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBit(c+1,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+560,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("synth_net", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+2,0,"bitslip_ctrl_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,0,"clkGHz",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+512,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"enable_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+514,0,"ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+536,0,"$abc$1161$abc$489$logic_and$/nfs_scratch/scratch/CompilerValidation/abdul_hameed/GJC_INVALID_UPDATE/Validation/RTL_testcases/GJC-IO-Testcases/GJC46/EDA-3196/./rtl/GJC46_edit.v:97$12_Y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"$abc$1161$abc$666$li0_li0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"$abc$1161$abc$666$li1_li1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"$abc$1161$abc$666$li2_li2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"$abc$1161$abc$666$li3_li3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"$abc$1161$abc$666$li4_li4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"$abc$1161$abc$666$li5_li5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+199,0,"$abc$1161$abc$666$li6_li6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"$abc$1161$abc$666$li7_li7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"$abc$1729$new_new_n29__",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"$abc$1729$techmap$techmap1321$abc$666$auto_674.$logic_not$/nfs_eda_sw/softwares/Raptor/instl_dir/09_08_2024_09_15_01/bin/../share/yosys/rapidsilicon/genesis3/ffs_map.v:89$1262_Y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"$f2g_trx_dvalid_A_enable_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"$f2g_trx_reset_n_A_reset_buf_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"$f2g_trx_reset_n_A_reset_buf_n_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"$f2g_tx_oe_A_buf_output_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"$ifab_buf_output_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+343,0,"$ifab_data_i_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+537,0,"$ifab_serdes_dpa_lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"$ofab_bitslip_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"$ofab_enable_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"$ofab_enable_buf_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"bitslip_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"bitslip_ctrl_n_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"buf_output_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,0,"clkGHz_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,0,"clkGHz_clkbuf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"data_i_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+538,0,"data_i_delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"data_i_serdes[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"data_i_serdes[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+495,0,"data_i_serdes[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+496,0,"data_i_serdes[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+497,0,"data_i_serdes[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"data_i_serdes[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+499,0,"data_i_serdes[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+500,0,"data_i_serdes[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+501,0,"data_i_serdes[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+502,0,"data_i_serdes[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+435,0,"data_i_serdes_reg[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+436,0,"data_i_serdes_reg[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+437,0,"data_i_serdes_reg[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+438,0,"data_i_serdes_reg[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"data_i_serdes_reg[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+440,0,"data_i_serdes_reg[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+441,0,"data_i_serdes_reg[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+442,0,"data_i_serdes_reg[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+443,0,"data_i_serdes_reg[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+444,0,"data_i_serdes_reg[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+343,0,"data_i_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"delay_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+539,0,"delay_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"enable_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"enable_buf_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"fabric_clk_div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+540,0,"pll_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+514,0,"ready_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"reset_buf_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+537,0,"serdes_dpa_lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"wait_pll[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"wait_pll[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"wait_pll[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+209,0,"wait_pll[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"wait_pll[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"wait_pll[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"wait_pll[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"wait_pll[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("$abc$1729$auto_1730", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+595,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+214,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+201,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+215,0,"s5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+216,0,"s4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+217,0,"s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+218,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+219,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$1729$auto_1731", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+597,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+541,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+536,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+220,0,"s4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+221,0,"s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+222,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+542,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$1729$auto_1732", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+598,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+543,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+514,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+223,0,"s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+224,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+225,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$1729$auto_1733", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+599,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+226,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+200,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+227,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+228,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$1729$auto_1734", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+600,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+229,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+199,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+230,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$1729$auto_1735", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+601,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+231,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+198,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+232,0,"s5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+233,0,"s4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+234,0,"s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+235,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+236,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$1729$auto_1736", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+603,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+237,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+197,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+238,0,"s4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+239,0,"s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+240,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+241,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$1729$auto_1737", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+604,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+242,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+196,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+243,0,"s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+244,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+245,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$1729$auto_1738", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+599,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+246,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+195,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+247,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+248,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$1729$auto_1739", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+600,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+249,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+194,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+250,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$1729$auto_1740", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+605,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+251,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+202,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+252,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+253,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$1729$auto_1741", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+606,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$1729$auto_1742", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+606,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+4,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$1729$auto_1743", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+606,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+206,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$1729$auto_1744", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+606,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$666$auto_667", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+193,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+540,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"C_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"C_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"nC_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"nC_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"R_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"R_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"R_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$666$auto_668", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+194,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+540,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"C_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"C_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"nC_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"nC_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"R_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"R_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"R_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$666$auto_669", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+195,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+540,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"C_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"C_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"nC_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"nC_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"R_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"R_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"R_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$666$auto_670", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+196,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+540,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+209,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"C_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"C_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"nC_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"nC_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"R_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"R_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"R_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$666$auto_671", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+197,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+540,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"C_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"C_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"nC_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"nC_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"R_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"R_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"R_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$666$auto_672", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+198,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+540,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"C_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"C_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"nC_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"nC_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"R_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"R_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"R_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$666$auto_673", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+199,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+540,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"C_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"C_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"nC_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"nC_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"R_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"R_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"R_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+199,0,"D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$666$auto_674", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+200,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+540,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"C_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"C_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"nC_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"nC_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"R_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"R_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"R_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$698$auto_699", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+493,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+536,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+435,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+279,0,"C_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+280,0,"C_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"nC_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"nC_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"R_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"R_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"R_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$698$auto_700", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+494,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+536,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+436,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+283,0,"C_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+284,0,"C_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+285,0,"nC_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"nC_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"R_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"R_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"R_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$698$auto_701", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+495,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+536,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+437,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+287,0,"C_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+288,0,"C_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+289,0,"nC_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+290,0,"nC_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"R_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"R_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"R_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+495,0,"D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$698$auto_702", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+496,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+536,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+438,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+291,0,"C_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+292,0,"C_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"nC_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+294,0,"nC_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"R_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"R_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"R_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+496,0,"D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$698$auto_703", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+497,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+536,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+295,0,"C_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+296,0,"C_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+297,0,"nC_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+298,0,"nC_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"R_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"R_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"R_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+497,0,"D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$698$auto_704", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+498,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+536,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+440,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+299,0,"C_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+300,0,"C_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+301,0,"nC_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+302,0,"nC_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"R_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"R_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"R_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$698$auto_705", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+499,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+536,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+441,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+303,0,"C_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+304,0,"C_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+305,0,"nC_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+306,0,"nC_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"R_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"R_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"R_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+499,0,"D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$698$auto_706", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+500,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+536,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+442,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+307,0,"C_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+308,0,"C_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+309,0,"nC_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+310,0,"nC_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"R_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"R_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"R_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+500,0,"D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$698$auto_707", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+501,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+536,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+443,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+311,0,"C_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+312,0,"C_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+313,0,"nC_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+314,0,"nC_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"R_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"R_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"R_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+501,0,"D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$698$auto_708", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+502,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+536,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+444,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+315,0,"C_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+316,0,"C_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+317,0,"nC_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+318,0,"nC_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"R_D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"R_nD_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"R_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+502,0,"D_SDFCHK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$f2g_trx_dvalid_A_enable_buf_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+7,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$f2g_trx_reset_n_A_reset_buf_n_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+6,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$f2g_trx_reset_n_A_reset_buf_n_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+6,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$f2g_tx_oe_A_buf_output_enable_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+203,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$ifab_buf_output_enable_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+203,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$ifab_data_i_valid_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+343,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+343,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$ifab_serdes_dpa_lock_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+537,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+537,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$ofab_bitslip_ctrl_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+8,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$ofab_enable_buf_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+7,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$ofab_enable_buf_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+7,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bitslip_buffer0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+562,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+564,0,"IOSTANDARD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBit(c+2,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+560,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("clk_i_buffer0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+566,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+564,0,"IOSTANDARD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBit(c+510,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+560,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("clk_pll_gen0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+568,0,"DEV_FAMILY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+570,0,"DIVIDE_CLK_IN_BY_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBus(c+572,0,"PLL_MULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+573,0,"PLL_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+574,0,"PLL_MULT_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+575,0,"PLL_POST_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+560,0,"PLL_EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,0,"CLK_IN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+540,0,"CLK_OUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+544,0,"CLK_OUT_DIV2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+545,0,"CLK_OUT_DIV3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+546,0,"CLK_OUT_DIV4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+540,0,"FAST_CLK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"LOCK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+574,0,"FAST_LOCK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declDouble(c+576,0,"REF_MAX_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+578,0,"REF_MIN_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+580,0,"VCO_MAX_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+582,0,"VCO_MIN_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+584,0,"LOCK_TIMER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+585,0,"PLL_POST_DIV0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+585,0,"PLL_POST_DIV1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declDouble(c+105,0,"t0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+107,0,"t1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+109,0,"ref_period",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+111,0,"vco_period",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+113,0,"postdiv_period",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+137,0,"old_ref_period",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBit(c+607,0,"clk_pll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+399,0,"pllen_rse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+400,0,"pllstart",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+401,0,"pllstart_ff1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+402,0,"pllstart_ff2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"vcostart",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+404,0,"vcostart_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"lose_lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+544,0,"clk_out_div2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+545,0,"clk_out_div3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+546,0,"clk_out_div4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+540,0,"clk_vco",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+547,0,"clk_postdiv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+548,0,"div3_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+140,0,"PLL_DIV_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+141,0,"PLL_MULT_ff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+142,0,"lock_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->popPrefix();
    tracep->pushPrefix("clock_buffer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+510,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("counter_o_buft", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+587,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+564,0,"IOSTANDARD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBus(c+573,0,"DRIVE_STRENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+588,0,"SLEW_RATE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+539,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"T",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+512,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("counter_o_delay", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+574,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+204,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"DLY_LOAD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"DLY_ADJ",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"DLY_INCDEC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+143,0,"DLY_TAP_VALUE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+510,0,"CLK_IN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+539,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"dly_ld_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"dly_ld_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"dly_ld_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"dly_adj_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"dly_adj_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"dly_adj_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+143,0,"dly_tap_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("counter_o_serdes", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+590,0,"DATA_RATE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+559,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+445,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+6,0,"RST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,0,"CLK_IN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"OE_IN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"OE_OUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+608,0,"CHANNEL_BOND_SYNC_IN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"CHANNEL_BOND_SYNC_OUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+560,0,"PLL_LOCK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+540,0,"PLL_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"core_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+256,0,"word_load_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+257,0,"pll_lock_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+258,0,"core_clk_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+254,0,"fast_clk_sync_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+344,0,"read_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+474,0,"afull",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+475,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+424,0,"fifo_read_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+549,0,"word_load_en_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+259,0,"data_parallel_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+260,0,"data_shift_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+261,0,"oe_parallel_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"oe_shift_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+345,0,"fifo_data_oe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+346,0,"fifo_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->pushPrefix("fifo1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+592,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+559,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+510,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+560,0,"wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+424,0,"rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+550,0,"wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+347,0,"rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+475,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+348,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+474,0,"almost_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("fifo", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+349+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 10,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+347,0,"rd_data_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+353,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+354,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+355,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("data_i_buffer0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+566,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+564,0,"IOSTANDARD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBit(c+3,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+560,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("enable_buffer0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+562,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+564,0,"IOSTANDARD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBit(c+4,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+560,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("input_data_delay", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+574,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+3,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"DLY_LOAD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"DLY_ADJ",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"DLY_INCDEC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+150,0,"DLY_TAP_VALUE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+510,0,"CLK_IN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+538,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"dly_ld_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"dly_ld_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"dly_ld_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"dly_adj_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"dly_adj_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"dly_adj_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+150,0,"dly_tap_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("input_data_serdes", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+590,0,"DATA_RATE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+559,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+593,0,"DPA_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+538,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"RST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"BITSLIP_ADJ",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,0,"CLK_IN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"CLK_OUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+503,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+343,0,"DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+537,0,"DPA_LOCK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+551,0,"DPA_ERROR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+560,0,"PLL_LOCK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+540,0,"PLL_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+552,0,"clk_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+553,0,"clk_90",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+554,0,"clk_180",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+555,0,"clk_270",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declDouble(c+86,0,"start_point",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+88,0,"end_point",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+90,0,"clk_period",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+92,0,"period_quarter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBit(c+94,0,"clk_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+377,0,"clk0_data_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+378,0,"clk0_data_comp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+381,0,"clk90_data_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+382,0,"clk90_data_comp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+385,0,"clk180_data_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+386,0,"clk180_data_comp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+389,0,"clk270_data_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+390,0,"clk270_data_comp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+379,0,"clk0_data_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+383,0,"clk90_data_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+387,0,"clk180_data_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+391,0,"clk270_data_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+380,0,"clk0_reg_data_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+384,0,"clk90_reg_data_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+388,0,"clk180_reg_data_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+392,0,"clk270_reg_data_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+537,0,"dpa_lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+556,0,"cdr_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+557,0,"dpa_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+551,0,"dpa_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+262,0,"dpa_fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+450,0,"dpa_fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+420,0,"dpa_fifo_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+420,0,"bitslip_din_mux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+558,0,"bitslip_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+540,0,"bitslip_des_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+421,0,"bitslip_adj_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+422,0,"bitslip_adj_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+423,0,"bitslip_adj_pulse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+263,0,"bitslip_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"bitslip_shifter_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+265,0,"bit_shifter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+266,0,"bitslip_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+205,0,"core_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"word_load_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+268,0,"pll_lock_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+269,0,"core_clk_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+319,0,"cdr_core_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+320,0,"cdr_word_load_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+321,0,"cdr_pll_lock_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+322,0,"cdr_core_clk_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+270,0,"des_shifter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+271,0,"des_parallel_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+267,0,"des_word_load_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+356,0,"des_fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+425,0,"des_fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("afifo_dpa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+592,0,"ADDRSIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+594,0,"DATASIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+573,0,"SYNC_STAGES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+574,0,"MEM_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+556,0,"wclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"wr_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+451,0,"wr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+557,0,"wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+450,0,"wr_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+540,0,"rclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rd_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+272,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+420,0,"rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+262,0,"rd_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+426,0,"rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+452,0,"wr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+273,0,"rd_wgray",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+323,0,"wr_rgray",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+427,0,"next_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+453,0,"next_wr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+428,0,"rgray",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+324,0,"wgray",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+560,0,"ren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+429,0,"read_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dual_port_ram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+594,0,"DATASIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+592,0,"ADDRSIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+574,0,"MEM_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+420,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+556,0,"wr_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+540,0,"rd_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+451,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+560,0,"ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+557,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+452,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+426,0,"raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+476+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("synchronizer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+573,0,"SYNC_STAGES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+592,0,"ADDRSIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+323,0,"wptr_reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+273,0,"rptr_reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+556,0,"wr_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+540,0,"rd_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"wr_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rd_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+324,0,"wptr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+428,0,"rptr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("wr_sync_register", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+325+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rd_sync_register", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+274+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("afifo_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+559,0,"ADDRSIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+559,0,"DATASIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+573,0,"SYNC_STAGES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+574,0,"MEM_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+540,0,"wclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"wr_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+430,0,"wr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+271,0,"wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+425,0,"wr_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,0,"rclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rd_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+343,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+503,0,"rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+356,0,"rd_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+507,0,"rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+431,0,"wr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+357,0,"rd_wgray",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+276,0,"wr_rgray",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+508,0,"next_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+432,0,"next_wr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+358,0,"rgray",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+433,0,"wgray",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+560,0,"ren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+509,0,"read_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dual_port_ram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+559,0,"DATASIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+559,0,"ADDRSIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+574,0,"MEM_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+503,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+540,0,"wr_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,0,"rd_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+560,0,"ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+271,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+431,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+507,0,"raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("synchronizer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+573,0,"SYNC_STAGES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+559,0,"ADDRSIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+276,0,"wptr_reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+357,0,"rptr_reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+540,0,"wr_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,0,"rd_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"wr_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rd_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+433,0,"wptr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+358,0,"rptr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("wr_sync_register", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+277+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 10,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rd_sync_register", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+359+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 10,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ready_o_buffer0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+587,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+564,0,"IOSTANDARD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBus(c+573,0,"DRIVE_STRENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+588,0,"SLEW_RATE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+514,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+560,0,"T",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+514,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("reset_buffer0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+566,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+564,0,"IOSTANDARD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBit(c+1,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+560,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vco_sim_GJC46_edit___024root__trace_init_top(Vco_sim_GJC46_edit___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root__trace_init_top\n"); );
    // Body
    Vco_sim_GJC46_edit___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vco_sim_GJC46_edit___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vco_sim_GJC46_edit___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vco_sim_GJC46_edit___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vco_sim_GJC46_edit___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vco_sim_GJC46_edit___024root__trace_register(Vco_sim_GJC46_edit___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vco_sim_GJC46_edit___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vco_sim_GJC46_edit___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vco_sim_GJC46_edit___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vco_sim_GJC46_edit___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vco_sim_GJC46_edit___024root__trace_const_0_sub_0(Vco_sim_GJC46_edit___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vco_sim_GJC46_edit___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root__trace_const_0\n"); );
    // Init
    Vco_sim_GJC46_edit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vco_sim_GJC46_edit___024root*>(voidSelf);
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vco_sim_GJC46_edit___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vco_sim_GJC46_edit___024root__trace_const_0_sub_0(Vco_sim_GJC46_edit___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+559,(0xaU),32);
    bufp->fullBit(oldp+560,(1U));
    bufp->fullBit(oldp+561,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_in));
    bufp->fullQData(oldp+562,(0x50554c4c5550ULL),48);
    bufp->fullQData(oldp+564,(0x44454641554c54ULL),56);
    bufp->fullQData(oldp+566,(0x50554c4c444f574eULL),64);
    bufp->fullQData(oldp+568,(0x564952474fULL),40);
    bufp->fullQData(oldp+570,(0x46414c5345ULL),40);
    bufp->fullIData(oldp+572,(0x32U),32);
    bufp->fullIData(oldp+573,(2U),32);
    bufp->fullIData(oldp+574,(0U),32);
    bufp->fullIData(oldp+575,(0x11U),32);
    bufp->fullDouble(oldp+576,(2.00000000000000000e+05));
    bufp->fullDouble(oldp+578,(8.33330000000000041e+02));
    bufp->fullDouble(oldp+580,(6.25000000000000000e+04));
    bufp->fullDouble(oldp+582,(3.12500000000000000e+02));
    bufp->fullIData(oldp+584,(0x1f4U),32);
    bufp->fullCData(oldp+585,(1U),3);
    bufp->fullBit(oldp+586,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_pll));
    bufp->fullIData(oldp+587,(0x4e4f4e45U),32);
    bufp->fullIData(oldp+588,(0x534c4f57U),32);
    bufp->fullBit(oldp+589,(0U));
    bufp->fullIData(oldp+590,(0x534452U),24);
    bufp->fullBit(oldp+591,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__CHANNEL_BOND_SYNC_IN));
    bufp->fullIData(oldp+592,(4U),32);
    bufp->fullIData(oldp+593,(0x445041U),24);
    bufp->fullIData(oldp+594,(1U),32);
    bufp->fullQData(oldp+595,(0x8000000000000000ULL),64);
    bufp->fullIData(oldp+597,(0x80000000U),32);
    bufp->fullSData(oldp+598,(0x8000U),16);
    bufp->fullCData(oldp+599,(0x78U),8);
    bufp->fullCData(oldp+600,(6U),4);
    bufp->fullQData(oldp+601,(0x7fffffff80000000ULL),64);
    bufp->fullIData(oldp+603,(0x7fff8000U),32);
    bufp->fullSData(oldp+604,(0x7f80U),16);
    bufp->fullCData(oldp+605,(0x7fU),8);
    bufp->fullCData(oldp+606,(1U),2);
    bufp->fullBit(oldp+607,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_pll));
    bufp->fullBit(oldp+608,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__CHANNEL_BOND_SYNC_IN));
}

VL_ATTR_COLD void Vco_sim_GJC46_edit___024root__trace_full_0_sub_0(Vco_sim_GJC46_edit___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vco_sim_GJC46_edit___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root__trace_full_0\n"); );
    // Init
    Vco_sim_GJC46_edit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vco_sim_GJC46_edit___024root*>(voidSelf);
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vco_sim_GJC46_edit___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vco_sim_GJC46_edit___024root__trace_full_0_sub_0(Vco_sim_GJC46_edit___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->co_sim_GJC46_edit__DOT__reset));
    bufp->fullBit(oldp+2,(vlSelf->co_sim_GJC46_edit__DOT__bitslip_ctrl_n));
    bufp->fullBit(oldp+3,(vlSelf->co_sim_GJC46_edit__DOT__data_i));
    bufp->fullBit(oldp+4,(vlSelf->co_sim_GJC46_edit__DOT__enable_n));
    bufp->fullIData(oldp+5,(vlSelf->co_sim_GJC46_edit__DOT__mismatch),32);
    bufp->fullBit(oldp+6,((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset)))));
    bufp->fullBit(oldp+7,((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__enable_n)))));
    bufp->fullBit(oldp+8,((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__bitslip_ctrl_n)))));
    bufp->fullBit(oldp+9,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b0__05d)) 
                                 & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset))))));
    bufp->fullBit(oldp+10,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset)) 
                            & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b0__05d))));
    bufp->fullBit(oldp+11,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset)) 
                            & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li1_li1))));
    bufp->fullBit(oldp+12,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li1_li1)) 
                                  & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset))))));
    bufp->fullBit(oldp+13,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset)) 
                            & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li2_li2))));
    bufp->fullBit(oldp+14,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li2_li2)) 
                                  & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset))))));
    bufp->fullBit(oldp+15,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset)) 
                            & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li3_li3))));
    bufp->fullBit(oldp+16,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li3_li3)) 
                                  & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset))))));
    bufp->fullBit(oldp+17,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset)) 
                            & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li4_li4))));
    bufp->fullBit(oldp+18,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li4_li4)) 
                                  & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset))))));
    bufp->fullBit(oldp+19,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset)) 
                            & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li5_li5))));
    bufp->fullBit(oldp+20,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li5_li5)) 
                                  & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset))))));
    bufp->fullBit(oldp+21,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset)) 
                            & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li6_li6))));
    bufp->fullBit(oldp+22,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li6_li6)) 
                                  & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset))))));
    bufp->fullBit(oldp+23,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset)) 
                            & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li7_li7))));
    bufp->fullBit(oldp+24,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li7_li7)) 
                                  & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset))))));
    bufp->fullBit(oldp+25,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset)) 
                                  & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q)))));
    bufp->fullBit(oldp+26,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q)) 
                                  & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset))))));
    bufp->fullBit(oldp+27,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset)) 
                                  & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                     >> 1U)))));
    bufp->fullBit(oldp+28,((1U & ((~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                      >> 1U)) & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset))))));
    bufp->fullBit(oldp+29,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset)) 
                                  & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                     >> 2U)))));
    bufp->fullBit(oldp+30,((1U & ((~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                      >> 2U)) & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset))))));
    bufp->fullBit(oldp+31,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset)) 
                                  & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                     >> 3U)))));
    bufp->fullBit(oldp+32,((1U & ((~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                      >> 3U)) & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset))))));
    bufp->fullBit(oldp+33,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset)) 
                                  & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                     >> 4U)))));
    bufp->fullBit(oldp+34,((1U & ((~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                      >> 4U)) & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset))))));
    bufp->fullBit(oldp+35,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset)) 
                                  & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                     >> 5U)))));
    bufp->fullBit(oldp+36,((1U & ((~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                      >> 5U)) & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset))))));
    bufp->fullBit(oldp+37,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset)) 
                                  & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                     >> 6U)))));
    bufp->fullBit(oldp+38,((1U & ((~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                      >> 6U)) & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset))))));
    bufp->fullBit(oldp+39,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset)) 
                                  & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                     >> 7U)))));
    bufp->fullBit(oldp+40,((1U & ((~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                      >> 7U)) & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset))))));
    bufp->fullBit(oldp+41,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset)) 
                                  & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                     >> 8U)))));
    bufp->fullBit(oldp+42,((1U & ((~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                      >> 8U)) & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset))))));
    bufp->fullBit(oldp+43,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset)) 
                            & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                               >> 9U))));
    bufp->fullBit(oldp+44,((1U & ((~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                      >> 9U)) & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset))))));
    bufp->fullDouble(oldp+45,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__start_point));
    bufp->fullDouble(oldp+47,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__end_point));
    bufp->fullDouble(oldp+49,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_period));
    bufp->fullDouble(oldp+51,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__period_quarter));
    bufp->fullBit(oldp+53,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_start));
    bufp->fullBit(oldp+54,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b0__05d)) 
                            & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco))));
    bufp->fullBit(oldp+55,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco) 
                            & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b0__05d))));
    bufp->fullBit(oldp+56,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco)) 
                                  & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b0__05d))))));
    bufp->fullBit(oldp+57,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco)) 
                            & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b0__05d))));
    bufp->fullBit(oldp+58,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco) 
                            & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li1_li1))));
    bufp->fullBit(oldp+59,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li1_li1)) 
                            & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco))));
    bufp->fullBit(oldp+60,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco)) 
                            & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li1_li1))));
    bufp->fullBit(oldp+61,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco)) 
                                  & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li1_li1))))));
    bufp->fullBit(oldp+62,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco) 
                            & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li2_li2))));
    bufp->fullBit(oldp+63,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li2_li2)) 
                            & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco))));
    bufp->fullBit(oldp+64,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco)) 
                            & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li2_li2))));
    bufp->fullBit(oldp+65,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco)) 
                                  & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li2_li2))))));
    bufp->fullBit(oldp+66,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco) 
                            & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li3_li3))));
    bufp->fullBit(oldp+67,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li3_li3)) 
                            & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco))));
    bufp->fullBit(oldp+68,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco)) 
                            & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li3_li3))));
    bufp->fullBit(oldp+69,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco)) 
                                  & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li3_li3))))));
    bufp->fullBit(oldp+70,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco) 
                            & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li4_li4))));
    bufp->fullBit(oldp+71,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li4_li4)) 
                            & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco))));
    bufp->fullBit(oldp+72,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco)) 
                            & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li4_li4))));
    bufp->fullBit(oldp+73,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco)) 
                                  & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li4_li4))))));
    bufp->fullBit(oldp+74,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco) 
                            & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li5_li5))));
    bufp->fullBit(oldp+75,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li5_li5)) 
                            & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco))));
    bufp->fullBit(oldp+76,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco)) 
                            & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li5_li5))));
    bufp->fullBit(oldp+77,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco)) 
                                  & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li5_li5))))));
    bufp->fullBit(oldp+78,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco) 
                            & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li6_li6))));
    bufp->fullBit(oldp+79,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li6_li6)) 
                            & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco))));
    bufp->fullBit(oldp+80,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco)) 
                            & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li6_li6))));
    bufp->fullBit(oldp+81,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco)) 
                                  & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li6_li6))))));
    bufp->fullBit(oldp+82,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco) 
                            & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li7_li7))));
    bufp->fullBit(oldp+83,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li7_li7)) 
                            & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco))));
    bufp->fullBit(oldp+84,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco)) 
                            & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li7_li7))));
    bufp->fullBit(oldp+85,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco)) 
                                  & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li7_li7))))));
    bufp->fullDouble(oldp+86,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__start_point));
    bufp->fullDouble(oldp+88,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__end_point));
    bufp->fullDouble(oldp+90,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_period));
    bufp->fullDouble(oldp+92,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__period_quarter));
    bufp->fullBit(oldp+94,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_start));
    bufp->fullDouble(oldp+95,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__t0));
    bufp->fullDouble(oldp+97,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__t1));
    bufp->fullDouble(oldp+99,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__ref_period));
    bufp->fullDouble(oldp+101,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__vco_period));
    bufp->fullDouble(oldp+103,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__postdiv_period));
    bufp->fullDouble(oldp+105,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__t0));
    bufp->fullDouble(oldp+107,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__t1));
    bufp->fullDouble(oldp+109,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__ref_period));
    bufp->fullDouble(oldp+111,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__vco_period));
    bufp->fullDouble(oldp+113,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__postdiv_period));
    bufp->fullBit(oldp+115,((0x1f4U <= (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__lock_counter))));
    bufp->fullDouble(oldp+116,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__old_ref_period));
    bufp->fullBit(oldp+118,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__lose_lock));
    bufp->fullCData(oldp+119,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__PLL_DIV_ff),6);
    bufp->fullSData(oldp+120,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__PLL_MULT_ff),12);
    bufp->fullSData(oldp+121,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__lock_counter),9);
    bufp->fullCData(oldp+122,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_delay__DOT__dly_tap_val),6);
    bufp->fullBit(oldp+123,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_delay__DOT__dly_ld_0));
    bufp->fullBit(oldp+124,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_delay__DOT__dly_ld_1));
    bufp->fullBit(oldp+125,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_delay__DOT__dly_ld_1)) 
                             & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_delay__DOT__dly_ld_0))));
    bufp->fullBit(oldp+126,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_delay__DOT__dly_adj_0));
    bufp->fullBit(oldp+127,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_delay__DOT__dly_adj_1));
    bufp->fullBit(oldp+128,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_delay__DOT__dly_adj_1)) 
                             & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_delay__DOT__dly_adj_0))));
    bufp->fullCData(oldp+129,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_delay__DOT__dly_tap_val),6);
    bufp->fullBit(oldp+130,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_delay__DOT__dly_ld_0));
    bufp->fullBit(oldp+131,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_delay__DOT__dly_ld_1));
    bufp->fullBit(oldp+132,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_delay__DOT__dly_ld_1)) 
                             & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_delay__DOT__dly_ld_0))));
    bufp->fullBit(oldp+133,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_delay__DOT__dly_adj_0));
    bufp->fullBit(oldp+134,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_delay__DOT__dly_adj_1));
    bufp->fullBit(oldp+135,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_delay__DOT__dly_adj_1)) 
                             & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_delay__DOT__dly_adj_0))));
    bufp->fullBit(oldp+136,((0x1f4U <= (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__lock_counter))));
    bufp->fullDouble(oldp+137,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__old_ref_period));
    bufp->fullBit(oldp+139,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__lose_lock));
    bufp->fullCData(oldp+140,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__PLL_DIV_ff),6);
    bufp->fullSData(oldp+141,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__PLL_MULT_ff),12);
    bufp->fullSData(oldp+142,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__lock_counter),9);
    bufp->fullCData(oldp+143,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_delay__DOT__dly_tap_val),6);
    bufp->fullBit(oldp+144,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_delay__DOT__dly_ld_0));
    bufp->fullBit(oldp+145,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_delay__DOT__dly_ld_1));
    bufp->fullBit(oldp+146,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_delay__DOT__dly_ld_1)) 
                             & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_delay__DOT__dly_ld_0))));
    bufp->fullBit(oldp+147,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_delay__DOT__dly_adj_0));
    bufp->fullBit(oldp+148,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_delay__DOT__dly_adj_1));
    bufp->fullBit(oldp+149,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_delay__DOT__dly_adj_1)) 
                             & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_delay__DOT__dly_adj_0))));
    bufp->fullCData(oldp+150,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_delay__DOT__dly_tap_val),6);
    bufp->fullBit(oldp+151,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_delay__DOT__dly_ld_0));
    bufp->fullBit(oldp+152,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_delay__DOT__dly_ld_1));
    bufp->fullBit(oldp+153,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_delay__DOT__dly_ld_1)) 
                             & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_delay__DOT__dly_ld_0))));
    bufp->fullBit(oldp+154,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_delay__DOT__dly_adj_0));
    bufp->fullBit(oldp+155,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_delay__DOT__dly_adj_1));
    bufp->fullBit(oldp+156,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_delay__DOT__dly_adj_1)) 
                             & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_delay__DOT__dly_adj_0))));
    bufp->fullBit(oldp+157,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__core_clk));
    bufp->fullBit(oldp+158,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__oe_shift_reg));
    bufp->fullBit(oldp+159,((1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__data_shift_reg) 
                                   >> 9U))));
    bufp->fullBit(oldp+160,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fast_clk_sync_out));
    bufp->fullBit(oldp+161,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__core_clk));
    bufp->fullBit(oldp+162,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__word_load_en));
    bufp->fullSData(oldp+163,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__pll_lock_count),9);
    bufp->fullCData(oldp+164,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__core_clk_count),4);
    bufp->fullSData(oldp+165,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__data_parallel_reg),10);
    bufp->fullSData(oldp+166,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__data_shift_reg),10);
    bufp->fullBit(oldp+167,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__oe_parallel_reg));
    bufp->fullBit(oldp+168,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_fifo_empty));
    bufp->fullBit(oldp+169,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_dout));
    bufp->fullBit(oldp+170,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_shifter_out));
    bufp->fullSData(oldp+171,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bit_shifter),10);
    bufp->fullCData(oldp+172,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_counter),4);
    bufp->fullBit(oldp+173,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__word_load_en));
    bufp->fullSData(oldp+174,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__pll_lock_count),9);
    bufp->fullCData(oldp+175,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__core_clk_count),4);
    bufp->fullSData(oldp+176,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__des_shifter),10);
    bufp->fullSData(oldp+177,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__des_parallel_reg),10);
    bufp->fullBit(oldp+178,((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_fifo_empty)))));
    bufp->fullCData(oldp+179,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register
                              [1U]),5);
    bufp->fullCData(oldp+180,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register[0]),5);
    bufp->fullCData(oldp+181,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register[1]),5);
    bufp->fullSData(oldp+182,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register
                              [1U]),11);
    bufp->fullSData(oldp+183,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register[0]),11);
    bufp->fullSData(oldp+184,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register[1]),11);
    bufp->fullBit(oldp+185,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_core_clk));
    bufp->fullBit(oldp+186,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_word_load_en));
    bufp->fullSData(oldp+187,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_pll_lock_count),9);
    bufp->fullCData(oldp+188,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_core_clk_count),4);
    bufp->fullCData(oldp+189,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__wr_sync_register
                              [1U]),5);
    bufp->fullCData(oldp+190,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__wgray),5);
    bufp->fullCData(oldp+191,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__wr_sync_register[0]),5);
    bufp->fullCData(oldp+192,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__wr_sync_register[1]),5);
    bufp->fullBit(oldp+193,((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b0__05d)))));
    bufp->fullBit(oldp+194,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li1_li1));
    bufp->fullBit(oldp+195,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li2_li2));
    bufp->fullBit(oldp+196,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li3_li3));
    bufp->fullBit(oldp+197,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li4_li4));
    bufp->fullBit(oldp+198,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li5_li5));
    bufp->fullBit(oldp+199,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li6_li6));
    bufp->fullBit(oldp+200,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li7_li7));
    bufp->fullBit(oldp+201,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F));
    bufp->fullBit(oldp+202,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024techmap____VhshMglinVWZCHfXbBuWRBrMeAkj83jPwEwlQ2Lgda8W));
    bufp->fullBit(oldp+203,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__oe_shift_reg));
    bufp->fullBit(oldp+204,((1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__data_shift_reg) 
                                   >> 9U))));
    bufp->fullBit(oldp+205,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk));
    bufp->fullBit(oldp+206,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b0__05d));
    bufp->fullBit(oldp+207,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b1__05d));
    bufp->fullBit(oldp+208,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b2__05d));
    bufp->fullBit(oldp+209,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b3__05d));
    bufp->fullBit(oldp+210,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b4__05d));
    bufp->fullBit(oldp+211,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b5__05d));
    bufp->fullBit(oldp+212,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b6__05d));
    bufp->fullBit(oldp+213,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d));
    bufp->fullCData(oldp+214,((((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b2__05d) 
                                << 5U) | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b1__05d) 
                                           << 4U) | 
                                          (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b0__05d) 
                                            << 3U) 
                                           | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b5__05d) 
                                               << 2U) 
                                              | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b4__05d) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b3__05d))))))),6);
    bufp->fullIData(oldp+215,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b2__05d)
                                ? 0x80000000U : 0U)),32);
    bufp->fullSData(oldp+216,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1730__DOT__s4),16);
    bufp->fullCData(oldp+217,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1730__DOT__s3),8);
    bufp->fullCData(oldp+218,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1730__DOT__s2),4);
    bufp->fullCData(oldp+219,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1730__DOT__s1),2);
    bufp->fullSData(oldp+220,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                ? 0x8000U : 0U)),16);
    bufp->fullCData(oldp+221,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1731__DOT__s3),8);
    bufp->fullCData(oldp+222,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1731__DOT__s2),4);
    bufp->fullCData(oldp+223,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                ? 0x80U : 0U)),8);
    bufp->fullCData(oldp+224,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                                ? ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                    ? 8U : 0U) : 0U)),4);
    bufp->fullCData(oldp+225,((3U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b6__05d)
                                      ? (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                                           ? ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                               ? 8U
                                               : 0U)
                                           : 0U) >> 2U)
                                      : ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                                          ? ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                              ? 8U : 0U)
                                          : 0U)))),2);
    bufp->fullCData(oldp+226,((((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d) 
                                << 2U) | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F) 
                                           << 1U) | (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b6__05d)))),3);
    bufp->fullCData(oldp+227,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                                ? 7U : 8U)),4);
    bufp->fullCData(oldp+228,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1733__DOT__s1),2);
    bufp->fullCData(oldp+229,((((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F) 
                                << 1U) | (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b6__05d))),2);
    bufp->fullCData(oldp+230,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                ? 1U : 2U)),2);
    bufp->fullCData(oldp+231,((((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b5__05d) 
                                << 5U) | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b2__05d) 
                                           << 4U) | 
                                          (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b1__05d) 
                                            << 3U) 
                                           | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b0__05d) 
                                               << 2U) 
                                              | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b4__05d) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b3__05d))))))),6);
    bufp->fullIData(oldp+232,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b5__05d)
                                ? 0x7fffffffU : 0x80000000U)),32);
    bufp->fullSData(oldp+233,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1735__DOT__s4),16);
    bufp->fullCData(oldp+234,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1735__DOT__s3),8);
    bufp->fullCData(oldp+235,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1735__DOT__s2),4);
    bufp->fullCData(oldp+236,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1735__DOT__s1),2);
    bufp->fullCData(oldp+237,((((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b4__05d) 
                                << 4U) | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b2__05d) 
                                           << 3U) | 
                                          (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b1__05d) 
                                            << 2U) 
                                           | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b0__05d) 
                                               << 1U) 
                                              | (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b3__05d)))))),5);
    bufp->fullSData(oldp+238,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b4__05d)
                                ? 0x7fffU : 0x8000U)),16);
    bufp->fullCData(oldp+239,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1736__DOT__s3),8);
    bufp->fullCData(oldp+240,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1736__DOT__s2),4);
    bufp->fullCData(oldp+241,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1736__DOT__s1),2);
    bufp->fullCData(oldp+242,((((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b3__05d) 
                                << 3U) | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b2__05d) 
                                           << 2U) | 
                                          (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b1__05d) 
                                            << 1U) 
                                           | (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b0__05d))))),4);
    bufp->fullCData(oldp+243,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b3__05d)
                                ? 0x7fU : 0x80U)),8);
    bufp->fullCData(oldp+244,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1737__DOT__s2),4);
    bufp->fullCData(oldp+245,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1737__DOT__s1),2);
    bufp->fullCData(oldp+246,((((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b2__05d) 
                                << 2U) | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b1__05d) 
                                           << 1U) | (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b0__05d)))),3);
    bufp->fullCData(oldp+247,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b2__05d)
                                ? 7U : 8U)),4);
    bufp->fullCData(oldp+248,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1738__DOT__s1),2);
    bufp->fullCData(oldp+249,((((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b1__05d) 
                                << 1U) | (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b0__05d))),2);
    bufp->fullCData(oldp+250,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b1__05d)
                                ? 1U : 2U)),2);
    bufp->fullCData(oldp+251,((((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F) 
                                << 2U) | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d) 
                                           << 1U) | (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b6__05d)))),3);
    bufp->fullCData(oldp+252,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                ? 7U : 0xfU)),4);
    bufp->fullCData(oldp+253,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1740__DOT__s1),2);
    bufp->fullBit(oldp+254,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fast_clk_sync_out));
    bufp->fullBit(oldp+255,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__core_clk));
    bufp->fullBit(oldp+256,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__word_load_en));
    bufp->fullSData(oldp+257,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__pll_lock_count),9);
    bufp->fullCData(oldp+258,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__core_clk_count),4);
    bufp->fullSData(oldp+259,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__data_parallel_reg),10);
    bufp->fullSData(oldp+260,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__data_shift_reg),10);
    bufp->fullBit(oldp+261,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__oe_parallel_reg));
    bufp->fullBit(oldp+262,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_fifo_empty));
    bufp->fullBit(oldp+263,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_dout));
    bufp->fullBit(oldp+264,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_shifter_out));
    bufp->fullSData(oldp+265,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bit_shifter),10);
    bufp->fullCData(oldp+266,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_counter),4);
    bufp->fullBit(oldp+267,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__word_load_en));
    bufp->fullSData(oldp+268,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__pll_lock_count),9);
    bufp->fullCData(oldp+269,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk_count),4);
    bufp->fullSData(oldp+270,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__des_shifter),10);
    bufp->fullSData(oldp+271,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__des_parallel_reg),10);
    bufp->fullBit(oldp+272,((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_fifo_empty)))));
    bufp->fullCData(oldp+273,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register
                              [1U]),5);
    bufp->fullCData(oldp+274,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register[0]),5);
    bufp->fullCData(oldp+275,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register[1]),5);
    bufp->fullSData(oldp+276,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register
                              [1U]),11);
    bufp->fullSData(oldp+277,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register[0]),11);
    bufp->fullSData(oldp+278,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register[1]),11);
    bufp->fullBit(oldp+279,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk) 
                             & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q))));
    bufp->fullBit(oldp+280,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q)) 
                             & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk))));
    bufp->fullBit(oldp+281,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk)) 
                                   & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q)))));
    bufp->fullBit(oldp+282,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk)) 
                                   & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q))))));
    bufp->fullBit(oldp+283,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk) 
                             & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                >> 1U))));
    bufp->fullBit(oldp+284,(((~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                 >> 1U)) & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk))));
    bufp->fullBit(oldp+285,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk)) 
                                   & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                      >> 1U)))));
    bufp->fullBit(oldp+286,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk)) 
                                   & (~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                         >> 1U))))));
    bufp->fullBit(oldp+287,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk) 
                             & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                >> 2U))));
    bufp->fullBit(oldp+288,(((~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                 >> 2U)) & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk))));
    bufp->fullBit(oldp+289,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk)) 
                                   & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                      >> 2U)))));
    bufp->fullBit(oldp+290,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk)) 
                                   & (~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                         >> 2U))))));
    bufp->fullBit(oldp+291,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk) 
                             & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                >> 3U))));
    bufp->fullBit(oldp+292,(((~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                 >> 3U)) & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk))));
    bufp->fullBit(oldp+293,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk)) 
                                   & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                      >> 3U)))));
    bufp->fullBit(oldp+294,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk)) 
                                   & (~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                         >> 3U))))));
    bufp->fullBit(oldp+295,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk) 
                             & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                >> 4U))));
    bufp->fullBit(oldp+296,(((~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                 >> 4U)) & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk))));
    bufp->fullBit(oldp+297,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk)) 
                                   & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                      >> 4U)))));
    bufp->fullBit(oldp+298,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk)) 
                                   & (~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                         >> 4U))))));
    bufp->fullBit(oldp+299,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk) 
                             & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                >> 5U))));
    bufp->fullBit(oldp+300,(((~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                 >> 5U)) & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk))));
    bufp->fullBit(oldp+301,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk)) 
                                   & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                      >> 5U)))));
    bufp->fullBit(oldp+302,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk)) 
                                   & (~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                         >> 5U))))));
    bufp->fullBit(oldp+303,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk) 
                             & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                >> 6U))));
    bufp->fullBit(oldp+304,(((~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                 >> 6U)) & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk))));
    bufp->fullBit(oldp+305,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk)) 
                                   & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                      >> 6U)))));
    bufp->fullBit(oldp+306,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk)) 
                                   & (~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                         >> 6U))))));
    bufp->fullBit(oldp+307,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk) 
                             & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                >> 7U))));
    bufp->fullBit(oldp+308,(((~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                 >> 7U)) & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk))));
    bufp->fullBit(oldp+309,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk)) 
                                   & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                      >> 7U)))));
    bufp->fullBit(oldp+310,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk)) 
                                   & (~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                         >> 7U))))));
    bufp->fullBit(oldp+311,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk) 
                             & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                >> 8U))));
    bufp->fullBit(oldp+312,(((~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                 >> 8U)) & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk))));
    bufp->fullBit(oldp+313,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk)) 
                                   & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                      >> 8U)))));
    bufp->fullBit(oldp+314,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk)) 
                                   & (~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                         >> 8U))))));
    bufp->fullBit(oldp+315,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk) 
                             & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                >> 9U))));
    bufp->fullBit(oldp+316,(((~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                 >> 9U)) & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk))));
    bufp->fullBit(oldp+317,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk)) 
                             & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                >> 9U))));
    bufp->fullBit(oldp+318,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk)) 
                                   & (~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                         >> 9U))))));
    bufp->fullBit(oldp+319,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_core_clk));
    bufp->fullBit(oldp+320,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_word_load_en));
    bufp->fullSData(oldp+321,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_pll_lock_count),9);
    bufp->fullCData(oldp+322,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_core_clk_count),4);
    bufp->fullCData(oldp+323,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__wr_sync_register
                              [1U]),5);
    bufp->fullCData(oldp+324,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__wgray),5);
    bufp->fullCData(oldp+325,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__wr_sync_register[0]),5);
    bufp->fullCData(oldp+326,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__wr_sync_register[1]),5);
    bufp->fullBit(oldp+327,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__read_en));
    bufp->fullBit(oldp+328,((1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_data_reg) 
                                   >> 0xaU))));
    bufp->fullSData(oldp+329,((0x3ffU & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_data_reg))),10);
    bufp->fullSData(oldp+330,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_data_reg),11);
    bufp->fullBit(oldp+331,((((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr) 
                              == ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr) 
                                  - (IData)(1U))) | 
                             ((3U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr)) 
                              & (0U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr))))));
    bufp->fullSData(oldp+332,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo[0]),11);
    bufp->fullSData(oldp+333,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo[1]),11);
    bufp->fullSData(oldp+334,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo[2]),11);
    bufp->fullSData(oldp+335,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo[3]),11);
    bufp->fullCData(oldp+336,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr),2);
    bufp->fullCData(oldp+337,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr),2);
    bufp->fullIData(oldp+338,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__unnamedblk1__DOT__i),32);
    bufp->fullSData(oldp+339,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__rd_sync_register
                              [1U]),11);
    bufp->fullSData(oldp+340,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__rgray),11);
    bufp->fullSData(oldp+341,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__rd_sync_register[0]),11);
    bufp->fullSData(oldp+342,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__rd_sync_register[1]),11);
    bufp->fullBit(oldp+343,((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__des_fifo_empty)))));
    bufp->fullBit(oldp+344,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__read_en));
    bufp->fullBit(oldp+345,((1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_data_reg) 
                                   >> 0xaU))));
    bufp->fullSData(oldp+346,((0x3ffU & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_data_reg))),10);
    bufp->fullSData(oldp+347,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_data_reg),11);
    bufp->fullBit(oldp+348,((((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr) 
                              == ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr) 
                                  - (IData)(1U))) | 
                             ((3U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr)) 
                              & (0U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr))))));
    bufp->fullSData(oldp+349,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo[0]),11);
    bufp->fullSData(oldp+350,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo[1]),11);
    bufp->fullSData(oldp+351,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo[2]),11);
    bufp->fullSData(oldp+352,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo[3]),11);
    bufp->fullCData(oldp+353,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr),2);
    bufp->fullCData(oldp+354,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr),2);
    bufp->fullIData(oldp+355,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+356,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__des_fifo_empty));
    bufp->fullSData(oldp+357,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__rd_sync_register
                              [1U]),11);
    bufp->fullSData(oldp+358,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__rgray),11);
    bufp->fullSData(oldp+359,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__rd_sync_register[0]),11);
    bufp->fullSData(oldp+360,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__rd_sync_register[1]),11);
    bufp->fullCData(oldp+361,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_data_reg),4);
    bufp->fullCData(oldp+362,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_data_comp),4);
    bufp->fullCData(oldp+363,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_data_count),5);
    bufp->fullCData(oldp+364,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_reg_data_count),2);
    bufp->fullCData(oldp+365,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_data_reg),4);
    bufp->fullCData(oldp+366,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_data_comp),4);
    bufp->fullCData(oldp+367,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_data_count),5);
    bufp->fullCData(oldp+368,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_reg_data_count),2);
    bufp->fullCData(oldp+369,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_data_reg),4);
    bufp->fullCData(oldp+370,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_data_comp),4);
    bufp->fullCData(oldp+371,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_data_count),5);
    bufp->fullCData(oldp+372,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_reg_data_count),2);
    bufp->fullCData(oldp+373,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_data_reg),4);
    bufp->fullCData(oldp+374,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_data_comp),4);
    bufp->fullCData(oldp+375,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_data_count),5);
    bufp->fullCData(oldp+376,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_reg_data_count),2);
    bufp->fullCData(oldp+377,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_data_reg),4);
    bufp->fullCData(oldp+378,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_data_comp),4);
    bufp->fullCData(oldp+379,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_data_count),5);
    bufp->fullCData(oldp+380,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_reg_data_count),2);
    bufp->fullCData(oldp+381,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_data_reg),4);
    bufp->fullCData(oldp+382,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_data_comp),4);
    bufp->fullCData(oldp+383,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_data_count),5);
    bufp->fullCData(oldp+384,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_reg_data_count),2);
    bufp->fullCData(oldp+385,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_data_reg),4);
    bufp->fullCData(oldp+386,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_data_comp),4);
    bufp->fullCData(oldp+387,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_data_count),5);
    bufp->fullCData(oldp+388,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_reg_data_count),2);
    bufp->fullCData(oldp+389,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_data_reg),4);
    bufp->fullCData(oldp+390,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_data_comp),4);
    bufp->fullCData(oldp+391,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_data_count),5);
    bufp->fullCData(oldp+392,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_reg_data_count),2);
    bufp->fullBit(oldp+393,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__pllstart_ff2)) 
                             & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__pllstart))));
    bufp->fullBit(oldp+394,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__pllstart));
    bufp->fullBit(oldp+395,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__pllstart_ff1));
    bufp->fullBit(oldp+396,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__pllstart_ff2));
    bufp->fullBit(oldp+397,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__vcostart));
    bufp->fullBit(oldp+398,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__vcostart_ff));
    bufp->fullBit(oldp+399,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__pllstart_ff2)) 
                             & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__pllstart))));
    bufp->fullBit(oldp+400,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__pllstart));
    bufp->fullBit(oldp+401,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__pllstart_ff1));
    bufp->fullBit(oldp+402,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__pllstart_ff2));
    bufp->fullBit(oldp+403,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__vcostart));
    bufp->fullBit(oldp+404,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__vcostart_ff));
    bufp->fullBit(oldp+405,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_fifo_dout));
    bufp->fullBit(oldp+406,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_adj_1));
    bufp->fullBit(oldp+407,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_adj_0));
    bufp->fullBit(oldp+408,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_adj_0)) 
                             & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_adj_1))));
    bufp->fullBit(oldp+409,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo_read_en));
    bufp->fullBit(oldp+410,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__des_fifo_full));
    bufp->fullCData(oldp+411,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__rd_addr),5);
    bufp->fullCData(oldp+412,((0x1fU & ((IData)(1U) 
                                        + (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__rd_addr)))),5);
    bufp->fullCData(oldp+413,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__rgray),5);
    bufp->fullBit(oldp+414,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__read_empty));
    bufp->fullBit(oldp+415,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT____Vcellinp__afifo_inst__wr));
    bufp->fullSData(oldp+416,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__wr_addr),11);
    bufp->fullSData(oldp+417,((0x7ffU & ((IData)(1U) 
                                         + (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__wr_addr)))),11);
    bufp->fullSData(oldp+418,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__wgray),11);
    bufp->fullBit(oldp+419,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__des_fifo_full)) 
                             & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT____Vcellinp__afifo_inst__wr))));
    bufp->fullBit(oldp+420,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_fifo_dout));
    bufp->fullBit(oldp+421,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_adj_1));
    bufp->fullBit(oldp+422,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_adj_0));
    bufp->fullBit(oldp+423,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_adj_0)) 
                             & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_adj_1))));
    bufp->fullBit(oldp+424,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo_read_en));
    bufp->fullBit(oldp+425,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__des_fifo_full));
    bufp->fullCData(oldp+426,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__rd_addr),5);
    bufp->fullCData(oldp+427,((0x1fU & ((IData)(1U) 
                                        + (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__rd_addr)))),5);
    bufp->fullCData(oldp+428,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__rgray),5);
    bufp->fullBit(oldp+429,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__read_empty));
    bufp->fullBit(oldp+430,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT____Vcellinp__afifo_inst__wr));
    bufp->fullSData(oldp+431,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__wr_addr),11);
    bufp->fullSData(oldp+432,((0x7ffU & ((IData)(1U) 
                                         + (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__wr_addr)))),11);
    bufp->fullSData(oldp+433,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__wgray),11);
    bufp->fullBit(oldp+434,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__des_fifo_full)) 
                             & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT____Vcellinp__afifo_inst__wr))));
    bufp->fullBit(oldp+435,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b0__05d));
    bufp->fullBit(oldp+436,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b1__05d));
    bufp->fullBit(oldp+437,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b2__05d));
    bufp->fullBit(oldp+438,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b3__05d));
    bufp->fullBit(oldp+439,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b4__05d));
    bufp->fullBit(oldp+440,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b5__05d));
    bufp->fullBit(oldp+441,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b6__05d));
    bufp->fullBit(oldp+442,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b7__05d));
    bufp->fullBit(oldp+443,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b8__05d));
    bufp->fullBit(oldp+444,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b9__05d));
    bufp->fullSData(oldp+445,((((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b9__05d) 
                                << 9U) | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b8__05d) 
                                           << 8U) | 
                                          (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b7__05d) 
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
                                                             | (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b0__05d))))))))))),10);
    bufp->fullBit(oldp+446,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_fifo_full));
    bufp->fullBit(oldp+447,((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_fifo_full)))));
    bufp->fullCData(oldp+448,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__wr_addr),5);
    bufp->fullCData(oldp+449,((0x1fU & ((IData)(1U) 
                                        + (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__wr_addr)))),5);
    bufp->fullBit(oldp+450,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_fifo_full));
    bufp->fullBit(oldp+451,((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_fifo_full)))));
    bufp->fullCData(oldp+452,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__wr_addr),5);
    bufp->fullCData(oldp+453,((0x1fU & ((IData)(1U) 
                                        + (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__wr_addr)))),5);
    bufp->fullBit(oldp+454,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[0]));
    bufp->fullBit(oldp+455,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[1]));
    bufp->fullBit(oldp+456,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[2]));
    bufp->fullBit(oldp+457,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[3]));
    bufp->fullBit(oldp+458,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[4]));
    bufp->fullBit(oldp+459,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[5]));
    bufp->fullBit(oldp+460,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[6]));
    bufp->fullBit(oldp+461,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[7]));
    bufp->fullBit(oldp+462,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[8]));
    bufp->fullBit(oldp+463,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[9]));
    bufp->fullBit(oldp+464,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[10]));
    bufp->fullBit(oldp+465,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[11]));
    bufp->fullBit(oldp+466,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[12]));
    bufp->fullBit(oldp+467,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[13]));
    bufp->fullBit(oldp+468,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[14]));
    bufp->fullBit(oldp+469,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[15]));
    bufp->fullBit(oldp+470,((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__des_fifo_empty)))));
    bufp->fullBit(oldp+471,((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo_empty)))));
    bufp->fullBit(oldp+472,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo_empty));
    bufp->fullBit(oldp+473,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__des_fifo_empty));
    bufp->fullBit(oldp+474,((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo_empty)))));
    bufp->fullBit(oldp+475,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo_empty));
    bufp->fullBit(oldp+476,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[0]));
    bufp->fullBit(oldp+477,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[1]));
    bufp->fullBit(oldp+478,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[2]));
    bufp->fullBit(oldp+479,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[3]));
    bufp->fullBit(oldp+480,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[4]));
    bufp->fullBit(oldp+481,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[5]));
    bufp->fullBit(oldp+482,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[6]));
    bufp->fullBit(oldp+483,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[7]));
    bufp->fullBit(oldp+484,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[8]));
    bufp->fullBit(oldp+485,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[9]));
    bufp->fullBit(oldp+486,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[10]));
    bufp->fullBit(oldp+487,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[11]));
    bufp->fullBit(oldp+488,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[12]));
    bufp->fullBit(oldp+489,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[13]));
    bufp->fullBit(oldp+490,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[14]));
    bufp->fullBit(oldp+491,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[15]));
    bufp->fullSData(oldp+492,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__data_i_serdes),10);
    bufp->fullBit(oldp+493,((1U & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q))));
    bufp->fullBit(oldp+494,((1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                   >> 1U))));
    bufp->fullBit(oldp+495,((1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                   >> 2U))));
    bufp->fullBit(oldp+496,((1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                   >> 3U))));
    bufp->fullBit(oldp+497,((1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                   >> 4U))));
    bufp->fullBit(oldp+498,((1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                   >> 5U))));
    bufp->fullBit(oldp+499,((1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                   >> 6U))));
    bufp->fullBit(oldp+500,((1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                   >> 7U))));
    bufp->fullBit(oldp+501,((1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                   >> 8U))));
    bufp->fullBit(oldp+502,((1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                   >> 9U))));
    bufp->fullSData(oldp+503,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q),10);
    bufp->fullSData(oldp+504,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__rd_addr),11);
    bufp->fullSData(oldp+505,((0x7ffU & ((IData)(1U) 
                                         + (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__rd_addr)))),11);
    bufp->fullBit(oldp+506,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__read_empty));
    bufp->fullSData(oldp+507,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__rd_addr),11);
    bufp->fullSData(oldp+508,((0x7ffU & ((IData)(1U) 
                                         + (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__rd_addr)))),11);
    bufp->fullBit(oldp+509,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__read_empty));
    bufp->fullBit(oldp+510,(vlSelf->co_sim_GJC46_edit__DOT__clkGHz));
    bufp->fullBit(oldp+511,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__oe_shift_reg) 
                             & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__delay_out))));
    bufp->fullBit(oldp+512,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__oe_shift_reg) 
                             & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__delay_out))));
    bufp->fullBit(oldp+513,(((0xffU == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__wait_pll)) 
                             & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_lock))));
    bufp->fullBit(oldp+514,((1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_lock)
                                    ? (1U & (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b6__05d)
                                               ? (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                                                    ? 
                                                   ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                                     ? 8U
                                                     : 0U)
                                                    : 0U) 
                                                  >> 2U)
                                               : ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                                                   ? 
                                                  ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                                    ? 8U
                                                    : 0U)
                                                   : 0U)) 
                                             >> 1U))
                                    : (3U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b6__05d)
                                              ? (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                                                   ? 
                                                  ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                                    ? 8U
                                                    : 0U)
                                                   : 0U) 
                                                 >> 2U)
                                              : ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                                                  ? 
                                                 ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                                   ? 8U
                                                   : 0U)
                                                  : 0U)))))));
    bufp->fullBit(oldp+515,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__data_i_delay));
    bufp->fullBit(oldp+516,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_vco));
    bufp->fullSData(oldp+517,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__data_i_serdes_reg),10);
    bufp->fullCData(oldp+518,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__wait_pll),8);
    bufp->fullBit(oldp+519,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_lock));
    bufp->fullBit(oldp+520,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__delay_out));
    bufp->fullBit(oldp+521,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_out_div2));
    bufp->fullBit(oldp+522,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_out_div3));
    bufp->fullBit(oldp+523,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_out_div4));
    bufp->fullBit(oldp+524,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_postdiv));
    bufp->fullIData(oldp+525,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__div3_count),32);
    bufp->fullBit(oldp+526,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__word_load_en_sync));
    bufp->fullSData(oldp+527,(((0x400U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__enable_n)) 
                                          << 0xaU)) 
                               | (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__data_i_serdes_reg))),11);
    bufp->fullBit(oldp+528,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_error));
    bufp->fullBit(oldp+529,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_0));
    bufp->fullBit(oldp+530,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_90));
    bufp->fullBit(oldp+531,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_180));
    bufp->fullBit(oldp+532,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_270));
    bufp->fullBit(oldp+533,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_clk));
    bufp->fullBit(oldp+534,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_dout));
    bufp->fullBit(oldp+535,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__enable_n)) 
                             & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_fifo_dout))));
    bufp->fullBit(oldp+536,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc____VhshGVgqBU6wRRDtA5Ir9Uo4M9yi2GGlyR1rSX1aUOlb));
    bufp->fullBit(oldp+537,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_lock));
    bufp->fullBit(oldp+538,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_delay));
    bufp->fullBit(oldp+539,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__delay_out));
    bufp->fullBit(oldp+540,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco));
    bufp->fullCData(oldp+541,((((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F) 
                                << 4U) | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d) 
                                           << 3U) | 
                                          (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b6__05d) 
                                            << 2U) 
                                           | ((2U & 
                                               ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__des_fifo_empty)) 
                                                << 1U)) 
                                              | (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_lock)))))),5);
    bufp->fullCData(oldp+542,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1731__DOT__s1),2);
    bufp->fullCData(oldp+543,((((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F) 
                                << 3U) | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d) 
                                           << 2U) | 
                                          (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b6__05d) 
                                            << 1U) 
                                           | (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_lock))))),4);
    bufp->fullBit(oldp+544,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_out_div2));
    bufp->fullBit(oldp+545,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_out_div3));
    bufp->fullBit(oldp+546,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_out_div4));
    bufp->fullBit(oldp+547,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_postdiv));
    bufp->fullIData(oldp+548,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__div3_count),32);
    bufp->fullBit(oldp+549,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__word_load_en_sync));
    bufp->fullSData(oldp+550,(((0x400U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__enable_n)) 
                                          << 0xaU)) 
                               | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b9__05d) 
                                   << 9U) | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b8__05d) 
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
                                                                  | (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b0__05d)))))))))))),11);
    bufp->fullBit(oldp+551,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_error));
    bufp->fullBit(oldp+552,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_0));
    bufp->fullBit(oldp+553,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_90));
    bufp->fullBit(oldp+554,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_180));
    bufp->fullBit(oldp+555,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_270));
    bufp->fullBit(oldp+556,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_clk));
    bufp->fullBit(oldp+557,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_dout));
    bufp->fullBit(oldp+558,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__enable_n)) 
                             & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_fifo_dout))));
}
