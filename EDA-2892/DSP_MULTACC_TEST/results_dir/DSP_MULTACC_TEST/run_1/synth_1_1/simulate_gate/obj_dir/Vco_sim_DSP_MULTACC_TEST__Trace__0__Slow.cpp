// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vco_sim_DSP_MULTACC_TEST__Syms.h"


VL_ATTR_COLD void Vco_sim_DSP_MULTACC_TEST___024root__trace_init_sub__TOP__0(Vco_sim_DSP_MULTACC_TEST___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_DSP_MULTACC_TEST__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_DSP_MULTACC_TEST___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("co_sim_DSP_MULTACC_TEST", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+109,0,"z_multacc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+111,0,"z_multacc_netlist",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBus(c+2,0,"feedback",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+3,0,"acc_fir",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declQuad(c+113,0,"z_multadd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+115,0,"z_multadd_netlist",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBus(c+4,0,"shift_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+5,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+6,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+7,0,"load_acc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"saturate_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"subtract",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"unsigned_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"unsigned_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"mismatch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("golden", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+5,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+6,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+3,0,"acc_fir",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+335,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"feedback",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+7,0,"load_acc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"unsigned_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"unsigned_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"saturate_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"shift_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+8,0,"round",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"subtract",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+109,0,"z_multacc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+113,0,"z_multadd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->pushPrefix("dut_multacc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+336,0,"DSP_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 151,0);
    tracep->declBus(c+341,0,"COEFF_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+341,0,"COEFF_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+341,0,"COEFF_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+341,0,"COEFF_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declQuad(c+342,0,"OUTPUT_REG_EN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+342,0,"INPUT_REG_EN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBus(c+5,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+6,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+3,0,"ACC_FIR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declQuad(c+109,0,"Z",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBus(c+253,0,"DLY_B",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+335,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"RESET",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"FEEDBACK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+7,0,"LOAD_ACC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"SATURATE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"SHIFT_RIGHT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+8,0,"ROUND",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"SUBTRACT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"UNSIGNED_A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"UNSIGNED_B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"subtract_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+255,0,"acc_fir_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+256,0,"feedback_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+257,0,"shift_right_reg1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+258,0,"shift_right_reg2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+259,0,"round_reg1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+260,0,"round_reg2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+261,0,"saturate_reg1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+262,0,"saturate_reg2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+263,0,"load_acc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+264,0,"a_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+265,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+266,0,"unsigned_a_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"unsigned_b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"subtract_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+68,0,"acc_fir_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+69,0,"feedback_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+268,0,"shift_right_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+269,0,"round_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+270,0,"saturate_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"load_acc_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"a_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+72,0,"b_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+73,0,"unsigned_a_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"unsigned_b_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+271,0,"accumulator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+117,0,"add_sub_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+119,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+121,0,"add_sub_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+123,0,"pre_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+125,0,"shift_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+127,0,"round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+129,0,"saturate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+109,0,"z_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+273,0,"z_out_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBus(c+131,0,"mult_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+75,0,"mult_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->popPrefix();
    tracep->pushPrefix("dut_multadd", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+344,0,"DSP_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+341,0,"COEFF_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+341,0,"COEFF_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+341,0,"COEFF_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+341,0,"COEFF_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declQuad(c+342,0,"OUTPUT_REG_EN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+342,0,"INPUT_REG_EN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBus(c+5,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+6,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+3,0,"ACC_FIR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declQuad(c+113,0,"Z",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBus(c+275,0,"DLY_B",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+335,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"RESET",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"FEEDBACK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+7,0,"LOAD_ACC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"SATURATE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"SHIFT_RIGHT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+8,0,"ROUND",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"SUBTRACT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"UNSIGNED_A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"UNSIGNED_B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+276,0,"subtract_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+277,0,"acc_fir_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+278,0,"feedback_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+279,0,"shift_right_reg1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+280,0,"shift_right_reg2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+281,0,"round_reg1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"round_reg2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+283,0,"saturate_reg1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+284,0,"saturate_reg2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+285,0,"load_acc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+286,0,"a_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+287,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+288,0,"unsigned_a_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+289,0,"unsigned_b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"subtract_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+77,0,"acc_fir_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+78,0,"feedback_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+79,0,"shift_right_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+80,0,"round_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"saturate_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"load_acc_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"a_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+84,0,"b_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+85,0,"unsigned_a_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"unsigned_b_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+290,0,"accumulator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+132,0,"add_sub_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+134,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+136,0,"add_sub_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+138,0,"pre_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+140,0,"shift_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+142,0,"round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+144,0,"saturate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+113,0,"z_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+292,0,"z_out_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBus(c+146,0,"mult_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+87,0,"mult_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("synth_net", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+5,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+3,0,"acc_fir",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+6,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+335,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"feedback",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+7,0,"load_acc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"round",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"saturate_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"shift_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+10,0,"subtract",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"unsigned_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"unsigned_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+111,0,"z_multacc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+115,0,"z_multadd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBit(c+335,0,"$auto$clkbufmap.cc:298:execute$398",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"$iopadmap$a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+3,0,"$iopadmap$acc_fir",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+6,0,"$iopadmap$b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+335,0,"$iopadmap$clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"$iopadmap$feedback",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+7,0,"$iopadmap$load_acc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"$iopadmap$reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"$iopadmap$round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"$iopadmap$saturate_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"$iopadmap$shift_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+10,0,"$iopadmap$subtract",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"$iopadmap$unsigned_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"$iopadmap$unsigned_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+111,0,"$iopadmap$z_multacc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+115,0,"$iopadmap$z_multadd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->pushPrefix("$auto$clkbufmap.cc:265:execute$396", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+335,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.a", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+14,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.a_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+15,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.a_10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+16,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.a_11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.a_12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+18,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.a_13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+19,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.a_14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+20,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.a_15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+21,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.a_16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+22,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.a_17", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+23,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.a_18", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.a_19", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+25,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.a_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+26,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.a_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+27,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.a_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+28,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.a_5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+29,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.a_6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+30,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.a_7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+31,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.a_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+32,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.a_9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+33,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.acc_fir", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+34,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.acc_fir_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+35,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.acc_fir_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+36,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.acc_fir_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+37,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.acc_fir_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+38,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.acc_fir_5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+39,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.b", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+40,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.b_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+41,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.b_10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+42,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.b_11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+43,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.b_12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+44,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.b_13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+45,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.b_14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+46,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.b_15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+47,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.b_16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+48,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.b_17", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+49,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.b_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+50,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.b_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+51,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.b_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+52,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.b_5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+53,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.b_6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+54,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.b_7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+55,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.b_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+56,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.b_9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+57,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.clk", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+335,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+335,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.feedback", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+58,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.feedback_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+59,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.feedback_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+60,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.load_acc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.reset", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.round", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+8,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.saturate_enable", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+9,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.shift_right", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+61,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.shift_right_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+62,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.shift_right_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+63,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.shift_right_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+64,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.shift_right_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+65,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.shift_right_5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+66,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.subtract", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+10,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.unsigned_a", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.unsigned_b", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+12,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multacc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+147,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multacc_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+148,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multacc_10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+149,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multacc_11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+150,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multacc_12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+151,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multacc_13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+152,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multacc_14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+153,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multacc_15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+154,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multacc_16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+155,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multacc_17", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+156,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multacc_18", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+157,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multacc_19", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+158,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multacc_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+159,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multacc_20", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+160,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multacc_21", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+161,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multacc_22", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+162,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multacc_23", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+163,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multacc_24", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+164,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multacc_25", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+165,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multacc_26", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+166,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multacc_27", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+167,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multacc_28", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+168,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multacc_29", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+169,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multacc_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+170,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multacc_30", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+171,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multacc_31", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+172,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multacc_32", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+173,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multacc_33", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+174,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multacc_34", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+175,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multacc_35", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+176,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multacc_36", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+177,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multacc_37", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+178,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multacc_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+179,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multacc_5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+180,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multacc_6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+181,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multacc_7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+182,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multacc_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+183,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multacc_9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+184,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multadd", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+185,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multadd_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+186,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multadd_10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+187,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multadd_11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+188,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multadd_12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+189,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multadd_13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+190,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multadd_14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+191,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multadd_15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+192,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multadd_16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+193,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multadd_17", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+194,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multadd_18", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+195,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multadd_19", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+196,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multadd_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+197,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multadd_20", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+198,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multadd_21", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+199,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+199,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multadd_22", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+200,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multadd_23", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+201,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multadd_24", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+202,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multadd_25", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+203,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multadd_26", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+204,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multadd_27", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+205,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multadd_28", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+206,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multadd_29", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+207,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multadd_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+208,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multadd_30", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+209,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+209,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multadd_31", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+210,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multadd_32", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+211,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multadd_33", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+212,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multadd_34", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+213,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multadd_35", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+214,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multadd_36", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+215,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+215,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multadd_37", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+216,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multadd_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+217,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multadd_5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+218,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multadd_6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+219,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multadd_7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+220,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multadd_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+221,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+221,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$DSP_MULTACC_TEST.z_multadd_9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+222,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+222,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("dut_multacc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+336,0,"DSP_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 151,0);
    tracep->declBus(c+341,0,"COEFF_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+341,0,"COEFF_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+341,0,"COEFF_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+341,0,"COEFF_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declQuad(c+342,0,"OUTPUT_REG_EN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+342,0,"INPUT_REG_EN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBus(c+5,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+6,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+3,0,"ACC_FIR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declQuad(c+111,0,"Z",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBus(c+294,0,"DLY_B",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+335,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"RESET",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"FEEDBACK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+7,0,"LOAD_ACC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"SATURATE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"SHIFT_RIGHT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+8,0,"ROUND",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"SUBTRACT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"UNSIGNED_A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"UNSIGNED_B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+295,0,"subtract_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+296,0,"acc_fir_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+297,0,"feedback_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+298,0,"shift_right_reg1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+299,0,"shift_right_reg2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+300,0,"round_reg1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+301,0,"round_reg2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+302,0,"saturate_reg1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+303,0,"saturate_reg2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+304,0,"load_acc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+305,0,"a_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+306,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+307,0,"unsigned_a_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+308,0,"unsigned_b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"subtract_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+89,0,"acc_fir_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+90,0,"feedback_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+309,0,"shift_right_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+310,0,"round_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+311,0,"saturate_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"load_acc_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+92,0,"a_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+93,0,"b_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+94,0,"unsigned_a_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"unsigned_b_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+312,0,"accumulator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+223,0,"add_sub_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+225,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+227,0,"add_sub_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+229,0,"pre_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+231,0,"shift_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+233,0,"round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+235,0,"saturate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+111,0,"z_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+314,0,"z_out_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBus(c+237,0,"mult_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+96,0,"mult_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->popPrefix();
    tracep->pushPrefix("dut_multadd", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+344,0,"DSP_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+341,0,"COEFF_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+341,0,"COEFF_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+341,0,"COEFF_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+341,0,"COEFF_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declQuad(c+342,0,"OUTPUT_REG_EN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+342,0,"INPUT_REG_EN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBus(c+5,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+6,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+3,0,"ACC_FIR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declQuad(c+115,0,"Z",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBus(c+316,0,"DLY_B",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+335,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"RESET",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"FEEDBACK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+7,0,"LOAD_ACC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"SATURATE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"SHIFT_RIGHT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+8,0,"ROUND",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"SUBTRACT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"UNSIGNED_A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"UNSIGNED_B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+317,0,"subtract_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+318,0,"acc_fir_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+319,0,"feedback_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+320,0,"shift_right_reg1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+321,0,"shift_right_reg2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+322,0,"round_reg1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+323,0,"round_reg2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"saturate_reg1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+325,0,"saturate_reg2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+326,0,"load_acc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+327,0,"a_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+328,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+329,0,"unsigned_a_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+330,0,"unsigned_b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"subtract_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+98,0,"acc_fir_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+99,0,"feedback_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+100,0,"shift_right_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+101,0,"round_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"saturate_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"load_acc_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+104,0,"a_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+105,0,"b_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+106,0,"unsigned_a_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"unsigned_b_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+331,0,"accumulator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+238,0,"add_sub_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+240,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+242,0,"add_sub_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+244,0,"pre_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+246,0,"shift_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+248,0,"round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+250,0,"saturate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+115,0,"z_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+333,0,"z_out_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBus(c+252,0,"mult_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+108,0,"mult_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vco_sim_DSP_MULTACC_TEST___024root__trace_init_top(Vco_sim_DSP_MULTACC_TEST___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_DSP_MULTACC_TEST__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_DSP_MULTACC_TEST___024root__trace_init_top\n"); );
    // Body
    Vco_sim_DSP_MULTACC_TEST___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vco_sim_DSP_MULTACC_TEST___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vco_sim_DSP_MULTACC_TEST___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vco_sim_DSP_MULTACC_TEST___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vco_sim_DSP_MULTACC_TEST___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vco_sim_DSP_MULTACC_TEST___024root__trace_register(Vco_sim_DSP_MULTACC_TEST___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_DSP_MULTACC_TEST__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_DSP_MULTACC_TEST___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vco_sim_DSP_MULTACC_TEST___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vco_sim_DSP_MULTACC_TEST___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vco_sim_DSP_MULTACC_TEST___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vco_sim_DSP_MULTACC_TEST___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vco_sim_DSP_MULTACC_TEST___024root__trace_const_0_sub_0(Vco_sim_DSP_MULTACC_TEST___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vco_sim_DSP_MULTACC_TEST___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_DSP_MULTACC_TEST___024root__trace_const_0\n"); );
    // Init
    Vco_sim_DSP_MULTACC_TEST___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vco_sim_DSP_MULTACC_TEST___024root*>(voidSelf);
    Vco_sim_DSP_MULTACC_TEST__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vco_sim_DSP_MULTACC_TEST___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vco_sim_DSP_MULTACC_TEST___024root__trace_const_0_sub_0(Vco_sim_DSP_MULTACC_TEST___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_DSP_MULTACC_TEST__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_DSP_MULTACC_TEST___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    __Vtemp_1[0U] = 0x4c415445U;
    __Vtemp_1[1U] = 0x43554d55U;
    __Vtemp_1[2U] = 0x595f4143U;
    __Vtemp_1[3U] = 0x5449504cU;
    __Vtemp_1[4U] = 0x4d554cU;
    bufp->fullWData(oldp+336,(__Vtemp_1),152);
    bufp->fullIData(oldp+341,(0U),20);
    bufp->fullQData(oldp+342,(0x46414c5345ULL),40);
    __Vtemp_2[0U] = 0x5f535542U;
    __Vtemp_2[1U] = 0x5f414444U;
    __Vtemp_2[2U] = 0x49504c59U;
    __Vtemp_2[3U] = 0x4d554c54U;
    bufp->fullWData(oldp+344,(__Vtemp_2),128);
    bufp->fullIData(oldp+348,(0x4e4f4e45U),32);
    bufp->fullBit(oldp+349,(1U));
}

VL_ATTR_COLD void Vco_sim_DSP_MULTACC_TEST___024root__trace_full_0_sub_0(Vco_sim_DSP_MULTACC_TEST___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vco_sim_DSP_MULTACC_TEST___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_DSP_MULTACC_TEST___024root__trace_full_0\n"); );
    // Init
    Vco_sim_DSP_MULTACC_TEST___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vco_sim_DSP_MULTACC_TEST___024root*>(voidSelf);
    Vco_sim_DSP_MULTACC_TEST__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vco_sim_DSP_MULTACC_TEST___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vco_sim_DSP_MULTACC_TEST___024root__trace_full_0_sub_0(Vco_sim_DSP_MULTACC_TEST___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_DSP_MULTACC_TEST__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_DSP_MULTACC_TEST___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__reset));
    bufp->fullCData(oldp+2,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__feedback),3);
    bufp->fullCData(oldp+3,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__acc_fir),6);
    bufp->fullCData(oldp+4,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__shift_right),6);
    bufp->fullIData(oldp+5,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__a),20);
    bufp->fullIData(oldp+6,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__b),18);
    bufp->fullBit(oldp+7,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__load_acc));
    bufp->fullBit(oldp+8,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__round));
    bufp->fullBit(oldp+9,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__saturate_enable));
    bufp->fullBit(oldp+10,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__subtract));
    bufp->fullBit(oldp+11,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__unsigned_a));
    bufp->fullBit(oldp+12,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__unsigned_b));
    bufp->fullIData(oldp+13,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__mismatch),32);
    bufp->fullBit(oldp+14,((1U & vlSelf->co_sim_DSP_MULTACC_TEST__DOT__a)));
    bufp->fullBit(oldp+15,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__a 
                                  >> 1U))));
    bufp->fullBit(oldp+16,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__a 
                                  >> 0xaU))));
    bufp->fullBit(oldp+17,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__a 
                                  >> 0xbU))));
    bufp->fullBit(oldp+18,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__a 
                                  >> 0xcU))));
    bufp->fullBit(oldp+19,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__a 
                                  >> 0xdU))));
    bufp->fullBit(oldp+20,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__a 
                                  >> 0xeU))));
    bufp->fullBit(oldp+21,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__a 
                                  >> 0xfU))));
    bufp->fullBit(oldp+22,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__a 
                                  >> 0x10U))));
    bufp->fullBit(oldp+23,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__a 
                                  >> 0x11U))));
    bufp->fullBit(oldp+24,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__a 
                                  >> 0x12U))));
    bufp->fullBit(oldp+25,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__a 
                                  >> 0x13U))));
    bufp->fullBit(oldp+26,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__a 
                                  >> 2U))));
    bufp->fullBit(oldp+27,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__a 
                                  >> 3U))));
    bufp->fullBit(oldp+28,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__a 
                                  >> 4U))));
    bufp->fullBit(oldp+29,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__a 
                                  >> 5U))));
    bufp->fullBit(oldp+30,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__a 
                                  >> 6U))));
    bufp->fullBit(oldp+31,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__a 
                                  >> 7U))));
    bufp->fullBit(oldp+32,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__a 
                                  >> 8U))));
    bufp->fullBit(oldp+33,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__a 
                                  >> 9U))));
    bufp->fullBit(oldp+34,((1U & (IData)(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__acc_fir))));
    bufp->fullBit(oldp+35,((1U & ((IData)(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__acc_fir) 
                                  >> 1U))));
    bufp->fullBit(oldp+36,((1U & ((IData)(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__acc_fir) 
                                  >> 2U))));
    bufp->fullBit(oldp+37,((1U & ((IData)(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__acc_fir) 
                                  >> 3U))));
    bufp->fullBit(oldp+38,((1U & ((IData)(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__acc_fir) 
                                  >> 4U))));
    bufp->fullBit(oldp+39,((1U & ((IData)(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__acc_fir) 
                                  >> 5U))));
    bufp->fullBit(oldp+40,((1U & vlSelf->co_sim_DSP_MULTACC_TEST__DOT__b)));
    bufp->fullBit(oldp+41,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__b 
                                  >> 1U))));
    bufp->fullBit(oldp+42,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__b 
                                  >> 0xaU))));
    bufp->fullBit(oldp+43,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__b 
                                  >> 0xbU))));
    bufp->fullBit(oldp+44,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__b 
                                  >> 0xcU))));
    bufp->fullBit(oldp+45,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__b 
                                  >> 0xdU))));
    bufp->fullBit(oldp+46,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__b 
                                  >> 0xeU))));
    bufp->fullBit(oldp+47,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__b 
                                  >> 0xfU))));
    bufp->fullBit(oldp+48,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__b 
                                  >> 0x10U))));
    bufp->fullBit(oldp+49,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__b 
                                  >> 0x11U))));
    bufp->fullBit(oldp+50,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__b 
                                  >> 2U))));
    bufp->fullBit(oldp+51,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__b 
                                  >> 3U))));
    bufp->fullBit(oldp+52,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__b 
                                  >> 4U))));
    bufp->fullBit(oldp+53,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__b 
                                  >> 5U))));
    bufp->fullBit(oldp+54,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__b 
                                  >> 6U))));
    bufp->fullBit(oldp+55,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__b 
                                  >> 7U))));
    bufp->fullBit(oldp+56,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__b 
                                  >> 8U))));
    bufp->fullBit(oldp+57,((1U & (vlSelf->co_sim_DSP_MULTACC_TEST__DOT__b 
                                  >> 9U))));
    bufp->fullBit(oldp+58,((1U & (IData)(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__feedback))));
    bufp->fullBit(oldp+59,((1U & ((IData)(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__feedback) 
                                  >> 1U))));
    bufp->fullBit(oldp+60,((1U & ((IData)(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__feedback) 
                                  >> 2U))));
    bufp->fullBit(oldp+61,((1U & (IData)(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__shift_right))));
    bufp->fullBit(oldp+62,((1U & ((IData)(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__shift_right) 
                                  >> 1U))));
    bufp->fullBit(oldp+63,((1U & ((IData)(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__shift_right) 
                                  >> 2U))));
    bufp->fullBit(oldp+64,((1U & ((IData)(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__shift_right) 
                                  >> 3U))));
    bufp->fullBit(oldp+65,((1U & ((IData)(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__shift_right) 
                                  >> 4U))));
    bufp->fullBit(oldp+66,((1U & ((IData)(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__shift_right) 
                                  >> 5U))));
    bufp->fullBit(oldp+67,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__subtract_int));
    bufp->fullCData(oldp+68,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__acc_fir_int),6);
    bufp->fullCData(oldp+69,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__feedback_int),3);
    bufp->fullBit(oldp+70,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__load_acc_int));
    bufp->fullIData(oldp+71,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__a_int),20);
    bufp->fullIData(oldp+72,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__b_int),18);
    bufp->fullBit(oldp+73,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__unsigned_a_int));
    bufp->fullBit(oldp+74,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__unsigned_b_int));
    bufp->fullIData(oldp+75,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__mult_b),18);
    bufp->fullBit(oldp+76,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__subtract_int));
    bufp->fullCData(oldp+77,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__acc_fir_int),6);
    bufp->fullCData(oldp+78,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__feedback_int),3);
    bufp->fullCData(oldp+79,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__shift_right_int),6);
    bufp->fullBit(oldp+80,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__round_int));
    bufp->fullBit(oldp+81,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__saturate_int));
    bufp->fullBit(oldp+82,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__load_acc_int));
    bufp->fullIData(oldp+83,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__a_int),20);
    bufp->fullIData(oldp+84,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__b_int),18);
    bufp->fullBit(oldp+85,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__unsigned_a_int));
    bufp->fullBit(oldp+86,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__unsigned_b_int));
    bufp->fullIData(oldp+87,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__mult_b),18);
    bufp->fullBit(oldp+88,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__subtract_int));
    bufp->fullCData(oldp+89,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__acc_fir_int),6);
    bufp->fullCData(oldp+90,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__feedback_int),3);
    bufp->fullBit(oldp+91,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__load_acc_int));
    bufp->fullIData(oldp+92,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__a_int),20);
    bufp->fullIData(oldp+93,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__b_int),18);
    bufp->fullBit(oldp+94,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__unsigned_a_int));
    bufp->fullBit(oldp+95,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__unsigned_b_int));
    bufp->fullIData(oldp+96,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__mult_b),18);
    bufp->fullBit(oldp+97,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__subtract_int));
    bufp->fullCData(oldp+98,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__acc_fir_int),6);
    bufp->fullCData(oldp+99,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__feedback_int),3);
    bufp->fullCData(oldp+100,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__shift_right_int),6);
    bufp->fullBit(oldp+101,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__round_int));
    bufp->fullBit(oldp+102,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__saturate_int));
    bufp->fullBit(oldp+103,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__load_acc_int));
    bufp->fullIData(oldp+104,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__a_int),20);
    bufp->fullIData(oldp+105,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__b_int),18);
    bufp->fullBit(oldp+106,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__unsigned_a_int));
    bufp->fullBit(oldp+107,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__unsigned_b_int));
    bufp->fullIData(oldp+108,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__mult_b),18);
    bufp->fullQData(oldp+109,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__z_out),38);
    bufp->fullQData(oldp+111,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__z_out),38);
    bufp->fullQData(oldp+113,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__z_out),38);
    bufp->fullQData(oldp+115,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__z_out),38);
    bufp->fullQData(oldp+117,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__add_sub_in),64);
    bufp->fullQData(oldp+119,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__mult_out),64);
    bufp->fullQData(oldp+121,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__add_sub_out),64);
    bufp->fullQData(oldp+123,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__pre_shift),64);
    bufp->fullQData(oldp+125,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__shift_right),64);
    bufp->fullQData(oldp+127,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__round),64);
    bufp->fullQData(oldp+129,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__saturate),38);
    bufp->fullIData(oldp+131,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__mult_a),20);
    bufp->fullQData(oldp+132,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__add_sub_in),64);
    bufp->fullQData(oldp+134,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__mult_out),64);
    bufp->fullQData(oldp+136,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__add_sub_out),64);
    bufp->fullQData(oldp+138,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__pre_shift),64);
    bufp->fullQData(oldp+140,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__shift_right),64);
    bufp->fullQData(oldp+142,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__round),64);
    bufp->fullQData(oldp+144,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__saturate),38);
    bufp->fullIData(oldp+146,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__mult_a),20);
    bufp->fullBit(oldp+147,((1U & (IData)(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__z_out))));
    bufp->fullBit(oldp+148,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__z_out 
                                           >> 1U)))));
    bufp->fullBit(oldp+149,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__z_out 
                                           >> 0xaU)))));
    bufp->fullBit(oldp+150,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__z_out 
                                           >> 0xbU)))));
    bufp->fullBit(oldp+151,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__z_out 
                                           >> 0xcU)))));
    bufp->fullBit(oldp+152,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__z_out 
                                           >> 0xdU)))));
    bufp->fullBit(oldp+153,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__z_out 
                                           >> 0xeU)))));
    bufp->fullBit(oldp+154,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__z_out 
                                           >> 0xfU)))));
    bufp->fullBit(oldp+155,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__z_out 
                                           >> 0x10U)))));
    bufp->fullBit(oldp+156,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__z_out 
                                           >> 0x11U)))));
    bufp->fullBit(oldp+157,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__z_out 
                                           >> 0x12U)))));
    bufp->fullBit(oldp+158,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__z_out 
                                           >> 0x13U)))));
    bufp->fullBit(oldp+159,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__z_out 
                                           >> 2U)))));
    bufp->fullBit(oldp+160,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__z_out 
                                           >> 0x14U)))));
    bufp->fullBit(oldp+161,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__z_out 
                                           >> 0x15U)))));
    bufp->fullBit(oldp+162,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__z_out 
                                           >> 0x16U)))));
    bufp->fullBit(oldp+163,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__z_out 
                                           >> 0x17U)))));
    bufp->fullBit(oldp+164,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__z_out 
                                           >> 0x18U)))));
    bufp->fullBit(oldp+165,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__z_out 
                                           >> 0x19U)))));
    bufp->fullBit(oldp+166,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__z_out 
                                           >> 0x1aU)))));
    bufp->fullBit(oldp+167,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__z_out 
                                           >> 0x1bU)))));
    bufp->fullBit(oldp+168,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__z_out 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+169,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__z_out 
                                           >> 0x1dU)))));
    bufp->fullBit(oldp+170,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__z_out 
                                           >> 3U)))));
    bufp->fullBit(oldp+171,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__z_out 
                                           >> 0x1eU)))));
    bufp->fullBit(oldp+172,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__z_out 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+173,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__z_out 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+174,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__z_out 
                                           >> 0x21U)))));
    bufp->fullBit(oldp+175,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__z_out 
                                           >> 0x22U)))));
    bufp->fullBit(oldp+176,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__z_out 
                                           >> 0x23U)))));
    bufp->fullBit(oldp+177,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__z_out 
                                           >> 0x24U)))));
    bufp->fullBit(oldp+178,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__z_out 
                                           >> 0x25U)))));
    bufp->fullBit(oldp+179,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__z_out 
                                           >> 4U)))));
    bufp->fullBit(oldp+180,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__z_out 
                                           >> 5U)))));
    bufp->fullBit(oldp+181,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__z_out 
                                           >> 6U)))));
    bufp->fullBit(oldp+182,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__z_out 
                                           >> 7U)))));
    bufp->fullBit(oldp+183,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__z_out 
                                           >> 8U)))));
    bufp->fullBit(oldp+184,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__z_out 
                                           >> 9U)))));
    bufp->fullBit(oldp+185,((1U & (IData)(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__z_out))));
    bufp->fullBit(oldp+186,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__z_out 
                                           >> 1U)))));
    bufp->fullBit(oldp+187,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__z_out 
                                           >> 0xaU)))));
    bufp->fullBit(oldp+188,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__z_out 
                                           >> 0xbU)))));
    bufp->fullBit(oldp+189,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__z_out 
                                           >> 0xcU)))));
    bufp->fullBit(oldp+190,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__z_out 
                                           >> 0xdU)))));
    bufp->fullBit(oldp+191,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__z_out 
                                           >> 0xeU)))));
    bufp->fullBit(oldp+192,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__z_out 
                                           >> 0xfU)))));
    bufp->fullBit(oldp+193,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__z_out 
                                           >> 0x10U)))));
    bufp->fullBit(oldp+194,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__z_out 
                                           >> 0x11U)))));
    bufp->fullBit(oldp+195,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__z_out 
                                           >> 0x12U)))));
    bufp->fullBit(oldp+196,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__z_out 
                                           >> 0x13U)))));
    bufp->fullBit(oldp+197,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__z_out 
                                           >> 2U)))));
    bufp->fullBit(oldp+198,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__z_out 
                                           >> 0x14U)))));
    bufp->fullBit(oldp+199,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__z_out 
                                           >> 0x15U)))));
    bufp->fullBit(oldp+200,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__z_out 
                                           >> 0x16U)))));
    bufp->fullBit(oldp+201,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__z_out 
                                           >> 0x17U)))));
    bufp->fullBit(oldp+202,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__z_out 
                                           >> 0x18U)))));
    bufp->fullBit(oldp+203,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__z_out 
                                           >> 0x19U)))));
    bufp->fullBit(oldp+204,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__z_out 
                                           >> 0x1aU)))));
    bufp->fullBit(oldp+205,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__z_out 
                                           >> 0x1bU)))));
    bufp->fullBit(oldp+206,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__z_out 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+207,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__z_out 
                                           >> 0x1dU)))));
    bufp->fullBit(oldp+208,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__z_out 
                                           >> 3U)))));
    bufp->fullBit(oldp+209,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__z_out 
                                           >> 0x1eU)))));
    bufp->fullBit(oldp+210,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__z_out 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+211,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__z_out 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+212,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__z_out 
                                           >> 0x21U)))));
    bufp->fullBit(oldp+213,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__z_out 
                                           >> 0x22U)))));
    bufp->fullBit(oldp+214,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__z_out 
                                           >> 0x23U)))));
    bufp->fullBit(oldp+215,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__z_out 
                                           >> 0x24U)))));
    bufp->fullBit(oldp+216,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__z_out 
                                           >> 0x25U)))));
    bufp->fullBit(oldp+217,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__z_out 
                                           >> 4U)))));
    bufp->fullBit(oldp+218,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__z_out 
                                           >> 5U)))));
    bufp->fullBit(oldp+219,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__z_out 
                                           >> 6U)))));
    bufp->fullBit(oldp+220,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__z_out 
                                           >> 7U)))));
    bufp->fullBit(oldp+221,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__z_out 
                                           >> 8U)))));
    bufp->fullBit(oldp+222,((1U & (IData)((vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__z_out 
                                           >> 9U)))));
    bufp->fullQData(oldp+223,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__add_sub_in),64);
    bufp->fullQData(oldp+225,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__mult_out),64);
    bufp->fullQData(oldp+227,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__add_sub_out),64);
    bufp->fullQData(oldp+229,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__pre_shift),64);
    bufp->fullQData(oldp+231,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__shift_right),64);
    bufp->fullQData(oldp+233,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__round),64);
    bufp->fullQData(oldp+235,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__saturate),38);
    bufp->fullIData(oldp+237,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__mult_a),20);
    bufp->fullQData(oldp+238,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__add_sub_in),64);
    bufp->fullQData(oldp+240,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__mult_out),64);
    bufp->fullQData(oldp+242,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__add_sub_out),64);
    bufp->fullQData(oldp+244,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__pre_shift),64);
    bufp->fullQData(oldp+246,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__shift_right),64);
    bufp->fullQData(oldp+248,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__round),64);
    bufp->fullQData(oldp+250,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__saturate),38);
    bufp->fullIData(oldp+252,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__mult_a),20);
    bufp->fullIData(oldp+253,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__DLY_B),18);
    bufp->fullBit(oldp+254,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__subtract_reg));
    bufp->fullCData(oldp+255,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__acc_fir_reg),6);
    bufp->fullCData(oldp+256,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__feedback_reg),3);
    bufp->fullCData(oldp+257,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__shift_right_reg1),6);
    bufp->fullCData(oldp+258,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__shift_right_reg2),6);
    bufp->fullBit(oldp+259,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__round_reg1));
    bufp->fullBit(oldp+260,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__round_reg2));
    bufp->fullBit(oldp+261,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__saturate_reg1));
    bufp->fullBit(oldp+262,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__saturate_reg2));
    bufp->fullBit(oldp+263,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__load_acc_reg));
    bufp->fullIData(oldp+264,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__a_reg),20);
    bufp->fullIData(oldp+265,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__b_reg),18);
    bufp->fullBit(oldp+266,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__unsigned_a_reg));
    bufp->fullBit(oldp+267,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__unsigned_b_reg));
    bufp->fullCData(oldp+268,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__shift_right_int),6);
    bufp->fullBit(oldp+269,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__round_int));
    bufp->fullBit(oldp+270,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__saturate_int));
    bufp->fullQData(oldp+271,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__accumulator),64);
    bufp->fullQData(oldp+273,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multacc__DOT__z_out_reg),38);
    bufp->fullIData(oldp+275,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__DLY_B),18);
    bufp->fullBit(oldp+276,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__subtract_reg));
    bufp->fullCData(oldp+277,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__acc_fir_reg),6);
    bufp->fullCData(oldp+278,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__feedback_reg),3);
    bufp->fullCData(oldp+279,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__shift_right_reg1),6);
    bufp->fullCData(oldp+280,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__shift_right_reg2),6);
    bufp->fullBit(oldp+281,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__round_reg1));
    bufp->fullBit(oldp+282,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__round_reg2));
    bufp->fullBit(oldp+283,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__saturate_reg1));
    bufp->fullBit(oldp+284,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__saturate_reg2));
    bufp->fullBit(oldp+285,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__load_acc_reg));
    bufp->fullIData(oldp+286,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__a_reg),20);
    bufp->fullIData(oldp+287,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__b_reg),18);
    bufp->fullBit(oldp+288,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__unsigned_a_reg));
    bufp->fullBit(oldp+289,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__unsigned_b_reg));
    bufp->fullQData(oldp+290,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__accumulator),64);
    bufp->fullQData(oldp+292,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__golden__DOT__dut_multadd__DOT__z_out_reg),38);
    bufp->fullIData(oldp+294,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__DLY_B),18);
    bufp->fullBit(oldp+295,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__subtract_reg));
    bufp->fullCData(oldp+296,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__acc_fir_reg),6);
    bufp->fullCData(oldp+297,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__feedback_reg),3);
    bufp->fullCData(oldp+298,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__shift_right_reg1),6);
    bufp->fullCData(oldp+299,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__shift_right_reg2),6);
    bufp->fullBit(oldp+300,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__round_reg1));
    bufp->fullBit(oldp+301,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__round_reg2));
    bufp->fullBit(oldp+302,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__saturate_reg1));
    bufp->fullBit(oldp+303,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__saturate_reg2));
    bufp->fullBit(oldp+304,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__load_acc_reg));
    bufp->fullIData(oldp+305,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__a_reg),20);
    bufp->fullIData(oldp+306,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__b_reg),18);
    bufp->fullBit(oldp+307,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__unsigned_a_reg));
    bufp->fullBit(oldp+308,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__unsigned_b_reg));
    bufp->fullCData(oldp+309,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__shift_right_int),6);
    bufp->fullBit(oldp+310,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__round_int));
    bufp->fullBit(oldp+311,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__saturate_int));
    bufp->fullQData(oldp+312,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__accumulator),64);
    bufp->fullQData(oldp+314,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multacc__DOT__z_out_reg),38);
    bufp->fullIData(oldp+316,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__DLY_B),18);
    bufp->fullBit(oldp+317,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__subtract_reg));
    bufp->fullCData(oldp+318,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__acc_fir_reg),6);
    bufp->fullCData(oldp+319,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__feedback_reg),3);
    bufp->fullCData(oldp+320,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__shift_right_reg1),6);
    bufp->fullCData(oldp+321,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__shift_right_reg2),6);
    bufp->fullBit(oldp+322,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__round_reg1));
    bufp->fullBit(oldp+323,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__round_reg2));
    bufp->fullBit(oldp+324,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__saturate_reg1));
    bufp->fullBit(oldp+325,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__saturate_reg2));
    bufp->fullBit(oldp+326,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__load_acc_reg));
    bufp->fullIData(oldp+327,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__a_reg),20);
    bufp->fullIData(oldp+328,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__b_reg),18);
    bufp->fullBit(oldp+329,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__unsigned_a_reg));
    bufp->fullBit(oldp+330,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__unsigned_b_reg));
    bufp->fullQData(oldp+331,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__accumulator),64);
    bufp->fullQData(oldp+333,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__synth_net__DOT__dut_multadd__DOT__z_out_reg),38);
    bufp->fullBit(oldp+335,(vlSelf->co_sim_DSP_MULTACC_TEST__DOT__clk));
}
