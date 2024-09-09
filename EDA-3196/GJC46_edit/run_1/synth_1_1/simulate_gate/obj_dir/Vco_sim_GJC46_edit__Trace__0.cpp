// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vco_sim_GJC46_edit__Syms.h"


void Vco_sim_GJC46_edit___024root__trace_chg_0_sub_0(Vco_sim_GJC46_edit___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vco_sim_GJC46_edit___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root__trace_chg_0\n"); );
    // Init
    Vco_sim_GJC46_edit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vco_sim_GJC46_edit___024root*>(voidSelf);
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vco_sim_GJC46_edit___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vco_sim_GJC46_edit___024root__trace_chg_0_sub_0(Vco_sim_GJC46_edit___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->co_sim_GJC46_edit__DOT__reset));
        bufp->chgBit(oldp+1,(vlSelf->co_sim_GJC46_edit__DOT__bitslip_ctrl_n));
        bufp->chgBit(oldp+2,(vlSelf->co_sim_GJC46_edit__DOT__data_i));
        bufp->chgBit(oldp+3,(vlSelf->co_sim_GJC46_edit__DOT__enable_n));
        bufp->chgIData(oldp+4,(vlSelf->co_sim_GJC46_edit__DOT__mismatch),32);
        bufp->chgBit(oldp+5,((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset)))));
        bufp->chgBit(oldp+6,((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__enable_n)))));
        bufp->chgBit(oldp+7,((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__bitslip_ctrl_n)))));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[2U]) 
                     | vlSelf->__Vm_traceActivity[0xbU]))) {
        bufp->chgBit(oldp+8,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b0__05d)) 
                                    & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset))))));
        bufp->chgBit(oldp+9,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset)) 
                              & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b0__05d))));
        bufp->chgBit(oldp+10,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset)) 
                               & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li1_li1))));
        bufp->chgBit(oldp+11,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li1_li1)) 
                                     & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset))))));
        bufp->chgBit(oldp+12,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset)) 
                               & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li2_li2))));
        bufp->chgBit(oldp+13,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li2_li2)) 
                                     & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset))))));
        bufp->chgBit(oldp+14,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset)) 
                               & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li3_li3))));
        bufp->chgBit(oldp+15,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li3_li3)) 
                                     & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset))))));
        bufp->chgBit(oldp+16,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset)) 
                               & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li4_li4))));
        bufp->chgBit(oldp+17,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li4_li4)) 
                                     & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset))))));
        bufp->chgBit(oldp+18,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset)) 
                               & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li5_li5))));
        bufp->chgBit(oldp+19,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li5_li5)) 
                                     & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset))))));
        bufp->chgBit(oldp+20,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset)) 
                               & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li6_li6))));
        bufp->chgBit(oldp+21,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li6_li6)) 
                                     & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset))))));
        bufp->chgBit(oldp+22,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset)) 
                               & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li7_li7))));
        bufp->chgBit(oldp+23,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li7_li7)) 
                                     & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset))))));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[2U]) 
                     | vlSelf->__Vm_traceActivity[0x21U]))) {
        bufp->chgBit(oldp+24,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset)) 
                                     & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q)))));
        bufp->chgBit(oldp+25,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q)) 
                                     & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset))))));
        bufp->chgBit(oldp+26,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                        >> 1U)))));
        bufp->chgBit(oldp+27,((1U & ((~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                         >> 1U)) & 
                                     (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset))))));
        bufp->chgBit(oldp+28,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                        >> 2U)))));
        bufp->chgBit(oldp+29,((1U & ((~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                         >> 2U)) & 
                                     (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset))))));
        bufp->chgBit(oldp+30,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                        >> 3U)))));
        bufp->chgBit(oldp+31,((1U & ((~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                         >> 3U)) & 
                                     (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset))))));
        bufp->chgBit(oldp+32,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                        >> 4U)))));
        bufp->chgBit(oldp+33,((1U & ((~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                         >> 4U)) & 
                                     (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset))))));
        bufp->chgBit(oldp+34,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                        >> 5U)))));
        bufp->chgBit(oldp+35,((1U & ((~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                         >> 5U)) & 
                                     (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset))))));
        bufp->chgBit(oldp+36,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                        >> 6U)))));
        bufp->chgBit(oldp+37,((1U & ((~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                         >> 6U)) & 
                                     (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset))))));
        bufp->chgBit(oldp+38,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                        >> 7U)))));
        bufp->chgBit(oldp+39,((1U & ((~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                         >> 7U)) & 
                                     (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset))))));
        bufp->chgBit(oldp+40,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                        >> 8U)))));
        bufp->chgBit(oldp+41,((1U & ((~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                         >> 8U)) & 
                                     (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset))))));
        bufp->chgBit(oldp+42,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset)) 
                               & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                  >> 9U))));
        bufp->chgBit(oldp+43,((1U & ((~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                         >> 9U)) & 
                                     (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__reset))))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgDouble(oldp+44,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__start_point));
        bufp->chgDouble(oldp+46,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__end_point));
        bufp->chgDouble(oldp+48,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_period));
        bufp->chgDouble(oldp+50,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__period_quarter));
        bufp->chgBit(oldp+52,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_start));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[4U]) 
                     | vlSelf->__Vm_traceActivity[0xbU]))) {
        bufp->chgBit(oldp+53,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b0__05d)) 
                               & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco))));
        bufp->chgBit(oldp+54,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco) 
                               & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b0__05d))));
        bufp->chgBit(oldp+55,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco)) 
                                     & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b0__05d))))));
        bufp->chgBit(oldp+56,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco)) 
                               & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b0__05d))));
        bufp->chgBit(oldp+57,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco) 
                               & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li1_li1))));
        bufp->chgBit(oldp+58,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li1_li1)) 
                               & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco))));
        bufp->chgBit(oldp+59,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco)) 
                               & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li1_li1))));
        bufp->chgBit(oldp+60,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco)) 
                                     & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li1_li1))))));
        bufp->chgBit(oldp+61,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco) 
                               & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li2_li2))));
        bufp->chgBit(oldp+62,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li2_li2)) 
                               & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco))));
        bufp->chgBit(oldp+63,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco)) 
                               & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li2_li2))));
        bufp->chgBit(oldp+64,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco)) 
                                     & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li2_li2))))));
        bufp->chgBit(oldp+65,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco) 
                               & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li3_li3))));
        bufp->chgBit(oldp+66,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li3_li3)) 
                               & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco))));
        bufp->chgBit(oldp+67,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco)) 
                               & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li3_li3))));
        bufp->chgBit(oldp+68,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco)) 
                                     & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li3_li3))))));
        bufp->chgBit(oldp+69,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco) 
                               & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li4_li4))));
        bufp->chgBit(oldp+70,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li4_li4)) 
                               & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco))));
        bufp->chgBit(oldp+71,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco)) 
                               & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li4_li4))));
        bufp->chgBit(oldp+72,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco)) 
                                     & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li4_li4))))));
        bufp->chgBit(oldp+73,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco) 
                               & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li5_li5))));
        bufp->chgBit(oldp+74,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li5_li5)) 
                               & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco))));
        bufp->chgBit(oldp+75,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco)) 
                               & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li5_li5))));
        bufp->chgBit(oldp+76,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco)) 
                                     & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li5_li5))))));
        bufp->chgBit(oldp+77,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco) 
                               & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li6_li6))));
        bufp->chgBit(oldp+78,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li6_li6)) 
                               & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco))));
        bufp->chgBit(oldp+79,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco)) 
                               & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li6_li6))));
        bufp->chgBit(oldp+80,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco)) 
                                     & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li6_li6))))));
        bufp->chgBit(oldp+81,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco) 
                               & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li7_li7))));
        bufp->chgBit(oldp+82,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li7_li7)) 
                               & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco))));
        bufp->chgBit(oldp+83,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco)) 
                               & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li7_li7))));
        bufp->chgBit(oldp+84,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco)) 
                                     & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li7_li7))))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgDouble(oldp+85,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__start_point));
        bufp->chgDouble(oldp+87,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__end_point));
        bufp->chgDouble(oldp+89,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_period));
        bufp->chgDouble(oldp+91,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__period_quarter));
        bufp->chgBit(oldp+93,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_start));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgDouble(oldp+94,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__t0));
        bufp->chgDouble(oldp+96,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__t1));
        bufp->chgDouble(oldp+98,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__ref_period));
        bufp->chgDouble(oldp+100,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__vco_period));
        bufp->chgDouble(oldp+102,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__postdiv_period));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[7U]))) {
        bufp->chgDouble(oldp+104,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__t0));
        bufp->chgDouble(oldp+106,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__t1));
        bufp->chgDouble(oldp+108,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__ref_period));
        bufp->chgDouble(oldp+110,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__vco_period));
        bufp->chgDouble(oldp+112,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__postdiv_period));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgBit(oldp+114,((0x1f4U <= (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__lock_counter))));
        bufp->chgDouble(oldp+115,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__old_ref_period));
        bufp->chgBit(oldp+117,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__lose_lock));
        bufp->chgCData(oldp+118,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__PLL_DIV_ff),6);
        bufp->chgSData(oldp+119,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__PLL_MULT_ff),12);
        bufp->chgSData(oldp+120,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__lock_counter),9);
        bufp->chgCData(oldp+121,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_delay__DOT__dly_tap_val),6);
        bufp->chgBit(oldp+122,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_delay__DOT__dly_ld_0));
        bufp->chgBit(oldp+123,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_delay__DOT__dly_ld_1));
        bufp->chgBit(oldp+124,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_delay__DOT__dly_ld_1)) 
                                & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_delay__DOT__dly_ld_0))));
        bufp->chgBit(oldp+125,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_delay__DOT__dly_adj_0));
        bufp->chgBit(oldp+126,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_delay__DOT__dly_adj_1));
        bufp->chgBit(oldp+127,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_delay__DOT__dly_adj_1)) 
                                & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_delay__DOT__dly_adj_0))));
        bufp->chgCData(oldp+128,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_delay__DOT__dly_tap_val),6);
        bufp->chgBit(oldp+129,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_delay__DOT__dly_ld_0));
        bufp->chgBit(oldp+130,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_delay__DOT__dly_ld_1));
        bufp->chgBit(oldp+131,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_delay__DOT__dly_ld_1)) 
                                & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_delay__DOT__dly_ld_0))));
        bufp->chgBit(oldp+132,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_delay__DOT__dly_adj_0));
        bufp->chgBit(oldp+133,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_delay__DOT__dly_adj_1));
        bufp->chgBit(oldp+134,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_delay__DOT__dly_adj_1)) 
                                & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_delay__DOT__dly_adj_0))));
        bufp->chgBit(oldp+135,((0x1f4U <= (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__lock_counter))));
        bufp->chgDouble(oldp+136,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__old_ref_period));
        bufp->chgBit(oldp+138,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__lose_lock));
        bufp->chgCData(oldp+139,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__PLL_DIV_ff),6);
        bufp->chgSData(oldp+140,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__PLL_MULT_ff),12);
        bufp->chgSData(oldp+141,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__lock_counter),9);
        bufp->chgCData(oldp+142,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_delay__DOT__dly_tap_val),6);
        bufp->chgBit(oldp+143,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_delay__DOT__dly_ld_0));
        bufp->chgBit(oldp+144,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_delay__DOT__dly_ld_1));
        bufp->chgBit(oldp+145,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_delay__DOT__dly_ld_1)) 
                                & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_delay__DOT__dly_ld_0))));
        bufp->chgBit(oldp+146,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_delay__DOT__dly_adj_0));
        bufp->chgBit(oldp+147,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_delay__DOT__dly_adj_1));
        bufp->chgBit(oldp+148,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_delay__DOT__dly_adj_1)) 
                                & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_delay__DOT__dly_adj_0))));
        bufp->chgCData(oldp+149,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_delay__DOT__dly_tap_val),6);
        bufp->chgBit(oldp+150,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_delay__DOT__dly_ld_0));
        bufp->chgBit(oldp+151,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_delay__DOT__dly_ld_1));
        bufp->chgBit(oldp+152,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_delay__DOT__dly_ld_1)) 
                                & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_delay__DOT__dly_ld_0))));
        bufp->chgBit(oldp+153,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_delay__DOT__dly_adj_0));
        bufp->chgBit(oldp+154,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_delay__DOT__dly_adj_1));
        bufp->chgBit(oldp+155,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_delay__DOT__dly_adj_1)) 
                                & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_delay__DOT__dly_adj_0))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
        bufp->chgBit(oldp+156,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__core_clk));
        bufp->chgBit(oldp+157,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__oe_shift_reg));
        bufp->chgBit(oldp+158,((1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__data_shift_reg) 
                                      >> 9U))));
        bufp->chgBit(oldp+159,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fast_clk_sync_out));
        bufp->chgBit(oldp+160,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__core_clk));
        bufp->chgBit(oldp+161,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__word_load_en));
        bufp->chgSData(oldp+162,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__pll_lock_count),9);
        bufp->chgCData(oldp+163,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__core_clk_count),4);
        bufp->chgSData(oldp+164,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__data_parallel_reg),10);
        bufp->chgSData(oldp+165,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__data_shift_reg),10);
        bufp->chgBit(oldp+166,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__oe_parallel_reg));
        bufp->chgBit(oldp+167,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_fifo_empty));
        bufp->chgBit(oldp+168,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_dout));
        bufp->chgBit(oldp+169,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_shifter_out));
        bufp->chgSData(oldp+170,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bit_shifter),10);
        bufp->chgCData(oldp+171,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_counter),4);
        bufp->chgBit(oldp+172,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__word_load_en));
        bufp->chgSData(oldp+173,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__pll_lock_count),9);
        bufp->chgCData(oldp+174,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__core_clk_count),4);
        bufp->chgSData(oldp+175,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__des_shifter),10);
        bufp->chgSData(oldp+176,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__des_parallel_reg),10);
        bufp->chgBit(oldp+177,((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_fifo_empty)))));
        bufp->chgCData(oldp+178,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register
                                 [1U]),5);
        bufp->chgCData(oldp+179,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register[0]),5);
        bufp->chgCData(oldp+180,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register[1]),5);
        bufp->chgSData(oldp+181,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register
                                 [1U]),11);
        bufp->chgSData(oldp+182,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register[0]),11);
        bufp->chgSData(oldp+183,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register[1]),11);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xaU])) {
        bufp->chgBit(oldp+184,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_core_clk));
        bufp->chgBit(oldp+185,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_word_load_en));
        bufp->chgSData(oldp+186,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_pll_lock_count),9);
        bufp->chgCData(oldp+187,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_core_clk_count),4);
        bufp->chgCData(oldp+188,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__wr_sync_register
                                 [1U]),5);
        bufp->chgCData(oldp+189,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__wgray),5);
        bufp->chgCData(oldp+190,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__wr_sync_register[0]),5);
        bufp->chgCData(oldp+191,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__wr_sync_register[1]),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xbU])) {
        bufp->chgBit(oldp+192,((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b0__05d)))));
        bufp->chgBit(oldp+193,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li1_li1));
        bufp->chgBit(oldp+194,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li2_li2));
        bufp->chgBit(oldp+195,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li3_li3));
        bufp->chgBit(oldp+196,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li4_li4));
        bufp->chgBit(oldp+197,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li5_li5));
        bufp->chgBit(oldp+198,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li6_li6));
        bufp->chgBit(oldp+199,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc__024666__024li7_li7));
        bufp->chgBit(oldp+200,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F));
        bufp->chgBit(oldp+201,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024techmap____VhshMglinVWZCHfXbBuWRBrMeAkj83jPwEwlQ2Lgda8W));
        bufp->chgBit(oldp+202,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__oe_shift_reg));
        bufp->chgBit(oldp+203,((1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__data_shift_reg) 
                                      >> 9U))));
        bufp->chgBit(oldp+204,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk));
        bufp->chgBit(oldp+205,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b0__05d));
        bufp->chgBit(oldp+206,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b1__05d));
        bufp->chgBit(oldp+207,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b2__05d));
        bufp->chgBit(oldp+208,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b3__05d));
        bufp->chgBit(oldp+209,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b4__05d));
        bufp->chgBit(oldp+210,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b5__05d));
        bufp->chgBit(oldp+211,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b6__05d));
        bufp->chgBit(oldp+212,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d));
        bufp->chgCData(oldp+213,((((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b2__05d) 
                                   << 5U) | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b1__05d) 
                                              << 4U) 
                                             | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b0__05d) 
                                                 << 3U) 
                                                | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b5__05d) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b4__05d) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b3__05d))))))),6);
        bufp->chgIData(oldp+214,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b2__05d)
                                   ? 0x80000000U : 0U)),32);
        bufp->chgSData(oldp+215,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1730__DOT__s4),16);
        bufp->chgCData(oldp+216,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1730__DOT__s3),8);
        bufp->chgCData(oldp+217,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1730__DOT__s2),4);
        bufp->chgCData(oldp+218,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1730__DOT__s1),2);
        bufp->chgSData(oldp+219,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                   ? 0x8000U : 0U)),16);
        bufp->chgCData(oldp+220,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1731__DOT__s3),8);
        bufp->chgCData(oldp+221,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1731__DOT__s2),4);
        bufp->chgCData(oldp+222,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                   ? 0x80U : 0U)),8);
        bufp->chgCData(oldp+223,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                                   ? ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                       ? 8U : 0U) : 0U)),4);
        bufp->chgCData(oldp+224,((3U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b6__05d)
                                         ? (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                                              ? ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                                  ? 8U
                                                  : 0U)
                                              : 0U) 
                                            >> 2U) : 
                                        ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                                          ? ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                              ? 8U : 0U)
                                          : 0U)))),2);
        bufp->chgCData(oldp+225,((((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d) 
                                   << 2U) | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F) 
                                              << 1U) 
                                             | (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b6__05d)))),3);
        bufp->chgCData(oldp+226,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                                   ? 7U : 8U)),4);
        bufp->chgCData(oldp+227,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1733__DOT__s1),2);
        bufp->chgCData(oldp+228,((((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F) 
                                   << 1U) | (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b6__05d))),2);
        bufp->chgCData(oldp+229,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+230,((((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b5__05d) 
                                   << 5U) | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b2__05d) 
                                              << 4U) 
                                             | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b1__05d) 
                                                 << 3U) 
                                                | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b0__05d) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b4__05d) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b3__05d))))))),6);
        bufp->chgIData(oldp+231,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b5__05d)
                                   ? 0x7fffffffU : 0x80000000U)),32);
        bufp->chgSData(oldp+232,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1735__DOT__s4),16);
        bufp->chgCData(oldp+233,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1735__DOT__s3),8);
        bufp->chgCData(oldp+234,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1735__DOT__s2),4);
        bufp->chgCData(oldp+235,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1735__DOT__s1),2);
        bufp->chgCData(oldp+236,((((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b4__05d) 
                                   << 4U) | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b2__05d) 
                                              << 3U) 
                                             | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b1__05d) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b0__05d) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b3__05d)))))),5);
        bufp->chgSData(oldp+237,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b4__05d)
                                   ? 0x7fffU : 0x8000U)),16);
        bufp->chgCData(oldp+238,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1736__DOT__s3),8);
        bufp->chgCData(oldp+239,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1736__DOT__s2),4);
        bufp->chgCData(oldp+240,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1736__DOT__s1),2);
        bufp->chgCData(oldp+241,((((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b3__05d) 
                                   << 3U) | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b2__05d) 
                                              << 2U) 
                                             | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b1__05d) 
                                                 << 1U) 
                                                | (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b0__05d))))),4);
        bufp->chgCData(oldp+242,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b3__05d)
                                   ? 0x7fU : 0x80U)),8);
        bufp->chgCData(oldp+243,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1737__DOT__s2),4);
        bufp->chgCData(oldp+244,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1737__DOT__s1),2);
        bufp->chgCData(oldp+245,((((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b2__05d) 
                                   << 2U) | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b1__05d) 
                                              << 1U) 
                                             | (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b0__05d)))),3);
        bufp->chgCData(oldp+246,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b2__05d)
                                   ? 7U : 8U)),4);
        bufp->chgCData(oldp+247,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1738__DOT__s1),2);
        bufp->chgCData(oldp+248,((((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b1__05d) 
                                   << 1U) | (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b0__05d))),2);
        bufp->chgCData(oldp+249,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b1__05d)
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+250,((((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F) 
                                   << 2U) | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d) 
                                              << 1U) 
                                             | (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b6__05d)))),3);
        bufp->chgCData(oldp+251,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                   ? 7U : 0xfU)),4);
        bufp->chgCData(oldp+252,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1740__DOT__s1),2);
        bufp->chgBit(oldp+253,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fast_clk_sync_out));
        bufp->chgBit(oldp+254,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__core_clk));
        bufp->chgBit(oldp+255,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__word_load_en));
        bufp->chgSData(oldp+256,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__pll_lock_count),9);
        bufp->chgCData(oldp+257,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__core_clk_count),4);
        bufp->chgSData(oldp+258,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__data_parallel_reg),10);
        bufp->chgSData(oldp+259,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__data_shift_reg),10);
        bufp->chgBit(oldp+260,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__oe_parallel_reg));
        bufp->chgBit(oldp+261,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_fifo_empty));
        bufp->chgBit(oldp+262,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_dout));
        bufp->chgBit(oldp+263,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_shifter_out));
        bufp->chgSData(oldp+264,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bit_shifter),10);
        bufp->chgCData(oldp+265,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_counter),4);
        bufp->chgBit(oldp+266,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__word_load_en));
        bufp->chgSData(oldp+267,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__pll_lock_count),9);
        bufp->chgCData(oldp+268,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk_count),4);
        bufp->chgSData(oldp+269,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__des_shifter),10);
        bufp->chgSData(oldp+270,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__des_parallel_reg),10);
        bufp->chgBit(oldp+271,((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_fifo_empty)))));
        bufp->chgCData(oldp+272,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register
                                 [1U]),5);
        bufp->chgCData(oldp+273,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register[0]),5);
        bufp->chgCData(oldp+274,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__rd_sync_register[1]),5);
        bufp->chgSData(oldp+275,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register
                                 [1U]),11);
        bufp->chgSData(oldp+276,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register[0]),11);
        bufp->chgSData(oldp+277,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__wr_sync_register[1]),11);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0xbU] 
                     | vlSelf->__Vm_traceActivity[0x21U]))) {
        bufp->chgBit(oldp+278,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk) 
                                & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q))));
        bufp->chgBit(oldp+279,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q)) 
                                & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk))));
        bufp->chgBit(oldp+280,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk)) 
                                      & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q)))));
        bufp->chgBit(oldp+281,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk)) 
                                      & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q))))));
        bufp->chgBit(oldp+282,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk) 
                                & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                   >> 1U))));
        bufp->chgBit(oldp+283,(((~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                    >> 1U)) & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk))));
        bufp->chgBit(oldp+284,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk)) 
                                      & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                         >> 1U)))));
        bufp->chgBit(oldp+285,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk)) 
                                      & (~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                            >> 1U))))));
        bufp->chgBit(oldp+286,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk) 
                                & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                   >> 2U))));
        bufp->chgBit(oldp+287,(((~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                    >> 2U)) & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk))));
        bufp->chgBit(oldp+288,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk)) 
                                      & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                         >> 2U)))));
        bufp->chgBit(oldp+289,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk)) 
                                      & (~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                            >> 2U))))));
        bufp->chgBit(oldp+290,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk) 
                                & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                   >> 3U))));
        bufp->chgBit(oldp+291,(((~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                    >> 3U)) & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk))));
        bufp->chgBit(oldp+292,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk)) 
                                      & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                         >> 3U)))));
        bufp->chgBit(oldp+293,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk)) 
                                      & (~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                            >> 3U))))));
        bufp->chgBit(oldp+294,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk) 
                                & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                   >> 4U))));
        bufp->chgBit(oldp+295,(((~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                    >> 4U)) & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk))));
        bufp->chgBit(oldp+296,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk)) 
                                      & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                         >> 4U)))));
        bufp->chgBit(oldp+297,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk)) 
                                      & (~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                            >> 4U))))));
        bufp->chgBit(oldp+298,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk) 
                                & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                   >> 5U))));
        bufp->chgBit(oldp+299,(((~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                    >> 5U)) & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk))));
        bufp->chgBit(oldp+300,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk)) 
                                      & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                         >> 5U)))));
        bufp->chgBit(oldp+301,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk)) 
                                      & (~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                            >> 5U))))));
        bufp->chgBit(oldp+302,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk) 
                                & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                   >> 6U))));
        bufp->chgBit(oldp+303,(((~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                    >> 6U)) & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk))));
        bufp->chgBit(oldp+304,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk)) 
                                      & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                         >> 6U)))));
        bufp->chgBit(oldp+305,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk)) 
                                      & (~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                            >> 6U))))));
        bufp->chgBit(oldp+306,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk) 
                                & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                   >> 7U))));
        bufp->chgBit(oldp+307,(((~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                    >> 7U)) & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk))));
        bufp->chgBit(oldp+308,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk)) 
                                      & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                         >> 7U)))));
        bufp->chgBit(oldp+309,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk)) 
                                      & (~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                            >> 7U))))));
        bufp->chgBit(oldp+310,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk) 
                                & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                   >> 8U))));
        bufp->chgBit(oldp+311,(((~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                    >> 8U)) & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk))));
        bufp->chgBit(oldp+312,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk)) 
                                      & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                         >> 8U)))));
        bufp->chgBit(oldp+313,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk)) 
                                      & (~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                            >> 8U))))));
        bufp->chgBit(oldp+314,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk) 
                                & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                   >> 9U))));
        bufp->chgBit(oldp+315,(((~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                    >> 9U)) & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk))));
        bufp->chgBit(oldp+316,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk)) 
                                & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                   >> 9U))));
        bufp->chgBit(oldp+317,((1U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk)) 
                                      & (~ ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                            >> 9U))))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xcU])) {
        bufp->chgBit(oldp+318,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_core_clk));
        bufp->chgBit(oldp+319,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_word_load_en));
        bufp->chgSData(oldp+320,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_pll_lock_count),9);
        bufp->chgCData(oldp+321,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_core_clk_count),4);
        bufp->chgCData(oldp+322,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__wr_sync_register
                                 [1U]),5);
        bufp->chgCData(oldp+323,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__wgray),5);
        bufp->chgCData(oldp+324,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__wr_sync_register[0]),5);
        bufp->chgCData(oldp+325,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__synchronizer__DOT__wr_sync_register[1]),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xdU])) {
        bufp->chgBit(oldp+326,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__read_en));
        bufp->chgBit(oldp+327,((1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_data_reg) 
                                      >> 0xaU))));
        bufp->chgSData(oldp+328,((0x3ffU & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_data_reg))),10);
        bufp->chgSData(oldp+329,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_data_reg),11);
        bufp->chgBit(oldp+330,((((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr) 
                                 == ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr) 
                                     - (IData)(1U))) 
                                | ((3U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr)) 
                                   & (0U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr))))));
        bufp->chgSData(oldp+331,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo[0]),11);
        bufp->chgSData(oldp+332,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo[1]),11);
        bufp->chgSData(oldp+333,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo[2]),11);
        bufp->chgSData(oldp+334,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo[3]),11);
        bufp->chgCData(oldp+335,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr),2);
        bufp->chgCData(oldp+336,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr),2);
        bufp->chgIData(oldp+337,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo1__DOT__unnamedblk1__DOT__i),32);
        bufp->chgSData(oldp+338,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__rd_sync_register
                                 [1U]),11);
        bufp->chgSData(oldp+339,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__rgray),11);
        bufp->chgSData(oldp+340,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__rd_sync_register[0]),11);
        bufp->chgSData(oldp+341,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__rd_sync_register[1]),11);
        bufp->chgBit(oldp+342,((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__des_fifo_empty)))));
        bufp->chgBit(oldp+343,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__read_en));
        bufp->chgBit(oldp+344,((1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_data_reg) 
                                      >> 0xaU))));
        bufp->chgSData(oldp+345,((0x3ffU & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_data_reg))),10);
        bufp->chgSData(oldp+346,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_data_reg),11);
        bufp->chgBit(oldp+347,((((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr) 
                                 == ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr) 
                                     - (IData)(1U))) 
                                | ((3U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr)) 
                                   & (0U == (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr))))));
        bufp->chgSData(oldp+348,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo[0]),11);
        bufp->chgSData(oldp+349,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo[1]),11);
        bufp->chgSData(oldp+350,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo[2]),11);
        bufp->chgSData(oldp+351,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__fifo[3]),11);
        bufp->chgCData(oldp+352,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__wr_ptr),2);
        bufp->chgCData(oldp+353,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__rd_ptr),2);
        bufp->chgIData(oldp+354,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo1__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+355,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__des_fifo_empty));
        bufp->chgSData(oldp+356,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__rd_sync_register
                                 [1U]),11);
        bufp->chgSData(oldp+357,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__rgray),11);
        bufp->chgSData(oldp+358,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__rd_sync_register[0]),11);
        bufp->chgSData(oldp+359,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__synchronizer__DOT__rd_sync_register[1]),11);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xeU])) {
        bufp->chgCData(oldp+360,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_data_reg),4);
        bufp->chgCData(oldp+361,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_data_comp),4);
        bufp->chgCData(oldp+362,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_data_count),5);
        bufp->chgCData(oldp+363,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk0_reg_data_count),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xfU])) {
        bufp->chgCData(oldp+364,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_data_reg),4);
        bufp->chgCData(oldp+365,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_data_comp),4);
        bufp->chgCData(oldp+366,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_data_count),5);
        bufp->chgCData(oldp+367,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk90_reg_data_count),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x10U])) {
        bufp->chgCData(oldp+368,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_data_reg),4);
        bufp->chgCData(oldp+369,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_data_comp),4);
        bufp->chgCData(oldp+370,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_data_count),5);
        bufp->chgCData(oldp+371,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk180_reg_data_count),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x11U])) {
        bufp->chgCData(oldp+372,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_data_reg),4);
        bufp->chgCData(oldp+373,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_data_comp),4);
        bufp->chgCData(oldp+374,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_data_count),5);
        bufp->chgCData(oldp+375,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk270_reg_data_count),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x12U])) {
        bufp->chgCData(oldp+376,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_data_reg),4);
        bufp->chgCData(oldp+377,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_data_comp),4);
        bufp->chgCData(oldp+378,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_data_count),5);
        bufp->chgCData(oldp+379,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk0_reg_data_count),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x13U])) {
        bufp->chgCData(oldp+380,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_data_reg),4);
        bufp->chgCData(oldp+381,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_data_comp),4);
        bufp->chgCData(oldp+382,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_data_count),5);
        bufp->chgCData(oldp+383,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk90_reg_data_count),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x14U])) {
        bufp->chgCData(oldp+384,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_data_reg),4);
        bufp->chgCData(oldp+385,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_data_comp),4);
        bufp->chgCData(oldp+386,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_data_count),5);
        bufp->chgCData(oldp+387,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk180_reg_data_count),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x15U])) {
        bufp->chgCData(oldp+388,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_data_reg),4);
        bufp->chgCData(oldp+389,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_data_comp),4);
        bufp->chgCData(oldp+390,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_data_count),5);
        bufp->chgCData(oldp+391,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk270_reg_data_count),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x16U])) {
        bufp->chgBit(oldp+392,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__pllstart_ff2)) 
                                & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__pllstart))));
        bufp->chgBit(oldp+393,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__pllstart));
        bufp->chgBit(oldp+394,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__pllstart_ff1));
        bufp->chgBit(oldp+395,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__pllstart_ff2));
        bufp->chgBit(oldp+396,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__vcostart));
        bufp->chgBit(oldp+397,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__vcostart_ff));
        bufp->chgBit(oldp+398,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__pllstart_ff2)) 
                                & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__pllstart))));
        bufp->chgBit(oldp+399,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__pllstart));
        bufp->chgBit(oldp+400,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__pllstart_ff1));
        bufp->chgBit(oldp+401,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__pllstart_ff2));
        bufp->chgBit(oldp+402,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__vcostart));
        bufp->chgBit(oldp+403,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__vcostart_ff));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x17U])) {
        bufp->chgBit(oldp+404,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_fifo_dout));
        bufp->chgBit(oldp+405,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_adj_1));
        bufp->chgBit(oldp+406,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_adj_0));
        bufp->chgBit(oldp+407,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_adj_0)) 
                                & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__bitslip_adj_1))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x18U])) {
        bufp->chgBit(oldp+408,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo_read_en));
        bufp->chgBit(oldp+409,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__des_fifo_full));
        bufp->chgCData(oldp+410,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__rd_addr),5);
        bufp->chgCData(oldp+411,((0x1fU & ((IData)(1U) 
                                           + (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__rd_addr)))),5);
        bufp->chgCData(oldp+412,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__rgray),5);
        bufp->chgBit(oldp+413,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__read_empty));
        bufp->chgBit(oldp+414,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT____Vcellinp__afifo_inst__wr));
        bufp->chgSData(oldp+415,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__wr_addr),11);
        bufp->chgSData(oldp+416,((0x7ffU & ((IData)(1U) 
                                            + (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__wr_addr)))),11);
        bufp->chgSData(oldp+417,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__wgray),11);
        bufp->chgBit(oldp+418,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__des_fifo_full)) 
                                & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT____Vcellinp__afifo_inst__wr))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x19U])) {
        bufp->chgBit(oldp+419,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_fifo_dout));
        bufp->chgBit(oldp+420,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_adj_1));
        bufp->chgBit(oldp+421,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_adj_0));
        bufp->chgBit(oldp+422,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_adj_0)) 
                                & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__bitslip_adj_1))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1aU])) {
        bufp->chgBit(oldp+423,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo_read_en));
        bufp->chgBit(oldp+424,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__des_fifo_full));
        bufp->chgCData(oldp+425,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__rd_addr),5);
        bufp->chgCData(oldp+426,((0x1fU & ((IData)(1U) 
                                           + (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__rd_addr)))),5);
        bufp->chgCData(oldp+427,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__rgray),5);
        bufp->chgBit(oldp+428,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__read_empty));
        bufp->chgBit(oldp+429,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT____Vcellinp__afifo_inst__wr));
        bufp->chgSData(oldp+430,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__wr_addr),11);
        bufp->chgSData(oldp+431,((0x7ffU & ((IData)(1U) 
                                            + (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__wr_addr)))),11);
        bufp->chgSData(oldp+432,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__wgray),11);
        bufp->chgBit(oldp+433,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__des_fifo_full)) 
                                & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT____Vcellinp__afifo_inst__wr))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1bU])) {
        bufp->chgBit(oldp+434,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b0__05d));
        bufp->chgBit(oldp+435,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b1__05d));
        bufp->chgBit(oldp+436,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b2__05d));
        bufp->chgBit(oldp+437,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b3__05d));
        bufp->chgBit(oldp+438,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b4__05d));
        bufp->chgBit(oldp+439,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b5__05d));
        bufp->chgBit(oldp+440,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b6__05d));
        bufp->chgBit(oldp+441,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b7__05d));
        bufp->chgBit(oldp+442,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b8__05d));
        bufp->chgBit(oldp+443,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b9__05d));
        bufp->chgSData(oldp+444,((((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b9__05d) 
                                   << 9U) | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b8__05d) 
                                              << 8U) 
                                             | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b7__05d) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b6__05d) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b5__05d) 
                                                       << 5U) 
                                                      | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b4__05d) 
                                                          << 4U) 
                                                         | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b3__05d) 
                                                             << 3U) 
                                                            | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b2__05d) 
                                                                << 2U) 
                                                               | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b1__05d) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b0__05d))))))))))),10);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1cU])) {
        bufp->chgBit(oldp+445,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_fifo_full));
        bufp->chgBit(oldp+446,((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_fifo_full)))));
        bufp->chgCData(oldp+447,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__wr_addr),5);
        bufp->chgCData(oldp+448,((0x1fU & ((IData)(1U) 
                                           + (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__wr_addr)))),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1dU])) {
        bufp->chgBit(oldp+449,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_fifo_full));
        bufp->chgBit(oldp+450,((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_fifo_full)))));
        bufp->chgCData(oldp+451,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__wr_addr),5);
        bufp->chgCData(oldp+452,((0x1fU & ((IData)(1U) 
                                           + (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__wr_addr)))),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1eU])) {
        bufp->chgBit(oldp+453,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[0]));
        bufp->chgBit(oldp+454,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[1]));
        bufp->chgBit(oldp+455,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[2]));
        bufp->chgBit(oldp+456,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[3]));
        bufp->chgBit(oldp+457,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[4]));
        bufp->chgBit(oldp+458,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[5]));
        bufp->chgBit(oldp+459,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[6]));
        bufp->chgBit(oldp+460,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[7]));
        bufp->chgBit(oldp+461,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[8]));
        bufp->chgBit(oldp+462,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[9]));
        bufp->chgBit(oldp+463,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[10]));
        bufp->chgBit(oldp+464,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[11]));
        bufp->chgBit(oldp+465,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[12]));
        bufp->chgBit(oldp+466,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[13]));
        bufp->chgBit(oldp+467,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[14]));
        bufp->chgBit(oldp+468,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[15]));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1fU])) {
        bufp->chgBit(oldp+469,((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__des_fifo_empty)))));
        bufp->chgBit(oldp+470,((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo_empty)))));
        bufp->chgBit(oldp+471,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__fifo_empty));
        bufp->chgBit(oldp+472,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__des_fifo_empty));
        bufp->chgBit(oldp+473,((1U & (~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo_empty)))));
        bufp->chgBit(oldp+474,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__fifo_empty));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x20U])) {
        bufp->chgBit(oldp+475,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[0]));
        bufp->chgBit(oldp+476,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[1]));
        bufp->chgBit(oldp+477,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[2]));
        bufp->chgBit(oldp+478,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[3]));
        bufp->chgBit(oldp+479,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[4]));
        bufp->chgBit(oldp+480,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[5]));
        bufp->chgBit(oldp+481,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[6]));
        bufp->chgBit(oldp+482,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[7]));
        bufp->chgBit(oldp+483,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[8]));
        bufp->chgBit(oldp+484,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[9]));
        bufp->chgBit(oldp+485,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[10]));
        bufp->chgBit(oldp+486,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[11]));
        bufp->chgBit(oldp+487,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[12]));
        bufp->chgBit(oldp+488,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[13]));
        bufp->chgBit(oldp+489,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[14]));
        bufp->chgBit(oldp+490,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_dpa__DOT__dual_port_ram__DOT__genblk1__DOT__mem[15]));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x21U])) {
        bufp->chgSData(oldp+491,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__data_i_serdes),10);
        bufp->chgBit(oldp+492,((1U & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q))));
        bufp->chgBit(oldp+493,((1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                      >> 1U))));
        bufp->chgBit(oldp+494,((1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                      >> 2U))));
        bufp->chgBit(oldp+495,((1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                      >> 3U))));
        bufp->chgBit(oldp+496,((1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                      >> 4U))));
        bufp->chgBit(oldp+497,((1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                      >> 5U))));
        bufp->chgBit(oldp+498,((1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                      >> 6U))));
        bufp->chgBit(oldp+499,((1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                      >> 7U))));
        bufp->chgBit(oldp+500,((1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                      >> 8U))));
        bufp->chgBit(oldp+501,((1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q) 
                                      >> 9U))));
        bufp->chgSData(oldp+502,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____Vcellout__input_data_serdes__Q),10);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x22U])) {
        bufp->chgSData(oldp+503,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__rd_addr),11);
        bufp->chgSData(oldp+504,((0x7ffU & ((IData)(1U) 
                                            + (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__rd_addr)))),11);
        bufp->chgBit(oldp+505,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__read_empty));
        bufp->chgSData(oldp+506,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__rd_addr),11);
        bufp->chgSData(oldp+507,((0x7ffU & ((IData)(1U) 
                                            + (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__rd_addr)))),11);
        bufp->chgBit(oldp+508,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__read_empty));
    }
    bufp->chgBit(oldp+509,(vlSelf->co_sim_GJC46_edit__DOT__clkGHz));
    bufp->chgBit(oldp+510,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__oe_shift_reg) 
                            & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__delay_out))));
    bufp->chgBit(oldp+511,(((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__oe_shift_reg) 
                            & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__delay_out))));
    bufp->chgBit(oldp+512,(((0xffU == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__wait_pll)) 
                            & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_lock))));
    bufp->chgBit(oldp+513,((1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_lock)
                                   ? (1U & (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b6__05d)
                                              ? (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                                                   ? 
                                                  ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                                    ? 8U
                                                    : 0U)
                                                   : 0U) 
                                                 >> 2U)
                                              : ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                                                  ? 
                                                 ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                                   ? 8U
                                                   : 0U)
                                                  : 0U)) 
                                            >> 1U))
                                   : (3U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b6__05d)
                                             ? (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                                                  ? 
                                                 ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                                   ? 8U
                                                   : 0U)
                                                  : 0U) 
                                                >> 2U)
                                             : ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                                                 ? 
                                                ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                                  ? 8U
                                                  : 0U)
                                                 : 0U)))))));
    bufp->chgBit(oldp+514,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__data_i_delay));
    bufp->chgBit(oldp+515,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_vco));
    bufp->chgSData(oldp+516,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__data_i_serdes_reg),10);
    bufp->chgCData(oldp+517,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__wait_pll),8);
    bufp->chgBit(oldp+518,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_lock));
    bufp->chgBit(oldp+519,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__delay_out));
    bufp->chgBit(oldp+520,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_out_div2));
    bufp->chgBit(oldp+521,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_out_div3));
    bufp->chgBit(oldp+522,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_out_div4));
    bufp->chgBit(oldp+523,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_postdiv));
    bufp->chgIData(oldp+524,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__div3_count),32);
    bufp->chgBit(oldp+525,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__word_load_en_sync));
    bufp->chgSData(oldp+526,(((0x400U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__enable_n)) 
                                         << 0xaU)) 
                              | (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__data_i_serdes_reg))),11);
    bufp->chgBit(oldp+527,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_error));
    bufp->chgBit(oldp+528,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_0));
    bufp->chgBit(oldp+529,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_90));
    bufp->chgBit(oldp+530,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_180));
    bufp->chgBit(oldp+531,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_270));
    bufp->chgBit(oldp+532,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_clk));
    bufp->chgBit(oldp+533,(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_dout));
    bufp->chgBit(oldp+534,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__enable_n)) 
                            & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_fifo_dout))));
    bufp->chgBit(oldp+535,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241161__024abc____VhshGVgqBU6wRRDtA5Ir9Uo4M9yi2GGlyR1rSX1aUOlb));
    bufp->chgBit(oldp+536,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_lock));
    bufp->chgBit(oldp+537,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_delay));
    bufp->chgBit(oldp+538,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__delay_out));
    bufp->chgBit(oldp+539,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco));
    bufp->chgCData(oldp+540,((((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F) 
                               << 4U) | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d) 
                                          << 3U) | 
                                         (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b6__05d) 
                                           << 2U) | 
                                          ((2U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__des_fifo_empty)) 
                                                  << 1U)) 
                                           | (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_lock)))))),5);
    bufp->chgCData(oldp+541,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024auto_1731__DOT__s1),2);
    bufp->chgCData(oldp+542,((((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F) 
                               << 3U) | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d) 
                                          << 2U) | 
                                         (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b6__05d) 
                                           << 1U) | (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_lock))))),4);
    bufp->chgBit(oldp+543,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_out_div2));
    bufp->chgBit(oldp+544,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_out_div3));
    bufp->chgBit(oldp+545,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_out_div4));
    bufp->chgBit(oldp+546,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_postdiv));
    bufp->chgIData(oldp+547,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__div3_count),32);
    bufp->chgBit(oldp+548,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__word_load_en_sync));
    bufp->chgSData(oldp+549,(((0x400U & ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__enable_n)) 
                                         << 0xaU)) 
                              | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b9__05d) 
                                  << 9U) | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b8__05d) 
                                             << 8U) 
                                            | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b7__05d) 
                                                << 7U) 
                                               | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b6__05d) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b5__05d) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b4__05d) 
                                                         << 4U) 
                                                        | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b3__05d) 
                                                            << 3U) 
                                                           | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b2__05d) 
                                                               << 2U) 
                                                              | (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b1__05d) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__data_i_serdes_reg__05b0__05d)))))))))))),11);
    bufp->chgBit(oldp+550,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_error));
    bufp->chgBit(oldp+551,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_0));
    bufp->chgBit(oldp+552,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_90));
    bufp->chgBit(oldp+553,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_180));
    bufp->chgBit(oldp+554,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_270));
    bufp->chgBit(oldp+555,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_clk));
    bufp->chgBit(oldp+556,(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_dout));
    bufp->chgBit(oldp+557,(((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__enable_n)) 
                            & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_fifo_dout))));
}

void Vco_sim_GJC46_edit___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root__trace_cleanup\n"); );
    // Init
    Vco_sim_GJC46_edit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vco_sim_GJC46_edit___024root*>(voidSelf);
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xcU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xeU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xfU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x10U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x11U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x12U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x13U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x14U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x15U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x16U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x17U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x18U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x19U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1aU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1bU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1cU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1dU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1eU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1fU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x20U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x21U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x22U] = 0U;
}
