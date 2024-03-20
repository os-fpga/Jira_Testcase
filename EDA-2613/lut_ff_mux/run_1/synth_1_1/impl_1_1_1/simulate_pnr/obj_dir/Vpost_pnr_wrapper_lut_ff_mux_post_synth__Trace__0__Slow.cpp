// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vpost_pnr_wrapper_lut_ff_mux_post_synth__Syms.h"


VL_ATTR_COLD void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root__trace_init_sub__TOP__0(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpost_pnr_wrapper_lut_ff_mux_post_synth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+4,0,"mux_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("lut_ff_mux_post_route", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+4,0,"mux_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"$auto$clkbufmap.cc:294:execute$638",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"$iopadmap$Q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"$iopadmap$in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+4,0,"$iopadmap$mux_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"$iopadmap$rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("$auto$rs_design_edit.cc:656:execute$649", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+4,0,"$iopadmap$mux_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"$auto$clkbufmap.cc:294:execute$638",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"$iopadmap$rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"$iopadmap$in[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"$iopadmap$in[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"$iopadmap$in[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"$iopadmap$in[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"$iopadmap$Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"$iopadmap$mux_sel_output_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"$auto$clkbufmap.cc:294:execute$638_output_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"$iopadmap$rst_output_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"$iopadmap$in[0]_output_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"$iopadmap$in[1]_output_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"$iopadmap$in[2]_output_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"$iopadmap$in[3]_output_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"dffre_$iopadmap$Q_output_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"lut_$true_output_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"lut_$abc$317$li0_li0_output_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"lut_$abc$317$li0_li0_input_0_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"dffre_$iopadmap$Q_clock_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"lut_$abc$317$li0_li0_input_0_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"lut_$abc$317$li0_li0_input_0_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"lut_$abc$317$li0_li0_input_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"lut_$abc$317$li0_li0_input_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"lut_$abc$317$li0_li0_input_0_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"$iopadmap$Q_input_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"dffre_$iopadmap$Q_input_1_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"dffre_$iopadmap$Q_input_2_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"dffre_$iopadmap$Q_input_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dffre_$iopadmap$Q", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+11,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"R",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("lut_$abc$317$li0_li0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+14,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+15,0,"LUT_MASK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+12,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+11,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("lut_$true", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17,0,"K",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"LUT_MASK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+13,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("routing_segment_$auto$clkbufmap.cc:294:execute$638_output_0_0_to_dffre_$iopadmap$Q_clock_0_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+2,0,"datain",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"dataout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("routing_segment_$iopadmap$in[0]_output_0_0_to_lut_$abc$317$li0_li0_input_0_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+7,0,"datain",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"dataout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("routing_segment_$iopadmap$in[1]_output_0_0_to_lut_$abc$317$li0_li0_input_0_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+8,0,"datain",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"dataout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("routing_segment_$iopadmap$in[2]_output_0_0_to_lut_$abc$317$li0_li0_input_0_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+9,0,"datain",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"dataout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("routing_segment_$iopadmap$in[3]_output_0_0_to_lut_$abc$317$li0_li0_input_0_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+10,0,"datain",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"dataout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("routing_segment_$iopadmap$mux_sel_output_0_0_to_lut_$abc$317$li0_li0_input_0_5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+4,0,"datain",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"dataout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("routing_segment_$iopadmap$rst_output_0_0_to_lut_$abc$317$li0_li0_input_0_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+5,0,"datain",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"dataout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("routing_segment_dffre_$iopadmap$Q_output_0_0_to_$iopadmap$Q_input_0_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+6,0,"datain",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"dataout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("routing_segment_lut_$abc$317$li0_li0_output_0_0_to_dffre_$iopadmap$Q_input_0_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+11,0,"datain",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"dataout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("routing_segment_lut_$true_output_0_0_to_dffre_$iopadmap$Q_input_1_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+13,0,"datain",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"dataout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("routing_segment_lut_$true_output_0_0_to_dffre_$iopadmap$Q_input_2_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+13,0,"datain",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"dataout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("$auto$rs_design_edit.cc:658:execute$650", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+2,0,"$auto$clkbufmap.cc:294:execute$638",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"$iopadmap$Q",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"$iopadmap$in",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+4,0,"$iopadmap$mux_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"$iopadmap$rst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+4,0,"mux_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"$iopadmap$clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("$auto$clkbufmap.cc:261:execute$636", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+2,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$lut_ff_mux.Q", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+6,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$lut_ff_mux.clk", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+20,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$lut_ff_mux.in", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+20,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$lut_ff_mux.in_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+20,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+8,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$lut_ff_mux.in_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+20,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+9,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$lut_ff_mux.in_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+20,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+10,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$lut_ff_mux.mux_sel", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+20,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("$iopadmap$lut_ff_mux.rst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+20,0,"WEAK_KEEPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+5,0,"I",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root__trace_init_top(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpost_pnr_wrapper_lut_ff_mux_post_synth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root__trace_init_top\n"); );
    // Body
    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root__trace_register(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpost_pnr_wrapper_lut_ff_mux_post_synth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root__trace_const_0_sub_0(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root__trace_const_0\n"); );
    // Init
    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root*>(voidSelf);
    Vpost_pnr_wrapper_lut_ff_mux_post_synth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root__trace_const_0_sub_0(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpost_pnr_wrapper_lut_ff_mux_post_synth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+13,(1U));
    bufp->fullIData(oldp+14,(6U),32);
    bufp->fullQData(oldp+15,(0x3030c0e0c0c0301ULL),64);
    bufp->fullIData(oldp+17,(5U),32);
    bufp->fullIData(oldp+18,(1U),32);
    bufp->fullCData(oldp+19,(0U),5);
    bufp->fullIData(oldp+20,(0x4e4f4e45U),32);
}

VL_ATTR_COLD void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root__trace_full_0_sub_0(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root__trace_full_0\n"); );
    // Init
    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root*>(voidSelf);
    Vpost_pnr_wrapper_lut_ff_mux_post_synth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root__trace_full_0_sub_0(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpost_pnr_wrapper_lut_ff_mux_post_synth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->Q));
    bufp->fullBit(oldp+2,(vlSelf->clk));
    bufp->fullCData(oldp+3,(vlSelf->in),4);
    bufp->fullBit(oldp+4,(vlSelf->mux_sel));
    bufp->fullBit(oldp+5,(vlSelf->rst));
    bufp->fullBit(oldp+6,(vlSelf->lut_ff_mux_post_route__DOT____024auto__024rs_design_edit__02ecc__03a656__03aexecute__024649__DOT__dffre___024iopadmap__024Q_output_0_0));
    bufp->fullBit(oldp+7,((1U & (IData)(vlSelf->in))));
    bufp->fullBit(oldp+8,((1U & ((IData)(vlSelf->in) 
                                 >> 1U))));
    bufp->fullBit(oldp+9,((1U & ((IData)(vlSelf->in) 
                                 >> 2U))));
    bufp->fullBit(oldp+10,((1U & ((IData)(vlSelf->in) 
                                  >> 3U))));
    bufp->fullBit(oldp+11,((1U & (IData)((0x3030c0e0c0c0301ULL 
                                          >> (((IData)(vlSelf->mux_sel) 
                                               << 5U) 
                                              | ((0x10U 
                                                  & ((IData)(vlSelf->in) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & (IData)(vlSelf->in)) 
                                                    | (((IData)(vlSelf->rst) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & (IData)(vlSelf->in)) 
                                                          | (1U 
                                                             & ((IData)(vlSelf->in) 
                                                                >> 2U))))))))))));
    bufp->fullCData(oldp+12,((((IData)(vlSelf->mux_sel) 
                               << 5U) | ((0x10U & ((IData)(vlSelf->in) 
                                                   << 4U)) 
                                         | ((8U & (IData)(vlSelf->in)) 
                                            | (((IData)(vlSelf->rst) 
                                                << 2U) 
                                               | ((2U 
                                                   & (IData)(vlSelf->in)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->in) 
                                                        >> 2U)))))))),6);
}
