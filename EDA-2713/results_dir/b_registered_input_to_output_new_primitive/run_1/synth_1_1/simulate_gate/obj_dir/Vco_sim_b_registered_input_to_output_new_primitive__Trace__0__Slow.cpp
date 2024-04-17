// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vco_sim_b_registered_input_to_output_new_primitive__Syms.h"


VL_ATTR_COLD void Vco_sim_b_registered_input_to_output_new_primitive___024root__trace_init_sub__TOP__0(Vco_sim_b_registered_input_to_output_new_primitive___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_b_registered_input_to_output_new_primitive__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_b_registered_input_to_output_new_primitive___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("co_sim_b_registered_input_to_output_new_primitive", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+10,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+11,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+146,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+109,0,"dly_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+150,0,"dly_b_netlist",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declQuad(c+54,0,"z_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+13,0,"expected_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBus(c+15,0,"mismatch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("golden", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+10,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+11,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+146,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+109,0,"dly_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+12,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+54,0,"z_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBit(c+146,0,"$auto$clkbufmap.cc:298:execute$398",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"$iopadmap$a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+11,0,"$iopadmap$b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+146,0,"$iopadmap$clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+109,0,"$iopadmap$dly_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+12,0,"$iopadmap$reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+54,0,"$iopadmap$z_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->pushPrefix("$auto$clkbufmap.cc:265:execute$396", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+146,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.a", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+16,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.a_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.a_10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+18,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.a_11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+19,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.a_12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+20,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.a_13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+21,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.a_14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+22,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.a_15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+23,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.a_16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.a_17", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+25,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.a_18", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+26,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.a_19", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+27,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.a_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+28,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.a_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+29,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.a_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+30,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.a_5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+31,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.a_6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+32,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.a_7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+33,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.a_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+34,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.a_9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+35,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.b", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+36,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.b_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+37,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.b_10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+38,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.b_11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+39,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.b_12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+40,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.b_13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+41,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.b_14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+42,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.b_15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+43,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.b_16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+44,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.b_17", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+45,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.b_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+46,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.b_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+47,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.b_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+48,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.b_5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+49,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.b_6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+50,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.b_7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+51,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.b_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+52,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.b_9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+53,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.clk", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+146,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.dly_b", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+110,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.dly_b_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+111,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.dly_b_10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+112,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.dly_b_11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+113,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.dly_b_12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+114,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.dly_b_13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+115,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.dly_b_14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+116,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.dly_b_15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+117,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.dly_b_16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+118,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.dly_b_17", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+119,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.dly_b_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+120,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.dly_b_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+121,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.dly_b_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+122,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.dly_b_5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+123,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.dly_b_6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+124,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.dly_b_7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+125,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.dly_b_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+126,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.dly_b_9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+127,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.reset", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+12,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.z_out", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+56,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.z_out_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+57,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.z_out_10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+58,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.z_out_11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+59,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.z_out_12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+60,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.z_out_13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+61,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.z_out_14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+62,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.z_out_15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+63,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.z_out_16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+64,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.z_out_17", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+65,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.z_out_18", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+66,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.z_out_19", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+67,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.z_out_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+68,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.z_out_20", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+69,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.z_out_21", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+70,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.z_out_22", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+71,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.z_out_23", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+72,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.z_out_24", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+73,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.z_out_25", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+74,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.z_out_26", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+75,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.z_out_27", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+76,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.z_out_28", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+77,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.z_out_29", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+78,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.z_out_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+79,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.z_out_30", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+80,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.z_out_31", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+81,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.z_out_32", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+82,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.z_out_33", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+83,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.z_out_34", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+84,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.z_out_35", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+85,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.z_out_36", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+86,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.z_out_37", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+87,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.z_out_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+88,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.z_out_5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+89,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.z_out_6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+90,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.z_out_7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+91,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.z_out_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+92,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$b_registered_input_to_output_new_primitive.z_out_9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+93,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("DSP_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+153,0,"DSP_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+155,0,"COEFF_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+155,0,"COEFF_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+155,0,"COEFF_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+155,0,"COEFF_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declQuad(c+156,0,"OUTPUT_REG_EN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+156,0,"INPUT_REG_EN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBus(c+10,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+11,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+158,0,"ACC_FIR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declQuad(c+54,0,"Z",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBus(c+109,0,"DLY_B",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+146,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"RESET",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+159,0,"FEEDBACK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+160,0,"LOAD_ACC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"SATURATE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+158,0,"SHIFT_RIGHT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+160,0,"ROUND",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"SUBTRACT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"UNSIGNED_A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"UNSIGNED_B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"subtract_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+129,0,"acc_fir_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+130,0,"feedback_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+131,0,"shift_right_reg1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+132,0,"shift_right_reg2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+133,0,"round_reg1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"round_reg2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"saturate_reg1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"saturate_reg2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"load_acc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+138,0,"a_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+139,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+140,0,"unsigned_a_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"unsigned_b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"subtract_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"acc_fir_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+3,0,"feedback_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+4,0,"shift_right_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+5,0,"round_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"saturate_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"load_acc_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+147,0,"a_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+148,0,"b_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+8,0,"unsigned_a_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"unsigned_b_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+142,0,"accumulator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+94,0,"add_sub_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+96,0,"mult_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+98,0,"add_sub_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+100,0,"pre_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+102,0,"shift_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+104,0,"round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+106,0,"saturate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+54,0,"z_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+144,0,"z_out_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBus(c+108,0,"mult_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+149,0,"mult_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vco_sim_b_registered_input_to_output_new_primitive___024root__trace_init_top(Vco_sim_b_registered_input_to_output_new_primitive___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_b_registered_input_to_output_new_primitive__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_b_registered_input_to_output_new_primitive___024root__trace_init_top\n"); );
    // Body
    Vco_sim_b_registered_input_to_output_new_primitive___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vco_sim_b_registered_input_to_output_new_primitive___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vco_sim_b_registered_input_to_output_new_primitive___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vco_sim_b_registered_input_to_output_new_primitive___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vco_sim_b_registered_input_to_output_new_primitive___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vco_sim_b_registered_input_to_output_new_primitive___024root__trace_register(Vco_sim_b_registered_input_to_output_new_primitive___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_b_registered_input_to_output_new_primitive__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_b_registered_input_to_output_new_primitive___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vco_sim_b_registered_input_to_output_new_primitive___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vco_sim_b_registered_input_to_output_new_primitive___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vco_sim_b_registered_input_to_output_new_primitive___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vco_sim_b_registered_input_to_output_new_primitive___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vco_sim_b_registered_input_to_output_new_primitive___024root__trace_const_0_sub_0(Vco_sim_b_registered_input_to_output_new_primitive___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vco_sim_b_registered_input_to_output_new_primitive___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_b_registered_input_to_output_new_primitive___024root__trace_const_0\n"); );
    // Init
    Vco_sim_b_registered_input_to_output_new_primitive___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vco_sim_b_registered_input_to_output_new_primitive___024root*>(voidSelf);
    Vco_sim_b_registered_input_to_output_new_primitive__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vco_sim_b_registered_input_to_output_new_primitive___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vco_sim_b_registered_input_to_output_new_primitive___024root__trace_const_0_sub_0(Vco_sim_b_registered_input_to_output_new_primitive___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_b_registered_input_to_output_new_primitive__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_b_registered_input_to_output_new_primitive___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+150,(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__dly_b_netlist),18);
    bufp->fullIData(oldp+151,(0x4e4f4e45U),32);
    bufp->fullBit(oldp+152,(1U));
    bufp->fullQData(oldp+153,(0x4d554c5449504c59ULL),64);
    bufp->fullIData(oldp+155,(0U),20);
    bufp->fullQData(oldp+156,(0x46414c5345ULL),40);
    bufp->fullCData(oldp+158,(0U),6);
    bufp->fullCData(oldp+159,(1U),3);
    bufp->fullBit(oldp+160,(0U));
}

VL_ATTR_COLD void Vco_sim_b_registered_input_to_output_new_primitive___024root__trace_full_0_sub_0(Vco_sim_b_registered_input_to_output_new_primitive___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vco_sim_b_registered_input_to_output_new_primitive___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_b_registered_input_to_output_new_primitive___024root__trace_full_0\n"); );
    // Init
    Vco_sim_b_registered_input_to_output_new_primitive___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vco_sim_b_registered_input_to_output_new_primitive___024root*>(voidSelf);
    Vco_sim_b_registered_input_to_output_new_primitive__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vco_sim_b_registered_input_to_output_new_primitive___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vco_sim_b_registered_input_to_output_new_primitive___024root__trace_full_0_sub_0(Vco_sim_b_registered_input_to_output_new_primitive___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_b_registered_input_to_output_new_primitive__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_b_registered_input_to_output_new_primitive___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__subtract_int));
    bufp->fullCData(oldp+2,(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__acc_fir_int),6);
    bufp->fullCData(oldp+3,(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__feedback_int),3);
    bufp->fullCData(oldp+4,(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__shift_right_int),6);
    bufp->fullBit(oldp+5,(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__round_int));
    bufp->fullBit(oldp+6,(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__saturate_int));
    bufp->fullBit(oldp+7,(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__load_acc_int));
    bufp->fullBit(oldp+8,(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__unsigned_a_int));
    bufp->fullBit(oldp+9,(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__unsigned_b_int));
    bufp->fullIData(oldp+10,(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__a),20);
    bufp->fullIData(oldp+11,(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__b),18);
    bufp->fullBit(oldp+12,(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__reset));
    bufp->fullQData(oldp+13,(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__expected_out),38);
    bufp->fullIData(oldp+15,(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__mismatch),32);
    bufp->fullBit(oldp+16,((1U & vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__a)));
    bufp->fullBit(oldp+17,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__a 
                                  >> 1U))));
    bufp->fullBit(oldp+18,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__a 
                                  >> 0xaU))));
    bufp->fullBit(oldp+19,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__a 
                                  >> 0xbU))));
    bufp->fullBit(oldp+20,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__a 
                                  >> 0xcU))));
    bufp->fullBit(oldp+21,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__a 
                                  >> 0xdU))));
    bufp->fullBit(oldp+22,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__a 
                                  >> 0xeU))));
    bufp->fullBit(oldp+23,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__a 
                                  >> 0xfU))));
    bufp->fullBit(oldp+24,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__a 
                                  >> 0x10U))));
    bufp->fullBit(oldp+25,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__a 
                                  >> 0x11U))));
    bufp->fullBit(oldp+26,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__a 
                                  >> 0x12U))));
    bufp->fullBit(oldp+27,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__a 
                                  >> 0x13U))));
    bufp->fullBit(oldp+28,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__a 
                                  >> 2U))));
    bufp->fullBit(oldp+29,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__a 
                                  >> 3U))));
    bufp->fullBit(oldp+30,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__a 
                                  >> 4U))));
    bufp->fullBit(oldp+31,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__a 
                                  >> 5U))));
    bufp->fullBit(oldp+32,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__a 
                                  >> 6U))));
    bufp->fullBit(oldp+33,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__a 
                                  >> 7U))));
    bufp->fullBit(oldp+34,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__a 
                                  >> 8U))));
    bufp->fullBit(oldp+35,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__a 
                                  >> 9U))));
    bufp->fullBit(oldp+36,((1U & vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__b)));
    bufp->fullBit(oldp+37,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__b 
                                  >> 1U))));
    bufp->fullBit(oldp+38,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__b 
                                  >> 0xaU))));
    bufp->fullBit(oldp+39,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__b 
                                  >> 0xbU))));
    bufp->fullBit(oldp+40,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__b 
                                  >> 0xcU))));
    bufp->fullBit(oldp+41,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__b 
                                  >> 0xdU))));
    bufp->fullBit(oldp+42,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__b 
                                  >> 0xeU))));
    bufp->fullBit(oldp+43,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__b 
                                  >> 0xfU))));
    bufp->fullBit(oldp+44,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__b 
                                  >> 0x10U))));
    bufp->fullBit(oldp+45,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__b 
                                  >> 0x11U))));
    bufp->fullBit(oldp+46,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__b 
                                  >> 2U))));
    bufp->fullBit(oldp+47,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__b 
                                  >> 3U))));
    bufp->fullBit(oldp+48,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__b 
                                  >> 4U))));
    bufp->fullBit(oldp+49,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__b 
                                  >> 5U))));
    bufp->fullBit(oldp+50,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__b 
                                  >> 6U))));
    bufp->fullBit(oldp+51,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__b 
                                  >> 7U))));
    bufp->fullBit(oldp+52,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__b 
                                  >> 8U))));
    bufp->fullBit(oldp+53,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__b 
                                  >> 9U))));
    bufp->fullQData(oldp+54,(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out),38);
    bufp->fullBit(oldp+56,((1U & (IData)(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out))));
    bufp->fullBit(oldp+57,((1U & (IData)((vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out 
                                          >> 1U)))));
    bufp->fullBit(oldp+58,((1U & (IData)((vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+59,((1U & (IData)((vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+60,((1U & (IData)((vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+61,((1U & (IData)((vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out 
                                          >> 0xdU)))));
    bufp->fullBit(oldp+62,((1U & (IData)((vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out 
                                          >> 0xeU)))));
    bufp->fullBit(oldp+63,((1U & (IData)((vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out 
                                          >> 0xfU)))));
    bufp->fullBit(oldp+64,((1U & (IData)((vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out 
                                          >> 0x10U)))));
    bufp->fullBit(oldp+65,((1U & (IData)((vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out 
                                          >> 0x11U)))));
    bufp->fullBit(oldp+66,((1U & (IData)((vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out 
                                          >> 0x12U)))));
    bufp->fullBit(oldp+67,((1U & (IData)((vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out 
                                          >> 0x13U)))));
    bufp->fullBit(oldp+68,((1U & (IData)((vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out 
                                          >> 2U)))));
    bufp->fullBit(oldp+69,((1U & (IData)((vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out 
                                          >> 0x14U)))));
    bufp->fullBit(oldp+70,((1U & (IData)((vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out 
                                          >> 0x15U)))));
    bufp->fullBit(oldp+71,((1U & (IData)((vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out 
                                          >> 0x16U)))));
    bufp->fullBit(oldp+72,((1U & (IData)((vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out 
                                          >> 0x17U)))));
    bufp->fullBit(oldp+73,((1U & (IData)((vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out 
                                          >> 0x18U)))));
    bufp->fullBit(oldp+74,((1U & (IData)((vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out 
                                          >> 0x19U)))));
    bufp->fullBit(oldp+75,((1U & (IData)((vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out 
                                          >> 0x1aU)))));
    bufp->fullBit(oldp+76,((1U & (IData)((vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out 
                                          >> 0x1bU)))));
    bufp->fullBit(oldp+77,((1U & (IData)((vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out 
                                          >> 0x1cU)))));
    bufp->fullBit(oldp+78,((1U & (IData)((vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out 
                                          >> 0x1dU)))));
    bufp->fullBit(oldp+79,((1U & (IData)((vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out 
                                          >> 3U)))));
    bufp->fullBit(oldp+80,((1U & (IData)((vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out 
                                          >> 0x1eU)))));
    bufp->fullBit(oldp+81,((1U & (IData)((vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out 
                                          >> 0x1fU)))));
    bufp->fullBit(oldp+82,((1U & (IData)((vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out 
                                          >> 0x20U)))));
    bufp->fullBit(oldp+83,((1U & (IData)((vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out 
                                          >> 0x21U)))));
    bufp->fullBit(oldp+84,((1U & (IData)((vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out 
                                          >> 0x22U)))));
    bufp->fullBit(oldp+85,((1U & (IData)((vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out 
                                          >> 0x23U)))));
    bufp->fullBit(oldp+86,((1U & (IData)((vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out 
                                          >> 0x24U)))));
    bufp->fullBit(oldp+87,((1U & (IData)((vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out 
                                          >> 0x25U)))));
    bufp->fullBit(oldp+88,((1U & (IData)((vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out 
                                          >> 4U)))));
    bufp->fullBit(oldp+89,((1U & (IData)((vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out 
                                          >> 5U)))));
    bufp->fullBit(oldp+90,((1U & (IData)((vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out 
                                          >> 6U)))));
    bufp->fullBit(oldp+91,((1U & (IData)((vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out 
                                          >> 7U)))));
    bufp->fullBit(oldp+92,((1U & (IData)((vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out 
                                          >> 8U)))));
    bufp->fullBit(oldp+93,((1U & (IData)((vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out 
                                          >> 9U)))));
    bufp->fullQData(oldp+94,(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__add_sub_in),64);
    bufp->fullQData(oldp+96,(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__mult_out),64);
    bufp->fullQData(oldp+98,(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__add_sub_out),64);
    bufp->fullQData(oldp+100,(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__pre_shift),64);
    bufp->fullQData(oldp+102,(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__shift_right),64);
    bufp->fullQData(oldp+104,(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__round),64);
    bufp->fullQData(oldp+106,(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__saturate),38);
    bufp->fullIData(oldp+108,(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__mult_a),20);
    bufp->fullIData(oldp+109,(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT____024iopadmap__024dly_b),18);
    bufp->fullBit(oldp+110,((1U & vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT____024iopadmap__024dly_b)));
    bufp->fullBit(oldp+111,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT____024iopadmap__024dly_b 
                                   >> 1U))));
    bufp->fullBit(oldp+112,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT____024iopadmap__024dly_b 
                                   >> 0xaU))));
    bufp->fullBit(oldp+113,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT____024iopadmap__024dly_b 
                                   >> 0xbU))));
    bufp->fullBit(oldp+114,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT____024iopadmap__024dly_b 
                                   >> 0xcU))));
    bufp->fullBit(oldp+115,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT____024iopadmap__024dly_b 
                                   >> 0xdU))));
    bufp->fullBit(oldp+116,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT____024iopadmap__024dly_b 
                                   >> 0xeU))));
    bufp->fullBit(oldp+117,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT____024iopadmap__024dly_b 
                                   >> 0xfU))));
    bufp->fullBit(oldp+118,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT____024iopadmap__024dly_b 
                                   >> 0x10U))));
    bufp->fullBit(oldp+119,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT____024iopadmap__024dly_b 
                                   >> 0x11U))));
    bufp->fullBit(oldp+120,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT____024iopadmap__024dly_b 
                                   >> 2U))));
    bufp->fullBit(oldp+121,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT____024iopadmap__024dly_b 
                                   >> 3U))));
    bufp->fullBit(oldp+122,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT____024iopadmap__024dly_b 
                                   >> 4U))));
    bufp->fullBit(oldp+123,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT____024iopadmap__024dly_b 
                                   >> 5U))));
    bufp->fullBit(oldp+124,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT____024iopadmap__024dly_b 
                                   >> 6U))));
    bufp->fullBit(oldp+125,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT____024iopadmap__024dly_b 
                                   >> 7U))));
    bufp->fullBit(oldp+126,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT____024iopadmap__024dly_b 
                                   >> 8U))));
    bufp->fullBit(oldp+127,((1U & (vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT____024iopadmap__024dly_b 
                                   >> 9U))));
    bufp->fullBit(oldp+128,(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__subtract_reg));
    bufp->fullCData(oldp+129,(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__acc_fir_reg),6);
    bufp->fullCData(oldp+130,(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__feedback_reg),3);
    bufp->fullCData(oldp+131,(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__shift_right_reg1),6);
    bufp->fullCData(oldp+132,(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__shift_right_reg2),6);
    bufp->fullBit(oldp+133,(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__round_reg1));
    bufp->fullBit(oldp+134,(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__round_reg2));
    bufp->fullBit(oldp+135,(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__saturate_reg1));
    bufp->fullBit(oldp+136,(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__saturate_reg2));
    bufp->fullBit(oldp+137,(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__load_acc_reg));
    bufp->fullIData(oldp+138,(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__a_reg),20);
    bufp->fullIData(oldp+139,(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__b_reg),18);
    bufp->fullBit(oldp+140,(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__unsigned_a_reg));
    bufp->fullBit(oldp+141,(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__unsigned_b_reg));
    bufp->fullQData(oldp+142,(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__accumulator),64);
    bufp->fullQData(oldp+144,(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out_reg),38);
    bufp->fullBit(oldp+146,(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__clk));
    bufp->fullIData(oldp+147,(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__a_int),20);
    bufp->fullIData(oldp+148,(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__b_int),18);
    bufp->fullIData(oldp+149,(vlSelf->co_sim_b_registered_input_to_output_new_primitive__DOT__golden__DOT__DSP_inst__DOT__mult_b),18);
}
