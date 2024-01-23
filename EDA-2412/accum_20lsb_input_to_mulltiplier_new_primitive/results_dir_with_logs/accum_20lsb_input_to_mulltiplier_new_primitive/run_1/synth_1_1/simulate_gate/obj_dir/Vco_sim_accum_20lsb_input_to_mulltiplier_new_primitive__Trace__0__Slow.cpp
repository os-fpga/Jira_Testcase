// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive__Syms.h"


VL_ATTR_COLD void Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root__trace_init_sub__TOP__0(Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("co_sim_accum_20lsb_input_to_mulltiplier_new_primitive ");
    tracep->declBus(c+1,"a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 19,0);
    tracep->declBus(c+2,"b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 17,0);
    tracep->declBit(c+62,"clk",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3,"reset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declQuad(c+13,"z_out",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 37,0);
    tracep->declQuad(c+4,"expected_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 37,0);
    tracep->declQuad(c+6,"expected_out_shifted",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+8,"expected_out2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+10,"mult",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declBus(c+12,"mismatch",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->pushNamePrefix("golden ");
    tracep->declBus(c+1,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 19,0);
    tracep->declBus(c+2,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 17,0);
    tracep->declBit(c+62,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+13,"z_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 37,0);
    tracep->declBit(c+15,"DLY_B",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("DSP_inst ");
    tracep->declArray(c+63,"DSP_MODE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 127,0);
    tracep->declBus(c+67,"COEFF_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 19,0);
    tracep->declBus(c+67,"COEFF_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 19,0);
    tracep->declBus(c+67,"COEFF_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 19,0);
    tracep->declBus(c+67,"COEFF_3",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 19,0);
    tracep->declQuad(c+68,"OUTPUT_REG_EN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 39,0);
    tracep->declBus(c+70,"INPUT_REG_EN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1,"A",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 19,0);
    tracep->declBus(c+2,"B",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 17,0);
    tracep->declBus(c+71,"ACC_FIR",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declQuad(c+13,"Z",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 37,0);
    tracep->declBus(c+16,"DLY_B",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 17,0);
    tracep->declBit(c+62,"CLK",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"RESET",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+72,"FEEDBACK",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+73,"LOAD_ACC",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+74,"SATURATE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+75,"SHIFT_RIGHT",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+74,"ROUND",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+73,"SUBTRACT",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+73,"UNSIGNED_A",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+73,"UNSIGNED_B",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"subtract_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+18,"acc_fir_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+19,"feedback_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+20,"shift_right_reg1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+21,"shift_right_reg2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+22,"round_reg1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+23,"round_reg2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+24,"saturate_reg1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+25,"saturate_reg2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+26,"load_acc_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+27,"a_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 19,0);
    tracep->declBus(c+28,"b_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 17,0);
    tracep->declBit(c+29,"unsigned_a_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+30,"unsigned_b_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+31,"subtract_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+32,"acc_fir_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+33,"feedback_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+34,"shift_right_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+35,"round_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+36,"saturate_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+37,"load_acc_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+38,"a_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 19,0);
    tracep->declBus(c+39,"b_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 17,0);
    tracep->declBit(c+40,"unsigned_a_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+41,"unsigned_b_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declQuad(c+42,"accumulator",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+44,"add_sub_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+46,"mult_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+48,"add_sub_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+50,"pre_shift",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+52,"shift_right",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+54,"round",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+56,"saturate",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 37,0);
    tracep->declQuad(c+13,"z_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 37,0);
    tracep->declQuad(c+58,"z_out_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 37,0);
    tracep->declBus(c+60,"mult_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 19,0);
    tracep->declBus(c+61,"mult_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 17,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root__trace_init_top(Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root__trace_init_top\n"); );
    // Body
    Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root__trace_register(Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root__trace_full_sub_0(Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root__trace_full_top_0\n"); );
    // Init
    Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root*>(voidSelf);
    Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root__trace_full_sub_0(Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_h2a3f5c38__0;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__a),20);
    bufp->fullIData(oldp+2,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__b),18);
    bufp->fullBit(oldp+3,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__reset));
    bufp->fullQData(oldp+4,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__expected_out),38);
    bufp->fullQData(oldp+6,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__expected_out_shifted),64);
    bufp->fullQData(oldp+8,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__expected_out2),64);
    bufp->fullQData(oldp+10,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__mult),64);
    bufp->fullIData(oldp+12,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__mismatch),32);
    bufp->fullQData(oldp+13,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out),38);
    bufp->fullBit(oldp+15,((1U & vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__golden__DOT____Vcellout__DSP_inst__DLY_B)));
    bufp->fullIData(oldp+16,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__golden__DOT____Vcellout__DSP_inst__DLY_B),18);
    bufp->fullBit(oldp+17,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__golden__DOT__DSP_inst__DOT__subtract_reg));
    bufp->fullCData(oldp+18,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__golden__DOT__DSP_inst__DOT__acc_fir_reg),6);
    bufp->fullCData(oldp+19,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__golden__DOT__DSP_inst__DOT__feedback_reg),3);
    bufp->fullCData(oldp+20,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__golden__DOT__DSP_inst__DOT__shift_right_reg1),6);
    bufp->fullCData(oldp+21,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__golden__DOT__DSP_inst__DOT__shift_right_reg2),6);
    bufp->fullBit(oldp+22,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__golden__DOT__DSP_inst__DOT__round_reg1));
    bufp->fullBit(oldp+23,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__golden__DOT__DSP_inst__DOT__round_reg2));
    bufp->fullBit(oldp+24,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__golden__DOT__DSP_inst__DOT__saturate_reg1));
    bufp->fullBit(oldp+25,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__golden__DOT__DSP_inst__DOT__saturate_reg2));
    bufp->fullBit(oldp+26,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__golden__DOT__DSP_inst__DOT__load_acc_reg));
    bufp->fullIData(oldp+27,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__golden__DOT__DSP_inst__DOT__a_reg),20);
    bufp->fullIData(oldp+28,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__golden__DOT__DSP_inst__DOT__b_reg),18);
    bufp->fullBit(oldp+29,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__golden__DOT__DSP_inst__DOT__unsigned_a_reg));
    bufp->fullBit(oldp+30,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__golden__DOT__DSP_inst__DOT__unsigned_b_reg));
    bufp->fullBit(oldp+31,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__golden__DOT__DSP_inst__DOT__subtract_int));
    bufp->fullCData(oldp+32,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__golden__DOT__DSP_inst__DOT__acc_fir_int),6);
    bufp->fullCData(oldp+33,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__golden__DOT__DSP_inst__DOT__feedback_int),3);
    bufp->fullCData(oldp+34,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__golden__DOT__DSP_inst__DOT__shift_right_int),6);
    bufp->fullBit(oldp+35,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__golden__DOT__DSP_inst__DOT__round_int));
    bufp->fullBit(oldp+36,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__golden__DOT__DSP_inst__DOT__saturate_int));
    bufp->fullBit(oldp+37,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__golden__DOT__DSP_inst__DOT__load_acc_int));
    bufp->fullIData(oldp+38,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__golden__DOT__DSP_inst__DOT__a_int),20);
    bufp->fullIData(oldp+39,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__golden__DOT__DSP_inst__DOT__b_int),18);
    bufp->fullBit(oldp+40,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__golden__DOT__DSP_inst__DOT__unsigned_a_int));
    bufp->fullBit(oldp+41,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__golden__DOT__DSP_inst__DOT__unsigned_b_int));
    bufp->fullQData(oldp+42,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__golden__DOT__DSP_inst__DOT__accumulator),64);
    bufp->fullQData(oldp+44,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__golden__DOT__DSP_inst__DOT__add_sub_in),64);
    bufp->fullQData(oldp+46,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__golden__DOT__DSP_inst__DOT__mult_out),64);
    bufp->fullQData(oldp+48,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__golden__DOT__DSP_inst__DOT__add_sub_out),64);
    bufp->fullQData(oldp+50,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__golden__DOT__DSP_inst__DOT__pre_shift),64);
    bufp->fullQData(oldp+52,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__golden__DOT__DSP_inst__DOT__shift_right),64);
    bufp->fullQData(oldp+54,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__golden__DOT__DSP_inst__DOT__round),64);
    bufp->fullQData(oldp+56,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__golden__DOT__DSP_inst__DOT__saturate),38);
    bufp->fullQData(oldp+58,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__golden__DOT__DSP_inst__DOT__z_out_reg),38);
    bufp->fullIData(oldp+60,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__golden__DOT__DSP_inst__DOT__mult_a),20);
    bufp->fullIData(oldp+61,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__golden__DOT__DSP_inst__DOT__mult_b),18);
    bufp->fullBit(oldp+62,(vlSelf->co_sim_accum_20lsb_input_to_mulltiplier_new_primitive__DOT__clk));
    __Vtemp_h2a3f5c38__0[0U] = 0x5f535542U;
    __Vtemp_h2a3f5c38__0[1U] = 0x5f414444U;
    __Vtemp_h2a3f5c38__0[2U] = 0x49504c59U;
    __Vtemp_h2a3f5c38__0[3U] = 0x4d554c54U;
    bufp->fullWData(oldp+63,(__Vtemp_h2a3f5c38__0),128);
    bufp->fullIData(oldp+67,(0U),20);
    bufp->fullQData(oldp+68,(0x46414c5345ULL),40);
    bufp->fullIData(oldp+70,(0x54525545U),32);
    bufp->fullCData(oldp+71,(0x13U),6);
    bufp->fullCData(oldp+72,(3U),3);
    bufp->fullBit(oldp+73,(1U));
    bufp->fullBit(oldp+74,(0U));
    bufp->fullCData(oldp+75,(0U),6);
}
