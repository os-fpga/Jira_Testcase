// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_sc.h"
#include "Vco_sim_adder_verilator__Syms.h"


VL_ATTR_COLD void Vco_sim_adder_verilator___024root__trace_init_sub__TOP__0(Vco_sim_adder_verilator___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_adder_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_adder_verilator___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("co_sim_adder_verilator ");
    tracep->declBit(c+20,"clock",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1,"reset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2,"a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+3,"b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+14,"sum",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+31,"mismatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->pushNamePrefix("inst ");
    tracep->declBit(c+20,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"a[0]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+5,"a[1]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+6,"a[2]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+7,"a[3]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+8,"b[0]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9,"b[1]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+10,"b[2]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"b[3]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+15,"sum[0]",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+16,"sum[1]",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"sum[2]",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"sum[3]",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"sum[4]",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"clock_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"reset_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"a[0]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+5,"a[1]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+6,"a[2]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+7,"a[3]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+8,"b[0]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9,"b[1]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+10,"b[2]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"b[3]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+15,"dffre_sum[0]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+16,"dffre_sum[1]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"dffre_sum[2]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"dffre_sum[3]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"dffre_sum[4]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"lut_$true_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"lut_$abc$1007$abc$524$li1_li1_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+12,"lut_$abc$1007$abc$524$li0_li0_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+22,"lut_$abc$1007$new_new_n18___output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"lut_$abc$1007$abc$524$li2_li2_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+24,"lut_$abc$1007$abc$524$li4_li4_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"lut_$abc$1007$abc$524$li3_li3_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"dffre_sum[2]_clock_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"dffre_sum[0]_clock_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"dffre_sum[3]_clock_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"dffre_sum[1]_clock_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"dffre_sum[4]_clock_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"lut_$abc$1007$abc$524$li2_li2_input_0_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"lut_$abc$1007$abc$524$li0_li0_input_0_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"lut_$abc$1007$abc$524$li3_li3_input_0_5",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"lut_$abc$1007$abc$524$li1_li1_input_0_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"lut_$abc$1007$abc$524$li4_li4_input_0_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"lut_$abc$1007$abc$524$li0_li0_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"lut_$abc$1007$abc$524$li1_li1_input_0_4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"lut_$abc$1007$new_new_n18___input_0_4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+5,"lut_$abc$1007$abc$524$li1_li1_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+5,"lut_$abc$1007$new_new_n18___input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+6,"lut_$abc$1007$abc$524$li2_li2_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+6,"lut_$abc$1007$abc$524$li3_li3_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+6,"lut_$abc$1007$abc$524$li4_li4_input_0_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+7,"lut_$abc$1007$abc$524$li3_li3_input_0_3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+7,"lut_$abc$1007$abc$524$li4_li4_input_0_5",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+8,"lut_$abc$1007$abc$524$li0_li0_input_0_3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+8,"lut_$abc$1007$abc$524$li1_li1_input_0_3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+8,"lut_$abc$1007$new_new_n18___input_0_3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9,"lut_$abc$1007$abc$524$li1_li1_input_0_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9,"lut_$abc$1007$new_new_n18___input_0_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+10,"lut_$abc$1007$abc$524$li2_li2_input_0_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+10,"lut_$abc$1007$abc$524$li3_li3_input_0_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+10,"lut_$abc$1007$abc$524$li4_li4_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"lut_$abc$1007$abc$524$li3_li3_input_0_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"lut_$abc$1007$abc$524$li4_li4_input_0_3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+15,"sum[0]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+16,"sum[1]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"sum[2]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"sum[3]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"sum[4]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"dffre_sum[2]_input_1_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"dffre_sum[2]_input_2_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"dffre_sum[0]_input_1_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"dffre_sum[0]_input_2_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"dffre_sum[3]_input_1_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"dffre_sum[3]_input_2_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"dffre_sum[1]_input_1_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"dffre_sum[1]_input_2_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"dffre_sum[4]_input_1_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"dffre_sum[4]_input_2_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"dffre_sum[1]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+12,"dffre_sum[0]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+22,"lut_$abc$1007$abc$524$li2_li2_input_0_4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+22,"lut_$abc$1007$abc$524$li3_li3_input_0_4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+22,"lut_$abc$1007$abc$524$li4_li4_input_0_4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"dffre_sum[2]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+24,"dffre_sum[4]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"dffre_sum[3]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("dffre_sum[0] ");
    tracep->declBit(c+12,"D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"R",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"E",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"C",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+15,"Q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+33,"INIT_VALUE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dffre_sum[1] ");
    tracep->declBit(c+21,"D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"R",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"E",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"C",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+16,"Q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+33,"INIT_VALUE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dffre_sum[2] ");
    tracep->declBit(c+23,"D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"R",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"E",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"C",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"Q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+33,"INIT_VALUE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dffre_sum[3] ");
    tracep->declBit(c+25,"D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"R",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"E",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"C",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"Q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+33,"INIT_VALUE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dffre_sum[4] ");
    tracep->declBit(c+24,"D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"R",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"E",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"C",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"Q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+33,"INIT_VALUE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lut_$abc$1007$abc$524$li0_li0 ");
    tracep->declBus(c+34,"K",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+35,"LUT_MASK",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+13,"in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+12,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lut_$abc$1007$abc$524$li1_li1 ");
    tracep->declBus(c+34,"K",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+36,"LUT_MASK",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+26,"in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+21,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lut_$abc$1007$abc$524$li2_li2 ");
    tracep->declBus(c+34,"K",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+37,"LUT_MASK",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+27,"in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+23,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lut_$abc$1007$abc$524$li3_li3 ");
    tracep->declBus(c+38,"K",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declQuad(c+39,"LUT_MASK",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 63,0);
    tracep->declBus(c+28,"in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+25,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lut_$abc$1007$abc$524$li4_li4 ");
    tracep->declBus(c+38,"K",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declQuad(c+41,"LUT_MASK",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 63,0);
    tracep->declBus(c+29,"in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+24,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lut_$abc$1007$new_new_n18__ ");
    tracep->declBus(c+34,"K",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+43,"LUT_MASK",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+30,"in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+22,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lut_$true ");
    tracep->declBus(c+34,"K",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+44,"LUT_MASK",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+45,"in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+32,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_a[0]_output_0_0_to_lut_$abc$1007$abc$524$li0_li0_input_0_0 ");
    tracep->declBit(c+4,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_a[0]_output_0_0_to_lut_$abc$1007$abc$524$li1_li1_input_0_4 ");
    tracep->declBit(c+4,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_a[0]_output_0_0_to_lut_$abc$1007$new_new_n18___input_0_4 ");
    tracep->declBit(c+4,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_a[1]_output_0_0_to_lut_$abc$1007$abc$524$li1_li1_input_0_0 ");
    tracep->declBit(c+5,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+5,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_a[1]_output_0_0_to_lut_$abc$1007$new_new_n18___input_0_0 ");
    tracep->declBit(c+5,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+5,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_a[2]_output_0_0_to_lut_$abc$1007$abc$524$li2_li2_input_0_0 ");
    tracep->declBit(c+6,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+6,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_a[2]_output_0_0_to_lut_$abc$1007$abc$524$li3_li3_input_0_0 ");
    tracep->declBit(c+6,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+6,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_a[2]_output_0_0_to_lut_$abc$1007$abc$524$li4_li4_input_0_2 ");
    tracep->declBit(c+6,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+6,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_a[3]_output_0_0_to_lut_$abc$1007$abc$524$li3_li3_input_0_3 ");
    tracep->declBit(c+7,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+7,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_a[3]_output_0_0_to_lut_$abc$1007$abc$524$li4_li4_input_0_5 ");
    tracep->declBit(c+7,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+7,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_b[0]_output_0_0_to_lut_$abc$1007$abc$524$li0_li0_input_0_3 ");
    tracep->declBit(c+8,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+8,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_b[0]_output_0_0_to_lut_$abc$1007$abc$524$li1_li1_input_0_3 ");
    tracep->declBit(c+8,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+8,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_b[0]_output_0_0_to_lut_$abc$1007$new_new_n18___input_0_3 ");
    tracep->declBit(c+8,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+8,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_b[1]_output_0_0_to_lut_$abc$1007$abc$524$li1_li1_input_0_1 ");
    tracep->declBit(c+9,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_b[1]_output_0_0_to_lut_$abc$1007$new_new_n18___input_0_1 ");
    tracep->declBit(c+9,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_b[2]_output_0_0_to_lut_$abc$1007$abc$524$li2_li2_input_0_2 ");
    tracep->declBit(c+10,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+10,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_b[2]_output_0_0_to_lut_$abc$1007$abc$524$li3_li3_input_0_2 ");
    tracep->declBit(c+10,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+10,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_b[2]_output_0_0_to_lut_$abc$1007$abc$524$li4_li4_input_0_0 ");
    tracep->declBit(c+10,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+10,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_b[3]_output_0_0_to_lut_$abc$1007$abc$524$li3_li3_input_0_1 ");
    tracep->declBit(c+11,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_b[3]_output_0_0_to_lut_$abc$1007$abc$524$li4_li4_input_0_3 ");
    tracep->declBit(c+11,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_clock_output_0_0_to_dffre_sum[0]_clock_0_0 ");
    tracep->declBit(c+20,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_clock_output_0_0_to_dffre_sum[1]_clock_0_0 ");
    tracep->declBit(c+20,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_clock_output_0_0_to_dffre_sum[2]_clock_0_0 ");
    tracep->declBit(c+20,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_clock_output_0_0_to_dffre_sum[3]_clock_0_0 ");
    tracep->declBit(c+20,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_clock_output_0_0_to_dffre_sum[4]_clock_0_0 ");
    tracep->declBit(c+20,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_dffre_sum[0]_output_0_0_to_sum[0]_input_0_0 ");
    tracep->declBit(c+15,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+15,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_dffre_sum[1]_output_0_0_to_sum[1]_input_0_0 ");
    tracep->declBit(c+16,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+16,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_dffre_sum[2]_output_0_0_to_sum[2]_input_0_0 ");
    tracep->declBit(c+17,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_dffre_sum[3]_output_0_0_to_sum[3]_input_0_0 ");
    tracep->declBit(c+18,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_dffre_sum[4]_output_0_0_to_sum[4]_input_0_0 ");
    tracep->declBit(c+19,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_lut_$abc$1007$abc$524$li0_li0_output_0_0_to_dffre_sum[0]_input_0_0 ");
    tracep->declBit(c+12,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+12,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_lut_$abc$1007$abc$524$li1_li1_output_0_0_to_dffre_sum[1]_input_0_0 ");
    tracep->declBit(c+21,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_lut_$abc$1007$abc$524$li2_li2_output_0_0_to_dffre_sum[2]_input_0_0 ");
    tracep->declBit(c+23,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_lut_$abc$1007$abc$524$li3_li3_output_0_0_to_dffre_sum[3]_input_0_0 ");
    tracep->declBit(c+25,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_lut_$abc$1007$abc$524$li4_li4_output_0_0_to_dffre_sum[4]_input_0_0 ");
    tracep->declBit(c+24,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+24,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_lut_$abc$1007$new_new_n18___output_0_0_to_lut_$abc$1007$abc$524$li2_li2_input_0_4 ");
    tracep->declBit(c+22,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+22,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_lut_$abc$1007$new_new_n18___output_0_0_to_lut_$abc$1007$abc$524$li3_li3_input_0_4 ");
    tracep->declBit(c+22,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+22,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_lut_$abc$1007$new_new_n18___output_0_0_to_lut_$abc$1007$abc$524$li4_li4_input_0_4 ");
    tracep->declBit(c+22,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+22,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_lut_$true_output_0_0_to_dffre_sum[0]_input_1_0 ");
    tracep->declBit(c+32,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_lut_$true_output_0_0_to_dffre_sum[0]_input_2_0 ");
    tracep->declBit(c+32,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_lut_$true_output_0_0_to_dffre_sum[1]_input_1_0 ");
    tracep->declBit(c+32,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_lut_$true_output_0_0_to_dffre_sum[1]_input_2_0 ");
    tracep->declBit(c+32,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_lut_$true_output_0_0_to_dffre_sum[2]_input_1_0 ");
    tracep->declBit(c+32,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_lut_$true_output_0_0_to_dffre_sum[2]_input_2_0 ");
    tracep->declBit(c+32,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_lut_$true_output_0_0_to_dffre_sum[3]_input_1_0 ");
    tracep->declBit(c+32,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_lut_$true_output_0_0_to_dffre_sum[3]_input_2_0 ");
    tracep->declBit(c+32,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_lut_$true_output_0_0_to_dffre_sum[4]_input_1_0 ");
    tracep->declBit(c+32,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_lut_$true_output_0_0_to_dffre_sum[4]_input_2_0 ");
    tracep->declBit(c+32,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_reset_output_0_0_to_lut_$abc$1007$abc$524$li0_li0_input_0_2 ");
    tracep->declBit(c+1,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_reset_output_0_0_to_lut_$abc$1007$abc$524$li1_li1_input_0_2 ");
    tracep->declBit(c+1,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_reset_output_0_0_to_lut_$abc$1007$abc$524$li2_li2_input_0_1 ");
    tracep->declBit(c+1,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_reset_output_0_0_to_lut_$abc$1007$abc$524$li3_li3_input_0_5 ");
    tracep->declBit(c+1,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_reset_output_0_0_to_lut_$abc$1007$abc$524$li4_li4_input_0_1 ");
    tracep->declBit(c+1,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vco_sim_adder_verilator___024root__trace_init_top(Vco_sim_adder_verilator___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_adder_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_adder_verilator___024root__trace_init_top\n"); );
    // Body
    Vco_sim_adder_verilator___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vco_sim_adder_verilator___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vco_sim_adder_verilator___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vco_sim_adder_verilator___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vco_sim_adder_verilator___024root__trace_register(Vco_sim_adder_verilator___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_adder_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_adder_verilator___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vco_sim_adder_verilator___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vco_sim_adder_verilator___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vco_sim_adder_verilator___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vco_sim_adder_verilator___024root__trace_full_sub_0(Vco_sim_adder_verilator___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vco_sim_adder_verilator___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_adder_verilator___024root__trace_full_top_0\n"); );
    // Init
    Vco_sim_adder_verilator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vco_sim_adder_verilator___024root*>(voidSelf);
    Vco_sim_adder_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vco_sim_adder_verilator___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vco_sim_adder_verilator___024root__trace_full_sub_0(Vco_sim_adder_verilator___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_adder_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_adder_verilator___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->co_sim_adder_verilator__DOT__reset));
    bufp->fullCData(oldp+2,(vlSelf->co_sim_adder_verilator__DOT__a),4);
    bufp->fullCData(oldp+3,(vlSelf->co_sim_adder_verilator__DOT__b),4);
    bufp->fullBit(oldp+4,((1U & ((IData)(vlSelf->co_sim_adder_verilator__DOT__b) 
                                 >> 3U))));
    bufp->fullBit(oldp+5,((1U & ((IData)(vlSelf->co_sim_adder_verilator__DOT__b) 
                                 >> 2U))));
    bufp->fullBit(oldp+6,((1U & ((IData)(vlSelf->co_sim_adder_verilator__DOT__b) 
                                 >> 1U))));
    bufp->fullBit(oldp+7,((1U & (IData)(vlSelf->co_sim_adder_verilator__DOT__b))));
    bufp->fullBit(oldp+8,((1U & ((IData)(vlSelf->co_sim_adder_verilator__DOT__a) 
                                 >> 3U))));
    bufp->fullBit(oldp+9,((1U & ((IData)(vlSelf->co_sim_adder_verilator__DOT__a) 
                                 >> 2U))));
    bufp->fullBit(oldp+10,((1U & ((IData)(vlSelf->co_sim_adder_verilator__DOT__a) 
                                  >> 1U))));
    bufp->fullBit(oldp+11,((1U & (IData)(vlSelf->co_sim_adder_verilator__DOT__a))));
    bufp->fullBit(oldp+12,((1U & (0x102U >> ((8U & (IData)(vlSelf->co_sim_adder_verilator__DOT__a)) 
                                             | (((IData)(vlSelf->co_sim_adder_verilator__DOT__reset) 
                                                 << 2U) 
                                                | (1U 
                                                   & ((IData)(vlSelf->co_sim_adder_verilator__DOT__b) 
                                                      >> 3U))))))));
    bufp->fullCData(oldp+13,(((8U & (IData)(vlSelf->co_sim_adder_verilator__DOT__a)) 
                              | (((IData)(vlSelf->co_sim_adder_verilator__DOT__reset) 
                                  << 2U) | (1U & ((IData)(vlSelf->co_sim_adder_verilator__DOT__b) 
                                                  >> 3U))))),5);
    bufp->fullCData(oldp+14,((((IData)(vlSelf->co_sim_adder_verilator__DOT__inst__DOT__dffre_sum__05b0__05d_output_0_0) 
                               << 4U) | (((IData)(vlSelf->co_sim_adder_verilator__DOT__inst__DOT__dffre_sum__05b1__05d_output_0_0) 
                                          << 3U) | 
                                         (((IData)(vlSelf->co_sim_adder_verilator__DOT__inst__DOT__dffre_sum__05b2__05d_output_0_0) 
                                           << 2U) | 
                                          (((IData)(vlSelf->co_sim_adder_verilator__DOT__inst__DOT__dffre_sum__05b3__05d_output_0_0) 
                                            << 1U) 
                                           | (IData)(vlSelf->co_sim_adder_verilator__DOT__inst__DOT__dffre_sum__05b4__05d_output_0_0)))))),5);
    bufp->fullBit(oldp+15,(vlSelf->co_sim_adder_verilator__DOT__inst__DOT__dffre_sum__05b0__05d_output_0_0));
    bufp->fullBit(oldp+16,(vlSelf->co_sim_adder_verilator__DOT__inst__DOT__dffre_sum__05b1__05d_output_0_0));
    bufp->fullBit(oldp+17,(vlSelf->co_sim_adder_verilator__DOT__inst__DOT__dffre_sum__05b2__05d_output_0_0));
    bufp->fullBit(oldp+18,(vlSelf->co_sim_adder_verilator__DOT__inst__DOT__dffre_sum__05b3__05d_output_0_0));
    bufp->fullBit(oldp+19,(vlSelf->co_sim_adder_verilator__DOT__inst__DOT__dffre_sum__05b4__05d_output_0_0));
    bufp->fullBit(oldp+20,(vlSelf->co_sim_adder_verilator__DOT__clock));
    bufp->fullBit(oldp+21,((1U & (0x9060606U >> ((0x10U 
                                                  & ((IData)(vlSelf->co_sim_adder_verilator__DOT__b) 
                                                     << 1U)) 
                                                 | ((8U 
                                                     & (IData)(vlSelf->co_sim_adder_verilator__DOT__a)) 
                                                    | (((IData)(vlSelf->co_sim_adder_verilator__DOT__reset) 
                                                        << 2U) 
                                                       | (IData)(vlSelf->__VdfgTmp_hcfa82f7a__0))))))));
    bufp->fullBit(oldp+22,((1U & (0xe080808U >> (IData)(vlSelf->co_sim_adder_verilator__DOT__inst__DOT____Vcellinp__lut___024abc__0241007__024new_new_n18___05F__in)))));
    bufp->fullBit(oldp+23,((1U & (0x210012U >> ((0x10U 
                                                 & ((0xe080808U 
                                                     >> (IData)(vlSelf->co_sim_adder_verilator__DOT__inst__DOT____Vcellinp__lut___024abc__0241007__024new_new_n18___05F__in)) 
                                                    << 4U)) 
                                                | ((4U 
                                                    & ((IData)(vlSelf->co_sim_adder_verilator__DOT__a) 
                                                       << 1U)) 
                                                   | (((IData)(vlSelf->co_sim_adder_verilator__DOT__reset) 
                                                       << 1U) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->co_sim_adder_verilator__DOT__b) 
                                                            >> 1U)))))))));
    bufp->fullBit(oldp+24,((1U & (IData)((0x3332332032002000ULL 
                                          >> ((0x20U 
                                               & ((IData)(vlSelf->co_sim_adder_verilator__DOT__b) 
                                                  << 5U)) 
                                              | ((0x10U 
                                                  & ((0xe080808U 
                                                      >> (IData)(vlSelf->co_sim_adder_verilator__DOT__inst__DOT____Vcellinp__lut___024abc__0241007__024new_new_n18___05F__in)) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((IData)(vlSelf->co_sim_adder_verilator__DOT__a) 
                                                        << 3U)) 
                                                    | ((4U 
                                                        & ((IData)(vlSelf->co_sim_adder_verilator__DOT__b) 
                                                           << 1U)) 
                                                       | (((IData)(vlSelf->co_sim_adder_verilator__DOT__reset) 
                                                           << 1U) 
                                                          | (1U 
                                                             & ((IData)(vlSelf->co_sim_adder_verilator__DOT__a) 
                                                                >> 1U))))))))))));
    bufp->fullBit(oldp+25,((1U & (IData)((0xc936936cULL 
                                          >> (((IData)(vlSelf->co_sim_adder_verilator__DOT__reset) 
                                               << 5U) 
                                              | ((0x10U 
                                                  & ((0xe080808U 
                                                      >> (IData)(vlSelf->co_sim_adder_verilator__DOT__inst__DOT____Vcellinp__lut___024abc__0241007__024new_new_n18___05F__in)) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((IData)(vlSelf->co_sim_adder_verilator__DOT__b) 
                                                        << 3U)) 
                                                    | ((6U 
                                                        & ((IData)(vlSelf->co_sim_adder_verilator__DOT__a) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & ((IData)(vlSelf->co_sim_adder_verilator__DOT__b) 
                                                             >> 1U)))))))))));
    bufp->fullCData(oldp+26,(((0x10U & ((IData)(vlSelf->co_sim_adder_verilator__DOT__b) 
                                        << 1U)) | (
                                                   (8U 
                                                    & (IData)(vlSelf->co_sim_adder_verilator__DOT__a)) 
                                                   | (((IData)(vlSelf->co_sim_adder_verilator__DOT__reset) 
                                                       << 2U) 
                                                      | (IData)(vlSelf->__VdfgTmp_hcfa82f7a__0))))),5);
    bufp->fullCData(oldp+27,(((0x10U & ((0xe080808U 
                                         >> (IData)(vlSelf->co_sim_adder_verilator__DOT__inst__DOT____Vcellinp__lut___024abc__0241007__024new_new_n18___05F__in)) 
                                        << 4U)) | (
                                                   (4U 
                                                    & ((IData)(vlSelf->co_sim_adder_verilator__DOT__a) 
                                                       << 1U)) 
                                                   | (((IData)(vlSelf->co_sim_adder_verilator__DOT__reset) 
                                                       << 1U) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->co_sim_adder_verilator__DOT__b) 
                                                            >> 1U)))))),5);
    bufp->fullCData(oldp+28,((((IData)(vlSelf->co_sim_adder_verilator__DOT__reset) 
                               << 5U) | ((0x10U & (
                                                   (0xe080808U 
                                                    >> (IData)(vlSelf->co_sim_adder_verilator__DOT__inst__DOT____Vcellinp__lut___024abc__0241007__024new_new_n18___05F__in)) 
                                                   << 4U)) 
                                         | ((8U & ((IData)(vlSelf->co_sim_adder_verilator__DOT__b) 
                                                   << 3U)) 
                                            | ((6U 
                                                & ((IData)(vlSelf->co_sim_adder_verilator__DOT__a) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((IData)(vlSelf->co_sim_adder_verilator__DOT__b) 
                                                     >> 1U))))))),6);
    bufp->fullCData(oldp+29,(((0x20U & ((IData)(vlSelf->co_sim_adder_verilator__DOT__b) 
                                        << 5U)) | (
                                                   (0x10U 
                                                    & ((0xe080808U 
                                                        >> (IData)(vlSelf->co_sim_adder_verilator__DOT__inst__DOT____Vcellinp__lut___024abc__0241007__024new_new_n18___05F__in)) 
                                                       << 4U)) 
                                                   | ((8U 
                                                       & ((IData)(vlSelf->co_sim_adder_verilator__DOT__a) 
                                                          << 3U)) 
                                                      | ((4U 
                                                          & ((IData)(vlSelf->co_sim_adder_verilator__DOT__b) 
                                                             << 1U)) 
                                                         | (((IData)(vlSelf->co_sim_adder_verilator__DOT__reset) 
                                                             << 1U) 
                                                            | (1U 
                                                               & ((IData)(vlSelf->co_sim_adder_verilator__DOT__a) 
                                                                  >> 1U)))))))),6);
    bufp->fullCData(oldp+30,(vlSelf->co_sim_adder_verilator__DOT__inst__DOT____Vcellinp__lut___024abc__0241007__024new_new_n18___05F__in),5);
    bufp->fullIData(oldp+31,(0U),32);
    bufp->fullBit(oldp+32,(1U));
    bufp->fullBit(oldp+33,(0U));
    bufp->fullIData(oldp+34,(5U),32);
    bufp->fullIData(oldp+35,(0x102U),32);
    bufp->fullIData(oldp+36,(0x9060606U),32);
    bufp->fullIData(oldp+37,(0x210012U),32);
    bufp->fullIData(oldp+38,(6U),32);
    bufp->fullQData(oldp+39,(0xc936936cULL),64);
    bufp->fullQData(oldp+41,(0x3332332032002000ULL),64);
    bufp->fullIData(oldp+43,(0xe080808U),32);
    bufp->fullIData(oldp+44,(1U),32);
    bufp->fullCData(oldp+45,(0U),5);
}
