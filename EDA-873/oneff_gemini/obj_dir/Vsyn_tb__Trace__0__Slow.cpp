// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vsyn_tb__Syms.h"


VL_ATTR_COLD void Vsyn_tb___024root__trace_init_sub__TOP__0(Vsyn_tb___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsyn_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyn_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"rstn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"rtl_q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("syn_tb ");
    tracep->declBit(c+1,"rstn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"rtl_q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+5,"state",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->pushNamePrefix("rtl_model ");
    tracep->declBit(c+4,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"rstn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"clock0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"d_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"rstn_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"clock0_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+6,"dffr_q_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+7,"lut_$abc$379$techmap$techmap377$abc$193$auto$blifparse.cc:362:parse_blif$194.$logic_not$/nfs_eda_sw/softwares/Raptor/instl_dir/12_24_2022_09_15_02/bin/../share/yosys/rapidsilicon/genesis2/ffs_map.v:50$275_Y_output_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"dffr_q_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"lut_$abc$379$techmap$techmap377$abc$193$auto$blifparse.cc:362:parse_blif$194.$logic_not$/nfs_eda_sw/softwares/Raptor/instl_dir/12_24_2022_09_15_02/bin/../share/yosys/rapidsilicon/genesis2/ffs_map.v:50$275_Y_input_0_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"dffr_q_clock_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"q_input_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+7,"dffr_q_input_1_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("dffr_q ");
    tracep->declBit(c+4,"D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+7,"R",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"C",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+6,"Q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+9,"INIT_VALUE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lut_$abc$379$techmap$techmap377$abc$193$auto$blifparse.cc:362:parse_blif$194.$logic_not$/nfs_eda_sw/softwares/Raptor/instl_dir/12_24_2022_09_15_02/bin/../share/yosys/rapidsilicon/genesis2/ffs_map.v:50$275_Y ");
    tracep->declBus(c+10,"K",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declQuad(c+11,"LUT_MASK",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 63,0);
    tracep->declBus(c+8,"in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+7,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_clock0_output_0_0_to_dffr_q_clock_0_0 ");
    tracep->declBit(c+2,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_d_output_0_0_to_dffr_q_input_0_0 ");
    tracep->declBit(c+4,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_dffr_q_output_0_0_to_q_input_0_0 ");
    tracep->declBit(c+6,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_lut_$abc$379$techmap$techmap377$abc$193$auto$blifparse.cc:362:parse_blif$194.$logic_not$/nfs_eda_sw/softwares/Raptor/instl_dir/12_24_2022_09_15_02/bin/../share/yosys/rapidsilicon/genesis2/ffs_map.v:50$275_Y_output_0_0_to_dffr_q_input_1_0 ");
    tracep->declBit(c+7,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+7,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("routing_segment_rstn_output_0_0_to_lut_$abc$379$techmap$techmap377$abc$193$auto$blifparse.cc:362:parse_blif$194.$logic_not$/nfs_eda_sw/softwares/Raptor/instl_dir/12_24_2022_09_15_02/bin/../share/yosys/rapidsilicon/genesis2/ffs_map.v:50$275_Y_input_0_2 ");
    tracep->declBit(c+1,"datain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"dataout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vsyn_tb___024root__trace_init_top(Vsyn_tb___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsyn_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyn_tb___024root__trace_init_top\n"); );
    // Body
    Vsyn_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsyn_tb___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vsyn_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vsyn_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vsyn_tb___024root__trace_register(Vsyn_tb___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsyn_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyn_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vsyn_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vsyn_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vsyn_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsyn_tb___024root__trace_full_sub_0(Vsyn_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vsyn_tb___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyn_tb___024root__trace_full_top_0\n"); );
    // Init
    Vsyn_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsyn_tb___024root*>(voidSelf);
    Vsyn_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsyn_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsyn_tb___024root__trace_full_sub_0(Vsyn_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsyn_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyn_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->rstn));
    bufp->fullBit(oldp+2,(vlSelf->clk));
    bufp->fullBit(oldp+3,(vlSelf->rtl_q));
    bufp->fullBit(oldp+4,(vlSelf->syn_tb__DOT__d));
    bufp->fullIData(oldp+5,(vlSelf->syn_tb__DOT__state),32);
    bufp->fullBit(oldp+6,(vlSelf->syn_tb__DOT__rtl_model__DOT__dffr_q_output_0_0));
    bufp->fullBit(oldp+7,(vlSelf->syn_tb__DOT__rtl_model__DOT__lut___024abc__024379__024techmap__VhsheuR8keZROz9PaIm4SC3xs5hR2ngL9uw2TXWToki1));
    bufp->fullCData(oldp+8,(((IData)(vlSelf->rstn) 
                             << 2U)),6);
    bufp->fullBit(oldp+9,(0U));
    bufp->fullIData(oldp+10,(6U),32);
    bufp->fullQData(oldp+11,(1ULL),64);
}
