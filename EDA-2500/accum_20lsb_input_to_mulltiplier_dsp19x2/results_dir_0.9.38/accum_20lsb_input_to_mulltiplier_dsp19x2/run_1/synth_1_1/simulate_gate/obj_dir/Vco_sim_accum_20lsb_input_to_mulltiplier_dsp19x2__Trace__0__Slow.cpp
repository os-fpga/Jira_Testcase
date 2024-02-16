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
    tracep->declBit(c+76,"clk",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3,"reset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declQuad(c+17,"z_out",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 37,0);
    tracep->declQuad(c+4,"expected_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 37,0);
    tracep->declQuad(c+6,"add_sub_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+8,"add_sub_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+10,"mult",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declBus(c+12,"mismatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->pushNamePrefix("golden ");
    tracep->declBus(c+1,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 19,0);
    tracep->declBus(c+2,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 17,0);
    tracep->declBit(c+76,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+17,"z_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 37,0);
    tracep->declBus(c+19,"DLY_B1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 8,0);
    tracep->declBus(c+20,"DLY_B2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 8,0);
    tracep->pushNamePrefix("DSP_inst ");
    tracep->declArray(c+77,"DSP_MODE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 127,0);
    tracep->declBus(c+81,"COEFF1_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 9,0);
    tracep->declBus(c+81,"COEFF1_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 9,0);
    tracep->declBus(c+81,"COEFF1_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 9,0);
    tracep->declBus(c+81,"COEFF1_3",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 9,0);
    tracep->declBus(c+81,"COEFF2_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 9,0);
    tracep->declBus(c+81,"COEFF2_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 9,0);
    tracep->declBus(c+81,"COEFF2_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 9,0);
    tracep->declBus(c+81,"COEFF2_3",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 9,0);
    tracep->declQuad(c+82,"OUTPUT_REG_EN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 39,0);
    tracep->declBus(c+84,"INPUT_REG_EN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+13,"A1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 9,0);
    tracep->declBus(c+14,"B1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 8,0);
    tracep->declBus(c+21,"Z1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 18,0);
    tracep->declBus(c+19,"DLY_B1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 8,0);
    tracep->declBus(c+15,"A2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 9,0);
    tracep->declBus(c+16,"B2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 8,0);
    tracep->declBus(c+22,"Z2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 18,0);
    tracep->declBus(c+20,"DLY_B2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 8,0);
    tracep->declBit(c+76,"CLK",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"RESET",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+85,"ACC_FIR",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+86,"FEEDBACK",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+87,"LOAD_ACC",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"UNSIGNED_A",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"UNSIGNED_B",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+88,"SATURATE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+89,"SHIFT_RIGHT",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+88,"ROUND",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"SUBTRACT",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"subtract_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+24,"acc_fir_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+25,"feedback_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+26,"shift_right_reg1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+27,"shift_right_reg2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+28,"round_reg1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+29,"round_reg2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+30,"saturate_reg1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+31,"saturate_reg2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+32,"load_acc_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+33,"a1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
    tracep->declBus(c+34,"a2_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
    tracep->declBus(c+35,"b1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 8,0);
    tracep->declBus(c+36,"b2_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 8,0);
    tracep->declBit(c+37,"unsigned_a_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+38,"unsigned_b_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+39,"subtract_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+40,"acc_fir_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+41,"feedback_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+42,"shift_right_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+43,"round_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+44,"saturate_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+45,"load_acc_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+46,"a1_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
    tracep->declBus(c+47,"a2_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
    tracep->declBus(c+48,"b1_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 8,0);
    tracep->declBus(c+49,"b2_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 8,0);
    tracep->declBit(c+50,"unsigned_a_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+51,"unsigned_b_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declQuad(c+52,"accumulator",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+54,"add_sub_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+56,"mult_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declBus(c+58,"mult_out1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,"mult_out2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declQuad(c+60,"add_sub_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+62,"pre_shift",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declBus(c+64,"shift_right_f0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,"shift_right_f1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,"round_f0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,"round_f1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,"saturate_f0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 18,0);
    tracep->declBus(c+69,"saturate_f1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 18,0);
    tracep->declQuad(c+17,"z_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 37,0);
    tracep->declQuad(c+70,"z_out_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 37,0);
    tracep->declBus(c+19,"dly_b1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 8,0);
    tracep->declBus(c+20,"dly_b2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 8,0);
    tracep->declBus(c+72,"mult_a1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
    tracep->declBus(c+73,"mult_a2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
    tracep->declBus(c+74,"mult_b1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 8,0);
    tracep->declBus(c+75,"mult_b2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 8,0);
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
    bufp->fullSData(oldp+13,((0x3ffU & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a)),10);
    bufp->fullSData(oldp+14,((0x1ffU & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b)),9);
    bufp->fullSData(oldp+15,((0x3ffU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__a 
                                        >> 0xaU))),10);
    bufp->fullSData(oldp+16,((0x1ffU & (vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__b 
                                        >> 9U))),9);
    bufp->fullQData(oldp+17,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__z_out),38);
    bufp->fullSData(oldp+19,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__dly_b1),9);
    bufp->fullSData(oldp+20,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__dly_b2),9);
    bufp->fullIData(oldp+21,((0x7ffffU & (IData)(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__z_out))),19);
    bufp->fullIData(oldp+22,((0x7ffffU & (IData)((vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__z_out 
                                                  >> 0x13U)))),19);
    bufp->fullBit(oldp+23,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__subtract_reg));
    bufp->fullCData(oldp+24,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__acc_fir_reg),5);
    bufp->fullCData(oldp+25,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__feedback_reg),3);
    bufp->fullCData(oldp+26,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__shift_right_reg1),5);
    bufp->fullCData(oldp+27,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__shift_right_reg2),5);
    bufp->fullBit(oldp+28,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__round_reg1));
    bufp->fullBit(oldp+29,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__round_reg2));
    bufp->fullBit(oldp+30,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__saturate_reg1));
    bufp->fullBit(oldp+31,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__saturate_reg2));
    bufp->fullBit(oldp+32,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__load_acc_reg));
    bufp->fullSData(oldp+33,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__a1_reg),10);
    bufp->fullSData(oldp+34,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__a2_reg),10);
    bufp->fullSData(oldp+35,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__b1_reg),9);
    bufp->fullSData(oldp+36,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__b2_reg),9);
    bufp->fullBit(oldp+37,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__unsigned_a_reg));
    bufp->fullBit(oldp+38,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__unsigned_b_reg));
    bufp->fullBit(oldp+39,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__subtract_int));
    bufp->fullCData(oldp+40,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__acc_fir_int),5);
    bufp->fullCData(oldp+41,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__feedback_int),3);
    bufp->fullCData(oldp+42,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__shift_right_int),5);
    bufp->fullBit(oldp+43,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__round_int));
    bufp->fullBit(oldp+44,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__saturate_int));
    bufp->fullBit(oldp+45,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__load_acc_int));
    bufp->fullSData(oldp+46,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__a1_int),10);
    bufp->fullSData(oldp+47,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__a2_int),10);
    bufp->fullSData(oldp+48,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__b1_int),9);
    bufp->fullSData(oldp+49,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__b2_int),9);
    bufp->fullBit(oldp+50,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__unsigned_a_int));
    bufp->fullBit(oldp+51,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__unsigned_b_int));
    bufp->fullQData(oldp+52,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__accumulator),64);
    bufp->fullQData(oldp+54,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__add_sub_in),64);
    bufp->fullQData(oldp+56,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__mult_out),64);
    bufp->fullIData(oldp+58,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__mult_out1),32);
    bufp->fullIData(oldp+59,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__mult_out2),32);
    bufp->fullQData(oldp+60,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__add_sub_out),64);
    bufp->fullQData(oldp+62,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__pre_shift),64);
    bufp->fullIData(oldp+64,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__shift_right_f0),32);
    bufp->fullIData(oldp+65,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__shift_right_f1),32);
    bufp->fullIData(oldp+66,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__round_f0),32);
    bufp->fullIData(oldp+67,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__round_f1),32);
    bufp->fullIData(oldp+68,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__saturate_f0),19);
    bufp->fullIData(oldp+69,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__saturate_f1),19);
    bufp->fullQData(oldp+70,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__z_out_reg),38);
    bufp->fullSData(oldp+72,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__mult_a1),10);
    bufp->fullSData(oldp+73,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__mult_a2),10);
    bufp->fullSData(oldp+74,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__mult_b1),9);
    bufp->fullSData(oldp+75,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__mult_b2),9);
    bufp->fullBit(oldp+76,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2__DOT__clk));
    __Vtemp_h2a3f5c38__0[0U] = 0x5f535542U;
    __Vtemp_h2a3f5c38__0[1U] = 0x5f414444U;
    __Vtemp_h2a3f5c38__0[2U] = 0x49504c59U;
    __Vtemp_h2a3f5c38__0[3U] = 0x4d554c54U;
    bufp->fullWData(oldp+77,(__Vtemp_h2a3f5c38__0),128);
    bufp->fullSData(oldp+81,(0U),10);
    bufp->fullQData(oldp+82,(0x46414c5345ULL),40);
    bufp->fullIData(oldp+84,(0x54525545U),32);
    bufp->fullCData(oldp+85,(2U),5);
    bufp->fullCData(oldp+86,(3U),3);
    bufp->fullBit(oldp+87,(1U));
    bufp->fullBit(oldp+88,(0U));
    bufp->fullCData(oldp+89,(0U),5);
}
