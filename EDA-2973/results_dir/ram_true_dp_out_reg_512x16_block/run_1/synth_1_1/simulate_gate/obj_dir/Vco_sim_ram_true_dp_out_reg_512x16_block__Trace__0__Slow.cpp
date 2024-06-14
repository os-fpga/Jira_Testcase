// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vco_sim_ram_true_dp_out_reg_512x16_block__Syms.h"


VL_ATTR_COLD void Vco_sim_ram_true_dp_out_reg_512x16_block___024root__trace_init_sub__TOP__0(Vco_sim_ram_true_dp_out_reg_512x16_block___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_ram_true_dp_out_reg_512x16_block__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_ram_true_dp_out_reg_512x16_block___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("co_sim_ram_true_dp_out_reg_512x16_block", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+267,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"weA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"weB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"reA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"reB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"addrA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+16,0,"addrB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+17,0,"dinA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+18,0,"dinB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+215,0,"doutA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+216,0,"doutB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+268,0,"doutA_netlist",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+269,0,"doutB_netlist",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+19,0,"mismatch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+20,0,"cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+21,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("golden", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+267,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"weA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"weB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"reA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"reB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"addrA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+16,0,"addrB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+17,0,"dinA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+18,0,"dinB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+215,0,"doutA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+216,0,"doutB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("netlist", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+15,0,"addrA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+16,0,"addrB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+267,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"dinA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+18,0,"dinB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+268,0,"doutA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+269,0,"doutB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+13,0,"reA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"reB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"weA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"weB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"$auto$memory_libmap.cc:2437:execute$95[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"$auto$memory_libmap.cc:2437:execute$95[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"$auto$memory_libmap.cc:2437:execute$95[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"$auto$memory_libmap.cc:2437:execute$95[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"$delete_wire$2809",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"$delete_wire$2810",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"$iopadmap$addrB[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"$iopadmap$addrB[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"$iopadmap$addrB[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"$iopadmap$addrB[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"$iopadmap$addrB[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"$iopadmap$addrB[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"$iopadmap$addrB[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"$iopadmap$addrB[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"$iopadmap$addrB[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"$iopadmap$addrA[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"$iopadmap$addrA[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"$iopadmap$addrA[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"$iopadmap$addrA[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"$iopadmap$addrA[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"$iopadmap$addrA[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"$iopadmap$addrA[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"$iopadmap$addrA[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"$iopadmap$addrA[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+221,0,"$auto$memory_libmap.cc:2437:execute$102[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+222,0,"$auto$memory_libmap.cc:2437:execute$102[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+223,0,"$auto$memory_libmap.cc:2437:execute$102[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+224,0,"$auto$memory_libmap.cc:2437:execute$102[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+225,0,"$auto$memory_libmap.cc:2437:execute$102[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"$auto$memory_libmap.cc:2437:execute$102[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+227,0,"$auto$memory_libmap.cc:2437:execute$102[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"$auto$memory_libmap.cc:2437:execute$102[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+229,0,"$auto$memory_libmap.cc:2437:execute$102[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+230,0,"$auto$memory_libmap.cc:2437:execute$102[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"$auto$memory_libmap.cc:2437:execute$102[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+232,0,"$auto$memory_libmap.cc:2437:execute$102[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"$auto$memory_libmap.cc:2437:execute$102[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"$auto$memory_libmap.cc:2437:execute$102[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"$auto$memory_libmap.cc:2437:execute$102[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+236,0,"$auto$memory_libmap.cc:2437:execute$102[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"$delete_wire$2811",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"$delete_wire$2812",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"$delete_wire$2813",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"$delete_wire$2814",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"$delete_wire$2815",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"$delete_wire$2816",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"$delete_wire$2817",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"$delete_wire$2818",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"$delete_wire$2819",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"$delete_wire$2820",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"$delete_wire$2821",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"$delete_wire$2822",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"$delete_wire$2823",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"$delete_wire$2824",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"$delete_wire$2825",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"$delete_wire$2826",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"$delete_wire$2827",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"$delete_wire$2828",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"$iopadmap$doutB[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"$iopadmap$doutB[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"$iopadmap$doutB[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"$iopadmap$doutB[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"$iopadmap$doutB[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"$iopadmap$doutB[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"$iopadmap$doutB[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"$iopadmap$doutB[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"$iopadmap$doutB[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"$iopadmap$doutB[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"$iopadmap$doutB[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"$iopadmap$doutB[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"$iopadmap$doutB[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"$iopadmap$doutB[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"$iopadmap$doutB[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"$iopadmap$doutB[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"$delete_wire$2829",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"$delete_wire$2830",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"$delete_wire$2831",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"$delete_wire$2832",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"$delete_wire$2833",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"$delete_wire$2834",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"$delete_wire$2835",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"$delete_wire$2836",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"$delete_wire$2837",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"$delete_wire$2838",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"$delete_wire$2839",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"$delete_wire$2840",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"$delete_wire$2841",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+238,0,"$delete_wire$2842",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"$delete_wire$2843",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"$delete_wire$2844",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"$delete_wire$2845",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"$delete_wire$2846",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"$iopadmap$dinB[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"$iopadmap$dinB[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"$iopadmap$dinB[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"$iopadmap$dinB[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"$iopadmap$dinB[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"$iopadmap$dinB[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"$iopadmap$dinB[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"$iopadmap$dinB[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"$iopadmap$dinB[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"$iopadmap$dinB[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"$iopadmap$dinB[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"$iopadmap$dinB[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"$iopadmap$dinB[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"$iopadmap$dinB[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"$iopadmap$dinB[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"$iopadmap$dinB[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"$iopadmap$dinA[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"$iopadmap$dinA[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"$iopadmap$dinA[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"$iopadmap$dinA[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"$iopadmap$dinA[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"$iopadmap$dinA[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"$iopadmap$dinA[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"$iopadmap$dinA[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"$iopadmap$dinA[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"$iopadmap$dinA[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"$iopadmap$dinA[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"$iopadmap$dinA[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"$iopadmap$dinA[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"$iopadmap$dinA[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"$iopadmap$dinA[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"$iopadmap$dinA[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"$iopadmap$doutA[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"$iopadmap$doutA[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"$iopadmap$doutA[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"$iopadmap$doutA[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"$iopadmap$doutA[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"$iopadmap$doutA[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"$iopadmap$doutA[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"$iopadmap$doutA[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"$iopadmap$doutA[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"$iopadmap$doutA[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"$iopadmap$doutA[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"$iopadmap$doutA[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"$iopadmap$doutA[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"$iopadmap$doutA[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"$iopadmap$doutA[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"$iopadmap$doutA[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"$abc$2012$abc$518$auto$memory_libmap.cc:2028:emit_port$107[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"$abc$2012$abc$518$auto$memory_libmap.cc:2028:emit_port$107[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"$abc$2012$abc$518$auto$memory_libmap.cc:2028:emit_port$107[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"$abc$2012$abc$518$auto$memory_libmap.cc:2028:emit_port$107[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"$abc$2012$abc$518$auto$memory_libmap.cc:2028:emit_port$107[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"$abc$2012$abc$518$auto$memory_libmap.cc:2028:emit_port$107[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"$abc$2012$abc$518$auto$memory_libmap.cc:2028:emit_port$107[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"$abc$2012$abc$518$auto$memory_libmap.cc:2028:emit_port$107[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"$abc$2012$abc$518$auto$memory_libmap.cc:2028:emit_port$107[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"$abc$2012$abc$518$auto$memory_libmap.cc:2028:emit_port$107[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"$abc$2012$abc$518$auto$memory_libmap.cc:2028:emit_port$107[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"$abc$2012$abc$518$auto$memory_libmap.cc:2028:emit_port$107[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"$abc$2012$abc$518$auto$memory_libmap.cc:2028:emit_port$107[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"$abc$2012$abc$518$auto$memory_libmap.cc:2028:emit_port$107[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"$abc$2012$abc$518$auto$memory_libmap.cc:2028:emit_port$107[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"$abc$2012$abc$518$auto$memory_libmap.cc:2028:emit_port$107[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"$abc$2012$abc$518$auto$memory_libmap.cc:2028:emit_port$110[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"$abc$2012$abc$518$auto$memory_libmap.cc:2028:emit_port$110[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"$abc$2012$abc$518$auto$memory_libmap.cc:2028:emit_port$110[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"$abc$2012$abc$518$auto$memory_libmap.cc:2028:emit_port$110[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"$abc$2012$abc$518$auto$memory_libmap.cc:2028:emit_port$110[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"$abc$2012$abc$518$auto$memory_libmap.cc:2028:emit_port$110[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"$abc$2012$abc$518$auto$memory_libmap.cc:2028:emit_port$110[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"$abc$2012$abc$518$auto$memory_libmap.cc:2028:emit_port$110[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"$abc$2012$abc$518$auto$memory_libmap.cc:2028:emit_port$110[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"$abc$2012$abc$518$auto$memory_libmap.cc:2028:emit_port$110[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"$abc$2012$abc$518$auto$memory_libmap.cc:2028:emit_port$110[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"$abc$2012$abc$518$auto$memory_libmap.cc:2028:emit_port$110[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"$abc$2012$abc$518$auto$memory_libmap.cc:2028:emit_port$110[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"$abc$2012$abc$518$auto$memory_libmap.cc:2028:emit_port$110[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"$abc$2012$abc$518$auto$memory_libmap.cc:2028:emit_port$110[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"$abc$2012$abc$518$auto$memory_libmap.cc:2028:emit_port$110[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"$abc$2012$abc$518$auto$rtlil.cc:2514:LogicNot$57",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"$abc$2012$abc$518$auto$rtlil.cc:2514:LogicNot$76",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"$auto$clkbufmap.cc:317:execute$2686",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"$auto$memory_libmap.cc:2437:execute$95[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"$auto$memory_libmap.cc:2437:execute$95[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+243,0,"$auto$memory_libmap.cc:2437:execute$95[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"$auto$memory_libmap.cc:2437:execute$95[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+245,0,"$auto$memory_libmap.cc:2438:execute$103",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"$auto$memory_libmap.cc:2438:execute$96",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"$auto$memory_libmap.cc:2437:execute$95[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"$auto$memory_libmap.cc:2437:execute$95[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"$iopadmap$clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"$auto$memory_libmap.cc:2437:execute$95[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"$auto$memory_libmap.cc:2437:execute$95[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+251,0,"$auto$memory_libmap.cc:2437:execute$95[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"$auto$memory_libmap.cc:2437:execute$95[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"$iopadmap$reA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"$iopadmap$reB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"$iopadmap$weA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"$iopadmap$weB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"$delete_wire$2847",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"$delete_wire$2848",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"$auto$memory_libmap.cc:2437:execute$95[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"$auto$memory_libmap.cc:2437:execute$95[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("$abc$2649$auto$blifparse.cc:535:parse_blif$2650", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+283,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+139,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+138,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+255,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+256,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$2649$auto$blifparse.cc:535:parse_blif$2651", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+284,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+140,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+166,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+257,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+185,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$2649$auto$blifparse.cc:535:parse_blif$2652", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+284,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+141,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+165,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+257,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+186,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$2649$auto$blifparse.cc:535:parse_blif$2653", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+283,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+104,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+103,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+258,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+259,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$2649$auto$blifparse.cc:535:parse_blif$2654", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+284,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+142,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+167,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+257,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+187,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$2649$auto$blifparse.cc:535:parse_blif$2655", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+284,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+105,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+171,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+260,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+188,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$2649$auto$blifparse.cc:535:parse_blif$2656", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+284,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+106,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+170,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+260,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+189,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$2649$auto$blifparse.cc:535:parse_blif$2657", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+284,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+143,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+158,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+257,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+190,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$2649$auto$blifparse.cc:535:parse_blif$2658", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+284,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+144,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+162,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+257,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+191,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$2649$auto$blifparse.cc:535:parse_blif$2659", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+284,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+145,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+159,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+257,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+192,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$2649$auto$blifparse.cc:535:parse_blif$2660", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+284,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+146,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+160,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+257,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+193,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$2649$auto$blifparse.cc:535:parse_blif$2661", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+284,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+147,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+161,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+257,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+194,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$2649$auto$blifparse.cc:535:parse_blif$2662", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+284,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+148,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+168,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+257,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+195,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$2649$auto$blifparse.cc:535:parse_blif$2663", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+284,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+149,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+169,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+257,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+196,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$2649$auto$blifparse.cc:535:parse_blif$2664", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+284,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+150,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+163,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+257,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+197,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$2649$auto$blifparse.cc:535:parse_blif$2665", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+284,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+151,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+164,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+257,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+198,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$2649$auto$blifparse.cc:535:parse_blif$2666", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+284,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+107,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+173,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+260,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+199,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$2649$auto$blifparse.cc:535:parse_blif$2667", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+284,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+108,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+174,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+260,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+200,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$2649$auto$blifparse.cc:535:parse_blif$2668", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+284,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+109,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+175,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+260,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+201,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$2649$auto$blifparse.cc:535:parse_blif$2669", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+284,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+110,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+176,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+260,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+202,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$2649$auto$blifparse.cc:535:parse_blif$2670", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+284,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+111,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+177,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+260,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+203,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$2649$auto$blifparse.cc:535:parse_blif$2671", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+284,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+112,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+178,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+260,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+204,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$2649$auto$blifparse.cc:535:parse_blif$2672", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+284,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+113,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+179,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+260,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+205,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$2649$auto$blifparse.cc:535:parse_blif$2673", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+284,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+114,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+180,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+260,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+206,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$2649$auto$blifparse.cc:535:parse_blif$2674", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+284,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+115,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+181,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+260,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+207,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$2649$auto$blifparse.cc:535:parse_blif$2675", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+284,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+116,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+182,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+260,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+208,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$2649$auto$blifparse.cc:535:parse_blif$2676", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+284,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+117,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+183,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+260,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+209,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$2649$auto$blifparse.cc:535:parse_blif$2677", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+284,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+118,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+184,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+260,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+210,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$2649$auto$blifparse.cc:535:parse_blif$2678", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+284,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+152,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+155,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+257,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+211,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$2649$auto$blifparse.cc:535:parse_blif$2679", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+284,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+153,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+156,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+257,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+212,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$2649$auto$blifparse.cc:535:parse_blif$2680", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+284,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+154,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+157,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+257,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+213,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$2649$auto$blifparse.cc:535:parse_blif$2681", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+284,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+119,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+172,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+260,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+214,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$2649$auto$blifparse.cc:535:parse_blif$2682", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+285,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+12,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$2649$auto$blifparse.cc:535:parse_blif$2683", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+285,0,"INIT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+11,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$675$auto$blifparse.cc:377:parse_blif$676", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+169,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$675$auto$blifparse.cc:377:parse_blif$677", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+168,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$675$auto$blifparse.cc:377:parse_blif$678", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+167,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$675$auto$blifparse.cc:377:parse_blif$679", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+138,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$675$auto$blifparse.cc:377:parse_blif$680", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+166,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+251,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$675$auto$blifparse.cc:377:parse_blif$681", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+165,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$675$auto$blifparse.cc:377:parse_blif$682", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+164,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$675$auto$blifparse.cc:377:parse_blif$683", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+163,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$675$auto$blifparse.cc:377:parse_blif$684", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+162,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$675$auto$blifparse.cc:377:parse_blif$685", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+161,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$675$auto$blifparse.cc:377:parse_blif$686", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+160,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+243,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$675$auto$blifparse.cc:377:parse_blif$687", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+159,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$675$auto$blifparse.cc:377:parse_blif$688", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+158,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$675$auto$blifparse.cc:377:parse_blif$689", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+157,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$675$auto$blifparse.cc:377:parse_blif$690", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+156,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$675$auto$blifparse.cc:377:parse_blif$691", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+155,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$740$auto$blifparse.cc:377:parse_blif$741", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+184,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+236,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$740$auto$blifparse.cc:377:parse_blif$742", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+183,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$740$auto$blifparse.cc:377:parse_blif$743", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+182,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$740$auto$blifparse.cc:377:parse_blif$744", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+181,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$740$auto$blifparse.cc:377:parse_blif$745", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+180,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+232,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$740$auto$blifparse.cc:377:parse_blif$746", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+179,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$740$auto$blifparse.cc:377:parse_blif$747", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+178,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+230,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$740$auto$blifparse.cc:377:parse_blif$748", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+177,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+229,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$740$auto$blifparse.cc:377:parse_blif$749", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+176,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$740$auto$blifparse.cc:377:parse_blif$750", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+175,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+227,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$740$auto$blifparse.cc:377:parse_blif$751", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+174,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$740$auto$blifparse.cc:377:parse_blif$752", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+173,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+225,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$740$auto$blifparse.cc:377:parse_blif$753", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+172,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+224,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$740$auto$blifparse.cc:377:parse_blif$754", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+103,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+223,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$740$auto$blifparse.cc:377:parse_blif$755", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+171,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+222,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$740$auto$blifparse.cc:377:parse_blif$756", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+170,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+221,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$805$auto$blifparse.cc:377:parse_blif$806", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+73,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+245,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$abc$805$auto$blifparse.cc:377:parse_blif$807", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+72,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$auto$clkbufmap.cc:284:execute$2684", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+267,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.addrA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+39,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.addrA_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+38,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.addrA_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+37,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.addrA_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+36,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.addrA_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+35,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.addrA_5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+34,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.addrA_6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+33,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.addrA_7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+32,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.addrA_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+31,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.addrB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+30,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.addrB_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+29,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.addrB_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+28,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.addrB_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+27,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.addrB_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+26,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.addrB_5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+25,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.addrB_6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.addrB_7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+23,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.addrB_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+22,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.clk", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+267,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.dinA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+71,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.dinA_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+70,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.dinA_10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+61,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.dinA_11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+60,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.dinA_12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+59,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.dinA_13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+58,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.dinA_14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+57,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.dinA_15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+56,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.dinA_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+69,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.dinA_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+68,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.dinA_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+67,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.dinA_5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+66,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.dinA_6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+65,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.dinA_7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+64,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.dinA_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+63,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.dinA_9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+62,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.dinB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+55,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.dinB_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+54,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.dinB_10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+45,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.dinB_11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+44,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.dinB_12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+43,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.dinB_13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+42,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.dinB_14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+41,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.dinB_15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+40,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.dinB_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+53,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.dinB_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+52,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.dinB_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+51,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.dinB_5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+50,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.dinB_6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+49,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.dinB_7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+48,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.dinB_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+47,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.dinB_9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+46,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.doutA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+184,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.doutA_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+183,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.doutA_10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+174,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.doutA_11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+173,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.doutA_12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+172,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.doutA_13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+103,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.doutA_14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+171,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.doutA_15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+170,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.doutA_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+182,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.doutA_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+181,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.doutA_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+180,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.doutA_5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+179,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.doutA_6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+178,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.doutA_7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+177,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.doutA_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+176,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.doutA_9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+175,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.doutB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+169,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.doutB_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+168,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.doutB_10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+160,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.doutB_11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+159,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.doutB_12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+158,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.doutB_13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+157,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.doutB_14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+156,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.doutB_15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+155,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.doutB_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+167,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.doutB_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+138,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.doutB_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+166,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.doutB_5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+165,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.doutB_6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+164,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.doutB_7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+163,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.doutB_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+162,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.doutB_9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+161,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.reA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+13,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.reB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+14,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.weA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$ram_true_dp_out_reg_512x16_block.weB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+12,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ram.0.0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+288,0,"INIT1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 16383,0);
    tracep->declArray(c+800,0,"INIT1_PARITY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->declBus(c+864,0,"WRITE_WIDTH_A1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+864,0,"WRITE_WIDTH_B1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+864,0,"READ_WIDTH_A1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+864,0,"READ_WIDTH_B1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+288,0,"INIT2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 16383,0);
    tracep->declArray(c+800,0,"INIT2_PARITY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->declBus(c+865,0,"WRITE_WIDTH_A2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+865,0,"WRITE_WIDTH_B2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+865,0,"READ_WIDTH_A2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+865,0,"READ_WIDTH_B2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+12,0,"WEN_A1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"WEN_B1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"REN_A1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"REN_B1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"CLK_A1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"CLK_B1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"BE_A1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+75,0,"BE_B1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+76,0,"ADDR_A1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+77,0,"ADDR_B1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+18,0,"WDATA_A1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+866,0,"WPARITY_A1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+17,0,"WDATA_B1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+866,0,"WPARITY_B1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+136,0,"RDATA_A1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+261,0,"RPARITY_A1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+101,0,"RDATA_B1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+262,0,"RPARITY_B1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+282,0,"WEN_A2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"WEN_B2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"REN_A2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"REN_B2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"CLK_A2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"CLK_B2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+866,0,"BE_A2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+866,0,"BE_B2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+867,0,"ADDR_A2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+867,0,"ADDR_B2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+868,0,"WDATA_A2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+866,0,"WPARITY_A2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+868,0,"WDATA_B2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+866,0,"WPARITY_B2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+868,0,"RDATA_A2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+866,0,"RPARITY_A2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+868,0,"RDATA_B2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+866,0,"RPARITY_B2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+869,0,"A1_DATA_WRITE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+870,0,"A1_WRITE_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+869,0,"A1_DATA_READ_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+870,0,"A1_READ_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+869,0,"A1_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+871,0,"A1_PARITY_WRITE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+871,0,"A1_PARITY_READ_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+871,0,"A1_PARITY_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+869,0,"B1_DATA_WRITE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+870,0,"B1_WRITE_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+869,0,"B1_DATA_READ_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+870,0,"B1_READ_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+869,0,"B1_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+871,0,"B1_PARITY_WRITE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+871,0,"B1_PARITY_READ_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+871,0,"B1_PARITY_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+869,0,"RAM1_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+871,0,"RAM1_PARITY_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+870,0,"RAM1_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+2,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+3,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+270,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+137,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+271,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+102,0,"m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+286,0,"collision_window",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+272,0,"collision_a_write_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+273,0,"collision_b_write_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"collision_a_read_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+275,0,"collision_b_read_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+276,0,"collision_a_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+277,0,"collision_b_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+78,0,"a1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+79,0,"b1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+872,0,"temp_WPARITY_A1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+873,0,"temp_WPARITY_B1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+874,0,"temp_WDATA_A1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+875,0,"temp_WDATA_B1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+865,0,"A2_DATA_WRITE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+876,0,"A2_WRITE_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+865,0,"A2_DATA_READ_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+876,0,"A2_READ_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+865,0,"A2_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+877,0,"A2_PARITY_WRITE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+877,0,"A2_PARITY_READ_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+877,0,"A2_PARITY_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+865,0,"B2_DATA_WRITE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+876,0,"B2_WRITE_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+865,0,"B2_DATA_READ_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+876,0,"B2_READ_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+865,0,"B2_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+877,0,"B2_PARITY_WRITE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+877,0,"B2_PARITY_READ_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+877,0,"B2_PARITY_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+865,0,"RAM2_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+877,0,"RAM2_PARITY_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+876,0,"RAM2_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+5,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+6,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+878,0,"l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+879,0,"n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+880,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+881,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+278,0,"collision_a2_write_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+279,0,"collision_b2_write_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+280,0,"collision_a2_read_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"collision_b2_read_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+867,0,"collision_a2_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+867,0,"collision_b2_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+867,0,"a2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+867,0,"b2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+882,0,"temp_WPARITY_A2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, -1,0);
    tracep->declBus(c+883,0,"temp_WPARITY_B2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, -1,0);
    tracep->declBus(c+884,0,"temp_WDATA_A2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+885,0,"temp_WDATA_B2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("parity_RAM1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+7,0,"f_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+8,0,"g_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+9,0,"h_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+263,0,"i_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+264,0,"j_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+265,0,"k_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+266,0,"m_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+10,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+80,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+81,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+82,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+83,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+84,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vco_sim_ram_true_dp_out_reg_512x16_block___024root__trace_init_top(Vco_sim_ram_true_dp_out_reg_512x16_block___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_ram_true_dp_out_reg_512x16_block__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_ram_true_dp_out_reg_512x16_block___024root__trace_init_top\n"); );
    // Body
    Vco_sim_ram_true_dp_out_reg_512x16_block___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vco_sim_ram_true_dp_out_reg_512x16_block___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vco_sim_ram_true_dp_out_reg_512x16_block___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vco_sim_ram_true_dp_out_reg_512x16_block___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vco_sim_ram_true_dp_out_reg_512x16_block___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vco_sim_ram_true_dp_out_reg_512x16_block___024root__trace_register(Vco_sim_ram_true_dp_out_reg_512x16_block___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_ram_true_dp_out_reg_512x16_block__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_ram_true_dp_out_reg_512x16_block___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vco_sim_ram_true_dp_out_reg_512x16_block___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vco_sim_ram_true_dp_out_reg_512x16_block___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vco_sim_ram_true_dp_out_reg_512x16_block___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vco_sim_ram_true_dp_out_reg_512x16_block___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vco_sim_ram_true_dp_out_reg_512x16_block___024root__trace_const_0_sub_0(Vco_sim_ram_true_dp_out_reg_512x16_block___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vco_sim_ram_true_dp_out_reg_512x16_block___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_ram_true_dp_out_reg_512x16_block___024root__trace_const_0\n"); );
    // Init
    Vco_sim_ram_true_dp_out_reg_512x16_block___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vco_sim_ram_true_dp_out_reg_512x16_block___024root*>(voidSelf);
    Vco_sim_ram_true_dp_out_reg_512x16_block__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vco_sim_ram_true_dp_out_reg_512x16_block___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<512>/*16383:0*/ Vco_sim_ram_true_dp_out_reg_512x16_block__ConstPool__CONST_h60a81158_0;
extern const VlWide<64>/*2047:0*/ Vco_sim_ram_true_dp_out_reg_512x16_block__ConstPool__CONST_h6be9aa18_0;

VL_ATTR_COLD void Vco_sim_ram_true_dp_out_reg_512x16_block___024root__trace_const_0_sub_0(Vco_sim_ram_true_dp_out_reg_512x16_block___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_ram_true_dp_out_reg_512x16_block__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_ram_true_dp_out_reg_512x16_block___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+282,(0U));
    bufp->fullCData(oldp+283,(0xacU),8);
    bufp->fullCData(oldp+284,(0xcaU),8);
    bufp->fullCData(oldp+285,(1U),2);
    bufp->fullBit(oldp+286,(1U));
    bufp->fullIData(oldp+287,(0x4e4f4e45U),32);
    bufp->fullWData(oldp+288,(Vco_sim_ram_true_dp_out_reg_512x16_block__ConstPool__CONST_h60a81158_0),16384);
    bufp->fullWData(oldp+800,(Vco_sim_ram_true_dp_out_reg_512x16_block__ConstPool__CONST_h6be9aa18_0),2048);
    bufp->fullIData(oldp+864,(0x12U),32);
    bufp->fullIData(oldp+865,(1U),32);
    bufp->fullCData(oldp+866,(0U),2);
    bufp->fullSData(oldp+867,(0U),14);
    bufp->fullSData(oldp+868,(0U),16);
    bufp->fullIData(oldp+869,(0x10U),32);
    bufp->fullIData(oldp+870,(0xaU),32);
    bufp->fullIData(oldp+871,(2U),32);
    bufp->fullCData(oldp+872,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__temp_WPARITY_A1),2);
    bufp->fullCData(oldp+873,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__temp_WPARITY_B1),2);
    bufp->fullSData(oldp+874,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__temp_WDATA_A1),16);
    bufp->fullSData(oldp+875,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__temp_WDATA_B1),16);
    bufp->fullIData(oldp+876,(0xeU),32);
    bufp->fullIData(oldp+877,(0U),32);
    bufp->fullIData(oldp+878,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__l),32);
    bufp->fullIData(oldp+879,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__n),32);
    bufp->fullIData(oldp+880,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__p),32);
    bufp->fullIData(oldp+881,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__r),32);
    bufp->fullCData(oldp+882,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__temp_WPARITY_A2),2);
    bufp->fullCData(oldp+883,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__temp_WPARITY_B2),2);
    bufp->fullBit(oldp+884,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__temp_WDATA_A2));
    bufp->fullBit(oldp+885,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__temp_WDATA_B2));
}

VL_ATTR_COLD void Vco_sim_ram_true_dp_out_reg_512x16_block___024root__trace_full_0_sub_0(Vco_sim_ram_true_dp_out_reg_512x16_block___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vco_sim_ram_true_dp_out_reg_512x16_block___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_ram_true_dp_out_reg_512x16_block___024root__trace_full_0\n"); );
    // Init
    Vco_sim_ram_true_dp_out_reg_512x16_block___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vco_sim_ram_true_dp_out_reg_512x16_block___024root*>(voidSelf);
    Vco_sim_ram_true_dp_out_reg_512x16_block__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vco_sim_ram_true_dp_out_reg_512x16_block___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vco_sim_ram_true_dp_out_reg_512x16_block___024root__trace_full_0_sub_0(Vco_sim_ram_true_dp_out_reg_512x16_block___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_ram_true_dp_out_reg_512x16_block__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_ram_true_dp_out_reg_512x16_block___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f),32);
    bufp->fullIData(oldp+2,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__g),32);
    bufp->fullIData(oldp+3,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__h),32);
    bufp->fullIData(oldp+4,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__a),32);
    bufp->fullIData(oldp+5,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__b),32);
    bufp->fullIData(oldp+6,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__c),32);
    bufp->fullIData(oldp+7,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__parity_RAM1__DOT__f_p),32);
    bufp->fullIData(oldp+8,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__parity_RAM1__DOT__g_p),32);
    bufp->fullIData(oldp+9,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__parity_RAM1__DOT__h_p),32);
    bufp->fullIData(oldp+10,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+11,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__weA));
    bufp->fullBit(oldp+12,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__weB));
    bufp->fullBit(oldp+13,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__reA));
    bufp->fullBit(oldp+14,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__reB));
    bufp->fullSData(oldp+15,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrA),9);
    bufp->fullSData(oldp+16,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrB),9);
    bufp->fullSData(oldp+17,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinA),16);
    bufp->fullSData(oldp+18,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinB),16);
    bufp->fullIData(oldp+19,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__mismatch),32);
    bufp->fullCData(oldp+20,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__cycle),7);
    bufp->fullCData(oldp+21,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__i),7);
    bufp->fullBit(oldp+22,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrB) 
                                  >> 8U))));
    bufp->fullBit(oldp+23,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrB) 
                                  >> 7U))));
    bufp->fullBit(oldp+24,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrB) 
                                  >> 6U))));
    bufp->fullBit(oldp+25,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrB) 
                                  >> 5U))));
    bufp->fullBit(oldp+26,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrB) 
                                  >> 4U))));
    bufp->fullBit(oldp+27,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrB) 
                                  >> 3U))));
    bufp->fullBit(oldp+28,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrB) 
                                  >> 2U))));
    bufp->fullBit(oldp+29,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrB) 
                                  >> 1U))));
    bufp->fullBit(oldp+30,((1U & (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrB))));
    bufp->fullBit(oldp+31,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrA) 
                                  >> 8U))));
    bufp->fullBit(oldp+32,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrA) 
                                  >> 7U))));
    bufp->fullBit(oldp+33,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrA) 
                                  >> 6U))));
    bufp->fullBit(oldp+34,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrA) 
                                  >> 5U))));
    bufp->fullBit(oldp+35,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrA) 
                                  >> 4U))));
    bufp->fullBit(oldp+36,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrA) 
                                  >> 3U))));
    bufp->fullBit(oldp+37,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrA) 
                                  >> 2U))));
    bufp->fullBit(oldp+38,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrA) 
                                  >> 1U))));
    bufp->fullBit(oldp+39,((1U & (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrA))));
    bufp->fullBit(oldp+40,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinB) 
                                  >> 0xfU))));
    bufp->fullBit(oldp+41,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinB) 
                                  >> 0xeU))));
    bufp->fullBit(oldp+42,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinB) 
                                  >> 0xdU))));
    bufp->fullBit(oldp+43,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinB) 
                                  >> 0xcU))));
    bufp->fullBit(oldp+44,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinB) 
                                  >> 0xbU))));
    bufp->fullBit(oldp+45,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinB) 
                                  >> 0xaU))));
    bufp->fullBit(oldp+46,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinB) 
                                  >> 9U))));
    bufp->fullBit(oldp+47,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinB) 
                                  >> 8U))));
    bufp->fullBit(oldp+48,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinB) 
                                  >> 7U))));
    bufp->fullBit(oldp+49,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinB) 
                                  >> 6U))));
    bufp->fullBit(oldp+50,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinB) 
                                  >> 5U))));
    bufp->fullBit(oldp+51,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinB) 
                                  >> 4U))));
    bufp->fullBit(oldp+52,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinB) 
                                  >> 3U))));
    bufp->fullBit(oldp+53,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinB) 
                                  >> 2U))));
    bufp->fullBit(oldp+54,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinB) 
                                  >> 1U))));
    bufp->fullBit(oldp+55,((1U & (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinB))));
    bufp->fullBit(oldp+56,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinA) 
                                  >> 0xfU))));
    bufp->fullBit(oldp+57,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinA) 
                                  >> 0xeU))));
    bufp->fullBit(oldp+58,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinA) 
                                  >> 0xdU))));
    bufp->fullBit(oldp+59,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinA) 
                                  >> 0xcU))));
    bufp->fullBit(oldp+60,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinA) 
                                  >> 0xbU))));
    bufp->fullBit(oldp+61,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinA) 
                                  >> 0xaU))));
    bufp->fullBit(oldp+62,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinA) 
                                  >> 9U))));
    bufp->fullBit(oldp+63,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinA) 
                                  >> 8U))));
    bufp->fullBit(oldp+64,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinA) 
                                  >> 7U))));
    bufp->fullBit(oldp+65,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinA) 
                                  >> 6U))));
    bufp->fullBit(oldp+66,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinA) 
                                  >> 5U))));
    bufp->fullBit(oldp+67,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinA) 
                                  >> 4U))));
    bufp->fullBit(oldp+68,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinA) 
                                  >> 3U))));
    bufp->fullBit(oldp+69,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinA) 
                                  >> 2U))));
    bufp->fullBit(oldp+70,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinA) 
                                  >> 1U))));
    bufp->fullBit(oldp+71,((1U & (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinA))));
    bufp->fullBit(oldp+72,((1U & (~ (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__weB)))));
    bufp->fullBit(oldp+73,((1U & (~ (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__weA)))));
    bufp->fullCData(oldp+74,((3U & (- (IData)((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__weB))))),2);
    bufp->fullCData(oldp+75,((3U & (- (IData)((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__weA))))),2);
    bufp->fullSData(oldp+76,(((0x1000U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrB) 
                                          << 4U)) | 
                              ((0x800U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrB) 
                                          << 4U)) | 
                               ((0x400U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrB) 
                                           << 4U)) 
                                | ((0x200U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrB) 
                                              << 4U)) 
                                   | ((0x100U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrB) 
                                                 << 4U)) 
                                      | ((0x80U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrB) 
                                                   << 4U)) 
                                         | ((0x40U 
                                             & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrB) 
                                                << 4U)) 
                                            | ((0x20U 
                                                & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrB) 
                                                   << 4U)) 
                                               | (0x10U 
                                                  & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrB) 
                                                     << 4U))))))))))),14);
    bufp->fullSData(oldp+77,(((0x1000U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrA) 
                                          << 4U)) | 
                              ((0x800U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrA) 
                                          << 4U)) | 
                               ((0x400U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrA) 
                                           << 4U)) 
                                | ((0x200U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrA) 
                                              << 4U)) 
                                   | ((0x100U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrA) 
                                                 << 4U)) 
                                      | ((0x80U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrA) 
                                                   << 4U)) 
                                         | ((0x40U 
                                             & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrA) 
                                                << 4U)) 
                                            | ((0x20U 
                                                & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrA) 
                                                   << 4U)) 
                                               | (0x10U 
                                                  & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrA) 
                                                     << 4U))))))))))),14);
    bufp->fullSData(oldp+78,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrB),10);
    bufp->fullSData(oldp+79,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrA),10);
    bufp->fullIData(oldp+80,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+81,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+82,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+83,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__unnamedblk5__DOT__i),32);
    bufp->fullIData(oldp+84,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__unnamedblk6__DOT__i),32);
    bufp->fullBit(oldp+85,((1U & (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1))));
    bufp->fullBit(oldp+86,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                  >> 0xaU))));
    bufp->fullBit(oldp+87,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                  >> 0xbU))));
    bufp->fullBit(oldp+88,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                  >> 0xcU))));
    bufp->fullBit(oldp+89,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                  >> 0xdU))));
    bufp->fullBit(oldp+90,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                  >> 0xeU))));
    bufp->fullBit(oldp+91,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                  >> 0xfU))));
    bufp->fullBit(oldp+92,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                  >> 1U))));
    bufp->fullBit(oldp+93,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                  >> 2U))));
    bufp->fullBit(oldp+94,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                  >> 3U))));
    bufp->fullBit(oldp+95,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                  >> 4U))));
    bufp->fullBit(oldp+96,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                  >> 5U))));
    bufp->fullBit(oldp+97,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                  >> 6U))));
    bufp->fullBit(oldp+98,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                  >> 7U))));
    bufp->fullBit(oldp+99,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                  >> 8U))));
    bufp->fullBit(oldp+100,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                   >> 9U))));
    bufp->fullSData(oldp+101,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1),16);
    bufp->fullIData(oldp+102,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__m),32);
    bufp->fullBit(oldp+103,((1U & ((0x2000U & (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1))
                                    ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242653__DOT__s1) 
                                       >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242653__DOT__s1)))));
    bufp->fullCData(oldp+104,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__024103) 
                                << 2U) | (((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b13__05d) 
                                           << 1U) | 
                                          (1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                                 >> 0xdU))))),3);
    bufp->fullCData(oldp+105,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__024103) 
                                << 2U) | ((2U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                                 >> 0xdU)) 
                                          | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b14__05d)))),3);
    bufp->fullCData(oldp+106,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__024103) 
                                << 2U) | ((2U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                                 >> 0xeU)) 
                                          | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b15__05d)))),3);
    bufp->fullCData(oldp+107,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__024103) 
                                << 2U) | ((2U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                                 >> 0xaU)) 
                                          | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b11__05d)))),3);
    bufp->fullCData(oldp+108,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__024103) 
                                << 2U) | ((2U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                                 >> 9U)) 
                                          | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b10__05d)))),3);
    bufp->fullCData(oldp+109,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__024103) 
                                << 2U) | ((2U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                                 >> 8U)) 
                                          | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b9__05d)))),3);
    bufp->fullCData(oldp+110,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__024103) 
                                << 2U) | ((2U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                                 >> 7U)) 
                                          | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b8__05d)))),3);
    bufp->fullCData(oldp+111,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__024103) 
                                << 2U) | ((2U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                                 >> 6U)) 
                                          | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b7__05d)))),3);
    bufp->fullCData(oldp+112,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__024103) 
                                << 2U) | ((2U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                                 >> 5U)) 
                                          | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b6__05d)))),3);
    bufp->fullCData(oldp+113,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__024103) 
                                << 2U) | ((2U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                                 >> 4U)) 
                                          | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b5__05d)))),3);
    bufp->fullCData(oldp+114,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__024103) 
                                << 2U) | ((2U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                                 >> 3U)) 
                                          | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b4__05d)))),3);
    bufp->fullCData(oldp+115,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__024103) 
                                << 2U) | ((2U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                                 >> 2U)) 
                                          | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b3__05d)))),3);
    bufp->fullCData(oldp+116,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__024103) 
                                << 2U) | ((2U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                                 >> 1U)) 
                                          | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b2__05d)))),3);
    bufp->fullCData(oldp+117,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__024103) 
                                << 2U) | ((2U & (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1)) 
                                          | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b1__05d)))),3);
    bufp->fullCData(oldp+118,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__024103) 
                                << 2U) | ((2U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                                 << 1U)) 
                                          | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b0__05d)))),3);
    bufp->fullCData(oldp+119,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__024103) 
                                << 2U) | ((2U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                                 >> 0xbU)) 
                                          | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b12__05d)))),3);
    bufp->fullBit(oldp+120,((1U & (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1))));
    bufp->fullBit(oldp+121,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+122,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+123,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+124,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+125,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                   >> 0xeU))));
    bufp->fullBit(oldp+126,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+127,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                   >> 1U))));
    bufp->fullBit(oldp+128,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                   >> 2U))));
    bufp->fullBit(oldp+129,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                   >> 3U))));
    bufp->fullBit(oldp+130,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                   >> 4U))));
    bufp->fullBit(oldp+131,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                   >> 5U))));
    bufp->fullBit(oldp+132,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                   >> 6U))));
    bufp->fullBit(oldp+133,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                   >> 7U))));
    bufp->fullBit(oldp+134,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                   >> 8U))));
    bufp->fullBit(oldp+135,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                   >> 9U))));
    bufp->fullSData(oldp+136,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1),16);
    bufp->fullIData(oldp+137,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__j),32);
    bufp->fullBit(oldp+138,((1U & ((8U & (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1))
                                    ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242650__DOT__s1) 
                                       >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242650__DOT__s1)))));
    bufp->fullCData(oldp+139,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__02496) 
                                << 2U) | (((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b3__05d) 
                                           << 1U) | 
                                          (1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                                 >> 3U))))),3);
    bufp->fullCData(oldp+140,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__02496) 
                                << 2U) | ((2U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                                 >> 3U)) 
                                          | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b4__05d)))),3);
    bufp->fullCData(oldp+141,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__02496) 
                                << 2U) | ((2U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                                 >> 4U)) 
                                          | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b5__05d)))),3);
    bufp->fullCData(oldp+142,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__02496) 
                                << 2U) | ((2U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                                 >> 1U)) 
                                          | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b2__05d)))),3);
    bufp->fullCData(oldp+143,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__02496) 
                                << 2U) | ((2U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                                 >> 0xbU)) 
                                          | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b12__05d)))),3);
    bufp->fullCData(oldp+144,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__02496) 
                                << 2U) | ((2U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                                 >> 7U)) 
                                          | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b8__05d)))),3);
    bufp->fullCData(oldp+145,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__02496) 
                                << 2U) | ((2U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                                 >> 0xaU)) 
                                          | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b11__05d)))),3);
    bufp->fullCData(oldp+146,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__02496) 
                                << 2U) | ((2U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                                 >> 9U)) 
                                          | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b10__05d)))),3);
    bufp->fullCData(oldp+147,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__02496) 
                                << 2U) | ((2U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                                 >> 8U)) 
                                          | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b9__05d)))),3);
    bufp->fullCData(oldp+148,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__02496) 
                                << 2U) | ((2U & (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1)) 
                                          | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b1__05d)))),3);
    bufp->fullCData(oldp+149,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__02496) 
                                << 2U) | ((2U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                                 << 1U)) 
                                          | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b0__05d)))),3);
    bufp->fullCData(oldp+150,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__02496) 
                                << 2U) | ((2U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                                 >> 6U)) 
                                          | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b7__05d)))),3);
    bufp->fullCData(oldp+151,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__02496) 
                                << 2U) | ((2U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                                 >> 5U)) 
                                          | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b6__05d)))),3);
    bufp->fullCData(oldp+152,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__02496) 
                                << 2U) | ((2U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                                 >> 0xeU)) 
                                          | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b15__05d)))),3);
    bufp->fullCData(oldp+153,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__02496) 
                                << 2U) | ((2U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                                 >> 0xdU)) 
                                          | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b14__05d)))),3);
    bufp->fullCData(oldp+154,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__02496) 
                                << 2U) | ((2U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                                 >> 0xcU)) 
                                          | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b13__05d)))),3);
    bufp->fullBit(oldp+155,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b15__05d)
                                    ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242678__DOT__s1) 
                                       >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242678__DOT__s1)))));
    bufp->fullBit(oldp+156,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b14__05d)
                                    ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242679__DOT__s1) 
                                       >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242679__DOT__s1)))));
    bufp->fullBit(oldp+157,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b13__05d)
                                    ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242680__DOT__s1) 
                                       >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242680__DOT__s1)))));
    bufp->fullBit(oldp+158,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b12__05d)
                                    ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242657__DOT__s1) 
                                       >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242657__DOT__s1)))));
    bufp->fullBit(oldp+159,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b11__05d)
                                    ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242659__DOT__s1) 
                                       >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242659__DOT__s1)))));
    bufp->fullBit(oldp+160,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b10__05d)
                                    ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242660__DOT__s1) 
                                       >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242660__DOT__s1)))));
    bufp->fullBit(oldp+161,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b9__05d)
                                    ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242661__DOT__s1) 
                                       >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242661__DOT__s1)))));
    bufp->fullBit(oldp+162,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b8__05d)
                                    ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242658__DOT__s1) 
                                       >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242658__DOT__s1)))));
    bufp->fullBit(oldp+163,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b7__05d)
                                    ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242664__DOT__s1) 
                                       >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242664__DOT__s1)))));
    bufp->fullBit(oldp+164,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b6__05d)
                                    ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242665__DOT__s1) 
                                       >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242665__DOT__s1)))));
    bufp->fullBit(oldp+165,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b5__05d)
                                    ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242652__DOT__s1) 
                                       >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242652__DOT__s1)))));
    bufp->fullBit(oldp+166,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b4__05d)
                                    ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242651__DOT__s1) 
                                       >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242651__DOT__s1)))));
    bufp->fullBit(oldp+167,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b2__05d)
                                    ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242654__DOT__s1) 
                                       >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242654__DOT__s1)))));
    bufp->fullBit(oldp+168,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b1__05d)
                                    ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242662__DOT__s1) 
                                       >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242662__DOT__s1)))));
    bufp->fullBit(oldp+169,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b0__05d)
                                    ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242663__DOT__s1) 
                                       >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242663__DOT__s1)))));
    bufp->fullBit(oldp+170,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b15__05d)
                                    ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242656__DOT__s1) 
                                       >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242656__DOT__s1)))));
    bufp->fullBit(oldp+171,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b14__05d)
                                    ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242655__DOT__s1) 
                                       >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242655__DOT__s1)))));
    bufp->fullBit(oldp+172,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b12__05d)
                                    ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242681__DOT__s1) 
                                       >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242681__DOT__s1)))));
    bufp->fullBit(oldp+173,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b11__05d)
                                    ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242666__DOT__s1) 
                                       >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242666__DOT__s1)))));
    bufp->fullBit(oldp+174,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b10__05d)
                                    ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242667__DOT__s1) 
                                       >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242667__DOT__s1)))));
    bufp->fullBit(oldp+175,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b9__05d)
                                    ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242668__DOT__s1) 
                                       >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242668__DOT__s1)))));
    bufp->fullBit(oldp+176,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b8__05d)
                                    ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242669__DOT__s1) 
                                       >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242669__DOT__s1)))));
    bufp->fullBit(oldp+177,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b7__05d)
                                    ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242670__DOT__s1) 
                                       >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242670__DOT__s1)))));
    bufp->fullBit(oldp+178,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b6__05d)
                                    ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242671__DOT__s1) 
                                       >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242671__DOT__s1)))));
    bufp->fullBit(oldp+179,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b5__05d)
                                    ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242672__DOT__s1) 
                                       >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242672__DOT__s1)))));
    bufp->fullBit(oldp+180,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b4__05d)
                                    ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242673__DOT__s1) 
                                       >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242673__DOT__s1)))));
    bufp->fullBit(oldp+181,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b3__05d)
                                    ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242674__DOT__s1) 
                                       >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242674__DOT__s1)))));
    bufp->fullBit(oldp+182,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b2__05d)
                                    ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242675__DOT__s1) 
                                       >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242675__DOT__s1)))));
    bufp->fullBit(oldp+183,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b1__05d)
                                    ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242676__DOT__s1) 
                                       >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242676__DOT__s1)))));
    bufp->fullBit(oldp+184,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b0__05d)
                                    ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242677__DOT__s1) 
                                       >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242677__DOT__s1)))));
    bufp->fullCData(oldp+185,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242651__DOT__s1),2);
    bufp->fullCData(oldp+186,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242652__DOT__s1),2);
    bufp->fullCData(oldp+187,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242654__DOT__s1),2);
    bufp->fullCData(oldp+188,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242655__DOT__s1),2);
    bufp->fullCData(oldp+189,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242656__DOT__s1),2);
    bufp->fullCData(oldp+190,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242657__DOT__s1),2);
    bufp->fullCData(oldp+191,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242658__DOT__s1),2);
    bufp->fullCData(oldp+192,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242659__DOT__s1),2);
    bufp->fullCData(oldp+193,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242660__DOT__s1),2);
    bufp->fullCData(oldp+194,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242661__DOT__s1),2);
    bufp->fullCData(oldp+195,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242662__DOT__s1),2);
    bufp->fullCData(oldp+196,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242663__DOT__s1),2);
    bufp->fullCData(oldp+197,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242664__DOT__s1),2);
    bufp->fullCData(oldp+198,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242665__DOT__s1),2);
    bufp->fullCData(oldp+199,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242666__DOT__s1),2);
    bufp->fullCData(oldp+200,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242667__DOT__s1),2);
    bufp->fullCData(oldp+201,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242668__DOT__s1),2);
    bufp->fullCData(oldp+202,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242669__DOT__s1),2);
    bufp->fullCData(oldp+203,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242670__DOT__s1),2);
    bufp->fullCData(oldp+204,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242671__DOT__s1),2);
    bufp->fullCData(oldp+205,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242672__DOT__s1),2);
    bufp->fullCData(oldp+206,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242673__DOT__s1),2);
    bufp->fullCData(oldp+207,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242674__DOT__s1),2);
    bufp->fullCData(oldp+208,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242675__DOT__s1),2);
    bufp->fullCData(oldp+209,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242676__DOT__s1),2);
    bufp->fullCData(oldp+210,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242677__DOT__s1),2);
    bufp->fullCData(oldp+211,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242678__DOT__s1),2);
    bufp->fullCData(oldp+212,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242679__DOT__s1),2);
    bufp->fullCData(oldp+213,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242680__DOT__s1),2);
    bufp->fullCData(oldp+214,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242681__DOT__s1),2);
    bufp->fullSData(oldp+215,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__doutA),16);
    bufp->fullSData(oldp+216,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__doutB),16);
    bufp->fullBit(oldp+217,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b0__05d));
    bufp->fullBit(oldp+218,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b1__05d));
    bufp->fullBit(oldp+219,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b2__05d));
    bufp->fullBit(oldp+220,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b3__05d));
    bufp->fullBit(oldp+221,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b15__05d));
    bufp->fullBit(oldp+222,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b14__05d));
    bufp->fullBit(oldp+223,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b13__05d));
    bufp->fullBit(oldp+224,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b12__05d));
    bufp->fullBit(oldp+225,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b11__05d));
    bufp->fullBit(oldp+226,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b10__05d));
    bufp->fullBit(oldp+227,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b9__05d));
    bufp->fullBit(oldp+228,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b8__05d));
    bufp->fullBit(oldp+229,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b7__05d));
    bufp->fullBit(oldp+230,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b6__05d));
    bufp->fullBit(oldp+231,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b5__05d));
    bufp->fullBit(oldp+232,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b4__05d));
    bufp->fullBit(oldp+233,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b3__05d));
    bufp->fullBit(oldp+234,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b2__05d));
    bufp->fullBit(oldp+235,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b1__05d));
    bufp->fullBit(oldp+236,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b0__05d));
    bufp->fullBit(oldp+237,((1U & (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RPARITY_A1))));
    bufp->fullBit(oldp+238,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RPARITY_A1) 
                                   >> 1U))));
    bufp->fullBit(oldp+239,((1U & (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RPARITY_B1))));
    bufp->fullBit(oldp+240,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RPARITY_B1) 
                                   >> 1U))));
    bufp->fullBit(oldp+241,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b14__05d));
    bufp->fullBit(oldp+242,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b9__05d));
    bufp->fullBit(oldp+243,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b10__05d));
    bufp->fullBit(oldp+244,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b15__05d));
    bufp->fullBit(oldp+245,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__024103));
    bufp->fullBit(oldp+246,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__02496));
    bufp->fullBit(oldp+247,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b11__05d));
    bufp->fullBit(oldp+248,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b12__05d));
    bufp->fullBit(oldp+249,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b5__05d));
    bufp->fullBit(oldp+250,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b6__05d));
    bufp->fullBit(oldp+251,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b4__05d));
    bufp->fullBit(oldp+252,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b8__05d));
    bufp->fullBit(oldp+253,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b13__05d));
    bufp->fullBit(oldp+254,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b7__05d));
    bufp->fullCData(oldp+255,(((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__02496)
                                ? 0xaU : 0xcU)),4);
    bufp->fullCData(oldp+256,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242650__DOT__s1),2);
    bufp->fullCData(oldp+257,(((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__02496)
                                ? 0xcU : 0xaU)),4);
    bufp->fullCData(oldp+258,(((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__024103)
                                ? 0xaU : 0xcU)),4);
    bufp->fullCData(oldp+259,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242653__DOT__s1),2);
    bufp->fullCData(oldp+260,(((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__024103)
                                ? 0xcU : 0xaU)),4);
    bufp->fullCData(oldp+261,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RPARITY_A1),2);
    bufp->fullCData(oldp+262,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RPARITY_B1),2);
    bufp->fullIData(oldp+263,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__parity_RAM1__DOT__i_p),32);
    bufp->fullIData(oldp+264,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__parity_RAM1__DOT__j_p),32);
    bufp->fullIData(oldp+265,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__parity_RAM1__DOT__k_p),32);
    bufp->fullIData(oldp+266,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__parity_RAM1__DOT__m_p),32);
    bufp->fullBit(oldp+267,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__clk));
    bufp->fullSData(oldp+268,(((0x8000U & (((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b15__05d)
                                             ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242656__DOT__s1) 
                                                >> 1U)
                                             : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242656__DOT__s1)) 
                                           << 0xfU)) 
                               | ((0x4000U & (((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b14__05d)
                                                ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242655__DOT__s1) 
                                                   >> 1U)
                                                : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242655__DOT__s1)) 
                                              << 0xeU)) 
                                  | ((0x2000U & (((0x2000U 
                                                   & (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1))
                                                   ? 
                                                  ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242653__DOT__s1) 
                                                   >> 1U)
                                                   : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242653__DOT__s1)) 
                                                 << 0xdU)) 
                                     | ((0x1000U & 
                                         (((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b12__05d)
                                            ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242681__DOT__s1) 
                                               >> 1U)
                                            : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242681__DOT__s1)) 
                                          << 0xcU)) 
                                        | ((0x800U 
                                            & (((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b11__05d)
                                                 ? 
                                                ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242666__DOT__s1) 
                                                 >> 1U)
                                                 : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242666__DOT__s1)) 
                                               << 0xbU)) 
                                           | ((0x400U 
                                               & (((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b10__05d)
                                                    ? 
                                                   ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242667__DOT__s1) 
                                                    >> 1U)
                                                    : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242667__DOT__s1)) 
                                                  << 0xaU)) 
                                              | ((0x200U 
                                                  & (((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b9__05d)
                                                       ? 
                                                      ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242668__DOT__s1) 
                                                       >> 1U)
                                                       : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242668__DOT__s1)) 
                                                     << 9U)) 
                                                 | ((0x100U 
                                                     & (((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b8__05d)
                                                          ? 
                                                         ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242669__DOT__s1) 
                                                          >> 1U)
                                                          : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242669__DOT__s1)) 
                                                        << 8U)) 
                                                    | ((0x80U 
                                                        & (((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b7__05d)
                                                             ? 
                                                            ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242670__DOT__s1) 
                                                             >> 1U)
                                                             : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242670__DOT__s1)) 
                                                           << 7U)) 
                                                       | ((0x40U 
                                                           & (((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b6__05d)
                                                                ? 
                                                               ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242671__DOT__s1) 
                                                                >> 1U)
                                                                : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242671__DOT__s1)) 
                                                              << 6U)) 
                                                          | ((0x20U 
                                                              & (((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b5__05d)
                                                                   ? 
                                                                  ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242672__DOT__s1) 
                                                                   >> 1U)
                                                                   : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242672__DOT__s1)) 
                                                                 << 5U)) 
                                                             | ((0x10U 
                                                                 & (((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b4__05d)
                                                                      ? 
                                                                     ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242673__DOT__s1) 
                                                                      >> 1U)
                                                                      : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242673__DOT__s1)) 
                                                                    << 4U)) 
                                                                | ((8U 
                                                                    & (((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b3__05d)
                                                                         ? 
                                                                        ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242674__DOT__s1) 
                                                                         >> 1U)
                                                                         : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242674__DOT__s1)) 
                                                                       << 3U)) 
                                                                   | ((4U 
                                                                       & (((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b2__05d)
                                                                            ? 
                                                                           ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242675__DOT__s1) 
                                                                            >> 1U)
                                                                            : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242675__DOT__s1)) 
                                                                          << 2U)) 
                                                                      | ((2U 
                                                                          & (((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b1__05d)
                                                                               ? 
                                                                              ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242676__DOT__s1) 
                                                                               >> 1U)
                                                                               : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242676__DOT__s1)) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b0__05d)
                                                                                ? 
                                                                               ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242677__DOT__s1) 
                                                                                >> 1U)
                                                                                : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242677__DOT__s1))))))))))))))))))),16);
    bufp->fullSData(oldp+269,(((0x8000U & (((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b15__05d)
                                             ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242678__DOT__s1) 
                                                >> 1U)
                                             : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242678__DOT__s1)) 
                                           << 0xfU)) 
                               | ((0x4000U & (((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b14__05d)
                                                ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242679__DOT__s1) 
                                                   >> 1U)
                                                : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242679__DOT__s1)) 
                                              << 0xeU)) 
                                  | ((0x2000U & (((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b13__05d)
                                                   ? 
                                                  ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242680__DOT__s1) 
                                                   >> 1U)
                                                   : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242680__DOT__s1)) 
                                                 << 0xdU)) 
                                     | ((0x1000U & 
                                         (((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b12__05d)
                                            ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242657__DOT__s1) 
                                               >> 1U)
                                            : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242657__DOT__s1)) 
                                          << 0xcU)) 
                                        | ((0x800U 
                                            & (((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b11__05d)
                                                 ? 
                                                ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242659__DOT__s1) 
                                                 >> 1U)
                                                 : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242659__DOT__s1)) 
                                               << 0xbU)) 
                                           | ((0x400U 
                                               & (((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b10__05d)
                                                    ? 
                                                   ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242660__DOT__s1) 
                                                    >> 1U)
                                                    : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242660__DOT__s1)) 
                                                  << 0xaU)) 
                                              | ((0x200U 
                                                  & (((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b9__05d)
                                                       ? 
                                                      ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242661__DOT__s1) 
                                                       >> 1U)
                                                       : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242661__DOT__s1)) 
                                                     << 9U)) 
                                                 | ((0x100U 
                                                     & (((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b8__05d)
                                                          ? 
                                                         ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242658__DOT__s1) 
                                                          >> 1U)
                                                          : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242658__DOT__s1)) 
                                                        << 8U)) 
                                                    | ((0x80U 
                                                        & (((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b7__05d)
                                                             ? 
                                                            ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242664__DOT__s1) 
                                                             >> 1U)
                                                             : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242664__DOT__s1)) 
                                                           << 7U)) 
                                                       | ((0x40U 
                                                           & (((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b6__05d)
                                                                ? 
                                                               ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242665__DOT__s1) 
                                                                >> 1U)
                                                                : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242665__DOT__s1)) 
                                                              << 6U)) 
                                                          | ((0x20U 
                                                              & (((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b5__05d)
                                                                   ? 
                                                                  ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242652__DOT__s1) 
                                                                   >> 1U)
                                                                   : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242652__DOT__s1)) 
                                                                 << 5U)) 
                                                             | ((0x10U 
                                                                 & (((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b4__05d)
                                                                      ? 
                                                                     ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242651__DOT__s1) 
                                                                      >> 1U)
                                                                      : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242651__DOT__s1)) 
                                                                    << 4U)) 
                                                                | ((8U 
                                                                    & (((8U 
                                                                         & (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1))
                                                                         ? 
                                                                        ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242650__DOT__s1) 
                                                                         >> 1U)
                                                                         : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242650__DOT__s1)) 
                                                                       << 3U)) 
                                                                   | ((4U 
                                                                       & (((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b2__05d)
                                                                            ? 
                                                                           ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242654__DOT__s1) 
                                                                            >> 1U)
                                                                            : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242654__DOT__s1)) 
                                                                          << 2U)) 
                                                                      | ((2U 
                                                                          & (((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b1__05d)
                                                                               ? 
                                                                              ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242662__DOT__s1) 
                                                                               >> 1U)
                                                                               : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242662__DOT__s1)) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b0__05d)
                                                                                ? 
                                                                               ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242663__DOT__s1) 
                                                                                >> 1U)
                                                                                : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242663__DOT__s1))))))))))))))))))),16);
    bufp->fullIData(oldp+270,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__i),32);
    bufp->fullIData(oldp+271,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__k),32);
    bufp->fullBit(oldp+272,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a_write_flag));
    bufp->fullBit(oldp+273,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b_write_flag));
    bufp->fullBit(oldp+274,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a_read_flag));
    bufp->fullBit(oldp+275,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b_read_flag));
    bufp->fullSData(oldp+276,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a_address),10);
    bufp->fullSData(oldp+277,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b_address),10);
    bufp->fullBit(oldp+278,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a2_write_flag));
    bufp->fullBit(oldp+279,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b2_write_flag));
    bufp->fullBit(oldp+280,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a2_read_flag));
    bufp->fullBit(oldp+281,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b2_read_flag));
}
