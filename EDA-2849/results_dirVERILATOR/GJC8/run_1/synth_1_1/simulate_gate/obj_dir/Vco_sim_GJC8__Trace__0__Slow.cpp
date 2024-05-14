// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vco_sim_GJC8__Syms.h"


VL_ATTR_COLD void Vco_sim_GJC8___024root__trace_init_sub__TOP__0(Vco_sim_GJC8___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC8___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("co_sim_GJC8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+13,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+14,0,"feedback",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+15,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declQuad(c+73,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+90,0,"z_netlist",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBit(c+16,0,"unsigned_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"unsigned_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"mismatch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("golden", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+13,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+15,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declQuad(c+73,0,"z",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBus(c+14,0,"feedback",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+16,0,"unsigned_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"unsigned_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+183,0,"DSP_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+185,0,"COEFF_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+185,0,"COEFF_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+185,0,"COEFF_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+185,0,"COEFF_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declQuad(c+186,0,"OUTPUT_REG_EN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+186,0,"INPUT_REG_EN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBus(c+13,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+15,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+188,0,"ACC_FIR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declQuad(c+73,0,"Z",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBus(c+145,0,"DLY_B",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+189,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"RESET",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"FEEDBACK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+191,0,"LOAD_ACC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"SATURATE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+193,0,"SHIFT_RIGHT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+194,0,"ROUND",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"SUBTRACT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"UNSIGNED_A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"UNSIGNED_B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"subtract_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+147,0,"acc_fir_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+148,0,"feedback_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+149,0,"shift_right_reg1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+150,0,"shift_right_reg2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+151,0,"round_reg1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"round_reg2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"saturate_reg1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"saturate_reg2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"load_acc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+156,0,"a_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+157,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+158,0,"unsigned_a_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"unsigned_b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"subtract_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"acc_fir_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+61,0,"feedback_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+3,0,"shift_right_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+4,0,"round_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"saturate_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"load_acc_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"a_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+63,0,"b_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+64,0,"unsigned_a_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"unsigned_b_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+160,0,"accumulator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+75,0,"add_sub_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+77,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+79,0,"add_sub_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+81,0,"pre_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+83,0,"shift_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+85,0,"round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+87,0,"saturate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+73,0,"z_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+162,0,"z_out_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBus(c+89,0,"mult_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+66,0,"mult_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("synth_net", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+13,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+15,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+14,0,"feedback",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+16,0,"unsigned_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"unsigned_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+90,0,"z",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBus(c+13,0,"$iopadmap$a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+15,0,"$iopadmap$b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+14,0,"$iopadmap$feedback",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+16,0,"$iopadmap$unsigned_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"$iopadmap$unsigned_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+90,0,"$iopadmap$z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->pushPrefix("$iopadmap$GJC8.a", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+19,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.a_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+20,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.a_10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+21,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.a_11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+22,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.a_12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+23,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.a_13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.a_14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+25,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.a_15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+26,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.a_16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+27,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.a_17", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+28,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.a_18", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+29,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.a_19", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+30,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.a_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+31,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.a_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+32,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.a_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+33,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.a_5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+34,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.a_6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+35,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.a_7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+36,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.a_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+37,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.a_9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+38,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.b", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+39,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.b_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+40,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.b_10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+41,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.b_11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+42,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.b_12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+43,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.b_13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+44,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.b_14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+45,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.b_15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+46,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.b_16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+47,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.b_17", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+48,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.b_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+49,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.b_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+50,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.b_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+51,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.b_5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+52,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.b_6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+53,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.b_7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+54,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.b_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+55,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.b_9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+56,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.feedback", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+57,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.feedback_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+58,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.feedback_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+59,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.unsigned_a", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+16,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.unsigned_b", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+196,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.z", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+92,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.z_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+93,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.z_10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+94,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.z_11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+95,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.z_12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+96,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.z_13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+97,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.z_14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+98,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.z_15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+99,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.z_16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+100,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.z_17", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+101,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.z_18", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+102,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.z_19", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+103,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.z_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+104,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.z_20", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+105,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.z_21", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+106,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.z_22", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+107,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.z_23", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+108,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.z_24", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+109,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.z_25", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+110,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.z_26", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+111,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.z_27", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+112,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.z_28", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+113,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.z_29", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+114,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.z_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+115,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.z_30", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+116,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.z_31", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+117,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.z_32", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+118,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.z_33", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+119,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.z_34", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+120,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.z_35", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+121,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.z_36", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+122,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.z_37", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+123,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.z_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+124,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.z_5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+125,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.z_6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+126,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.z_7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+127,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.z_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+128,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$GJC8.z_9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+129,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+183,0,"DSP_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+185,0,"COEFF_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+185,0,"COEFF_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+185,0,"COEFF_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+185,0,"COEFF_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declQuad(c+186,0,"OUTPUT_REG_EN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+186,0,"INPUT_REG_EN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBus(c+13,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+15,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+198,0,"ACC_FIR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declQuad(c+90,0,"Z",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBus(c+164,0,"DLY_B",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+199,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"RESET",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"FEEDBACK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+201,0,"LOAD_ACC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"SATURATE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+203,0,"SHIFT_RIGHT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+204,0,"ROUND",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"SUBTRACT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"UNSIGNED_A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"UNSIGNED_B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"subtract_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+166,0,"acc_fir_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+167,0,"feedback_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+168,0,"shift_right_reg1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+169,0,"shift_right_reg2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+170,0,"round_reg1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"round_reg2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"saturate_reg1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"saturate_reg2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"load_acc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+175,0,"a_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+176,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+177,0,"unsigned_a_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"unsigned_b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"subtract_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"acc_fir_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+67,0,"feedback_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+9,0,"shift_right_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+10,0,"round_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"saturate_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"load_acc_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+68,0,"a_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+69,0,"b_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+70,0,"unsigned_a_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"unsigned_b_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+179,0,"accumulator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+130,0,"add_sub_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+132,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+134,0,"add_sub_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+136,0,"pre_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+138,0,"shift_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+140,0,"round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+142,0,"saturate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+90,0,"z_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+181,0,"z_out_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBus(c+144,0,"mult_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+72,0,"mult_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+60,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vco_sim_GJC8___024root__trace_init_top(Vco_sim_GJC8___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC8___024root__trace_init_top\n"); );
    // Body
    Vco_sim_GJC8___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vco_sim_GJC8___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vco_sim_GJC8___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vco_sim_GJC8___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vco_sim_GJC8___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vco_sim_GJC8___024root__trace_register(Vco_sim_GJC8___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC8___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vco_sim_GJC8___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vco_sim_GJC8___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vco_sim_GJC8___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vco_sim_GJC8___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vco_sim_GJC8___024root__trace_const_0_sub_0(Vco_sim_GJC8___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vco_sim_GJC8___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC8___024root__trace_const_0\n"); );
    // Init
    Vco_sim_GJC8___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vco_sim_GJC8___024root*>(voidSelf);
    Vco_sim_GJC8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vco_sim_GJC8___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vco_sim_GJC8___024root__trace_const_0_sub_0(Vco_sim_GJC8___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC8___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullQData(oldp+183,(0x4d554c5449504c59ULL),64);
    bufp->fullIData(oldp+185,(0U),20);
    bufp->fullQData(oldp+186,(0x46414c5345ULL),40);
    bufp->fullCData(oldp+188,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__ACC_FIR),6);
    bufp->fullBit(oldp+189,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__CLK));
    bufp->fullBit(oldp+190,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__RESET));
    bufp->fullBit(oldp+191,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__LOAD_ACC));
    bufp->fullBit(oldp+192,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__SATURATE));
    bufp->fullCData(oldp+193,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__SHIFT_RIGHT),6);
    bufp->fullBit(oldp+194,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__ROUND));
    bufp->fullBit(oldp+195,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__SUBTRACT));
    bufp->fullIData(oldp+196,(0x4e4f4e45U),32);
    bufp->fullBit(oldp+197,(1U));
    bufp->fullCData(oldp+198,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__ACC_FIR),6);
    bufp->fullBit(oldp+199,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__CLK));
    bufp->fullBit(oldp+200,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__RESET));
    bufp->fullBit(oldp+201,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__LOAD_ACC));
    bufp->fullBit(oldp+202,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__SATURATE));
    bufp->fullCData(oldp+203,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__SHIFT_RIGHT),6);
    bufp->fullBit(oldp+204,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__ROUND));
    bufp->fullBit(oldp+205,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__SUBTRACT));
}

VL_ATTR_COLD void Vco_sim_GJC8___024root__trace_full_0_sub_0(Vco_sim_GJC8___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vco_sim_GJC8___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC8___024root__trace_full_0\n"); );
    // Init
    Vco_sim_GJC8___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vco_sim_GJC8___024root*>(voidSelf);
    Vco_sim_GJC8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vco_sim_GJC8___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vco_sim_GJC8___024root__trace_full_0_sub_0(Vco_sim_GJC8___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC8___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__subtract_int));
    bufp->fullCData(oldp+2,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__acc_fir_int),6);
    bufp->fullCData(oldp+3,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__shift_right_int),6);
    bufp->fullBit(oldp+4,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__round_int));
    bufp->fullBit(oldp+5,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__saturate_int));
    bufp->fullBit(oldp+6,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__load_acc_int));
    bufp->fullBit(oldp+7,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__subtract_int));
    bufp->fullCData(oldp+8,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__acc_fir_int),6);
    bufp->fullCData(oldp+9,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__shift_right_int),6);
    bufp->fullBit(oldp+10,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__round_int));
    bufp->fullBit(oldp+11,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__saturate_int));
    bufp->fullBit(oldp+12,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__load_acc_int));
    bufp->fullIData(oldp+13,(vlSelf->co_sim_GJC8__DOT__a),20);
    bufp->fullCData(oldp+14,(vlSelf->co_sim_GJC8__DOT__feedback),3);
    bufp->fullIData(oldp+15,(vlSelf->co_sim_GJC8__DOT__b),18);
    bufp->fullBit(oldp+16,(vlSelf->co_sim_GJC8__DOT__unsigned_a));
    bufp->fullBit(oldp+17,(vlSelf->co_sim_GJC8__DOT__unsigned_b));
    bufp->fullIData(oldp+18,(vlSelf->co_sim_GJC8__DOT__mismatch),32);
    bufp->fullBit(oldp+19,((1U & vlSelf->co_sim_GJC8__DOT__a)));
    bufp->fullBit(oldp+20,((1U & (vlSelf->co_sim_GJC8__DOT__a 
                                  >> 1U))));
    bufp->fullBit(oldp+21,((1U & (vlSelf->co_sim_GJC8__DOT__a 
                                  >> 0xaU))));
    bufp->fullBit(oldp+22,((1U & (vlSelf->co_sim_GJC8__DOT__a 
                                  >> 0xbU))));
    bufp->fullBit(oldp+23,((1U & (vlSelf->co_sim_GJC8__DOT__a 
                                  >> 0xcU))));
    bufp->fullBit(oldp+24,((1U & (vlSelf->co_sim_GJC8__DOT__a 
                                  >> 0xdU))));
    bufp->fullBit(oldp+25,((1U & (vlSelf->co_sim_GJC8__DOT__a 
                                  >> 0xeU))));
    bufp->fullBit(oldp+26,((1U & (vlSelf->co_sim_GJC8__DOT__a 
                                  >> 0xfU))));
    bufp->fullBit(oldp+27,((1U & (vlSelf->co_sim_GJC8__DOT__a 
                                  >> 0x10U))));
    bufp->fullBit(oldp+28,((1U & (vlSelf->co_sim_GJC8__DOT__a 
                                  >> 0x11U))));
    bufp->fullBit(oldp+29,((1U & (vlSelf->co_sim_GJC8__DOT__a 
                                  >> 0x12U))));
    bufp->fullBit(oldp+30,((1U & (vlSelf->co_sim_GJC8__DOT__a 
                                  >> 0x13U))));
    bufp->fullBit(oldp+31,((1U & (vlSelf->co_sim_GJC8__DOT__a 
                                  >> 2U))));
    bufp->fullBit(oldp+32,((1U & (vlSelf->co_sim_GJC8__DOT__a 
                                  >> 3U))));
    bufp->fullBit(oldp+33,((1U & (vlSelf->co_sim_GJC8__DOT__a 
                                  >> 4U))));
    bufp->fullBit(oldp+34,((1U & (vlSelf->co_sim_GJC8__DOT__a 
                                  >> 5U))));
    bufp->fullBit(oldp+35,((1U & (vlSelf->co_sim_GJC8__DOT__a 
                                  >> 6U))));
    bufp->fullBit(oldp+36,((1U & (vlSelf->co_sim_GJC8__DOT__a 
                                  >> 7U))));
    bufp->fullBit(oldp+37,((1U & (vlSelf->co_sim_GJC8__DOT__a 
                                  >> 8U))));
    bufp->fullBit(oldp+38,((1U & (vlSelf->co_sim_GJC8__DOT__a 
                                  >> 9U))));
    bufp->fullBit(oldp+39,((1U & vlSelf->co_sim_GJC8__DOT__b)));
    bufp->fullBit(oldp+40,((1U & (vlSelf->co_sim_GJC8__DOT__b 
                                  >> 1U))));
    bufp->fullBit(oldp+41,((1U & (vlSelf->co_sim_GJC8__DOT__b 
                                  >> 0xaU))));
    bufp->fullBit(oldp+42,((1U & (vlSelf->co_sim_GJC8__DOT__b 
                                  >> 0xbU))));
    bufp->fullBit(oldp+43,((1U & (vlSelf->co_sim_GJC8__DOT__b 
                                  >> 0xcU))));
    bufp->fullBit(oldp+44,((1U & (vlSelf->co_sim_GJC8__DOT__b 
                                  >> 0xdU))));
    bufp->fullBit(oldp+45,((1U & (vlSelf->co_sim_GJC8__DOT__b 
                                  >> 0xeU))));
    bufp->fullBit(oldp+46,((1U & (vlSelf->co_sim_GJC8__DOT__b 
                                  >> 0xfU))));
    bufp->fullBit(oldp+47,((1U & (vlSelf->co_sim_GJC8__DOT__b 
                                  >> 0x10U))));
    bufp->fullBit(oldp+48,((1U & (vlSelf->co_sim_GJC8__DOT__b 
                                  >> 0x11U))));
    bufp->fullBit(oldp+49,((1U & (vlSelf->co_sim_GJC8__DOT__b 
                                  >> 2U))));
    bufp->fullBit(oldp+50,((1U & (vlSelf->co_sim_GJC8__DOT__b 
                                  >> 3U))));
    bufp->fullBit(oldp+51,((1U & (vlSelf->co_sim_GJC8__DOT__b 
                                  >> 4U))));
    bufp->fullBit(oldp+52,((1U & (vlSelf->co_sim_GJC8__DOT__b 
                                  >> 5U))));
    bufp->fullBit(oldp+53,((1U & (vlSelf->co_sim_GJC8__DOT__b 
                                  >> 6U))));
    bufp->fullBit(oldp+54,((1U & (vlSelf->co_sim_GJC8__DOT__b 
                                  >> 7U))));
    bufp->fullBit(oldp+55,((1U & (vlSelf->co_sim_GJC8__DOT__b 
                                  >> 8U))));
    bufp->fullBit(oldp+56,((1U & (vlSelf->co_sim_GJC8__DOT__b 
                                  >> 9U))));
    bufp->fullBit(oldp+57,((1U & (IData)(vlSelf->co_sim_GJC8__DOT__feedback))));
    bufp->fullBit(oldp+58,((1U & ((IData)(vlSelf->co_sim_GJC8__DOT__feedback) 
                                  >> 1U))));
    bufp->fullBit(oldp+59,((1U & ((IData)(vlSelf->co_sim_GJC8__DOT__feedback) 
                                  >> 2U))));
    bufp->fullIData(oldp+60,(vlSelf->co_sim_GJC8__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+61,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__feedback_int),3);
    bufp->fullIData(oldp+62,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__a_int),20);
    bufp->fullIData(oldp+63,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__b_int),18);
    bufp->fullBit(oldp+64,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__unsigned_a_int));
    bufp->fullBit(oldp+65,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__unsigned_b_int));
    bufp->fullIData(oldp+66,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__mult_b),18);
    bufp->fullCData(oldp+67,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__feedback_int),3);
    bufp->fullIData(oldp+68,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_int),20);
    bufp->fullIData(oldp+69,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__b_int),18);
    bufp->fullBit(oldp+70,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__unsigned_a_int));
    bufp->fullBit(oldp+71,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__unsigned_b_int));
    bufp->fullIData(oldp+72,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__mult_b),18);
    bufp->fullQData(oldp+73,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__z_out),38);
    bufp->fullQData(oldp+75,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__add_sub_in),64);
    bufp->fullQData(oldp+77,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__mult_out),64);
    bufp->fullQData(oldp+79,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__add_sub_out),64);
    bufp->fullQData(oldp+81,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__pre_shift),64);
    bufp->fullQData(oldp+83,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__shift_right),64);
    bufp->fullQData(oldp+85,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__round),64);
    bufp->fullQData(oldp+87,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__saturate),38);
    bufp->fullIData(oldp+89,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__mult_a),20);
    bufp->fullQData(oldp+90,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out),38);
    bufp->fullBit(oldp+92,((1U & (IData)(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out))));
    bufp->fullBit(oldp+93,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out 
                                          >> 1U)))));
    bufp->fullBit(oldp+94,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+95,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+96,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+97,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out 
                                          >> 0xdU)))));
    bufp->fullBit(oldp+98,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out 
                                          >> 0xeU)))));
    bufp->fullBit(oldp+99,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out 
                                          >> 0xfU)))));
    bufp->fullBit(oldp+100,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out 
                                           >> 0x10U)))));
    bufp->fullBit(oldp+101,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out 
                                           >> 0x11U)))));
    bufp->fullBit(oldp+102,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out 
                                           >> 0x12U)))));
    bufp->fullBit(oldp+103,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out 
                                           >> 0x13U)))));
    bufp->fullBit(oldp+104,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out 
                                           >> 2U)))));
    bufp->fullBit(oldp+105,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out 
                                           >> 0x14U)))));
    bufp->fullBit(oldp+106,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out 
                                           >> 0x15U)))));
    bufp->fullBit(oldp+107,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out 
                                           >> 0x16U)))));
    bufp->fullBit(oldp+108,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out 
                                           >> 0x17U)))));
    bufp->fullBit(oldp+109,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out 
                                           >> 0x18U)))));
    bufp->fullBit(oldp+110,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out 
                                           >> 0x19U)))));
    bufp->fullBit(oldp+111,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out 
                                           >> 0x1aU)))));
    bufp->fullBit(oldp+112,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out 
                                           >> 0x1bU)))));
    bufp->fullBit(oldp+113,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+114,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out 
                                           >> 0x1dU)))));
    bufp->fullBit(oldp+115,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out 
                                           >> 3U)))));
    bufp->fullBit(oldp+116,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out 
                                           >> 0x1eU)))));
    bufp->fullBit(oldp+117,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+118,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+119,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out 
                                           >> 0x21U)))));
    bufp->fullBit(oldp+120,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out 
                                           >> 0x22U)))));
    bufp->fullBit(oldp+121,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out 
                                           >> 0x23U)))));
    bufp->fullBit(oldp+122,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out 
                                           >> 0x24U)))));
    bufp->fullBit(oldp+123,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out 
                                           >> 0x25U)))));
    bufp->fullBit(oldp+124,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out 
                                           >> 4U)))));
    bufp->fullBit(oldp+125,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out 
                                           >> 5U)))));
    bufp->fullBit(oldp+126,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out 
                                           >> 6U)))));
    bufp->fullBit(oldp+127,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out 
                                           >> 7U)))));
    bufp->fullBit(oldp+128,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out 
                                           >> 8U)))));
    bufp->fullBit(oldp+129,((1U & (IData)((vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out 
                                           >> 9U)))));
    bufp->fullQData(oldp+130,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__add_sub_in),64);
    bufp->fullQData(oldp+132,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__mult_out),64);
    bufp->fullQData(oldp+134,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__add_sub_out),64);
    bufp->fullQData(oldp+136,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__pre_shift),64);
    bufp->fullQData(oldp+138,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__shift_right),64);
    bufp->fullQData(oldp+140,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__round),64);
    bufp->fullQData(oldp+142,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__saturate),38);
    bufp->fullIData(oldp+144,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__mult_a),20);
    bufp->fullIData(oldp+145,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__DLY_B),18);
    bufp->fullBit(oldp+146,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__subtract_reg));
    bufp->fullCData(oldp+147,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__acc_fir_reg),6);
    bufp->fullCData(oldp+148,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__feedback_reg),3);
    bufp->fullCData(oldp+149,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__shift_right_reg1),6);
    bufp->fullCData(oldp+150,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__shift_right_reg2),6);
    bufp->fullBit(oldp+151,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__round_reg1));
    bufp->fullBit(oldp+152,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__round_reg2));
    bufp->fullBit(oldp+153,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__saturate_reg1));
    bufp->fullBit(oldp+154,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__saturate_reg2));
    bufp->fullBit(oldp+155,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__load_acc_reg));
    bufp->fullIData(oldp+156,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__a_reg),20);
    bufp->fullIData(oldp+157,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__b_reg),18);
    bufp->fullBit(oldp+158,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__unsigned_a_reg));
    bufp->fullBit(oldp+159,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__unsigned_b_reg));
    bufp->fullQData(oldp+160,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__accumulator),64);
    bufp->fullQData(oldp+162,(vlSelf->co_sim_GJC8__DOT__golden__DOT__dut__DOT__z_out_reg),38);
    bufp->fullIData(oldp+164,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__DLY_B),18);
    bufp->fullBit(oldp+165,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__subtract_reg));
    bufp->fullCData(oldp+166,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__acc_fir_reg),6);
    bufp->fullCData(oldp+167,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__feedback_reg),3);
    bufp->fullCData(oldp+168,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__shift_right_reg1),6);
    bufp->fullCData(oldp+169,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__shift_right_reg2),6);
    bufp->fullBit(oldp+170,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__round_reg1));
    bufp->fullBit(oldp+171,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__round_reg2));
    bufp->fullBit(oldp+172,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__saturate_reg1));
    bufp->fullBit(oldp+173,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__saturate_reg2));
    bufp->fullBit(oldp+174,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__load_acc_reg));
    bufp->fullIData(oldp+175,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__a_reg),20);
    bufp->fullIData(oldp+176,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__b_reg),18);
    bufp->fullBit(oldp+177,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__unsigned_a_reg));
    bufp->fullBit(oldp+178,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__unsigned_b_reg));
    bufp->fullQData(oldp+179,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__accumulator),64);
    bufp->fullQData(oldp+181,(vlSelf->co_sim_GJC8__DOT__synth_net__DOT__dut__DOT__z_out_reg),38);
}
