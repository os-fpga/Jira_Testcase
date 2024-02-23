// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__Syms.h"


VL_ATTR_COLD void Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root__trace_init_sub__TOP__0(Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2 ");
    tracep->declBus(c+1,"a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 19,0);
    tracep->declBus(c+2,"b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 17,0);
    tracep->declBit(c+81,"clk",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3,"reset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declQuad(c+18,"z_out",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 37,0);
    tracep->declBus(c+4,"acc_fir",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+5,"mult1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,"mult2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declQuad(c+7,"add_sub_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+9,"add_sub_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+11,"expected_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 37,0);
    tracep->declBus(c+13,"mismatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->pushNamePrefix("golden ");
    tracep->declBus(c+1,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 19,0);
    tracep->declBus(c+4,"acc_fir",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+2,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 17,0);
    tracep->declBit(c+81,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+18,"z_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 37,0);
    tracep->declBit(c+20,"DLY_B1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"DLY_B2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("DSP_inst ");
    tracep->declArray(c+82,"DSP_MODE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 127,0);
    tracep->declBus(c+86,"COEFF1_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 9,0);
    tracep->declBus(c+86,"COEFF1_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 9,0);
    tracep->declBus(c+86,"COEFF1_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 9,0);
    tracep->declBus(c+86,"COEFF1_3",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 9,0);
    tracep->declBus(c+86,"COEFF2_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 9,0);
    tracep->declBus(c+87,"COEFF2_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 9,0);
    tracep->declBus(c+86,"COEFF2_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 9,0);
    tracep->declBus(c+86,"COEFF2_3",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 9,0);
    tracep->declQuad(c+88,"OUTPUT_REG_EN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 39,0);
    tracep->declBus(c+90,"INPUT_REG_EN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+14,"A1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 9,0);
    tracep->declBus(c+15,"B1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 8,0);
    tracep->declBus(c+22,"Z1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 18,0);
    tracep->declBus(c+23,"DLY_B1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 8,0);
    tracep->declBus(c+16,"A2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 9,0);
    tracep->declBus(c+17,"B2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 8,0);
    tracep->declBus(c+24,"Z2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 18,0);
    tracep->declBus(c+25,"DLY_B2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 8,0);
    tracep->declBit(c+81,"CLK",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"RESET",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+4,"ACC_FIR",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+91,"FEEDBACK",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+92,"LOAD_ACC",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+93,"UNSIGNED_A",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+93,"UNSIGNED_B",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+92,"SATURATE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+94,"SHIFT_RIGHT",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+92,"ROUND",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+92,"SUBTRACT",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+26,"subtract_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+27,"acc_fir_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+28,"feedback_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+29,"shift_right_reg1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+30,"shift_right_reg2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+31,"round_reg1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+32,"round_reg2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+33,"saturate_reg1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+34,"saturate_reg2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+35,"load_acc_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+36,"a1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
    tracep->declBus(c+37,"a2_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
    tracep->declBus(c+38,"b1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 8,0);
    tracep->declBus(c+39,"b2_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 8,0);
    tracep->declBit(c+40,"unsigned_a_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+41,"unsigned_b_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+42,"subtract_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+43,"acc_fir_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+44,"feedback_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+45,"shift_right_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+46,"round_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+47,"saturate_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+48,"load_acc_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+49,"a1_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
    tracep->declBus(c+50,"a2_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
    tracep->declBus(c+51,"b1_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 8,0);
    tracep->declBus(c+52,"b2_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 8,0);
    tracep->declBit(c+53,"unsigned_a_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+54,"unsigned_b_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declQuad(c+55,"accumulator",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+57,"add_sub_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+59,"mult_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declBus(c+61,"mult_out1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,"mult_out2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declQuad(c+63,"add_sub_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+65,"pre_shift",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declBus(c+67,"shift_right_f0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,"shift_right_f1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,"round_f0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,"round_f1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,"saturate_f0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 18,0);
    tracep->declBus(c+72,"saturate_f1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 18,0);
    tracep->declQuad(c+73,"z_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 37,0);
    tracep->declQuad(c+75,"z_out_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 37,0);
    tracep->declBus(c+23,"dly_b1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 8,0);
    tracep->declBus(c+25,"dly_b2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 8,0);
    tracep->declBus(c+77,"mult_a1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
    tracep->declBus(c+78,"mult_a2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
    tracep->declBus(c+79,"mult_b1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 8,0);
    tracep->declBus(c+80,"mult_b2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 8,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root__trace_init_top(Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root__trace_init_top\n"); );
    // Body
    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root__trace_register(Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root__trace_full_sub_0(Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root__trace_full_top_0\n"); );
    // Init
    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root*>(voidSelf);
    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root__trace_full_sub_0(Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_h2a3f5c38__0;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a),20);
    bufp->fullIData(oldp+2,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b),18);
    bufp->fullBit(oldp+3,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__reset));
    bufp->fullCData(oldp+4,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__acc_fir),5);
    bufp->fullIData(oldp+5,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__mult1),32);
    bufp->fullIData(oldp+6,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__mult2),32);
    bufp->fullQData(oldp+7,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_in),64);
    bufp->fullQData(oldp+9,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_out),64);
    bufp->fullQData(oldp+11,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__expected_out),38);
    bufp->fullIData(oldp+13,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__mismatch),32);
    bufp->fullSData(oldp+14,((0x3ffU & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a 
                                        >> 0xaU))),10);
    bufp->fullSData(oldp+15,((0x1ffU & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b 
                                        >> 9U))),9);
    bufp->fullSData(oldp+16,((0x3ffU & vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a)),10);
    bufp->fullSData(oldp+17,((0x1ffU & vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b)),9);
    bufp->fullQData(oldp+18,((((QData)((IData)((0x7ffffU 
                                                & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__z_out)))) 
                               << 0x13U) | (QData)((IData)(
                                                           (0x7ffffU 
                                                            & (IData)(
                                                                      (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__z_out 
                                                                       >> 0x13U))))))),38);
    bufp->fullBit(oldp+20,((1U & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__dly_b1))));
    bufp->fullBit(oldp+21,((1U & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__dly_b2))));
    bufp->fullIData(oldp+22,((0x7ffffU & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__z_out))),19);
    bufp->fullSData(oldp+23,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__dly_b1),9);
    bufp->fullIData(oldp+24,((0x7ffffU & (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__z_out 
                                                  >> 0x13U)))),19);
    bufp->fullSData(oldp+25,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__dly_b2),9);
    bufp->fullBit(oldp+26,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__subtract_reg));
    bufp->fullCData(oldp+27,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__acc_fir_reg),5);
    bufp->fullCData(oldp+28,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__feedback_reg),3);
    bufp->fullCData(oldp+29,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__shift_right_reg1),5);
    bufp->fullCData(oldp+30,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__shift_right_reg2),5);
    bufp->fullBit(oldp+31,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__round_reg1));
    bufp->fullBit(oldp+32,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__round_reg2));
    bufp->fullBit(oldp+33,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__saturate_reg1));
    bufp->fullBit(oldp+34,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__saturate_reg2));
    bufp->fullBit(oldp+35,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__load_acc_reg));
    bufp->fullSData(oldp+36,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__a1_reg),10);
    bufp->fullSData(oldp+37,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__a2_reg),10);
    bufp->fullSData(oldp+38,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__b1_reg),9);
    bufp->fullSData(oldp+39,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__b2_reg),9);
    bufp->fullBit(oldp+40,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__unsigned_a_reg));
    bufp->fullBit(oldp+41,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__unsigned_b_reg));
    bufp->fullBit(oldp+42,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__subtract_int));
    bufp->fullCData(oldp+43,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__acc_fir_int),5);
    bufp->fullCData(oldp+44,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__feedback_int),3);
    bufp->fullCData(oldp+45,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__shift_right_int),5);
    bufp->fullBit(oldp+46,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__round_int));
    bufp->fullBit(oldp+47,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__saturate_int));
    bufp->fullBit(oldp+48,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__load_acc_int));
    bufp->fullSData(oldp+49,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__a1_int),10);
    bufp->fullSData(oldp+50,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__a2_int),10);
    bufp->fullSData(oldp+51,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__b1_int),9);
    bufp->fullSData(oldp+52,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__b2_int),9);
    bufp->fullBit(oldp+53,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__unsigned_a_int));
    bufp->fullBit(oldp+54,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__unsigned_b_int));
    bufp->fullQData(oldp+55,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__accumulator),64);
    bufp->fullQData(oldp+57,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__add_sub_in),64);
    bufp->fullQData(oldp+59,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__mult_out),64);
    bufp->fullIData(oldp+61,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__mult_out1),32);
    bufp->fullIData(oldp+62,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__mult_out2),32);
    bufp->fullQData(oldp+63,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__add_sub_out),64);
    bufp->fullQData(oldp+65,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__pre_shift),64);
    bufp->fullIData(oldp+67,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__shift_right_f0),32);
    bufp->fullIData(oldp+68,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__shift_right_f1),32);
    bufp->fullIData(oldp+69,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__round_f0),32);
    bufp->fullIData(oldp+70,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__round_f1),32);
    bufp->fullIData(oldp+71,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__saturate_f0),19);
    bufp->fullIData(oldp+72,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__saturate_f1),19);
    bufp->fullQData(oldp+73,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__z_out),38);
    bufp->fullQData(oldp+75,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__z_out_reg),38);
    bufp->fullSData(oldp+77,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__mult_a1),10);
    bufp->fullSData(oldp+78,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__mult_a2),10);
    bufp->fullSData(oldp+79,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__mult_b1),9);
    bufp->fullSData(oldp+80,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__golden__DOT__DSP_inst__DOT__mult_b2),9);
    bufp->fullBit(oldp+81,(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__clk));
    __Vtemp_h2a3f5c38__0[0U] = 0x5f535542U;
    __Vtemp_h2a3f5c38__0[1U] = 0x5f414444U;
    __Vtemp_h2a3f5c38__0[2U] = 0x49504c59U;
    __Vtemp_h2a3f5c38__0[3U] = 0x4d554c54U;
    bufp->fullWData(oldp+82,(__Vtemp_h2a3f5c38__0),128);
    bufp->fullSData(oldp+86,(0U),10);
    bufp->fullSData(oldp+87,(1U),10);
    bufp->fullQData(oldp+88,(0x46414c5345ULL),40);
    bufp->fullIData(oldp+90,(0x54525545U),32);
    bufp->fullCData(oldp+91,(5U),3);
    bufp->fullBit(oldp+92,(0U));
    bufp->fullBit(oldp+93,(1U));
    bufp->fullCData(oldp+94,(0U),5);
}
