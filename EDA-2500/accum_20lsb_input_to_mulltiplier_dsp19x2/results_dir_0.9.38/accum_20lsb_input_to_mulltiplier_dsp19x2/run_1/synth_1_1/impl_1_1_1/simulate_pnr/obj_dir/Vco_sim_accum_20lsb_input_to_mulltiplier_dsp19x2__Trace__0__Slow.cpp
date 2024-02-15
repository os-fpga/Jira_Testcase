// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__Syms.h"


VL_ATTR_COLD void Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root__trace_init_sub__TOP__0(Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2 ");
    tracep->declBus(c+1,"a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 19,0);
    tracep->declBus(c+2,"b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 17,0);
    tracep->declBit(c+140,"clk",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3,"reset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declQuad(c+52,"z_out",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 37,0);
    tracep->declQuad(c+4,"expected_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 37,0);
    tracep->declQuad(c+6,"add_sub_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+8,"add_sub_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+10,"mult",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declBus(c+12,"mismatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->pushNamePrefix("netlist ");
    tracep->declBit(c+13,"a[0]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+14,"a[1]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+15,"a[2]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+16,"a[3]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"a[4]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"a[5]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"a[6]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"a[7]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"a[8]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+22,"a[9]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"a[10]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+24,"a[11]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"a[12]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+26,"a[13]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+27,"a[14]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+28,"a[15]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+29,"a[16]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+30,"a[17]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+31,"a[18]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"a[19]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+33,"b[0]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+34,"b[1]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+35,"b[2]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+36,"b[3]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+37,"b[4]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+38,"b[5]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+39,"b[6]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+40,"b[7]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+41,"b[8]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+42,"b[9]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+43,"b[10]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+44,"b[11]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+45,"b[12]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+46,"b[13]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+47,"b[14]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+48,"b[15]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+49,"b[16]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+50,"b[17]",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+140,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+54,"z_out[0]",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+55,"z_out[1]",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+56,"z_out[2]",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+57,"z_out[3]",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+58,"z_out[4]",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+59,"z_out[5]",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+60,"z_out[6]",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+61,"z_out[7]",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+62,"z_out[8]",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+63,"z_out[9]",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+64,"z_out[10]",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+65,"z_out[11]",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+66,"z_out[12]",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+67,"z_out[13]",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+68,"z_out[14]",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+69,"z_out[15]",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+70,"z_out[16]",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+71,"z_out[17]",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+72,"z_out[18]",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+73,"z_out[19]",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+74,"z_out[20]",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"z_out[21]",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"z_out[22]",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+77,"z_out[23]",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+78,"z_out[24]",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+79,"z_out[25]",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+80,"z_out[26]",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+81,"z_out[27]",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+82,"z_out[28]",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+83,"z_out[29]",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+84,"z_out[30]",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+85,"z_out[31]",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+86,"z_out[32]",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"z_out[33]",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+88,"z_out[34]",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+89,"z_out[35]",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+90,"z_out[36]",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+91,"z_out[37]",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+13,"a[0]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+14,"a[1]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+15,"a[2]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+16,"a[3]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"a[4]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"a[5]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"a[6]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"a[7]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"a[8]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+22,"a[9]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"a[10]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+24,"a[11]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"a[12]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+26,"a[13]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+27,"a[14]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+28,"a[15]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+29,"a[16]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+30,"a[17]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+31,"a[18]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"a[19]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+33,"b[0]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+34,"b[1]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+35,"b[2]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+36,"b[3]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+37,"b[4]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+38,"b[5]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+39,"b[6]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+40,"b[7]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+41,"b[8]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+42,"b[9]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+43,"b[10]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+44,"b[11]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+45,"b[12]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+46,"b[13]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+47,"b[14]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+48,"b[15]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+49,"b[16]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+50,"b[17]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+140,"clk_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"reset_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+54,"RS_DSP_MULTADD_REGIN_z_out[1]_output_0_19",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+55,"RS_DSP_MULTADD_REGIN_z_out[1]_output_0_20",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+56,"RS_DSP_MULTADD_REGIN_z_out[1]_output_0_21",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+57,"RS_DSP_MULTADD_REGIN_z_out[1]_output_0_22",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+58,"RS_DSP_MULTADD_REGIN_z_out[1]_output_0_23",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+59,"RS_DSP_MULTADD_REGIN_z_out[1]_output_0_24",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+60,"RS_DSP_MULTADD_REGIN_z_out[1]_output_0_25",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+61,"RS_DSP_MULTADD_REGIN_z_out[1]_output_0_26",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+62,"RS_DSP_MULTADD_REGIN_z_out[1]_output_0_27",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+63,"RS_DSP_MULTADD_REGIN_z_out[1]_output_0_28",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+64,"RS_DSP_MULTADD_REGIN_z_out[1]_output_0_29",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+65,"RS_DSP_MULTADD_REGIN_z_out[1]_output_0_30",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+66,"RS_DSP_MULTADD_REGIN_z_out[1]_output_0_31",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+67,"RS_DSP_MULTADD_REGIN_z_out[1]_output_0_32",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+68,"RS_DSP_MULTADD_REGIN_z_out[1]_output_0_33",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+69,"RS_DSP_MULTADD_REGIN_z_out[1]_output_0_34",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+70,"RS_DSP_MULTADD_REGIN_z_out[1]_output_0_35",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+71,"RS_DSP_MULTADD_REGIN_z_out[1]_output_0_36",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+72,"RS_DSP_MULTADD_REGIN_z_out[1]_output_0_37",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+73,"RS_DSP_MULTADD_REGIN_z_out[1]_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+74,"RS_DSP_MULTADD_REGIN_z_out[1]_output_0_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"RS_DSP_MULTADD_REGIN_z_out[1]_output_0_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"RS_DSP_MULTADD_REGIN_z_out[1]_output_0_3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+77,"RS_DSP_MULTADD_REGIN_z_out[1]_output_0_4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+78,"RS_DSP_MULTADD_REGIN_z_out[1]_output_0_5",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+79,"RS_DSP_MULTADD_REGIN_z_out[1]_output_0_6",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+80,"RS_DSP_MULTADD_REGIN_z_out[1]_output_0_7",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+81,"RS_DSP_MULTADD_REGIN_z_out[1]_output_0_8",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+82,"RS_DSP_MULTADD_REGIN_z_out[1]_output_0_9",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+83,"RS_DSP_MULTADD_REGIN_z_out[1]_output_0_10",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+84,"RS_DSP_MULTADD_REGIN_z_out[1]_output_0_11",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+85,"RS_DSP_MULTADD_REGIN_z_out[1]_output_0_12",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+86,"RS_DSP_MULTADD_REGIN_z_out[1]_output_0_13",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"RS_DSP_MULTADD_REGIN_z_out[1]_output_0_14",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+88,"RS_DSP_MULTADD_REGIN_z_out[1]_output_0_15",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+89,"RS_DSP_MULTADD_REGIN_z_out[1]_output_0_16",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+90,"RS_DSP_MULTADD_REGIN_z_out[1]_output_0_17",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+91,"RS_DSP_MULTADD_REGIN_z_out[1]_output_0_18",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"lut_$false_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+143,"lut_$true_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+13,"RS_DSP_MULTADD_REGIN_z_out[1]_input_0_10",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+14,"RS_DSP_MULTADD_REGIN_z_out[1]_input_0_11",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+15,"RS_DSP_MULTADD_REGIN_z_out[1]_input_0_12",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+16,"RS_DSP_MULTADD_REGIN_z_out[1]_input_0_13",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"RS_DSP_MULTADD_REGIN_z_out[1]_input_0_14",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"RS_DSP_MULTADD_REGIN_z_out[1]_input_0_15",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"RS_DSP_MULTADD_REGIN_z_out[1]_input_0_16",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"RS_DSP_MULTADD_REGIN_z_out[1]_input_0_17",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"RS_DSP_MULTADD_REGIN_z_out[1]_input_0_18",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+22,"RS_DSP_MULTADD_REGIN_z_out[1]_input_0_19",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"RS_DSP_MULTADD_REGIN_z_out[1]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+24,"RS_DSP_MULTADD_REGIN_z_out[1]_input_0_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"RS_DSP_MULTADD_REGIN_z_out[1]_input_0_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+26,"RS_DSP_MULTADD_REGIN_z_out[1]_input_0_3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+27,"RS_DSP_MULTADD_REGIN_z_out[1]_input_0_4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+28,"RS_DSP_MULTADD_REGIN_z_out[1]_input_0_5",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+29,"RS_DSP_MULTADD_REGIN_z_out[1]_input_0_6",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+30,"RS_DSP_MULTADD_REGIN_z_out[1]_input_0_7",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+31,"RS_DSP_MULTADD_REGIN_z_out[1]_input_0_8",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"RS_DSP_MULTADD_REGIN_z_out[1]_input_0_9",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+33,"RS_DSP_MULTADD_REGIN_z_out[1]_input_1_9",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+34,"RS_DSP_MULTADD_REGIN_z_out[1]_input_1_10",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+35,"RS_DSP_MULTADD_REGIN_z_out[1]_input_1_11",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+36,"RS_DSP_MULTADD_REGIN_z_out[1]_input_1_12",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+37,"RS_DSP_MULTADD_REGIN_z_out[1]_input_1_13",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+38,"RS_DSP_MULTADD_REGIN_z_out[1]_input_1_14",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+39,"RS_DSP_MULTADD_REGIN_z_out[1]_input_1_15",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+40,"RS_DSP_MULTADD_REGIN_z_out[1]_input_1_16",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+41,"RS_DSP_MULTADD_REGIN_z_out[1]_input_1_17",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+42,"RS_DSP_MULTADD_REGIN_z_out[1]_input_1_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+43,"RS_DSP_MULTADD_REGIN_z_out[1]_input_1_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+44,"RS_DSP_MULTADD_REGIN_z_out[1]_input_1_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+45,"RS_DSP_MULTADD_REGIN_z_out[1]_input_1_3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+46,"RS_DSP_MULTADD_REGIN_z_out[1]_input_1_4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+47,"RS_DSP_MULTADD_REGIN_z_out[1]_input_1_5",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+48,"RS_DSP_MULTADD_REGIN_z_out[1]_input_1_6",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+49,"RS_DSP_MULTADD_REGIN_z_out[1]_input_1_7",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+50,"RS_DSP_MULTADD_REGIN_z_out[1]_input_1_8",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+140,"RS_DSP_MULTADD_REGIN_z_out[1]_clock_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"RS_DSP_MULTADD_REGIN_z_out[1]_input_8_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+54,"z_out[0]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+55,"z_out[1]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+56,"z_out[2]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+57,"z_out[3]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+58,"z_out[4]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+59,"z_out[5]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+60,"z_out[6]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+61,"z_out[7]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+62,"z_out[8]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+63,"z_out[9]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+64,"z_out[10]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+65,"z_out[11]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+66,"z_out[12]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+67,"z_out[13]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+68,"z_out[14]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+69,"z_out[15]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+70,"z_out[16]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+71,"z_out[17]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+72,"z_out[18]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+73,"z_out[19]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+74,"z_out[20]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"z_out[21]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"z_out[22]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+77,"z_out[23]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+78,"z_out[24]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+79,"z_out[25]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+80,"z_out[26]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+81,"z_out[27]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+82,"z_out[28]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+83,"z_out[29]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+84,"z_out[30]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+85,"z_out[31]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+86,"z_out[32]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"z_out[33]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+88,"z_out[34]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+89,"z_out[35]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+90,"z_out[36]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+91,"z_out[37]_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"RS_DSP_MULTADD_REGIN_z_out[1]_input_2_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"RS_DSP_MULTADD_REGIN_z_out[1]_input_5_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"RS_DSP_MULTADD_REGIN_z_out[1]_input_5_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"RS_DSP_MULTADD_REGIN_z_out[1]_input_5_3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"RS_DSP_MULTADD_REGIN_z_out[1]_input_5_4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"RS_DSP_MULTADD_REGIN_z_out[1]_input_9_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"RS_DSP_MULTADD_REGIN_z_out[1]_input_10_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"RS_DSP_MULTADD_REGIN_z_out[1]_input_10_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"RS_DSP_MULTADD_REGIN_z_out[1]_input_10_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"RS_DSP_MULTADD_REGIN_z_out[1]_input_10_3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"RS_DSP_MULTADD_REGIN_z_out[1]_input_10_4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"RS_DSP_MULTADD_REGIN_z_out[1]_input_11_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+143,"RS_DSP_MULTADD_REGIN_z_out[1]_input_2_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+143,"RS_DSP_MULTADD_REGIN_z_out[1]_input_2_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+143,"RS_DSP_MULTADD_REGIN_z_out[1]_input_3_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+143,"RS_DSP_MULTADD_REGIN_z_out[1]_input_4_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+143,"RS_DSP_MULTADD_REGIN_z_out[1]_input_5_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+143,"RS_DSP_MULTADD_REGIN_z_out[1]_input_6_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+143,"RS_DSP_MULTADD_REGIN_z_out[1]_input_7_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("RS_DSP_MULTADD_REGIN_z_out[1] ");
    tracep->declArray(c+144,"DSP_MODE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 127,0);
    tracep->declBus(c+148,"COEFF_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 19,0);
    tracep->declBus(c+148,"COEFF_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 19,0);
    tracep->declBus(c+148,"COEFF_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 19,0);
    tracep->declBus(c+148,"COEFF_3",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 19,0);
    tracep->declQuad(c+149,"OUTPUT_REG_EN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 39,0);
    tracep->declBus(c+151,"INPUT_REG_EN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+51,"A",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 19,0);
    tracep->declBus(c+141,"B",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 17,0);
    tracep->declBus(c+152,"ACC_FIR",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declQuad(c+92,"Z",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 37,0);
    tracep->declBus(c+94,"DLY_B",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 17,0);
    tracep->declBit(c+140,"CLK",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"RESET",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+153,"FEEDBACK",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+143,"LOAD_ACC",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"SATURATE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+154,"SHIFT_RIGHT",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+142,"ROUND",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+143,"SUBTRACT",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+143,"UNSIGNED_A",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+143,"UNSIGNED_B",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+95,"subtract_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+96,"acc_fir_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+97,"feedback_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+98,"shift_right_reg1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+99,"shift_right_reg2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+100,"round_reg1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+101,"round_reg2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+102,"saturate_reg1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+103,"saturate_reg2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+104,"load_acc_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+105,"a_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 19,0);
    tracep->declBus(c+106,"b_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 17,0);
    tracep->declBit(c+107,"unsigned_a_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+108,"unsigned_b_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+109,"subtract_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+110,"acc_fir_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+111,"feedback_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+112,"shift_right_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+113,"round_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+114,"saturate_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+115,"load_acc_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+116,"a_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 19,0);
    tracep->declBus(c+117,"b_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 17,0);
    tracep->declBit(c+118,"unsigned_a_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+119,"unsigned_b_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declQuad(c+120,"accumulator",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+122,"add_sub_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+124,"mult_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+126,"add_sub_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+128,"pre_shift",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+130,"shift_right",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+132,"round",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+134,"saturate",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 37,0);
    tracep->declQuad(c+92,"z_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 37,0);
    tracep->declQuad(c+136,"z_out_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 37,0);
    tracep->declBus(c+138,"mult_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 19,0);
    tracep->declBus(c+139,"mult_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 17,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lut_$false ");
    tracep->declBus(c+155,"K",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+156,"LUT_MASK",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+157,"in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+142,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lut_$true ");
    tracep->declBus(c+155,"K",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+158,"LUT_MASK",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+157,"in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+143,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_RS_DSP_MULTADD_REGIN_z_out[1]_output_0_0_to_z_out[19]_input_0_0 ");
    tracep->declBit(c+73,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+73,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_RS_DSP_MULTADD_REGIN_z_out[1]_output_0_10_to_z_out[29]_input_0_0 ");
    tracep->declBit(c+83,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+83,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_RS_DSP_MULTADD_REGIN_z_out[1]_output_0_11_to_z_out[30]_input_0_0 ");
    tracep->declBit(c+84,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+84,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_RS_DSP_MULTADD_REGIN_z_out[1]_output_0_12_to_z_out[31]_input_0_0 ");
    tracep->declBit(c+85,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+85,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_RS_DSP_MULTADD_REGIN_z_out[1]_output_0_13_to_z_out[32]_input_0_0 ");
    tracep->declBit(c+86,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+86,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_RS_DSP_MULTADD_REGIN_z_out[1]_output_0_14_to_z_out[33]_input_0_0 ");
    tracep->declBit(c+87,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_RS_DSP_MULTADD_REGIN_z_out[1]_output_0_15_to_z_out[34]_input_0_0 ");
    tracep->declBit(c+88,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+88,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_RS_DSP_MULTADD_REGIN_z_out[1]_output_0_16_to_z_out[35]_input_0_0 ");
    tracep->declBit(c+89,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+89,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_RS_DSP_MULTADD_REGIN_z_out[1]_output_0_17_to_z_out[36]_input_0_0 ");
    tracep->declBit(c+90,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+90,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_RS_DSP_MULTADD_REGIN_z_out[1]_output_0_18_to_z_out[37]_input_0_0 ");
    tracep->declBit(c+91,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+91,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_RS_DSP_MULTADD_REGIN_z_out[1]_output_0_19_to_z_out[0]_input_0_0 ");
    tracep->declBit(c+54,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+54,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_RS_DSP_MULTADD_REGIN_z_out[1]_output_0_1_to_z_out[20]_input_0_0 ");
    tracep->declBit(c+74,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+74,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_RS_DSP_MULTADD_REGIN_z_out[1]_output_0_20_to_z_out[1]_input_0_0 ");
    tracep->declBit(c+55,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+55,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_RS_DSP_MULTADD_REGIN_z_out[1]_output_0_21_to_z_out[2]_input_0_0 ");
    tracep->declBit(c+56,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+56,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_RS_DSP_MULTADD_REGIN_z_out[1]_output_0_22_to_z_out[3]_input_0_0 ");
    tracep->declBit(c+57,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+57,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_RS_DSP_MULTADD_REGIN_z_out[1]_output_0_23_to_z_out[4]_input_0_0 ");
    tracep->declBit(c+58,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+58,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_RS_DSP_MULTADD_REGIN_z_out[1]_output_0_24_to_z_out[5]_input_0_0 ");
    tracep->declBit(c+59,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+59,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_RS_DSP_MULTADD_REGIN_z_out[1]_output_0_25_to_z_out[6]_input_0_0 ");
    tracep->declBit(c+60,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+60,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_RS_DSP_MULTADD_REGIN_z_out[1]_output_0_26_to_z_out[7]_input_0_0 ");
    tracep->declBit(c+61,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+61,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_RS_DSP_MULTADD_REGIN_z_out[1]_output_0_27_to_z_out[8]_input_0_0 ");
    tracep->declBit(c+62,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+62,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_RS_DSP_MULTADD_REGIN_z_out[1]_output_0_28_to_z_out[9]_input_0_0 ");
    tracep->declBit(c+63,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+63,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_RS_DSP_MULTADD_REGIN_z_out[1]_output_0_29_to_z_out[10]_input_0_0 ");
    tracep->declBit(c+64,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+64,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_RS_DSP_MULTADD_REGIN_z_out[1]_output_0_2_to_z_out[21]_input_0_0 ");
    tracep->declBit(c+75,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_RS_DSP_MULTADD_REGIN_z_out[1]_output_0_30_to_z_out[11]_input_0_0 ");
    tracep->declBit(c+65,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+65,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_RS_DSP_MULTADD_REGIN_z_out[1]_output_0_31_to_z_out[12]_input_0_0 ");
    tracep->declBit(c+66,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+66,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_RS_DSP_MULTADD_REGIN_z_out[1]_output_0_32_to_z_out[13]_input_0_0 ");
    tracep->declBit(c+67,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+67,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_RS_DSP_MULTADD_REGIN_z_out[1]_output_0_33_to_z_out[14]_input_0_0 ");
    tracep->declBit(c+68,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+68,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_RS_DSP_MULTADD_REGIN_z_out[1]_output_0_34_to_z_out[15]_input_0_0 ");
    tracep->declBit(c+69,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+69,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_RS_DSP_MULTADD_REGIN_z_out[1]_output_0_35_to_z_out[16]_input_0_0 ");
    tracep->declBit(c+70,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+70,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_RS_DSP_MULTADD_REGIN_z_out[1]_output_0_36_to_z_out[17]_input_0_0 ");
    tracep->declBit(c+71,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+71,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_RS_DSP_MULTADD_REGIN_z_out[1]_output_0_37_to_z_out[18]_input_0_0 ");
    tracep->declBit(c+72,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+72,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_RS_DSP_MULTADD_REGIN_z_out[1]_output_0_3_to_z_out[22]_input_0_0 ");
    tracep->declBit(c+76,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_RS_DSP_MULTADD_REGIN_z_out[1]_output_0_4_to_z_out[23]_input_0_0 ");
    tracep->declBit(c+77,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+77,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_RS_DSP_MULTADD_REGIN_z_out[1]_output_0_5_to_z_out[24]_input_0_0 ");
    tracep->declBit(c+78,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+78,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_RS_DSP_MULTADD_REGIN_z_out[1]_output_0_6_to_z_out[25]_input_0_0 ");
    tracep->declBit(c+79,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+79,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_RS_DSP_MULTADD_REGIN_z_out[1]_output_0_7_to_z_out[26]_input_0_0 ");
    tracep->declBit(c+80,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+80,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_RS_DSP_MULTADD_REGIN_z_out[1]_output_0_8_to_z_out[27]_input_0_0 ");
    tracep->declBit(c+81,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+81,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_RS_DSP_MULTADD_REGIN_z_out[1]_output_0_9_to_z_out[28]_input_0_0 ");
    tracep->declBit(c+82,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+82,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_a[0]_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_0_10 ");
    tracep->declBit(c+13,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+13,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_a[10]_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_0_0 ");
    tracep->declBit(c+23,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_a[11]_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_0_1 ");
    tracep->declBit(c+24,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+24,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_a[12]_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_0_2 ");
    tracep->declBit(c+25,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_a[13]_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_0_3 ");
    tracep->declBit(c+26,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+26,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_a[14]_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_0_4 ");
    tracep->declBit(c+27,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+27,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_a[15]_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_0_5 ");
    tracep->declBit(c+28,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+28,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_a[16]_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_0_6 ");
    tracep->declBit(c+29,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+29,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_a[17]_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_0_7 ");
    tracep->declBit(c+30,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+30,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_a[18]_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_0_8 ");
    tracep->declBit(c+31,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+31,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_a[19]_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_0_9 ");
    tracep->declBit(c+32,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_a[1]_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_0_11 ");
    tracep->declBit(c+14,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+14,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_a[2]_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_0_12 ");
    tracep->declBit(c+15,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+15,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_a[3]_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_0_13 ");
    tracep->declBit(c+16,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+16,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_a[4]_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_0_14 ");
    tracep->declBit(c+17,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_a[5]_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_0_15 ");
    tracep->declBit(c+18,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_a[6]_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_0_16 ");
    tracep->declBit(c+19,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_a[7]_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_0_17 ");
    tracep->declBit(c+20,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_a[8]_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_0_18 ");
    tracep->declBit(c+21,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_a[9]_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_0_19 ");
    tracep->declBit(c+22,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+22,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_b[0]_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_1_9 ");
    tracep->declBit(c+33,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+33,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_b[10]_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_1_1 ");
    tracep->declBit(c+43,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+43,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_b[11]_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_1_2 ");
    tracep->declBit(c+44,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+44,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_b[12]_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_1_3 ");
    tracep->declBit(c+45,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+45,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_b[13]_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_1_4 ");
    tracep->declBit(c+46,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+46,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_b[14]_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_1_5 ");
    tracep->declBit(c+47,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+47,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_b[15]_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_1_6 ");
    tracep->declBit(c+48,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+48,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_b[16]_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_1_7 ");
    tracep->declBit(c+49,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+49,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_b[17]_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_1_8 ");
    tracep->declBit(c+50,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+50,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_b[1]_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_1_10 ");
    tracep->declBit(c+34,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+34,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_b[2]_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_1_11 ");
    tracep->declBit(c+35,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+35,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_b[3]_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_1_12 ");
    tracep->declBit(c+36,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+36,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_b[4]_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_1_13 ");
    tracep->declBit(c+37,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+37,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_b[5]_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_1_14 ");
    tracep->declBit(c+38,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+38,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_b[6]_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_1_15 ");
    tracep->declBit(c+39,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+39,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_b[7]_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_1_16 ");
    tracep->declBit(c+40,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+40,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_b[8]_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_1_17 ");
    tracep->declBit(c+41,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+41,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_b[9]_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_1_0 ");
    tracep->declBit(c+42,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+42,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_clk_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_clock_0_0 ");
    tracep->declBit(c+140,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+140,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_lut_$false_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_10_0 ");
    tracep->declBit(c+142,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_lut_$false_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_10_1 ");
    tracep->declBit(c+142,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_lut_$false_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_10_2 ");
    tracep->declBit(c+142,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_lut_$false_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_10_3 ");
    tracep->declBit(c+142,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_lut_$false_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_10_4 ");
    tracep->declBit(c+142,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_lut_$false_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_11_0 ");
    tracep->declBit(c+142,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_lut_$false_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_2_2 ");
    tracep->declBit(c+142,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_lut_$false_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_5_0 ");
    tracep->declBit(c+142,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_lut_$false_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_5_2 ");
    tracep->declBit(c+142,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_lut_$false_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_5_3 ");
    tracep->declBit(c+142,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_lut_$false_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_5_4 ");
    tracep->declBit(c+142,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_lut_$false_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_9_0 ");
    tracep->declBit(c+142,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_lut_$true_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_2_0 ");
    tracep->declBit(c+143,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+143,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_lut_$true_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_2_1 ");
    tracep->declBit(c+143,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+143,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_lut_$true_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_3_0 ");
    tracep->declBit(c+143,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+143,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_lut_$true_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_4_0 ");
    tracep->declBit(c+143,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+143,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_lut_$true_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_5_1 ");
    tracep->declBit(c+143,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+143,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_lut_$true_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_6_0 ");
    tracep->declBit(c+143,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+143,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_lut_$true_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_7_0 ");
    tracep->declBit(c+143,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+143,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_reset_output_0_0_to_RS_DSP_MULTADD_REGIN_z_out[1]_input_8_0 ");
    tracep->declBit(c+3,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root__trace_init_top(Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root__trace_init_top\n"); );
    // Body
    Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root__trace_register(Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root__trace_full_sub_0(Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root__trace_full_top_0\n"); );
    // Init
    Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root*>(voidSelf);
    Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root__trace_full_sub_0(Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_accum_20lsb_input_to_mulltiplier_dsp19x2___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_h2a3f5c38__0;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a),20);
    bufp->fullIData(oldp+2,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b),18);
    bufp->fullBit(oldp+3,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__reset));
    bufp->fullQData(oldp+4,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__expected_out),38);
    bufp->fullQData(oldp+6,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_in),64);
    bufp->fullQData(oldp+8,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__add_sub_out),64);
    bufp->fullQData(oldp+10,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mult),64);
    bufp->fullIData(oldp+12,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__mismatch),32);
    bufp->fullBit(oldp+13,((1U & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a)));
    bufp->fullBit(oldp+14,((1U & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                  >> 1U))));
    bufp->fullBit(oldp+15,((1U & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                  >> 2U))));
    bufp->fullBit(oldp+16,((1U & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                  >> 3U))));
    bufp->fullBit(oldp+17,((1U & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                  >> 4U))));
    bufp->fullBit(oldp+18,((1U & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                  >> 5U))));
    bufp->fullBit(oldp+19,((1U & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                  >> 6U))));
    bufp->fullBit(oldp+20,((1U & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                  >> 7U))));
    bufp->fullBit(oldp+21,((1U & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                  >> 8U))));
    bufp->fullBit(oldp+22,((1U & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                  >> 9U))));
    bufp->fullBit(oldp+23,((1U & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                  >> 0xaU))));
    bufp->fullBit(oldp+24,((1U & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                  >> 0xbU))));
    bufp->fullBit(oldp+25,((1U & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                  >> 0xcU))));
    bufp->fullBit(oldp+26,((1U & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                  >> 0xdU))));
    bufp->fullBit(oldp+27,((1U & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                  >> 0xeU))));
    bufp->fullBit(oldp+28,((1U & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                  >> 0xfU))));
    bufp->fullBit(oldp+29,((1U & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                  >> 0x10U))));
    bufp->fullBit(oldp+30,((1U & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                  >> 0x11U))));
    bufp->fullBit(oldp+31,((1U & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                  >> 0x12U))));
    bufp->fullBit(oldp+32,((1U & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                  >> 0x13U))));
    bufp->fullBit(oldp+33,((1U & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b)));
    bufp->fullBit(oldp+34,((1U & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b 
                                  >> 1U))));
    bufp->fullBit(oldp+35,((1U & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b 
                                  >> 2U))));
    bufp->fullBit(oldp+36,((1U & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b 
                                  >> 3U))));
    bufp->fullBit(oldp+37,((1U & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b 
                                  >> 4U))));
    bufp->fullBit(oldp+38,((1U & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b 
                                  >> 5U))));
    bufp->fullBit(oldp+39,((1U & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b 
                                  >> 6U))));
    bufp->fullBit(oldp+40,((1U & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b 
                                  >> 7U))));
    bufp->fullBit(oldp+41,((1U & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b 
                                  >> 8U))));
    bufp->fullBit(oldp+42,((1U & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b 
                                  >> 9U))));
    bufp->fullBit(oldp+43,((1U & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b 
                                  >> 0xaU))));
    bufp->fullBit(oldp+44,((1U & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b 
                                  >> 0xbU))));
    bufp->fullBit(oldp+45,((1U & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b 
                                  >> 0xcU))));
    bufp->fullBit(oldp+46,((1U & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b 
                                  >> 0xdU))));
    bufp->fullBit(oldp+47,((1U & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b 
                                  >> 0xeU))));
    bufp->fullBit(oldp+48,((1U & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b 
                                  >> 0xfU))));
    bufp->fullBit(oldp+49,((1U & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b 
                                  >> 0x10U))));
    bufp->fullBit(oldp+50,((1U & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b 
                                  >> 0x11U))));
    bufp->fullIData(oldp+51,(((0xffc00U & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                           << 0xaU)) 
                              | (0x3ffU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                           >> 0xaU)))),20);
    bufp->fullQData(oldp+52,((((QData)((IData)((0x7ffffU 
                                                & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out)))) 
                               << 0x13U) | (QData)((IData)(
                                                           (0x7ffffU 
                                                            & (IData)(
                                                                      (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                                                       >> 0x13U))))))),38);
    bufp->fullBit(oldp+54,((1U & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                          >> 0x13U)))));
    bufp->fullBit(oldp+55,((1U & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                          >> 0x14U)))));
    bufp->fullBit(oldp+56,((1U & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                          >> 0x15U)))));
    bufp->fullBit(oldp+57,((1U & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                          >> 0x16U)))));
    bufp->fullBit(oldp+58,((1U & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                          >> 0x17U)))));
    bufp->fullBit(oldp+59,((1U & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                          >> 0x18U)))));
    bufp->fullBit(oldp+60,((1U & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                          >> 0x19U)))));
    bufp->fullBit(oldp+61,((1U & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                          >> 0x1aU)))));
    bufp->fullBit(oldp+62,((1U & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                          >> 0x1bU)))));
    bufp->fullBit(oldp+63,((1U & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                          >> 0x1cU)))));
    bufp->fullBit(oldp+64,((1U & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                          >> 0x1dU)))));
    bufp->fullBit(oldp+65,((1U & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                          >> 0x1eU)))));
    bufp->fullBit(oldp+66,((1U & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                          >> 0x1fU)))));
    bufp->fullBit(oldp+67,((1U & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                          >> 0x20U)))));
    bufp->fullBit(oldp+68,((1U & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                          >> 0x21U)))));
    bufp->fullBit(oldp+69,((1U & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                          >> 0x22U)))));
    bufp->fullBit(oldp+70,((1U & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                          >> 0x23U)))));
    bufp->fullBit(oldp+71,((1U & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                          >> 0x24U)))));
    bufp->fullBit(oldp+72,((1U & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                          >> 0x25U)))));
    bufp->fullBit(oldp+73,((1U & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out))));
    bufp->fullBit(oldp+74,((1U & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                          >> 1U)))));
    bufp->fullBit(oldp+75,((1U & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                          >> 2U)))));
    bufp->fullBit(oldp+76,((1U & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                          >> 3U)))));
    bufp->fullBit(oldp+77,((1U & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                          >> 4U)))));
    bufp->fullBit(oldp+78,((1U & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                          >> 5U)))));
    bufp->fullBit(oldp+79,((1U & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                          >> 6U)))));
    bufp->fullBit(oldp+80,((1U & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                          >> 7U)))));
    bufp->fullBit(oldp+81,((1U & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                          >> 8U)))));
    bufp->fullBit(oldp+82,((1U & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                          >> 9U)))));
    bufp->fullBit(oldp+83,((1U & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+84,((1U & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+85,((1U & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+86,((1U & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                          >> 0xdU)))));
    bufp->fullBit(oldp+87,((1U & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                          >> 0xeU)))));
    bufp->fullBit(oldp+88,((1U & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                          >> 0xfU)))));
    bufp->fullBit(oldp+89,((1U & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                          >> 0x10U)))));
    bufp->fullBit(oldp+90,((1U & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                          >> 0x11U)))));
    bufp->fullBit(oldp+91,((1U & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out 
                                          >> 0x12U)))));
    bufp->fullQData(oldp+92,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out),38);
    bufp->fullIData(oldp+94,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__DLY_B),18);
    bufp->fullBit(oldp+95,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__subtract_reg));
    bufp->fullCData(oldp+96,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__acc_fir_reg),6);
    bufp->fullCData(oldp+97,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__feedback_reg),3);
    bufp->fullCData(oldp+98,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__shift_right_reg1),6);
    bufp->fullCData(oldp+99,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__shift_right_reg2),6);
    bufp->fullBit(oldp+100,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__round_reg1));
    bufp->fullBit(oldp+101,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__round_reg2));
    bufp->fullBit(oldp+102,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__saturate_reg1));
    bufp->fullBit(oldp+103,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__saturate_reg2));
    bufp->fullBit(oldp+104,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__load_acc_reg));
    bufp->fullIData(oldp+105,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__a_reg),20);
    bufp->fullIData(oldp+106,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__b_reg),18);
    bufp->fullBit(oldp+107,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__unsigned_a_reg));
    bufp->fullBit(oldp+108,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__unsigned_b_reg));
    bufp->fullBit(oldp+109,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__subtract_int));
    bufp->fullCData(oldp+110,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__acc_fir_int),6);
    bufp->fullCData(oldp+111,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__feedback_int),3);
    bufp->fullCData(oldp+112,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__shift_right_int),6);
    bufp->fullBit(oldp+113,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__round_int));
    bufp->fullBit(oldp+114,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__saturate_int));
    bufp->fullBit(oldp+115,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__load_acc_int));
    bufp->fullIData(oldp+116,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__a_int),20);
    bufp->fullIData(oldp+117,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__b_int),18);
    bufp->fullBit(oldp+118,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__unsigned_a_int));
    bufp->fullBit(oldp+119,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__unsigned_b_int));
    bufp->fullQData(oldp+120,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__accumulator),64);
    bufp->fullQData(oldp+122,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__add_sub_in),64);
    bufp->fullQData(oldp+124,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__mult_out),64);
    bufp->fullQData(oldp+126,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__add_sub_out),64);
    bufp->fullQData(oldp+128,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__pre_shift),64);
    bufp->fullQData(oldp+130,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__shift_right),64);
    bufp->fullQData(oldp+132,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__round),64);
    bufp->fullQData(oldp+134,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__saturate),38);
    bufp->fullQData(oldp+136,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__z_out_reg),38);
    bufp->fullIData(oldp+138,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__mult_a),20);
    bufp->fullIData(oldp+139,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__mult_b),18);
    bufp->fullBit(oldp+140,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__clk));
    bufp->fullIData(oldp+141,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__netlist__DOT____Vcellinp__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__B),18);
    bufp->fullBit(oldp+142,(0U));
    bufp->fullBit(oldp+143,(1U));
    __Vtemp_h2a3f5c38__0[0U] = 0x5f535542U;
    __Vtemp_h2a3f5c38__0[1U] = 0x5f414444U;
    __Vtemp_h2a3f5c38__0[2U] = 0x49504c59U;
    __Vtemp_h2a3f5c38__0[3U] = 0x4d554c54U;
    bufp->fullWData(oldp+144,(__Vtemp_h2a3f5c38__0),128);
    bufp->fullIData(oldp+148,(0U),20);
    bufp->fullQData(oldp+149,(0x46414c5345ULL),40);
    bufp->fullIData(oldp+151,(0x54525545U),32);
    bufp->fullCData(oldp+152,(2U),6);
    bufp->fullCData(oldp+153,(3U),3);
    bufp->fullCData(oldp+154,(0U),6);
    bufp->fullIData(oldp+155,(5U),32);
    bufp->fullIData(oldp+156,(0U),32);
    bufp->fullCData(oldp+157,(0U),5);
    bufp->fullIData(oldp+158,(1U),32);
}
