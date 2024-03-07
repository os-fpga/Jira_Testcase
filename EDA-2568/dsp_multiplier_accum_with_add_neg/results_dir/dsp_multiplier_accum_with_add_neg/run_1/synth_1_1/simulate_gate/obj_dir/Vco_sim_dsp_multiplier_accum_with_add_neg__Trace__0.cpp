// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vco_sim_dsp_multiplier_accum_with_add_neg__Syms.h"


void Vco_sim_dsp_multiplier_accum_with_add_neg___024root__trace_chg_0_sub_0(Vco_sim_dsp_multiplier_accum_with_add_neg___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vco_sim_dsp_multiplier_accum_with_add_neg___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_dsp_multiplier_accum_with_add_neg___024root__trace_chg_0\n"); );
    // Init
    Vco_sim_dsp_multiplier_accum_with_add_neg___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vco_sim_dsp_multiplier_accum_with_add_neg___024root*>(voidSelf);
    Vco_sim_dsp_multiplier_accum_with_add_neg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vco_sim_dsp_multiplier_accum_with_add_neg___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vco_sim_dsp_multiplier_accum_with_add_neg___024root__trace_chg_0_sub_0(Vco_sim_dsp_multiplier_accum_with_add_neg___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_dsp_multiplier_accum_with_add_neg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_dsp_multiplier_accum_with_add_neg___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgBit(oldp+0,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__subtract_int));
        bufp->chgCData(oldp+1,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__acc_fir_int),6);
        bufp->chgCData(oldp+2,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__shift_right_int),6);
        bufp->chgBit(oldp+3,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__round_int));
        bufp->chgBit(oldp+4,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__saturate_int));
        bufp->chgBit(oldp+5,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__load_acc_int));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+6,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__feedback_int),3);
        bufp->chgBit(oldp+7,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__unsigned_a_int));
        bufp->chgBit(oldp+8,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__unsigned_b_int));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgSData(oldp+9,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A),16);
        bufp->chgSData(oldp+10,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B),16);
        bufp->chgSData(oldp+11,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C),16);
        bufp->chgSData(oldp+12,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D),16);
        bufp->chgBit(oldp+13,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset));
        bufp->chgBit(oldp+14,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p));
        bufp->chgIData(oldp+15,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__mismatch),32);
        bufp->chgBit(oldp+16,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A)))));
        bufp->chgBit(oldp+17,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A) 
                                        >> 1U)))));
        bufp->chgBit(oldp+18,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A) 
                                        >> 2U)))));
        bufp->chgBit(oldp+19,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A) 
                                        >> 3U)))));
        bufp->chgBit(oldp+20,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A) 
                                        >> 4U)))));
        bufp->chgBit(oldp+21,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A) 
                                        >> 5U)))));
        bufp->chgBit(oldp+22,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A) 
                                        >> 6U)))));
        bufp->chgBit(oldp+23,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A) 
                                        >> 7U)))));
        bufp->chgBit(oldp+24,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A) 
                                        >> 8U)))));
        bufp->chgBit(oldp+25,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A) 
                                        >> 9U)))));
        bufp->chgBit(oldp+26,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A) 
                                        >> 0xaU)))));
        bufp->chgBit(oldp+27,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A) 
                                        >> 0xbU)))));
        bufp->chgBit(oldp+28,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A) 
                                        >> 0xcU)))));
        bufp->chgBit(oldp+29,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A) 
                                        >> 0xdU)))));
        bufp->chgBit(oldp+30,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A) 
                                        >> 0xeU)))));
        bufp->chgBit(oldp+31,(((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                               & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A) 
                                  >> 0xfU))));
        bufp->chgBit(oldp+32,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B)))));
        bufp->chgBit(oldp+33,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B) 
                                        >> 1U)))));
        bufp->chgBit(oldp+34,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B) 
                                        >> 2U)))));
        bufp->chgBit(oldp+35,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B) 
                                        >> 3U)))));
        bufp->chgBit(oldp+36,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B) 
                                        >> 4U)))));
        bufp->chgBit(oldp+37,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B) 
                                        >> 5U)))));
        bufp->chgBit(oldp+38,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B) 
                                        >> 6U)))));
        bufp->chgBit(oldp+39,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B) 
                                        >> 7U)))));
        bufp->chgBit(oldp+40,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B) 
                                        >> 8U)))));
        bufp->chgBit(oldp+41,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B) 
                                        >> 9U)))));
        bufp->chgBit(oldp+42,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B) 
                                        >> 0xaU)))));
        bufp->chgBit(oldp+43,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B) 
                                        >> 0xbU)))));
        bufp->chgBit(oldp+44,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B) 
                                        >> 0xcU)))));
        bufp->chgBit(oldp+45,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B) 
                                        >> 0xdU)))));
        bufp->chgBit(oldp+46,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B) 
                                        >> 0xeU)))));
        bufp->chgBit(oldp+47,(((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                               & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B) 
                                  >> 0xfU))));
        bufp->chgBit(oldp+48,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C)))));
        bufp->chgBit(oldp+49,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C) 
                                        >> 1U)))));
        bufp->chgBit(oldp+50,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C) 
                                        >> 2U)))));
        bufp->chgBit(oldp+51,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C) 
                                        >> 3U)))));
        bufp->chgBit(oldp+52,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C) 
                                        >> 4U)))));
        bufp->chgBit(oldp+53,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C) 
                                        >> 5U)))));
        bufp->chgBit(oldp+54,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C) 
                                        >> 6U)))));
        bufp->chgBit(oldp+55,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C) 
                                        >> 7U)))));
        bufp->chgBit(oldp+56,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C) 
                                        >> 8U)))));
        bufp->chgBit(oldp+57,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C) 
                                        >> 9U)))));
        bufp->chgBit(oldp+58,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C) 
                                        >> 0xaU)))));
        bufp->chgBit(oldp+59,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C) 
                                        >> 0xbU)))));
        bufp->chgBit(oldp+60,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C) 
                                        >> 0xcU)))));
        bufp->chgBit(oldp+61,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C) 
                                        >> 0xdU)))));
        bufp->chgBit(oldp+62,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C) 
                                        >> 0xeU)))));
        bufp->chgBit(oldp+63,(((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                               & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C) 
                                  >> 0xfU))));
        bufp->chgBit(oldp+64,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D)))));
        bufp->chgBit(oldp+65,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D) 
                                        >> 1U)))));
        bufp->chgBit(oldp+66,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D) 
                                        >> 2U)))));
        bufp->chgBit(oldp+67,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D) 
                                        >> 3U)))));
        bufp->chgBit(oldp+68,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D) 
                                        >> 4U)))));
        bufp->chgBit(oldp+69,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D) 
                                        >> 5U)))));
        bufp->chgBit(oldp+70,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D) 
                                        >> 6U)))));
        bufp->chgBit(oldp+71,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D) 
                                        >> 7U)))));
        bufp->chgBit(oldp+72,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D) 
                                        >> 8U)))));
        bufp->chgBit(oldp+73,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D) 
                                        >> 9U)))));
        bufp->chgBit(oldp+74,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D) 
                                        >> 0xaU)))));
        bufp->chgBit(oldp+75,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D) 
                                        >> 0xbU)))));
        bufp->chgBit(oldp+76,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D) 
                                        >> 0xcU)))));
        bufp->chgBit(oldp+77,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D) 
                                        >> 0xdU)))));
        bufp->chgBit(oldp+78,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                     & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D) 
                                        >> 0xeU)))));
        bufp->chgBit(oldp+79,(((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                               & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D) 
                                  >> 0xfU))));
        bufp->chgCData(oldp+80,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D) 
                                        >> 0xeU)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgBit(oldp+81,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)))));
        bufp->chgCData(oldp+82,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D) 
                                        >> 0xdU)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+83,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D) 
                                        >> 0xcU)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+84,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D) 
                                        >> 0xbU)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+85,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D) 
                                        >> 0xaU)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+86,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D) 
                                        >> 9U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+87,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D) 
                                        >> 8U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+88,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D) 
                                        >> 7U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+89,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D) 
                                        >> 6U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+90,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D) 
                                        >> 5U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+91,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D) 
                                        >> 4U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+92,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D) 
                                        >> 3U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+93,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D) 
                                        >> 2U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+94,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D) 
                                        >> 1U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+95,(((2U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D)) 
                                 | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+96,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__D) 
                                        << 1U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+97,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C) 
                                        >> 0xeU)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+98,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C) 
                                        >> 0xdU)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+99,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C) 
                                        >> 0xcU)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+100,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C) 
                                         >> 0xbU)) 
                                  | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+101,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C) 
                                         >> 0xaU)) 
                                  | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+102,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C) 
                                         >> 9U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+103,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C) 
                                         >> 8U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+104,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C) 
                                         >> 7U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+105,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C) 
                                         >> 6U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+106,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C) 
                                         >> 5U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+107,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C) 
                                         >> 4U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+108,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C) 
                                         >> 3U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+109,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C) 
                                         >> 2U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+110,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C) 
                                         >> 1U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+111,(((2U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C)) 
                                  | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+112,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__C) 
                                         << 1U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+113,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B) 
                                         >> 0xeU)) 
                                  | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+114,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B) 
                                         >> 0xdU)) 
                                  | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+115,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B) 
                                         >> 0xcU)) 
                                  | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+116,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B) 
                                         >> 0xbU)) 
                                  | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+117,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B) 
                                         >> 0xaU)) 
                                  | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+118,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B) 
                                         >> 9U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+119,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B) 
                                         >> 8U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+120,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B) 
                                         >> 7U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+121,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B) 
                                         >> 6U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+122,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B) 
                                         >> 5U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+123,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B) 
                                         >> 4U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+124,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B) 
                                         >> 3U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+125,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B) 
                                         >> 2U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+126,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B) 
                                         >> 1U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+127,(((2U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B)) 
                                  | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+128,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__B) 
                                         << 1U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+129,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A) 
                                         >> 0xeU)) 
                                  | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+130,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A) 
                                         >> 0xdU)) 
                                  | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+131,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A) 
                                         >> 0xcU)) 
                                  | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+132,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A) 
                                         >> 0xbU)) 
                                  | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+133,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A) 
                                         >> 0xaU)) 
                                  | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+134,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A) 
                                         >> 9U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+135,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A) 
                                         >> 8U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+136,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A) 
                                         >> 7U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+137,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A) 
                                         >> 6U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+138,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A) 
                                         >> 5U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+139,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A) 
                                         >> 4U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+140,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A) 
                                         >> 3U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+141,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A) 
                                         >> 2U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+142,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A) 
                                         >> 1U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+143,(((2U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A)) 
                                  | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+144,(((2U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__A) 
                                         << 1U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
    }
    if (VL_UNLIKELY((((vlSelf->__Vm_traceActivity[1U] 
                       | vlSelf->__Vm_traceActivity
                       [2U]) | vlSelf->__Vm_traceActivity
                      [8U]) | vlSelf->__Vm_traceActivity
                     [0x10U]))) {
        bufp->chgBit(oldp+145,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                      & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2))));
        bufp->chgBit(oldp+146,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                      & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 1U)))));
        bufp->chgBit(oldp+147,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                      & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 2U)))));
        bufp->chgBit(oldp+148,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                      & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 3U)))));
        bufp->chgBit(oldp+149,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                      & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 4U)))));
        bufp->chgBit(oldp+150,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                      & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 5U)))));
        bufp->chgBit(oldp+151,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                      & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 6U)))));
        bufp->chgBit(oldp+152,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                      & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 7U)))));
        bufp->chgBit(oldp+153,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                      & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 8U)))));
        bufp->chgBit(oldp+154,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                      & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 9U)))));
        bufp->chgBit(oldp+155,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                      & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+156,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                      & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+157,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                      & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+158,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                      & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+159,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                      & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+160,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                      & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+161,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                      & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+162,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                      & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+163,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                      & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+164,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                      & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+165,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                      & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+166,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                      & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+167,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                      & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+168,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                      & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+169,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                      & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+170,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                      & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+171,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                      & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+172,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                      & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+173,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                      & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+174,((1U & ((~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset)) 
                                      & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 0x1dU)))));
        bufp->chgCData(oldp+175,(((2U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 0x1cU)) 
                                  | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+176,(((2U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 0x1bU)) 
                                  | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+177,(((2U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 0x1aU)) 
                                  | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+178,(((2U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 0x19U)) 
                                  | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+179,(((2U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 0x18U)) 
                                  | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+180,(((2U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 0x17U)) 
                                  | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+181,(((2U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 0x16U)) 
                                  | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+182,(((2U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 0x15U)) 
                                  | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+183,(((2U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 0x14U)) 
                                  | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+184,(((2U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 0x13U)) 
                                  | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+185,(((2U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 0x12U)) 
                                  | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+186,(((2U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 0x11U)) 
                                  | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+187,(((2U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 0x10U)) 
                                  | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+188,(((2U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 0xfU)) 
                                  | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+189,(((2U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 0xeU)) 
                                  | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+190,(((2U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 0xdU)) 
                                  | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+191,(((2U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 0xcU)) 
                                  | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+192,(((2U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 0xbU)) 
                                  | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+193,(((2U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 0xaU)) 
                                  | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+194,(((2U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 9U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+195,(((2U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 8U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+196,(((2U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 7U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+197,(((2U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 6U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+198,(((2U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 5U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+199,(((2U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 4U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+200,(((2U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 3U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+201,(((2U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 2U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+202,(((2U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         >> 1U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+203,(((2U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2) 
                                  | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
        bufp->chgCData(oldp+204,(((2U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2 
                                         << 1U)) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__reset))),2);
    }
    if (VL_UNLIKELY((((((vlSelf->__Vm_traceActivity
                         [3U] | vlSelf->__Vm_traceActivity
                         [7U]) | vlSelf->__Vm_traceActivity
                        [8U]) | vlSelf->__Vm_traceActivity
                       [0xdU]) | vlSelf->__Vm_traceActivity
                      [0xfU]) | vlSelf->__Vm_traceActivity
                     [0x10U]))) {
        bufp->chgBit(oldp+205,((1U & ((1U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS)
                                       ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC)
                                       : vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA))));
        bufp->chgBit(oldp+206,((1U & ((0x400U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS)
                                       ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                                  >> 0xaU))
                                       : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                          >> 0xaU)))));
        bufp->chgBit(oldp+207,((1U & ((0x800U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS)
                                       ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                                  >> 0xbU))
                                       : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                          >> 0xbU)))));
        bufp->chgBit(oldp+208,((1U & ((0x1000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS)
                                       ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                                  >> 0xcU))
                                       : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                          >> 0xcU)))));
        bufp->chgBit(oldp+209,((1U & ((0x2000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS)
                                       ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                                  >> 0xdU))
                                       : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                          >> 0xdU)))));
        bufp->chgBit(oldp+210,((1U & ((0x4000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS)
                                       ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                                  >> 0xeU))
                                       : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                          >> 0xeU)))));
        bufp->chgBit(oldp+211,((1U & ((0x8000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS)
                                       ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                                  >> 0xfU))
                                       : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+212,((1U & ((0x10000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS)
                                       ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                                  >> 0x10U))
                                       : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                          >> 0x10U)))));
        bufp->chgBit(oldp+213,((1U & ((0x20000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS)
                                       ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                                  >> 0x11U))
                                       : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                          >> 0x11U)))));
        bufp->chgBit(oldp+214,((1U & ((0x40000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS)
                                       ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                                  >> 0x12U))
                                       : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                          >> 0x12U)))));
        bufp->chgBit(oldp+215,((1U & ((0x80000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS)
                                       ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                                  >> 0x13U))
                                       : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                          >> 0x13U)))));
        bufp->chgBit(oldp+216,((1U & ((2U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS)
                                       ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                                  >> 1U))
                                       : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                          >> 1U)))));
        bufp->chgBit(oldp+217,((1U & ((0x100000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS)
                                       ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                                  >> 0x14U))
                                       : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                          >> 0x14U)))));
        bufp->chgBit(oldp+218,((1U & ((0x200000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS)
                                       ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                                  >> 0x15U))
                                       : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                          >> 0x15U)))));
        bufp->chgBit(oldp+219,((1U & ((0x400000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS)
                                       ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                                  >> 0x16U))
                                       : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                          >> 0x16U)))));
        bufp->chgBit(oldp+220,((1U & ((0x800000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS)
                                       ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                                  >> 0x17U))
                                       : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                          >> 0x17U)))));
        bufp->chgBit(oldp+221,((1U & ((0x1000000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS)
                                       ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                                  >> 0x18U))
                                       : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                          >> 0x18U)))));
        bufp->chgBit(oldp+222,((1U & ((0x2000000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS)
                                       ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                                  >> 0x19U))
                                       : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                          >> 0x19U)))));
        bufp->chgBit(oldp+223,((1U & ((0x4000000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS)
                                       ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                                  >> 0x1aU))
                                       : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                          >> 0x1aU)))));
        bufp->chgBit(oldp+224,((1U & ((0x8000000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS)
                                       ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                                  >> 0x1bU))
                                       : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                          >> 0x1bU)))));
        bufp->chgBit(oldp+225,((1U & ((0x10000000U 
                                       & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS)
                                       ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                                  >> 0x1cU))
                                       : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                          >> 0x1cU)))));
        bufp->chgBit(oldp+226,((1U & ((0x20000000U 
                                       & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS)
                                       ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                                  >> 0x1dU))
                                       : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                          >> 0x1dU)))));
        bufp->chgBit(oldp+227,((1U & ((4U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS)
                                       ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                                  >> 2U))
                                       : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                          >> 2U)))));
        bufp->chgBit(oldp+228,((1U & ((8U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS)
                                       ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                                  >> 3U))
                                       : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                          >> 3U)))));
        bufp->chgBit(oldp+229,((1U & ((0x10U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS)
                                       ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                                  >> 4U))
                                       : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                          >> 4U)))));
        bufp->chgBit(oldp+230,((1U & ((0x20U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS)
                                       ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                                  >> 5U))
                                       : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                          >> 5U)))));
        bufp->chgBit(oldp+231,((1U & ((0x40U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS)
                                       ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                                  >> 6U))
                                       : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                          >> 6U)))));
        bufp->chgBit(oldp+232,((1U & ((0x80U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS)
                                       ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                                  >> 7U))
                                       : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                          >> 7U)))));
        bufp->chgBit(oldp+233,((1U & ((0x100U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS)
                                       ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                                  >> 8U))
                                       : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                          >> 8U)))));
        bufp->chgBit(oldp+234,((1U & ((0x200U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS)
                                       ? (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                                  >> 9U))
                                       : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                          >> 9U)))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0xdU]))) {
        bufp->chgIData(oldp+235,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA),32);
        bufp->chgBit(oldp+236,((1U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA)));
        bufp->chgBit(oldp+237,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                      >> 0xaU))));
        bufp->chgBit(oldp+238,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                      >> 0xbU))));
        bufp->chgBit(oldp+239,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                      >> 0xcU))));
        bufp->chgBit(oldp+240,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                      >> 0xdU))));
        bufp->chgBit(oldp+241,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                      >> 0xeU))));
        bufp->chgBit(oldp+242,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                      >> 0xfU))));
        bufp->chgBit(oldp+243,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                      >> 0x10U))));
        bufp->chgBit(oldp+244,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                      >> 0x11U))));
        bufp->chgBit(oldp+245,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                      >> 0x12U))));
        bufp->chgBit(oldp+246,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                      >> 0x13U))));
        bufp->chgBit(oldp+247,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                      >> 1U))));
        bufp->chgBit(oldp+248,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                      >> 0x14U))));
        bufp->chgBit(oldp+249,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                      >> 0x15U))));
        bufp->chgBit(oldp+250,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                      >> 0x16U))));
        bufp->chgBit(oldp+251,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                      >> 0x17U))));
        bufp->chgBit(oldp+252,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                      >> 0x18U))));
        bufp->chgBit(oldp+253,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                      >> 0x19U))));
        bufp->chgBit(oldp+254,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+255,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+256,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+257,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+258,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                      >> 2U))));
        bufp->chgBit(oldp+259,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                      >> 3U))));
        bufp->chgBit(oldp+260,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                      >> 4U))));
        bufp->chgBit(oldp+261,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                      >> 5U))));
        bufp->chgBit(oldp+262,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                      >> 6U))));
        bufp->chgBit(oldp+263,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                      >> 7U))));
        bufp->chgBit(oldp+264,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                      >> 8U))));
        bufp->chgBit(oldp+265,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eA 
                                      >> 9U))));
        bufp->chgCData(oldp+266,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244375__A),3);
        bufp->chgBit(oldp+267,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244375__A))
                                       ? ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244375__A) 
                                          >> 1U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244375__A)))));
        bufp->chgBit(oldp+268,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244375__A))));
        bufp->chgBit(oldp+269,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244375__A) 
                                      >> 1U))));
        bufp->chgCData(oldp+270,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244375__A))),2);
        bufp->chgCData(oldp+271,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244369__A),3);
        bufp->chgBit(oldp+272,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244369__A))
                                       ? ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244369__A) 
                                          >> 1U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244369__A)))));
        bufp->chgBit(oldp+273,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244369__A))));
        bufp->chgBit(oldp+274,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244369__A) 
                                      >> 1U))));
        bufp->chgCData(oldp+275,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244369__A))),2);
        bufp->chgCData(oldp+276,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244395__A),3);
        bufp->chgBit(oldp+277,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244395__A))
                                       ? ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244395__A) 
                                          >> 1U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244395__A)))));
        bufp->chgBit(oldp+278,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244395__A))));
        bufp->chgBit(oldp+279,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244395__A) 
                                      >> 1U))));
        bufp->chgCData(oldp+280,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244395__A))),2);
        bufp->chgCData(oldp+281,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244393__A),3);
        bufp->chgBit(oldp+282,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244393__A))
                                       ? ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244393__A) 
                                          >> 1U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244393__A)))));
        bufp->chgBit(oldp+283,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244393__A))));
        bufp->chgBit(oldp+284,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244393__A) 
                                      >> 1U))));
        bufp->chgCData(oldp+285,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244393__A))),2);
        bufp->chgCData(oldp+286,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244373__A),3);
        bufp->chgBit(oldp+287,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244373__A))
                                       ? ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244373__A) 
                                          >> 1U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244373__A)))));
        bufp->chgBit(oldp+288,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244373__A))));
        bufp->chgBit(oldp+289,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244373__A) 
                                      >> 1U))));
        bufp->chgCData(oldp+290,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244373__A))),2);
        bufp->chgCData(oldp+291,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244346__A),3);
        bufp->chgBit(oldp+292,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244346__A))
                                       ? ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244346__A) 
                                          >> 1U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244346__A)))));
        bufp->chgBit(oldp+293,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244346__A))));
        bufp->chgBit(oldp+294,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244346__A) 
                                      >> 1U))));
        bufp->chgCData(oldp+295,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244346__A))),2);
        bufp->chgCData(oldp+296,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244371__A),3);
        bufp->chgBit(oldp+297,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244371__A))
                                       ? ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244371__A) 
                                          >> 1U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244371__A)))));
        bufp->chgBit(oldp+298,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244371__A))));
        bufp->chgBit(oldp+299,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244371__A) 
                                      >> 1U))));
        bufp->chgCData(oldp+300,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244371__A))),2);
        bufp->chgCData(oldp+301,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244340__A),3);
        bufp->chgBit(oldp+302,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244340__A))
                                       ? ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244340__A) 
                                          >> 1U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244340__A)))));
        bufp->chgBit(oldp+303,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244340__A))));
        bufp->chgBit(oldp+304,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244340__A) 
                                      >> 1U))));
        bufp->chgCData(oldp+305,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244340__A))),2);
        bufp->chgCData(oldp+306,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244348__A),3);
        bufp->chgBit(oldp+307,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244348__A))
                                       ? ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244348__A) 
                                          >> 1U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244348__A)))));
        bufp->chgBit(oldp+308,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244348__A))));
        bufp->chgBit(oldp+309,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244348__A) 
                                      >> 1U))));
        bufp->chgCData(oldp+310,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244348__A))),2);
        bufp->chgCData(oldp+311,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244398__A),3);
        bufp->chgBit(oldp+312,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244398__A))
                                       ? ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244398__A) 
                                          >> 1U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244398__A)))));
        bufp->chgBit(oldp+313,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244398__A))));
        bufp->chgBit(oldp+314,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244398__A) 
                                      >> 1U))));
        bufp->chgCData(oldp+315,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244398__A))),2);
        bufp->chgCData(oldp+316,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244356__A),3);
        bufp->chgBit(oldp+317,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244356__A))
                                       ? ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244356__A) 
                                          >> 1U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244356__A)))));
        bufp->chgBit(oldp+318,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244356__A))));
        bufp->chgBit(oldp+319,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244356__A) 
                                      >> 1U))));
        bufp->chgCData(oldp+320,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244356__A))),2);
        bufp->chgCData(oldp+321,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244358__A),3);
        bufp->chgBit(oldp+322,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244358__A))
                                       ? ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244358__A) 
                                          >> 1U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244358__A)))));
        bufp->chgBit(oldp+323,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244358__A))));
        bufp->chgBit(oldp+324,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244358__A) 
                                      >> 1U))));
        bufp->chgCData(oldp+325,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244358__A))),2);
        bufp->chgCData(oldp+326,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244360__A),3);
        bufp->chgBit(oldp+327,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244360__A))
                                       ? ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244360__A) 
                                          >> 1U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244360__A)))));
        bufp->chgBit(oldp+328,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244360__A))));
        bufp->chgBit(oldp+329,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244360__A) 
                                      >> 1U))));
        bufp->chgCData(oldp+330,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244360__A))),2);
        bufp->chgCData(oldp+331,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244362__A),3);
        bufp->chgBit(oldp+332,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244362__A))
                                       ? ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244362__A) 
                                          >> 1U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244362__A)))));
        bufp->chgBit(oldp+333,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244362__A))));
        bufp->chgBit(oldp+334,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244362__A) 
                                      >> 1U))));
        bufp->chgCData(oldp+335,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244362__A))),2);
        bufp->chgCData(oldp+336,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244364__A),3);
        bufp->chgBit(oldp+337,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244364__A))
                                       ? ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244364__A) 
                                          >> 1U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244364__A)))));
        bufp->chgBit(oldp+338,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244364__A))));
        bufp->chgBit(oldp+339,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244364__A) 
                                      >> 1U))));
        bufp->chgCData(oldp+340,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244364__A))),2);
        bufp->chgCData(oldp+341,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244366__A),3);
        bufp->chgBit(oldp+342,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244366__A))
                                       ? ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244366__A) 
                                          >> 1U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244366__A)))));
        bufp->chgBit(oldp+343,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244366__A))));
        bufp->chgBit(oldp+344,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244366__A) 
                                      >> 1U))));
        bufp->chgCData(oldp+345,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244366__A))),2);
        bufp->chgCData(oldp+346,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244338__A),3);
        bufp->chgBit(oldp+347,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244338__A))
                                       ? ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244338__A) 
                                          >> 1U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244338__A)))));
        bufp->chgBit(oldp+348,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244338__A))));
        bufp->chgBit(oldp+349,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244338__A) 
                                      >> 1U))));
        bufp->chgCData(oldp+350,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244338__A))),2);
        bufp->chgCData(oldp+351,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244377__A),3);
        bufp->chgBit(oldp+352,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244377__A))
                                       ? ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244377__A) 
                                          >> 1U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244377__A)))));
        bufp->chgBit(oldp+353,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244377__A))));
        bufp->chgBit(oldp+354,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244377__A) 
                                      >> 1U))));
        bufp->chgCData(oldp+355,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244377__A))),2);
        bufp->chgCData(oldp+356,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244389__A),3);
        bufp->chgBit(oldp+357,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244389__A))
                                       ? ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244389__A) 
                                          >> 1U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244389__A)))));
        bufp->chgBit(oldp+358,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244389__A))));
        bufp->chgBit(oldp+359,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244389__A) 
                                      >> 1U))));
        bufp->chgCData(oldp+360,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244389__A))),2);
        bufp->chgCData(oldp+361,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244381__A),3);
        bufp->chgBit(oldp+362,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244381__A))
                                       ? ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244381__A) 
                                          >> 1U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244381__A)))));
        bufp->chgBit(oldp+363,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244381__A))));
        bufp->chgBit(oldp+364,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244381__A) 
                                      >> 1U))));
        bufp->chgCData(oldp+365,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244381__A))),2);
        bufp->chgCData(oldp+366,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244383__A),3);
        bufp->chgBit(oldp+367,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244383__A))
                                       ? ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244383__A) 
                                          >> 1U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244383__A)))));
        bufp->chgBit(oldp+368,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244383__A))));
        bufp->chgBit(oldp+369,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244383__A) 
                                      >> 1U))));
        bufp->chgCData(oldp+370,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244383__A))),2);
        bufp->chgCData(oldp+371,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244354__A),3);
        bufp->chgBit(oldp+372,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244354__A))
                                       ? ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244354__A) 
                                          >> 1U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244354__A)))));
        bufp->chgBit(oldp+373,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244354__A))));
        bufp->chgBit(oldp+374,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244354__A) 
                                      >> 1U))));
        bufp->chgCData(oldp+375,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244354__A))),2);
        bufp->chgCData(oldp+376,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244387__A),3);
        bufp->chgBit(oldp+377,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244387__A))
                                       ? ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244387__A) 
                                          >> 1U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244387__A)))));
        bufp->chgBit(oldp+378,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244387__A))));
        bufp->chgBit(oldp+379,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244387__A) 
                                      >> 1U))));
        bufp->chgCData(oldp+380,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244387__A))),2);
        bufp->chgCData(oldp+381,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244385__A),3);
        bufp->chgBit(oldp+382,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244385__A))
                                       ? ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244385__A) 
                                          >> 1U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244385__A)))));
        bufp->chgBit(oldp+383,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244385__A))));
        bufp->chgBit(oldp+384,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244385__A) 
                                      >> 1U))));
        bufp->chgCData(oldp+385,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244385__A))),2);
        bufp->chgCData(oldp+386,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244391__A),3);
        bufp->chgBit(oldp+387,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244391__A))
                                       ? ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244391__A) 
                                          >> 1U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244391__A)))));
        bufp->chgBit(oldp+388,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244391__A))));
        bufp->chgBit(oldp+389,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244391__A) 
                                      >> 1U))));
        bufp->chgCData(oldp+390,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244391__A))),2);
        bufp->chgCData(oldp+391,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244379__A),3);
        bufp->chgBit(oldp+392,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244379__A))
                                       ? ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244379__A) 
                                          >> 1U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244379__A)))));
        bufp->chgBit(oldp+393,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244379__A))));
        bufp->chgBit(oldp+394,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244379__A) 
                                      >> 1U))));
        bufp->chgCData(oldp+395,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244379__A))),2);
        bufp->chgCData(oldp+396,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244352__A),3);
        bufp->chgBit(oldp+397,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244352__A))
                                       ? ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244352__A) 
                                          >> 1U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244352__A)))));
        bufp->chgBit(oldp+398,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244352__A))));
        bufp->chgBit(oldp+399,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244352__A) 
                                      >> 1U))));
        bufp->chgCData(oldp+400,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244352__A))),2);
        bufp->chgCData(oldp+401,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244350__A),3);
        bufp->chgBit(oldp+402,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244350__A))
                                       ? ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244350__A) 
                                          >> 1U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244350__A)))));
        bufp->chgBit(oldp+403,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244350__A))));
        bufp->chgBit(oldp+404,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244350__A) 
                                      >> 1U))));
        bufp->chgCData(oldp+405,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244350__A))),2);
        bufp->chgCData(oldp+406,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244344__A),3);
        bufp->chgBit(oldp+407,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244344__A))
                                       ? ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244344__A) 
                                          >> 1U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244344__A)))));
        bufp->chgBit(oldp+408,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244344__A))));
        bufp->chgBit(oldp+409,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244344__A) 
                                      >> 1U))));
        bufp->chgCData(oldp+410,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244344__A))),2);
        bufp->chgCData(oldp+411,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244342__A),3);
        bufp->chgBit(oldp+412,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244342__A))
                                       ? ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244342__A) 
                                          >> 1U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244342__A)))));
        bufp->chgBit(oldp+413,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244342__A))));
        bufp->chgBit(oldp+414,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244342__A) 
                                      >> 1U))));
        bufp->chgCData(oldp+415,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244342__A))),2);
    }
    if (VL_UNLIKELY(((((vlSelf->__Vm_traceActivity[4U] 
                        | vlSelf->__Vm_traceActivity
                        [5U]) | vlSelf->__Vm_traceActivity
                       [0xaU]) | vlSelf->__Vm_traceActivity
                      [0xbU]) | vlSelf->__Vm_traceActivity
                     [0xcU]))) {
        bufp->chgBit(oldp+416,((1U & ((1U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS)
                                       ? vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC
                                       : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241089__Q)))));
        bufp->chgBit(oldp+417,((1U & ((0x400U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS)
                                       ? (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                          >> 0xaU) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241099__Q)))));
        bufp->chgBit(oldp+418,((1U & ((0x800U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS)
                                       ? (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                          >> 0xbU) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241100__Q)))));
        bufp->chgBit(oldp+419,((1U & ((0x1000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS)
                                       ? (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                          >> 0xcU) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241101__Q)))));
        bufp->chgBit(oldp+420,((1U & ((0x2000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS)
                                       ? (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                          >> 0xdU) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241102__Q)))));
        bufp->chgBit(oldp+421,((1U & ((0x4000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS)
                                       ? (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                          >> 0xeU) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241103__Q)))));
        bufp->chgBit(oldp+422,((1U & ((2U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS)
                                       ? (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                          >> 1U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241090__Q)))));
        bufp->chgBit(oldp+423,((1U & ((4U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS)
                                       ? (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                          >> 2U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241091__Q)))));
        bufp->chgBit(oldp+424,((1U & ((8U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS)
                                       ? (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                          >> 3U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241092__Q)))));
        bufp->chgBit(oldp+425,((1U & ((0x10U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS)
                                       ? (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                          >> 4U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241093__Q)))));
        bufp->chgBit(oldp+426,((1U & ((0x20U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS)
                                       ? (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                          >> 5U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241094__Q)))));
        bufp->chgBit(oldp+427,((1U & ((0x40U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS)
                                       ? (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                          >> 6U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241095__Q)))));
        bufp->chgBit(oldp+428,((1U & ((0x80U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS)
                                       ? (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                          >> 7U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241096__Q)))));
        bufp->chgBit(oldp+429,((1U & ((0x100U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS)
                                       ? (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                          >> 8U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241097__Q)))));
        bufp->chgBit(oldp+430,((1U & ((0x200U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS)
                                       ? (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                          >> 9U) : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241098__Q)))));
    }
    if (VL_UNLIKELY((((vlSelf->__Vm_traceActivity[4U] 
                       | vlSelf->__Vm_traceActivity
                       [5U]) | vlSelf->__Vm_traceActivity
                      [0xbU]) | vlSelf->__Vm_traceActivity
                     [0xcU]))) {
        bufp->chgBit(oldp+431,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                      ^ vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS))));
        bufp->chgBit(oldp+432,((1U & ((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                       ^ vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+433,((1U & ((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                       ^ vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+434,((1U & ((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                       ^ vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+435,((1U & ((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                       ^ vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS) 
                                      >> 0xdU))));
        bufp->chgBit(oldp+436,((1U & ((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                       ^ vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS) 
                                      >> 0xeU))));
        bufp->chgBit(oldp+437,((1U & ((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                       ^ vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS) 
                                      >> 1U))));
        bufp->chgBit(oldp+438,((1U & ((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                       ^ vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS) 
                                      >> 2U))));
        bufp->chgBit(oldp+439,((1U & ((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                       ^ vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS) 
                                      >> 3U))));
        bufp->chgBit(oldp+440,((1U & ((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                       ^ vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS) 
                                      >> 4U))));
        bufp->chgBit(oldp+441,((1U & ((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                       ^ vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS) 
                                      >> 5U))));
        bufp->chgBit(oldp+442,((1U & ((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                       ^ vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS) 
                                      >> 6U))));
        bufp->chgBit(oldp+443,((1U & ((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                       ^ vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS) 
                                      >> 7U))));
        bufp->chgBit(oldp+444,((1U & ((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                       ^ vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS) 
                                      >> 8U))));
        bufp->chgBit(oldp+445,((1U & ((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                       ^ vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS) 
                                      >> 9U))));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[4U] 
                      | vlSelf->__Vm_traceActivity[0xaU]) 
                     | vlSelf->__Vm_traceActivity[0xbU]))) {
        bufp->chgCData(oldp+446,(((4U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                         >> 0xdU)) 
                                  | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241104__Q) 
                                      << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241056__Q)))),3);
        bufp->chgBit(oldp+447,((1U & ((0x8000U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC)
                                       ? ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241104__Q)
                                           ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241056__Q)
                                           : (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241056__Q)))
                                       : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241104__Q)
                                           ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241056__Q))
                                           : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241056__Q))))));
        bufp->chgCData(oldp+448,((((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241104__Q) 
                                   << 2U) | ((2U & 
                                              (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                               >> 0xeU)) 
                                             | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241056__Q)))),3);
        bufp->chgBit(oldp+449,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241104__Q)
                                       ? ((~ (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                              >> 0xfU)) 
                                          | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241056__Q))
                                       : ((~ (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                              >> 0xfU)) 
                                          & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241056__Q))))));
        bufp->chgBit(oldp+450,(((~ (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                    >> 0xfU)) & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241056__Q))));
        bufp->chgBit(oldp+451,((1U & ((~ (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                          >> 0xfU)) 
                                      | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241056__Q)))));
        bufp->chgCData(oldp+452,(((2U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                         >> 0xeU)) 
                                  | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241056__Q))),2);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[0xbU]))) {
        bufp->chgBit(oldp+453,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                      >> 0xfU))));
        bufp->chgIData(oldp+454,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC),18);
        bufp->chgBit(oldp+455,((1U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC)));
        bufp->chgBit(oldp+456,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                      >> 0xaU))));
        bufp->chgBit(oldp+457,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                      >> 0xbU))));
        bufp->chgBit(oldp+458,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                      >> 0xcU))));
        bufp->chgBit(oldp+459,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                      >> 0xdU))));
        bufp->chgBit(oldp+460,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                      >> 0xeU))));
        bufp->chgBit(oldp+461,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                      >> 1U))));
        bufp->chgBit(oldp+462,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                      >> 2U))));
        bufp->chgBit(oldp+463,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                      >> 3U))));
        bufp->chgBit(oldp+464,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                      >> 4U))));
        bufp->chgBit(oldp+465,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                      >> 5U))));
        bufp->chgBit(oldp+466,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                      >> 6U))));
        bufp->chgBit(oldp+467,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                      >> 7U))));
        bufp->chgBit(oldp+468,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                      >> 8U))));
        bufp->chgBit(oldp+469,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eC 
                                      >> 9U))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[5U] 
                     | vlSelf->__Vm_traceActivity[0xcU]))) {
        bufp->chgIData(oldp+470,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS),17);
        bufp->chgBit(oldp+471,((1U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS)));
        bufp->chgBit(oldp+472,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS 
                                      >> 0xaU))));
        bufp->chgBit(oldp+473,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS 
                                      >> 0xbU))));
        bufp->chgBit(oldp+474,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS 
                                      >> 0xcU))));
        bufp->chgBit(oldp+475,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS 
                                      >> 0xdU))));
        bufp->chgBit(oldp+476,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS 
                                      >> 0xeU))));
        bufp->chgBit(oldp+477,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS 
                                      >> 1U))));
        bufp->chgBit(oldp+478,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS 
                                      >> 2U))));
        bufp->chgBit(oldp+479,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS 
                                      >> 3U))));
        bufp->chgBit(oldp+480,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS 
                                      >> 4U))));
        bufp->chgBit(oldp+481,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS 
                                      >> 5U))));
        bufp->chgBit(oldp+482,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS 
                                      >> 6U))));
        bufp->chgBit(oldp+483,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS 
                                      >> 7U))));
        bufp->chgBit(oldp+484,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS 
                                      >> 8U))));
        bufp->chgBit(oldp+485,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02450__02eS 
                                      >> 9U))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[6U] 
                     | vlSelf->__Vm_traceActivity[0xeU]))) {
        bufp->chgQData(oldp+486,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024techmap44__024mul__024__02f__VhshdkgxAMFp7IBjbQDo5YZ5qOcW9YAzDovlceGePY0d),38);
        bufp->chgIData(oldp+488,((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__z_out)),32);
        bufp->chgQData(oldp+489,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__z_out),38);
        bufp->chgQData(oldp+491,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__mult_out),64);
        bufp->chgQData(oldp+493,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__add_sub_out),64);
        bufp->chgQData(oldp+495,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__pre_shift),64);
        bufp->chgQData(oldp+497,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__shift_right),64);
        bufp->chgQData(oldp+499,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__round),64);
        bufp->chgQData(oldp+501,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__saturate),38);
    }
    if (VL_UNLIKELY((((vlSelf->__Vm_traceActivity[7U] 
                       | vlSelf->__Vm_traceActivity
                       [8U]) | vlSelf->__Vm_traceActivity
                      [0xfU]) | vlSelf->__Vm_traceActivity
                     [0x10U]))) {
        bufp->chgBit(oldp+503,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC) 
                                      ^ vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS))));
        bufp->chgBit(oldp+504,((1U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                               >> 0xaU)) 
                                      ^ (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+505,((1U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                               >> 0xbU)) 
                                      ^ (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+506,((1U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                               >> 0xcU)) 
                                      ^ (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+507,((1U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                               >> 0xdU)) 
                                      ^ (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+508,((1U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                               >> 0xeU)) 
                                      ^ (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+509,((1U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                               >> 0xfU)) 
                                      ^ (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+510,((1U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                               >> 0x10U)) 
                                      ^ (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+511,((1U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                               >> 0x11U)) 
                                      ^ (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+512,((1U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                               >> 0x12U)) 
                                      ^ (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+513,((1U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                               >> 0x13U)) 
                                      ^ (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+514,((1U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                               >> 1U)) 
                                      ^ (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                         >> 1U)))));
        bufp->chgBit(oldp+515,((1U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                               >> 0x14U)) 
                                      ^ (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+516,((1U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                               >> 0x15U)) 
                                      ^ (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+517,((1U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                               >> 0x16U)) 
                                      ^ (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+518,((1U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                               >> 0x17U)) 
                                      ^ (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+519,((1U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                               >> 0x18U)) 
                                      ^ (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+520,((1U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                               >> 0x19U)) 
                                      ^ (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+521,((1U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                               >> 0x1aU)) 
                                      ^ (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+522,((1U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                               >> 0x1bU)) 
                                      ^ (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+523,((1U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                               >> 0x1cU)) 
                                      ^ (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+524,((1U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                               >> 0x1dU)) 
                                      ^ (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+525,((1U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                               >> 2U)) 
                                      ^ (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                         >> 2U)))));
        bufp->chgBit(oldp+526,((1U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                               >> 3U)) 
                                      ^ (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                         >> 3U)))));
        bufp->chgBit(oldp+527,((1U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                               >> 4U)) 
                                      ^ (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                         >> 4U)))));
        bufp->chgBit(oldp+528,((1U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                               >> 5U)) 
                                      ^ (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                         >> 5U)))));
        bufp->chgBit(oldp+529,((1U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                               >> 6U)) 
                                      ^ (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                         >> 6U)))));
        bufp->chgBit(oldp+530,((1U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                               >> 7U)) 
                                      ^ (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                         >> 7U)))));
        bufp->chgBit(oldp+531,((1U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                               >> 8U)) 
                                      ^ (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                         >> 8U)))));
        bufp->chgBit(oldp+532,((1U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                               >> 9U)) 
                                      ^ (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                         >> 9U)))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[7U] 
                     | vlSelf->__Vm_traceActivity[0xfU]))) {
        bufp->chgIData(oldp+533,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS),32);
        bufp->chgBit(oldp+534,((1U & vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS)));
        bufp->chgBit(oldp+535,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                      >> 0xaU))));
        bufp->chgBit(oldp+536,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                      >> 0xbU))));
        bufp->chgBit(oldp+537,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                      >> 0xcU))));
        bufp->chgBit(oldp+538,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                      >> 0xdU))));
        bufp->chgBit(oldp+539,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                      >> 0xeU))));
        bufp->chgBit(oldp+540,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                      >> 0xfU))));
        bufp->chgBit(oldp+541,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                      >> 0x10U))));
        bufp->chgBit(oldp+542,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                      >> 0x11U))));
        bufp->chgBit(oldp+543,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                      >> 0x12U))));
        bufp->chgBit(oldp+544,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                      >> 0x13U))));
        bufp->chgBit(oldp+545,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                      >> 1U))));
        bufp->chgBit(oldp+546,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                      >> 0x14U))));
        bufp->chgBit(oldp+547,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                      >> 0x15U))));
        bufp->chgBit(oldp+548,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                      >> 0x16U))));
        bufp->chgBit(oldp+549,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                      >> 0x17U))));
        bufp->chgBit(oldp+550,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                      >> 0x18U))));
        bufp->chgBit(oldp+551,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                      >> 0x19U))));
        bufp->chgBit(oldp+552,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+553,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+554,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+555,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+556,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                      >> 2U))));
        bufp->chgBit(oldp+557,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                      >> 3U))));
        bufp->chgBit(oldp+558,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                      >> 4U))));
        bufp->chgBit(oldp+559,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                      >> 5U))));
        bufp->chgBit(oldp+560,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                      >> 6U))));
        bufp->chgBit(oldp+561,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                      >> 7U))));
        bufp->chgBit(oldp+562,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                      >> 8U))));
        bufp->chgBit(oldp+563,((1U & (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eS 
                                      >> 9U))));
        bufp->chgCData(oldp+564,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244355__A),4);
        bufp->chgBit(oldp+565,((1U & ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244355__A))
                                       ? ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244355__A))
                                           ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244355__A))
                                           : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244355__A) 
                                                 >> 1U)))
                                       : ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244355__A))
                                           ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244355__A)
                                           : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244355__A) 
                                              >> 1U))))));
        bufp->chgBit(oldp+566,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244355__A))
                                       ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244355__A)
                                       : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244355__A) 
                                          >> 1U)))));
        bufp->chgBit(oldp+567,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244355__A))
                                       ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244355__A))
                                       : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244355__A) 
                                             >> 1U))))));
        bufp->chgCData(oldp+568,((7U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244355__A))),3);
        bufp->chgBit(oldp+569,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244355__A) 
                                      >> 1U))));
        bufp->chgBit(oldp+570,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244355__A))));
        bufp->chgCData(oldp+571,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244355__A))),2);
        bufp->chgBit(oldp+572,((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244355__A) 
                                         >> 1U)))));
        bufp->chgBit(oldp+573,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244355__A)))));
        bufp->chgCData(oldp+574,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244388__A),4);
        bufp->chgBit(oldp+575,((1U & ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244388__A))
                                       ? ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244388__A))
                                           ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244388__A))
                                           : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244388__A) 
                                                 >> 1U)))
                                       : ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244388__A))
                                           ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244388__A)
                                           : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244388__A) 
                                              >> 1U))))));
        bufp->chgBit(oldp+576,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244388__A))
                                       ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244388__A)
                                       : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244388__A) 
                                          >> 1U)))));
        bufp->chgBit(oldp+577,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244388__A))
                                       ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244388__A))
                                       : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244388__A) 
                                             >> 1U))))));
        bufp->chgCData(oldp+578,((7U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244388__A))),3);
        bufp->chgBit(oldp+579,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244388__A) 
                                      >> 1U))));
        bufp->chgBit(oldp+580,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244388__A))));
        bufp->chgCData(oldp+581,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244388__A))),2);
        bufp->chgBit(oldp+582,((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244388__A) 
                                         >> 1U)))));
        bufp->chgBit(oldp+583,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244388__A)))));
        bufp->chgCData(oldp+584,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244390__A),4);
        bufp->chgBit(oldp+585,((1U & ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244390__A))
                                       ? ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244390__A))
                                           ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244390__A))
                                           : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244390__A) 
                                                 >> 1U)))
                                       : ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244390__A))
                                           ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244390__A)
                                           : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244390__A) 
                                              >> 1U))))));
        bufp->chgBit(oldp+586,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244390__A))
                                       ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244390__A)
                                       : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244390__A) 
                                          >> 1U)))));
        bufp->chgBit(oldp+587,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244390__A))
                                       ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244390__A))
                                       : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244390__A) 
                                             >> 1U))))));
        bufp->chgCData(oldp+588,((7U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244390__A))),3);
        bufp->chgBit(oldp+589,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244390__A) 
                                      >> 1U))));
        bufp->chgBit(oldp+590,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244390__A))));
        bufp->chgCData(oldp+591,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244390__A))),2);
        bufp->chgBit(oldp+592,((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244390__A) 
                                         >> 1U)))));
        bufp->chgBit(oldp+593,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244390__A)))));
        bufp->chgCData(oldp+594,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244396__A),4);
        bufp->chgBit(oldp+595,((1U & ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244396__A))
                                       ? ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244396__A))
                                           ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244396__A))
                                           : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244396__A) 
                                                 >> 1U)))
                                       : ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244396__A))
                                           ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244396__A)
                                           : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244396__A) 
                                              >> 1U))))));
        bufp->chgBit(oldp+596,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244396__A))
                                       ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244396__A)
                                       : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244396__A) 
                                          >> 1U)))));
        bufp->chgBit(oldp+597,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244396__A))
                                       ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244396__A))
                                       : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244396__A) 
                                             >> 1U))))));
        bufp->chgCData(oldp+598,((7U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244396__A))),3);
        bufp->chgBit(oldp+599,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244396__A) 
                                      >> 1U))));
        bufp->chgBit(oldp+600,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244396__A))));
        bufp->chgCData(oldp+601,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244396__A))),2);
        bufp->chgBit(oldp+602,((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244396__A) 
                                         >> 1U)))));
        bufp->chgBit(oldp+603,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244396__A)))));
        bufp->chgCData(oldp+604,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244372__A),4);
        bufp->chgBit(oldp+605,((1U & ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244372__A))
                                       ? ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244372__A))
                                           ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244372__A))
                                           : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244372__A) 
                                                 >> 1U)))
                                       : ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244372__A))
                                           ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244372__A)
                                           : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244372__A) 
                                              >> 1U))))));
        bufp->chgBit(oldp+606,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244372__A))
                                       ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244372__A)
                                       : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244372__A) 
                                          >> 1U)))));
        bufp->chgBit(oldp+607,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244372__A))
                                       ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244372__A))
                                       : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244372__A) 
                                             >> 1U))))));
        bufp->chgCData(oldp+608,((7U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244372__A))),3);
        bufp->chgBit(oldp+609,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244372__A) 
                                      >> 1U))));
        bufp->chgBit(oldp+610,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244372__A))));
        bufp->chgCData(oldp+611,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244372__A))),2);
        bufp->chgBit(oldp+612,((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244372__A) 
                                         >> 1U)))));
        bufp->chgBit(oldp+613,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244372__A)))));
        bufp->chgCData(oldp+614,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244374__A),4);
        bufp->chgBit(oldp+615,((1U & ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244374__A))
                                       ? ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244374__A))
                                           ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244374__A))
                                           : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244374__A) 
                                                 >> 1U)))
                                       : ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244374__A))
                                           ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244374__A)
                                           : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244374__A) 
                                              >> 1U))))));
        bufp->chgBit(oldp+616,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244374__A))
                                       ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244374__A)
                                       : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244374__A) 
                                          >> 1U)))));
        bufp->chgBit(oldp+617,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244374__A))
                                       ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244374__A))
                                       : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244374__A) 
                                             >> 1U))))));
        bufp->chgCData(oldp+618,((7U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244374__A))),3);
        bufp->chgBit(oldp+619,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244374__A) 
                                      >> 1U))));
        bufp->chgBit(oldp+620,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244374__A))));
        bufp->chgCData(oldp+621,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244374__A))),2);
        bufp->chgBit(oldp+622,((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244374__A) 
                                         >> 1U)))));
        bufp->chgBit(oldp+623,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244374__A)))));
        bufp->chgCData(oldp+624,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244351__A),4);
        bufp->chgBit(oldp+625,((1U & ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244351__A))
                                       ? ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244351__A))
                                           ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244351__A))
                                           : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244351__A) 
                                                 >> 1U)))
                                       : ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244351__A))
                                           ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244351__A)
                                           : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244351__A) 
                                              >> 1U))))));
        bufp->chgBit(oldp+626,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244351__A))
                                       ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244351__A)
                                       : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244351__A) 
                                          >> 1U)))));
        bufp->chgBit(oldp+627,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244351__A))
                                       ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244351__A))
                                       : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244351__A) 
                                             >> 1U))))));
        bufp->chgCData(oldp+628,((7U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244351__A))),3);
        bufp->chgBit(oldp+629,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244351__A) 
                                      >> 1U))));
        bufp->chgBit(oldp+630,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244351__A))));
        bufp->chgCData(oldp+631,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244351__A))),2);
        bufp->chgBit(oldp+632,((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244351__A) 
                                         >> 1U)))));
        bufp->chgBit(oldp+633,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244351__A)))));
        bufp->chgCData(oldp+634,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244370__A),4);
        bufp->chgBit(oldp+635,((1U & ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244370__A))
                                       ? ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244370__A))
                                           ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244370__A))
                                           : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244370__A) 
                                                 >> 1U)))
                                       : ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244370__A))
                                           ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244370__A)
                                           : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244370__A) 
                                              >> 1U))))));
        bufp->chgBit(oldp+636,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244370__A))
                                       ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244370__A)
                                       : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244370__A) 
                                          >> 1U)))));
        bufp->chgBit(oldp+637,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244370__A))
                                       ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244370__A))
                                       : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244370__A) 
                                             >> 1U))))));
        bufp->chgCData(oldp+638,((7U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244370__A))),3);
        bufp->chgBit(oldp+639,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244370__A) 
                                      >> 1U))));
        bufp->chgBit(oldp+640,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244370__A))));
        bufp->chgCData(oldp+641,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244370__A))),2);
        bufp->chgBit(oldp+642,((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244370__A) 
                                         >> 1U)))));
        bufp->chgBit(oldp+643,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244370__A)))));
        bufp->chgCData(oldp+644,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244339__A),4);
        bufp->chgBit(oldp+645,((1U & ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244339__A))
                                       ? ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244339__A))
                                           ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244339__A))
                                           : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244339__A) 
                                                 >> 1U)))
                                       : ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244339__A))
                                           ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244339__A)
                                           : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244339__A) 
                                              >> 1U))))));
        bufp->chgBit(oldp+646,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244339__A))
                                       ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244339__A)
                                       : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244339__A) 
                                          >> 1U)))));
        bufp->chgBit(oldp+647,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244339__A))
                                       ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244339__A))
                                       : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244339__A) 
                                             >> 1U))))));
        bufp->chgCData(oldp+648,((7U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244339__A))),3);
        bufp->chgBit(oldp+649,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244339__A) 
                                      >> 1U))));
        bufp->chgBit(oldp+650,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244339__A))));
        bufp->chgCData(oldp+651,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244339__A))),2);
        bufp->chgBit(oldp+652,((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244339__A) 
                                         >> 1U)))));
        bufp->chgBit(oldp+653,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244339__A)))));
        bufp->chgCData(oldp+654,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244357__A),4);
        bufp->chgBit(oldp+655,((1U & ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244357__A))
                                       ? ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244357__A))
                                           ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244357__A))
                                           : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244357__A) 
                                                 >> 1U)))
                                       : ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244357__A))
                                           ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244357__A)
                                           : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244357__A) 
                                              >> 1U))))));
        bufp->chgBit(oldp+656,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244357__A))
                                       ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244357__A)
                                       : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244357__A) 
                                          >> 1U)))));
        bufp->chgBit(oldp+657,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244357__A))
                                       ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244357__A))
                                       : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244357__A) 
                                             >> 1U))))));
        bufp->chgCData(oldp+658,((7U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244357__A))),3);
        bufp->chgBit(oldp+659,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244357__A) 
                                      >> 1U))));
        bufp->chgBit(oldp+660,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244357__A))));
        bufp->chgCData(oldp+661,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244357__A))),2);
        bufp->chgBit(oldp+662,((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244357__A) 
                                         >> 1U)))));
        bufp->chgBit(oldp+663,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244357__A)))));
        bufp->chgCData(oldp+664,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244359__A),4);
        bufp->chgBit(oldp+665,((1U & ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244359__A))
                                       ? ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244359__A))
                                           ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244359__A))
                                           : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244359__A) 
                                                 >> 1U)))
                                       : ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244359__A))
                                           ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244359__A)
                                           : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244359__A) 
                                              >> 1U))))));
        bufp->chgBit(oldp+666,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244359__A))
                                       ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244359__A)
                                       : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244359__A) 
                                          >> 1U)))));
        bufp->chgBit(oldp+667,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244359__A))
                                       ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244359__A))
                                       : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244359__A) 
                                             >> 1U))))));
        bufp->chgCData(oldp+668,((7U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244359__A))),3);
        bufp->chgBit(oldp+669,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244359__A) 
                                      >> 1U))));
        bufp->chgBit(oldp+670,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244359__A))));
        bufp->chgCData(oldp+671,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244359__A))),2);
        bufp->chgBit(oldp+672,((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244359__A) 
                                         >> 1U)))));
        bufp->chgBit(oldp+673,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244359__A)))));
        bufp->chgCData(oldp+674,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244361__A),4);
        bufp->chgBit(oldp+675,((1U & ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244361__A))
                                       ? ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244361__A))
                                           ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244361__A))
                                           : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244361__A) 
                                                 >> 1U)))
                                       : ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244361__A))
                                           ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244361__A)
                                           : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244361__A) 
                                              >> 1U))))));
        bufp->chgBit(oldp+676,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244361__A))
                                       ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244361__A)
                                       : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244361__A) 
                                          >> 1U)))));
        bufp->chgBit(oldp+677,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244361__A))
                                       ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244361__A))
                                       : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244361__A) 
                                             >> 1U))))));
        bufp->chgCData(oldp+678,((7U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244361__A))),3);
        bufp->chgBit(oldp+679,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244361__A) 
                                      >> 1U))));
        bufp->chgBit(oldp+680,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244361__A))));
        bufp->chgCData(oldp+681,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244361__A))),2);
        bufp->chgBit(oldp+682,((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244361__A) 
                                         >> 1U)))));
        bufp->chgBit(oldp+683,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244361__A)))));
        bufp->chgCData(oldp+684,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244363__A),4);
        bufp->chgBit(oldp+685,((1U & ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244363__A))
                                       ? ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244363__A))
                                           ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244363__A))
                                           : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244363__A) 
                                                 >> 1U)))
                                       : ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244363__A))
                                           ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244363__A)
                                           : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244363__A) 
                                              >> 1U))))));
        bufp->chgBit(oldp+686,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244363__A))
                                       ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244363__A)
                                       : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244363__A) 
                                          >> 1U)))));
        bufp->chgBit(oldp+687,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244363__A))
                                       ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244363__A))
                                       : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244363__A) 
                                             >> 1U))))));
        bufp->chgCData(oldp+688,((7U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244363__A))),3);
        bufp->chgBit(oldp+689,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244363__A) 
                                      >> 1U))));
        bufp->chgBit(oldp+690,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244363__A))));
        bufp->chgCData(oldp+691,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244363__A))),2);
        bufp->chgBit(oldp+692,((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244363__A) 
                                         >> 1U)))));
        bufp->chgBit(oldp+693,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244363__A)))));
        bufp->chgCData(oldp+694,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244365__A),4);
        bufp->chgBit(oldp+695,((1U & ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244365__A))
                                       ? ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244365__A))
                                           ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244365__A))
                                           : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244365__A) 
                                                 >> 1U)))
                                       : ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244365__A))
                                           ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244365__A)
                                           : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244365__A) 
                                              >> 1U))))));
        bufp->chgBit(oldp+696,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244365__A))
                                       ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244365__A)
                                       : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244365__A) 
                                          >> 1U)))));
        bufp->chgBit(oldp+697,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244365__A))
                                       ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244365__A))
                                       : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244365__A) 
                                             >> 1U))))));
        bufp->chgCData(oldp+698,((7U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244365__A))),3);
        bufp->chgBit(oldp+699,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244365__A) 
                                      >> 1U))));
        bufp->chgBit(oldp+700,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244365__A))));
        bufp->chgCData(oldp+701,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244365__A))),2);
        bufp->chgBit(oldp+702,((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244365__A) 
                                         >> 1U)))));
        bufp->chgBit(oldp+703,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244365__A)))));
        bufp->chgCData(oldp+704,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244367__A),4);
        bufp->chgBit(oldp+705,((1U & ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244367__A))
                                       ? ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244367__A))
                                           ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244367__A))
                                           : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244367__A) 
                                                 >> 1U)))
                                       : ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244367__A))
                                           ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244367__A)
                                           : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244367__A) 
                                              >> 1U))))));
        bufp->chgBit(oldp+706,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244367__A))
                                       ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244367__A)
                                       : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244367__A) 
                                          >> 1U)))));
        bufp->chgBit(oldp+707,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244367__A))
                                       ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244367__A))
                                       : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244367__A) 
                                             >> 1U))))));
        bufp->chgCData(oldp+708,((7U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244367__A))),3);
        bufp->chgBit(oldp+709,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244367__A) 
                                      >> 1U))));
        bufp->chgBit(oldp+710,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244367__A))));
        bufp->chgCData(oldp+711,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244367__A))),2);
        bufp->chgBit(oldp+712,((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244367__A) 
                                         >> 1U)))));
        bufp->chgBit(oldp+713,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244367__A)))));
        bufp->chgCData(oldp+714,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244368__A),4);
        bufp->chgBit(oldp+715,((1U & ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244368__A))
                                       ? ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244368__A))
                                           ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244368__A))
                                           : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244368__A) 
                                                 >> 1U)))
                                       : ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244368__A))
                                           ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244368__A)
                                           : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244368__A) 
                                              >> 1U))))));
        bufp->chgBit(oldp+716,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244368__A))
                                       ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244368__A)
                                       : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244368__A) 
                                          >> 1U)))));
        bufp->chgBit(oldp+717,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244368__A))
                                       ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244368__A))
                                       : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244368__A) 
                                             >> 1U))))));
        bufp->chgCData(oldp+718,((7U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244368__A))),3);
        bufp->chgBit(oldp+719,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244368__A) 
                                      >> 1U))));
        bufp->chgBit(oldp+720,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244368__A))));
        bufp->chgCData(oldp+721,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244368__A))),2);
        bufp->chgBit(oldp+722,((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244368__A) 
                                         >> 1U)))));
        bufp->chgBit(oldp+723,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244368__A)))));
        bufp->chgCData(oldp+724,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244353__A),4);
        bufp->chgBit(oldp+725,((1U & ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244353__A))
                                       ? ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244353__A))
                                           ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244353__A))
                                           : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244353__A) 
                                                 >> 1U)))
                                       : ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244353__A))
                                           ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244353__A)
                                           : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244353__A) 
                                              >> 1U))))));
        bufp->chgBit(oldp+726,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244353__A))
                                       ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244353__A)
                                       : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244353__A) 
                                          >> 1U)))));
        bufp->chgBit(oldp+727,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244353__A))
                                       ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244353__A))
                                       : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244353__A) 
                                             >> 1U))))));
        bufp->chgCData(oldp+728,((7U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244353__A))),3);
        bufp->chgBit(oldp+729,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244353__A) 
                                      >> 1U))));
        bufp->chgBit(oldp+730,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244353__A))));
        bufp->chgCData(oldp+731,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244353__A))),2);
        bufp->chgBit(oldp+732,((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244353__A) 
                                         >> 1U)))));
        bufp->chgBit(oldp+733,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244353__A)))));
        bufp->chgCData(oldp+734,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244376__A),4);
        bufp->chgBit(oldp+735,((1U & ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244376__A))
                                       ? ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244376__A))
                                           ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244376__A))
                                           : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244376__A) 
                                                 >> 1U)))
                                       : ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244376__A))
                                           ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244376__A)
                                           : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244376__A) 
                                              >> 1U))))));
        bufp->chgBit(oldp+736,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244376__A))
                                       ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244376__A)
                                       : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244376__A) 
                                          >> 1U)))));
        bufp->chgBit(oldp+737,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244376__A))
                                       ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244376__A))
                                       : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244376__A) 
                                             >> 1U))))));
        bufp->chgCData(oldp+738,((7U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244376__A))),3);
        bufp->chgBit(oldp+739,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244376__A) 
                                      >> 1U))));
        bufp->chgBit(oldp+740,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244376__A))));
        bufp->chgCData(oldp+741,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244376__A))),2);
        bufp->chgBit(oldp+742,((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244376__A) 
                                         >> 1U)))));
        bufp->chgBit(oldp+743,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244376__A)))));
        bufp->chgCData(oldp+744,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244382__A),4);
        bufp->chgBit(oldp+745,((1U & ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244382__A))
                                       ? ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244382__A))
                                           ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244382__A))
                                           : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244382__A) 
                                                 >> 1U)))
                                       : ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244382__A))
                                           ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244382__A)
                                           : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244382__A) 
                                              >> 1U))))));
        bufp->chgBit(oldp+746,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244382__A))
                                       ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244382__A)
                                       : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244382__A) 
                                          >> 1U)))));
        bufp->chgBit(oldp+747,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244382__A))
                                       ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244382__A))
                                       : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244382__A) 
                                             >> 1U))))));
        bufp->chgCData(oldp+748,((7U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244382__A))),3);
        bufp->chgBit(oldp+749,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244382__A) 
                                      >> 1U))));
        bufp->chgBit(oldp+750,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244382__A))));
        bufp->chgCData(oldp+751,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244382__A))),2);
        bufp->chgBit(oldp+752,((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244382__A) 
                                         >> 1U)))));
        bufp->chgBit(oldp+753,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244382__A)))));
        bufp->chgCData(oldp+754,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244392__A),4);
        bufp->chgBit(oldp+755,((1U & ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244392__A))
                                       ? ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244392__A))
                                           ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244392__A))
                                           : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244392__A) 
                                                 >> 1U)))
                                       : ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244392__A))
                                           ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244392__A)
                                           : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244392__A) 
                                              >> 1U))))));
        bufp->chgBit(oldp+756,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244392__A))
                                       ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244392__A)
                                       : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244392__A) 
                                          >> 1U)))));
        bufp->chgBit(oldp+757,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244392__A))
                                       ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244392__A))
                                       : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244392__A) 
                                             >> 1U))))));
        bufp->chgCData(oldp+758,((7U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244392__A))),3);
        bufp->chgBit(oldp+759,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244392__A) 
                                      >> 1U))));
        bufp->chgBit(oldp+760,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244392__A))));
        bufp->chgCData(oldp+761,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244392__A))),2);
        bufp->chgBit(oldp+762,((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244392__A) 
                                         >> 1U)))));
        bufp->chgBit(oldp+763,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244392__A)))));
        bufp->chgCData(oldp+764,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244386__A),4);
        bufp->chgBit(oldp+765,((1U & ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244386__A))
                                       ? ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244386__A))
                                           ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244386__A))
                                           : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244386__A) 
                                                 >> 1U)))
                                       : ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244386__A))
                                           ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244386__A)
                                           : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244386__A) 
                                              >> 1U))))));
        bufp->chgBit(oldp+766,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244386__A))
                                       ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244386__A)
                                       : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244386__A) 
                                          >> 1U)))));
        bufp->chgBit(oldp+767,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244386__A))
                                       ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244386__A))
                                       : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244386__A) 
                                             >> 1U))))));
        bufp->chgCData(oldp+768,((7U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244386__A))),3);
        bufp->chgBit(oldp+769,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244386__A) 
                                      >> 1U))));
        bufp->chgBit(oldp+770,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244386__A))));
        bufp->chgCData(oldp+771,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244386__A))),2);
        bufp->chgBit(oldp+772,((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244386__A) 
                                         >> 1U)))));
        bufp->chgBit(oldp+773,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244386__A)))));
        bufp->chgCData(oldp+774,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244380__A),4);
        bufp->chgBit(oldp+775,((1U & ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244380__A))
                                       ? ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244380__A))
                                           ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244380__A))
                                           : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244380__A) 
                                                 >> 1U)))
                                       : ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244380__A))
                                           ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244380__A)
                                           : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244380__A) 
                                              >> 1U))))));
        bufp->chgBit(oldp+776,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244380__A))
                                       ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244380__A)
                                       : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244380__A) 
                                          >> 1U)))));
        bufp->chgBit(oldp+777,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244380__A))
                                       ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244380__A))
                                       : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244380__A) 
                                             >> 1U))))));
        bufp->chgCData(oldp+778,((7U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244380__A))),3);
        bufp->chgBit(oldp+779,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244380__A) 
                                      >> 1U))));
        bufp->chgBit(oldp+780,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244380__A))));
        bufp->chgCData(oldp+781,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244380__A))),2);
        bufp->chgBit(oldp+782,((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244380__A) 
                                         >> 1U)))));
        bufp->chgBit(oldp+783,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244380__A)))));
        bufp->chgCData(oldp+784,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244384__A),4);
        bufp->chgBit(oldp+785,((1U & ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244384__A))
                                       ? ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244384__A))
                                           ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244384__A))
                                           : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244384__A) 
                                                 >> 1U)))
                                       : ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244384__A))
                                           ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244384__A)
                                           : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244384__A) 
                                              >> 1U))))));
        bufp->chgBit(oldp+786,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244384__A))
                                       ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244384__A)
                                       : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244384__A) 
                                          >> 1U)))));
        bufp->chgBit(oldp+787,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244384__A))
                                       ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244384__A))
                                       : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244384__A) 
                                             >> 1U))))));
        bufp->chgCData(oldp+788,((7U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244384__A))),3);
        bufp->chgBit(oldp+789,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244384__A) 
                                      >> 1U))));
        bufp->chgBit(oldp+790,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244384__A))));
        bufp->chgCData(oldp+791,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244384__A))),2);
        bufp->chgBit(oldp+792,((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244384__A) 
                                         >> 1U)))));
        bufp->chgBit(oldp+793,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244384__A)))));
        bufp->chgCData(oldp+794,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244394__A),4);
        bufp->chgBit(oldp+795,((1U & ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244394__A))
                                       ? ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244394__A))
                                           ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244394__A))
                                           : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244394__A) 
                                                 >> 1U)))
                                       : ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244394__A))
                                           ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244394__A)
                                           : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244394__A) 
                                              >> 1U))))));
        bufp->chgBit(oldp+796,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244394__A))
                                       ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244394__A)
                                       : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244394__A) 
                                          >> 1U)))));
        bufp->chgBit(oldp+797,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244394__A))
                                       ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244394__A))
                                       : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244394__A) 
                                             >> 1U))))));
        bufp->chgCData(oldp+798,((7U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244394__A))),3);
        bufp->chgBit(oldp+799,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244394__A) 
                                      >> 1U))));
        bufp->chgBit(oldp+800,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244394__A))));
        bufp->chgCData(oldp+801,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244394__A))),2);
        bufp->chgBit(oldp+802,((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244394__A) 
                                         >> 1U)))));
        bufp->chgBit(oldp+803,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244394__A)))));
        bufp->chgCData(oldp+804,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244378__A),4);
        bufp->chgBit(oldp+805,((1U & ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244378__A))
                                       ? ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244378__A))
                                           ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244378__A))
                                           : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244378__A) 
                                                 >> 1U)))
                                       : ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244378__A))
                                           ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244378__A)
                                           : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244378__A) 
                                              >> 1U))))));
        bufp->chgBit(oldp+806,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244378__A))
                                       ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244378__A)
                                       : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244378__A) 
                                          >> 1U)))));
        bufp->chgBit(oldp+807,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244378__A))
                                       ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244378__A))
                                       : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244378__A) 
                                             >> 1U))))));
        bufp->chgCData(oldp+808,((7U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244378__A))),3);
        bufp->chgBit(oldp+809,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244378__A) 
                                      >> 1U))));
        bufp->chgBit(oldp+810,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244378__A))));
        bufp->chgCData(oldp+811,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244378__A))),2);
        bufp->chgBit(oldp+812,((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244378__A) 
                                         >> 1U)))));
        bufp->chgBit(oldp+813,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244378__A)))));
        bufp->chgCData(oldp+814,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244349__A),4);
        bufp->chgBit(oldp+815,((1U & ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244349__A))
                                       ? ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244349__A))
                                           ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244349__A))
                                           : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244349__A) 
                                                 >> 1U)))
                                       : ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244349__A))
                                           ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244349__A)
                                           : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244349__A) 
                                              >> 1U))))));
        bufp->chgBit(oldp+816,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244349__A))
                                       ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244349__A)
                                       : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244349__A) 
                                          >> 1U)))));
        bufp->chgBit(oldp+817,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244349__A))
                                       ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244349__A))
                                       : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244349__A) 
                                             >> 1U))))));
        bufp->chgCData(oldp+818,((7U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244349__A))),3);
        bufp->chgBit(oldp+819,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244349__A) 
                                      >> 1U))));
        bufp->chgBit(oldp+820,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244349__A))));
        bufp->chgCData(oldp+821,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244349__A))),2);
        bufp->chgBit(oldp+822,((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244349__A) 
                                         >> 1U)))));
        bufp->chgBit(oldp+823,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244349__A)))));
        bufp->chgCData(oldp+824,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244347__A),4);
        bufp->chgBit(oldp+825,((1U & ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244347__A))
                                       ? ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244347__A))
                                           ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244347__A))
                                           : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244347__A) 
                                                 >> 1U)))
                                       : ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244347__A))
                                           ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244347__A)
                                           : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244347__A) 
                                              >> 1U))))));
        bufp->chgBit(oldp+826,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244347__A))
                                       ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244347__A)
                                       : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244347__A) 
                                          >> 1U)))));
        bufp->chgBit(oldp+827,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244347__A))
                                       ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244347__A))
                                       : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244347__A) 
                                             >> 1U))))));
        bufp->chgCData(oldp+828,((7U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244347__A))),3);
        bufp->chgBit(oldp+829,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244347__A) 
                                      >> 1U))));
        bufp->chgBit(oldp+830,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244347__A))));
        bufp->chgCData(oldp+831,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244347__A))),2);
        bufp->chgBit(oldp+832,((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244347__A) 
                                         >> 1U)))));
        bufp->chgBit(oldp+833,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244347__A)))));
        bufp->chgCData(oldp+834,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244345__A),4);
        bufp->chgBit(oldp+835,((1U & ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244345__A))
                                       ? ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244345__A))
                                           ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244345__A))
                                           : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244345__A) 
                                                 >> 1U)))
                                       : ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244345__A))
                                           ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244345__A)
                                           : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244345__A) 
                                              >> 1U))))));
        bufp->chgBit(oldp+836,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244345__A))
                                       ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244345__A)
                                       : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244345__A) 
                                          >> 1U)))));
        bufp->chgBit(oldp+837,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244345__A))
                                       ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244345__A))
                                       : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244345__A) 
                                             >> 1U))))));
        bufp->chgCData(oldp+838,((7U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244345__A))),3);
        bufp->chgBit(oldp+839,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244345__A) 
                                      >> 1U))));
        bufp->chgBit(oldp+840,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244345__A))));
        bufp->chgCData(oldp+841,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244345__A))),2);
        bufp->chgBit(oldp+842,((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244345__A) 
                                         >> 1U)))));
        bufp->chgBit(oldp+843,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244345__A)))));
        bufp->chgCData(oldp+844,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244343__A),4);
        bufp->chgBit(oldp+845,((1U & ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244343__A))
                                       ? ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244343__A))
                                           ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244343__A))
                                           : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244343__A) 
                                                 >> 1U)))
                                       : ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244343__A))
                                           ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244343__A)
                                           : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244343__A) 
                                              >> 1U))))));
        bufp->chgBit(oldp+846,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244343__A))
                                       ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244343__A)
                                       : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244343__A) 
                                          >> 1U)))));
        bufp->chgBit(oldp+847,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244343__A))
                                       ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244343__A))
                                       : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244343__A) 
                                             >> 1U))))));
        bufp->chgCData(oldp+848,((7U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244343__A))),3);
        bufp->chgBit(oldp+849,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244343__A) 
                                      >> 1U))));
        bufp->chgBit(oldp+850,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244343__A))));
        bufp->chgCData(oldp+851,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244343__A))),2);
        bufp->chgBit(oldp+852,((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244343__A) 
                                         >> 1U)))));
        bufp->chgBit(oldp+853,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244343__A)))));
        bufp->chgCData(oldp+854,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244341__A),4);
        bufp->chgBit(oldp+855,((1U & ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244341__A))
                                       ? ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244341__A))
                                           ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244341__A))
                                           : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244341__A) 
                                                 >> 1U)))
                                       : ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244341__A))
                                           ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244341__A)
                                           : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244341__A) 
                                              >> 1U))))));
        bufp->chgBit(oldp+856,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244341__A))
                                       ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244341__A)
                                       : ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244341__A) 
                                          >> 1U)))));
        bufp->chgBit(oldp+857,((1U & ((4U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244341__A))
                                       ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244341__A))
                                       : (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244341__A) 
                                             >> 1U))))));
        bufp->chgCData(oldp+858,((7U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244341__A))),3);
        bufp->chgBit(oldp+859,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244341__A) 
                                      >> 1U))));
        bufp->chgBit(oldp+860,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244341__A))));
        bufp->chgCData(oldp+861,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244341__A))),2);
        bufp->chgBit(oldp+862,((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244341__A) 
                                         >> 1U)))));
        bufp->chgBit(oldp+863,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244341__A)))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[8U] 
                     | vlSelf->__Vm_traceActivity[0x10U]))) {
        bufp->chgBit(oldp+864,((1U & (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+865,(((0x20U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A))
                                 ? ((0x10U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A))
                                     ? ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A))
                                         ? ((1U & (~ 
                                                   ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A) 
                                                    >> 2U))) 
                                            && (1U 
                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A)))
                                         : ((1U & (~ 
                                                   ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A) 
                                                    >> 2U))) 
                                            && (1U 
                                                & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A) 
                                                   >> 1U))))
                                     : ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A))
                                         ? ((1U & (~ 
                                                   ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A) 
                                                    >> 2U))) 
                                            && (1U 
                                                & ((2U 
                                                    & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A))
                                                    ? 
                                                   (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A))
                                                    : 
                                                   (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A)))))
                                         : ((1U & (~ 
                                                   ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A) 
                                                    >> 2U))) 
                                            && (1U 
                                                & (~ 
                                                   ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A) 
                                                    >> 1U))))))
                                 : ((0x10U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A))
                                     ? ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A))
                                         ? ((1U & (~ 
                                                   ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A) 
                                                    >> 2U))) 
                                            && (1U 
                                                & ((2U 
                                                    & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A))
                                                    ? 
                                                   (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A))
                                                    : 
                                                   (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A)))))
                                         : ((1U & (~ 
                                                   ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A) 
                                                    >> 2U))) 
                                            && (1U 
                                                & (~ 
                                                   ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A) 
                                                    >> 1U)))))
                                     : ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A))
                                         ? ((1U & (~ 
                                                   ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A) 
                                                    >> 2U))) 
                                            && (1U 
                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A)))
                                         : ((1U & (~ 
                                                   ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A) 
                                                    >> 2U))) 
                                            && (1U 
                                                & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A) 
                                                   >> 1U))))))));
        bufp->chgBit(oldp+866,(((0x20U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A))
                                 ? ((0x10U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A))
                                     ? ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A))
                                         ? ((1U & (~ 
                                                   ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A) 
                                                    >> 2U))) 
                                            && (1U 
                                                & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A) 
                                                   >> 1U)))
                                         : ((1U & (~ 
                                                   ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A) 
                                                    >> 2U))) 
                                            && (1U 
                                                & (~ 
                                                   ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A) 
                                                    >> 1U)))))
                                     : ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A))
                                         ? ((1U & (~ 
                                                   ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A) 
                                                    >> 2U))) 
                                            && (1U 
                                                & (~ 
                                                   ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A) 
                                                    >> 1U))))
                                         : ((1U & (~ 
                                                   ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A) 
                                                    >> 2U))) 
                                            && (1U 
                                                & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A) 
                                                   >> 1U)))))
                                 : ((0x10U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A))
                                     ? ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A))
                                         ? ((1U & (~ 
                                                   ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A) 
                                                    >> 2U))) 
                                            && (1U 
                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A)))
                                         : ((1U & (~ 
                                                   ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A) 
                                                    >> 2U))) 
                                            && (1U 
                                                & ((2U 
                                                    & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A))
                                                    ? 
                                                   (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A))
                                                    : 
                                                   (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A))))))
                                     : ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A))
                                         ? ((1U & (~ 
                                                   ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A) 
                                                    >> 2U))) 
                                            && (1U 
                                                & ((2U 
                                                    & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A))
                                                    ? 
                                                   (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A))
                                                    : 
                                                   (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A)))))
                                         : ((1U & (~ 
                                                   ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A) 
                                                    >> 2U))) 
                                            && (1U 
                                                & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A))))))));
        bufp->chgQData(oldp+867,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC),33);
        bufp->chgIData(oldp+869,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add2),32);
        bufp->chgCData(oldp+870,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A),6);
        bufp->chgCData(oldp+871,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A),6);
        bufp->chgBit(oldp+872,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC))));
        bufp->chgBit(oldp+873,((1U & (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+874,((1U & (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+875,((1U & (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+876,((1U & (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+877,((1U & (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+878,((1U & (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+879,((1U & (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+880,((1U & (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+881,((1U & (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+882,((1U & (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+883,((1U & (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                              >> 1U)))));
        bufp->chgBit(oldp+884,((1U & (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+885,((1U & (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+886,((1U & (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+887,((1U & (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+888,((1U & (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+889,((1U & (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+890,((1U & (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+891,((1U & (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+892,((1U & (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+893,((1U & (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+894,((1U & (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                              >> 2U)))));
        bufp->chgBit(oldp+895,((1U & (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                              >> 3U)))));
        bufp->chgBit(oldp+896,((1U & (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                              >> 4U)))));
        bufp->chgBit(oldp+897,((1U & (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                              >> 5U)))));
        bufp->chgBit(oldp+898,((1U & (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                              >> 6U)))));
        bufp->chgBit(oldp+899,((1U & (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                              >> 7U)))));
        bufp->chgBit(oldp+900,((1U & (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                              >> 8U)))));
        bufp->chgBit(oldp+901,((1U & (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                              >> 9U)))));
        bufp->chgBit(oldp+902,(((0x10U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A))
                                 ? ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A))
                                     ? ((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A) 
                                                  >> 2U))) 
                                        && (1U & ((2U 
                                                   & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A))
                                                   ? 
                                                  (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A))
                                                   : 
                                                  (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A)))))
                                     : ((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A) 
                                                  >> 2U))) 
                                        && (1U & (~ 
                                                  ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A) 
                                                   >> 1U)))))
                                 : ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A))
                                     ? ((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A) 
                                                  >> 2U))) 
                                        && (1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A)))
                                     : ((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A) 
                                                  >> 2U))) 
                                        && (1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A) 
                                                  >> 1U)))))));
        bufp->chgBit(oldp+903,(((0x10U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A))
                                 ? ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A))
                                     ? ((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A) 
                                                  >> 2U))) 
                                        && (1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A)))
                                     : ((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A) 
                                                  >> 2U))) 
                                        && (1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A) 
                                                  >> 1U))))
                                 : ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A))
                                     ? ((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A) 
                                                  >> 2U))) 
                                        && (1U & ((2U 
                                                   & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A))
                                                   ? 
                                                  (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A))
                                                   : 
                                                  (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A)))))
                                     : ((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A) 
                                                  >> 2U))) 
                                        && (1U & (~ 
                                                  ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A) 
                                                   >> 1U))))))));
        bufp->chgCData(oldp+904,((0x1fU & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A))),5);
        bufp->chgBit(oldp+905,(((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A))
                                 ? ((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A) 
                                              >> 2U))) 
                                    && (1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A)))
                                 : ((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A) 
                                              >> 2U))) 
                                    && (1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A) 
                                              >> 1U))))));
        bufp->chgBit(oldp+906,(((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A))
                                 ? ((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A) 
                                              >> 2U))) 
                                    && (1U & ((2U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A))
                                               ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A))
                                               : (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A)))))
                                 : ((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A) 
                                              >> 2U))) 
                                    && (1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A) 
                                                 >> 1U)))))));
        bufp->chgCData(oldp+907,((0xfU & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A))),4);
        bufp->chgBit(oldp+908,(((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A) 
                                          >> 2U))) 
                                && (1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A) 
                                          >> 1U)))));
        bufp->chgBit(oldp+909,(((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A) 
                                          >> 2U))) 
                                && (1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A)))));
        bufp->chgCData(oldp+910,((7U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A))),3);
        bufp->chgBit(oldp+911,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A) 
                                      >> 1U))));
        bufp->chgCData(oldp+912,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A))),2);
        bufp->chgBit(oldp+913,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A))));
        bufp->chgBit(oldp+914,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A))));
        bufp->chgBit(oldp+915,(((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A) 
                                          >> 2U))) 
                                && (1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A) 
                                             >> 1U))))));
        bufp->chgBit(oldp+916,(((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A) 
                                          >> 2U))) 
                                && (1U & ((2U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A))
                                           ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A))
                                           : (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A)))))));
        bufp->chgBit(oldp+917,((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A) 
                                         >> 1U)))));
        bufp->chgBit(oldp+918,((1U & ((2U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A))
                                       ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A))
                                       : (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A))))));
        bufp->chgBit(oldp+919,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244307__A)))));
        bufp->chgBit(oldp+920,(((0x10U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A))
                                 ? ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A))
                                     ? ((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A) 
                                                  >> 2U))) 
                                        && (1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A)))
                                     : ((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A) 
                                                  >> 2U))) 
                                        && (1U & ((2U 
                                                   & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A))
                                                   ? 
                                                  (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A))
                                                   : 
                                                  (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A))))))
                                 : ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A))
                                     ? ((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A) 
                                                  >> 2U))) 
                                        && (1U & ((2U 
                                                   & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A))
                                                   ? 
                                                  (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A))
                                                   : 
                                                  (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A)))))
                                     : ((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A) 
                                                  >> 2U))) 
                                        && (1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A)))))));
        bufp->chgBit(oldp+921,(((0x10U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A))
                                 ? ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A))
                                     ? ((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A) 
                                                  >> 2U))) 
                                        && (1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A) 
                                                  >> 1U)))
                                     : ((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A) 
                                                  >> 2U))) 
                                        && (1U & (~ 
                                                  ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A) 
                                                   >> 1U)))))
                                 : ((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A))
                                     ? ((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A) 
                                                  >> 2U))) 
                                        && (1U & (~ 
                                                  ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A) 
                                                   >> 1U))))
                                     : ((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A) 
                                                  >> 2U))) 
                                        && (1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A) 
                                                  >> 1U)))))));
        bufp->chgCData(oldp+922,((0x1fU & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A))),5);
        bufp->chgBit(oldp+923,(((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A))
                                 ? ((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A) 
                                              >> 2U))) 
                                    && (1U & ((2U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A))
                                               ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A))
                                               : (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A)))))
                                 : ((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A) 
                                              >> 2U))) 
                                    && (1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A))))));
        bufp->chgBit(oldp+924,(((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A))
                                 ? ((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A) 
                                              >> 2U))) 
                                    && (1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A)))
                                 : ((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A) 
                                              >> 2U))) 
                                    && (1U & ((2U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A))
                                               ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A))
                                               : (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A))))))));
        bufp->chgCData(oldp+925,((0xfU & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A))),4);
        bufp->chgBit(oldp+926,(((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A) 
                                          >> 2U))) 
                                && (1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A)))));
        bufp->chgBit(oldp+927,(((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A) 
                                          >> 2U))) 
                                && (1U & ((2U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A))
                                           ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A))
                                           : (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A)))))));
        bufp->chgCData(oldp+928,((7U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A))),3);
        bufp->chgBit(oldp+929,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A))));
        bufp->chgCData(oldp+930,((3U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A))),2);
        bufp->chgBit(oldp+931,((1U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A))));
        bufp->chgBit(oldp+932,((1U & ((2U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A))
                                       ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A))
                                       : (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A))))));
        bufp->chgBit(oldp+933,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A)))));
        bufp->chgBit(oldp+934,(((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A))
                                 ? ((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A) 
                                              >> 2U))) 
                                    && (1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A) 
                                                 >> 1U))))
                                 : ((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A) 
                                              >> 2U))) 
                                    && (1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A) 
                                              >> 1U))))));
        bufp->chgBit(oldp+935,(((8U & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A))
                                 ? ((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A) 
                                              >> 2U))) 
                                    && (1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A) 
                                              >> 1U)))
                                 : ((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A) 
                                              >> 2U))) 
                                    && (1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A) 
                                                 >> 1U)))))));
        bufp->chgBit(oldp+936,(((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A) 
                                          >> 2U))) 
                                && (1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A) 
                                          >> 1U)))));
        bufp->chgBit(oldp+937,(((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A) 
                                          >> 2U))) 
                                && (1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A) 
                                             >> 1U))))));
        bufp->chgBit(oldp+938,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A) 
                                      >> 1U))));
        bufp->chgBit(oldp+939,((1U & (~ ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024abc__0244240__024auto__024blifparse__02ecc__03a515__03aparse_blif__0244306__A) 
                                         >> 1U)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
        bufp->chgIData(oldp+940,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024techmap46__024mul__024__02f__VhshGRm3YH55EQsRDWfBDDnuz6KxM5BIMkHEP4UvdRBs),18);
        bufp->chgBit(oldp+941,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__subtract_reg));
        bufp->chgCData(oldp+942,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__acc_fir_reg),6);
        bufp->chgCData(oldp+943,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__feedback_reg),3);
        bufp->chgCData(oldp+944,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__shift_right_reg1),6);
        bufp->chgCData(oldp+945,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__shift_right_reg2),6);
        bufp->chgBit(oldp+946,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__round_reg1));
        bufp->chgBit(oldp+947,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__round_reg2));
        bufp->chgBit(oldp+948,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__saturate_reg1));
        bufp->chgBit(oldp+949,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__saturate_reg2));
        bufp->chgBit(oldp+950,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__load_acc_reg));
        bufp->chgIData(oldp+951,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__a_reg),20);
        bufp->chgIData(oldp+952,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__b_reg),18);
        bufp->chgBit(oldp+953,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__unsigned_a_reg));
        bufp->chgBit(oldp+954,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__unsigned_b_reg));
        bufp->chgQData(oldp+955,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__accumulator),64);
        bufp->chgQData(oldp+957,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__z_out_reg),38);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xaU])) {
        bufp->chgIData(oldp+959,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__P),32);
        bufp->chgIData(oldp+960,((((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241040__Q) 
                                   << 0x1fU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241039__Q) 
                                                 << 0x1eU) 
                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241038__Q) 
                                                    << 0x1dU) 
                                                   | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241037__Q) 
                                                       << 0x1cU) 
                                                      | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241036__Q) 
                                                          << 0x1bU) 
                                                         | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241035__Q) 
                                                             << 0x1aU) 
                                                            | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241034__Q) 
                                                                << 0x19U) 
                                                               | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241033__Q) 
                                                                   << 0x18U) 
                                                                  | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241032__Q) 
                                                                      << 0x17U) 
                                                                     | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241031__Q) 
                                                                         << 0x16U) 
                                                                        | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241030__Q) 
                                                                            << 0x15U) 
                                                                           | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241029__Q) 
                                                                               << 0x14U) 
                                                                              | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241028__Q) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241027__Q) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241026__Q) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241025__Q) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241024__Q) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241023__Q) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241022__Q) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241021__Q) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241020__Q) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241019__Q) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241018__Q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241017__Q) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241016__Q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241015__Q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241014__Q) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241013__Q) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241012__Q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241011__Q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241010__Q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241009__Q))))))))))))))))))))))))))))))))),32);
        bufp->chgSData(oldp+961,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__golden__DOT__i1),16);
        bufp->chgSData(oldp+962,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__golden__DOT__i2),16);
        bufp->chgSData(oldp+963,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__golden__DOT__i3),16);
        bufp->chgSData(oldp+964,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__golden__DOT__i4),16);
        bufp->chgIData(oldp+965,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__golden__DOT__mul),32);
        bufp->chgIData(oldp+966,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__golden__DOT__add),32);
        bufp->chgSData(oldp+967,((((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241056__Q) 
                                   << 0xfU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241055__Q) 
                                                << 0xeU) 
                                               | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241054__Q) 
                                                   << 0xdU) 
                                                  | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241053__Q) 
                                                      << 0xcU) 
                                                     | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241052__Q) 
                                                         << 0xbU) 
                                                        | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241051__Q) 
                                                            << 0xaU) 
                                                           | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241050__Q) 
                                                               << 9U) 
                                                              | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241049__Q) 
                                                                  << 8U) 
                                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241048__Q) 
                                                                     << 7U) 
                                                                    | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241047__Q) 
                                                                        << 6U) 
                                                                       | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241046__Q) 
                                                                           << 5U) 
                                                                          | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241045__Q) 
                                                                              << 4U) 
                                                                             | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241044__Q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241043__Q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241042__Q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241041__Q))))))))))))))))),16);
        bufp->chgSData(oldp+968,((((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241072__Q) 
                                   << 0xfU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241071__Q) 
                                                << 0xeU) 
                                               | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241070__Q) 
                                                   << 0xdU) 
                                                  | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241069__Q) 
                                                      << 0xcU) 
                                                     | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241068__Q) 
                                                         << 0xbU) 
                                                        | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241067__Q) 
                                                            << 0xaU) 
                                                           | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241066__Q) 
                                                               << 9U) 
                                                              | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241065__Q) 
                                                                  << 8U) 
                                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241064__Q) 
                                                                     << 7U) 
                                                                    | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241063__Q) 
                                                                        << 6U) 
                                                                       | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241062__Q) 
                                                                           << 5U) 
                                                                          | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241061__Q) 
                                                                              << 4U) 
                                                                             | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241060__Q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241059__Q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241058__Q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241057__Q))))))))))))))))),16);
        bufp->chgSData(oldp+969,((((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241088__Q) 
                                   << 0xfU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241087__Q) 
                                                << 0xeU) 
                                               | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241086__Q) 
                                                   << 0xdU) 
                                                  | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241085__Q) 
                                                      << 0xcU) 
                                                     | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241084__Q) 
                                                         << 0xbU) 
                                                        | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241083__Q) 
                                                            << 0xaU) 
                                                           | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241082__Q) 
                                                               << 9U) 
                                                              | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241081__Q) 
                                                                  << 8U) 
                                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241080__Q) 
                                                                     << 7U) 
                                                                    | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241079__Q) 
                                                                        << 6U) 
                                                                       | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241078__Q) 
                                                                           << 5U) 
                                                                          | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241077__Q) 
                                                                              << 4U) 
                                                                             | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241076__Q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241075__Q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241074__Q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241073__Q))))))))))))))))),16);
        bufp->chgSData(oldp+970,((((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241104__Q) 
                                   << 0xfU) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241103__Q) 
                                                << 0xeU) 
                                               | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241102__Q) 
                                                   << 0xdU) 
                                                  | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241101__Q) 
                                                      << 0xcU) 
                                                     | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241100__Q) 
                                                         << 0xbU) 
                                                        | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241099__Q) 
                                                            << 0xaU) 
                                                           | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241098__Q) 
                                                               << 9U) 
                                                              | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241097__Q) 
                                                                  << 8U) 
                                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241096__Q) 
                                                                     << 7U) 
                                                                    | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241095__Q) 
                                                                        << 6U) 
                                                                       | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241094__Q) 
                                                                           << 5U) 
                                                                          | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241093__Q) 
                                                                              << 4U) 
                                                                             | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241092__Q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241091__Q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241090__Q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241089__Q))))))))))))))))),16);
        bufp->chgBit(oldp+971,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241009__Q));
        bufp->chgBit(oldp+972,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241010__Q));
        bufp->chgBit(oldp+973,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241011__Q));
        bufp->chgBit(oldp+974,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241012__Q));
        bufp->chgBit(oldp+975,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241013__Q));
        bufp->chgBit(oldp+976,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241014__Q));
        bufp->chgBit(oldp+977,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241015__Q));
        bufp->chgBit(oldp+978,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241016__Q));
        bufp->chgBit(oldp+979,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241017__Q));
        bufp->chgBit(oldp+980,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241018__Q));
        bufp->chgBit(oldp+981,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241019__Q));
        bufp->chgBit(oldp+982,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241020__Q));
        bufp->chgBit(oldp+983,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241021__Q));
        bufp->chgBit(oldp+984,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241022__Q));
        bufp->chgBit(oldp+985,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241023__Q));
        bufp->chgBit(oldp+986,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241024__Q));
        bufp->chgBit(oldp+987,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241025__Q));
        bufp->chgBit(oldp+988,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241026__Q));
        bufp->chgBit(oldp+989,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241027__Q));
        bufp->chgBit(oldp+990,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241028__Q));
        bufp->chgBit(oldp+991,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241029__Q));
        bufp->chgBit(oldp+992,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241030__Q));
        bufp->chgBit(oldp+993,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241031__Q));
        bufp->chgBit(oldp+994,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241032__Q));
        bufp->chgBit(oldp+995,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241033__Q));
        bufp->chgBit(oldp+996,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241034__Q));
        bufp->chgBit(oldp+997,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241035__Q));
        bufp->chgBit(oldp+998,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241036__Q));
        bufp->chgBit(oldp+999,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241037__Q));
        bufp->chgBit(oldp+1000,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241038__Q));
        bufp->chgBit(oldp+1001,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241039__Q));
        bufp->chgBit(oldp+1002,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241040__Q));
        bufp->chgBit(oldp+1003,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241041__Q));
        bufp->chgBit(oldp+1004,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241042__Q));
        bufp->chgBit(oldp+1005,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241043__Q));
        bufp->chgBit(oldp+1006,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241044__Q));
        bufp->chgBit(oldp+1007,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241045__Q));
        bufp->chgBit(oldp+1008,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241046__Q));
        bufp->chgBit(oldp+1009,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241047__Q));
        bufp->chgBit(oldp+1010,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241048__Q));
        bufp->chgBit(oldp+1011,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241049__Q));
        bufp->chgBit(oldp+1012,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241050__Q));
        bufp->chgBit(oldp+1013,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241051__Q));
        bufp->chgBit(oldp+1014,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241052__Q));
        bufp->chgBit(oldp+1015,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241053__Q));
        bufp->chgBit(oldp+1016,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241054__Q));
        bufp->chgBit(oldp+1017,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241055__Q));
        bufp->chgBit(oldp+1018,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241056__Q));
        bufp->chgBit(oldp+1019,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241057__Q));
        bufp->chgBit(oldp+1020,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241058__Q));
        bufp->chgBit(oldp+1021,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241059__Q));
        bufp->chgBit(oldp+1022,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241060__Q));
        bufp->chgBit(oldp+1023,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241061__Q));
        bufp->chgBit(oldp+1024,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241062__Q));
        bufp->chgBit(oldp+1025,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241063__Q));
        bufp->chgBit(oldp+1026,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241064__Q));
        bufp->chgBit(oldp+1027,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241065__Q));
        bufp->chgBit(oldp+1028,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241066__Q));
        bufp->chgBit(oldp+1029,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241067__Q));
        bufp->chgBit(oldp+1030,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241068__Q));
        bufp->chgBit(oldp+1031,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241069__Q));
        bufp->chgBit(oldp+1032,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241070__Q));
        bufp->chgBit(oldp+1033,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241071__Q));
        bufp->chgBit(oldp+1034,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241072__Q));
        bufp->chgBit(oldp+1035,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241073__Q));
        bufp->chgBit(oldp+1036,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241074__Q));
        bufp->chgBit(oldp+1037,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241075__Q));
        bufp->chgBit(oldp+1038,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241076__Q));
        bufp->chgBit(oldp+1039,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241077__Q));
        bufp->chgBit(oldp+1040,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241078__Q));
        bufp->chgBit(oldp+1041,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241079__Q));
        bufp->chgBit(oldp+1042,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241080__Q));
        bufp->chgBit(oldp+1043,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241081__Q));
        bufp->chgBit(oldp+1044,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241082__Q));
        bufp->chgBit(oldp+1045,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241083__Q));
        bufp->chgBit(oldp+1046,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241084__Q));
        bufp->chgBit(oldp+1047,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241085__Q));
        bufp->chgBit(oldp+1048,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241086__Q));
        bufp->chgBit(oldp+1049,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241087__Q));
        bufp->chgBit(oldp+1050,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241088__Q));
        bufp->chgBit(oldp+1051,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241089__Q));
        bufp->chgBit(oldp+1052,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241090__Q));
        bufp->chgBit(oldp+1053,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241091__Q));
        bufp->chgBit(oldp+1054,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241092__Q));
        bufp->chgBit(oldp+1055,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241093__Q));
        bufp->chgBit(oldp+1056,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241094__Q));
        bufp->chgBit(oldp+1057,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241095__Q));
        bufp->chgBit(oldp+1058,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241096__Q));
        bufp->chgBit(oldp+1059,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241097__Q));
        bufp->chgBit(oldp+1060,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241098__Q));
        bufp->chgBit(oldp+1061,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241099__Q));
        bufp->chgBit(oldp+1062,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241100__Q));
        bufp->chgBit(oldp+1063,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241101__Q));
        bufp->chgBit(oldp+1064,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241102__Q));
        bufp->chgBit(oldp+1065,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241103__Q));
        bufp->chgBit(oldp+1066,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241104__Q));
        bufp->chgCData(oldp+1067,((((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241039__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241088__Q))),2);
        bufp->chgBit(oldp+1068,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241104__Q)
                                        ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241056__Q))
                                        : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241056__Q)))));
        bufp->chgBit(oldp+1069,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241104__Q)
                                        ? (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241056__Q)
                                        : (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241056__Q))))));
        bufp->chgCData(oldp+1070,((((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241104__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241056__Q))),2);
        bufp->chgBit(oldp+1071,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241056__Q)))));
        bufp->chgCData(oldp+1072,((((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241089__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241041__Q))),2);
        bufp->chgBit(oldp+1073,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241089__Q)
                                        ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241041__Q))
                                        : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241041__Q)))));
        bufp->chgBit(oldp+1074,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241041__Q)))));
        bufp->chgCData(oldp+1075,((((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241090__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241042__Q))),2);
        bufp->chgBit(oldp+1076,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241090__Q)
                                        ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241042__Q))
                                        : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241042__Q)))));
        bufp->chgBit(oldp+1077,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241042__Q)))));
        bufp->chgCData(oldp+1078,((((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241091__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241043__Q))),2);
        bufp->chgBit(oldp+1079,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241091__Q)
                                        ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241043__Q))
                                        : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241043__Q)))));
        bufp->chgBit(oldp+1080,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241043__Q)))));
        bufp->chgCData(oldp+1081,((((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241092__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241044__Q))),2);
        bufp->chgBit(oldp+1082,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241092__Q)
                                        ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241044__Q))
                                        : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241044__Q)))));
        bufp->chgBit(oldp+1083,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241044__Q)))));
        bufp->chgCData(oldp+1084,((((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241093__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241045__Q))),2);
        bufp->chgBit(oldp+1085,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241093__Q)
                                        ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241045__Q))
                                        : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241045__Q)))));
        bufp->chgBit(oldp+1086,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241045__Q)))));
        bufp->chgCData(oldp+1087,((((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241094__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241046__Q))),2);
        bufp->chgBit(oldp+1088,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241094__Q)
                                        ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241046__Q))
                                        : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241046__Q)))));
        bufp->chgBit(oldp+1089,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241046__Q)))));
        bufp->chgCData(oldp+1090,((((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241095__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241047__Q))),2);
        bufp->chgBit(oldp+1091,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241095__Q)
                                        ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241047__Q))
                                        : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241047__Q)))));
        bufp->chgBit(oldp+1092,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241047__Q)))));
        bufp->chgCData(oldp+1093,((((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241096__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241048__Q))),2);
        bufp->chgBit(oldp+1094,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241096__Q)
                                        ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241048__Q))
                                        : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241048__Q)))));
        bufp->chgBit(oldp+1095,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241048__Q)))));
        bufp->chgCData(oldp+1096,((((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241097__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241049__Q))),2);
        bufp->chgBit(oldp+1097,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241097__Q)
                                        ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241049__Q))
                                        : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241049__Q)))));
        bufp->chgBit(oldp+1098,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241049__Q)))));
        bufp->chgCData(oldp+1099,((((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241098__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241050__Q))),2);
        bufp->chgBit(oldp+1100,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241098__Q)
                                        ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241050__Q))
                                        : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241050__Q)))));
        bufp->chgBit(oldp+1101,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241050__Q)))));
        bufp->chgCData(oldp+1102,((((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241099__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241051__Q))),2);
        bufp->chgBit(oldp+1103,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241099__Q)
                                        ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241051__Q))
                                        : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241051__Q)))));
        bufp->chgBit(oldp+1104,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241051__Q)))));
        bufp->chgCData(oldp+1105,((((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241100__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241052__Q))),2);
        bufp->chgBit(oldp+1106,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241100__Q)
                                        ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241052__Q))
                                        : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241052__Q)))));
        bufp->chgBit(oldp+1107,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241052__Q)))));
        bufp->chgCData(oldp+1108,((((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241101__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241053__Q))),2);
        bufp->chgBit(oldp+1109,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241101__Q)
                                        ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241053__Q))
                                        : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241053__Q)))));
        bufp->chgBit(oldp+1110,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241053__Q)))));
        bufp->chgCData(oldp+1111,((((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241102__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241054__Q))),2);
        bufp->chgBit(oldp+1112,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241102__Q)
                                        ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241054__Q))
                                        : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241054__Q)))));
        bufp->chgBit(oldp+1113,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241054__Q)))));
        bufp->chgCData(oldp+1114,((((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241103__Q) 
                                    << 1U) | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241055__Q))),2);
        bufp->chgBit(oldp+1115,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241103__Q)
                                        ? (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241055__Q))
                                        : (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241055__Q)))));
        bufp->chgBit(oldp+1116,((1U & (~ (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241055__Q)))));
        bufp->chgIData(oldp+1117,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__B),18);
        bufp->chgIData(oldp+1118,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__b_int),18);
        bufp->chgIData(oldp+1119,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__mult_b),18);
    }
    bufp->chgBit(oldp+1120,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__clk));
    bufp->chgIData(oldp+1121,(((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p)
                                ? (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__golden__DOT__mul 
                                   + VL_EXTENDS_II(32,16, (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__golden__DOT__i3)))
                                : (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__P 
                                   + vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__golden__DOT__mul))),32);
    bufp->chgBit(oldp+1122,((1U & ((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p)
                                    ? ((1U & (IData)(
                                                     (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                                      >> 0x1eU)))
                                        ? ((IData)(
                                                   (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__z_out 
                                                    >> 0x1eU)) 
                                           | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241088__Q))
                                        : ((IData)(
                                                   (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__z_out 
                                                    >> 0x1eU)) 
                                           & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241088__Q)))
                                    : ((1U & (IData)(
                                                     (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                                      >> 0x1eU)))
                                        ? ((IData)(
                                                   (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__z_out 
                                                    >> 0x1eU)) 
                                           | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241039__Q))
                                        : ((IData)(
                                                   (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__z_out 
                                                    >> 0x1eU)) 
                                           & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241039__Q)))))));
    bufp->chgIData(oldp+1123,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT__add),32);
    bufp->chgCData(oldp+1124,((((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__sel_c_or_p) 
                                << 4U) | ((8U & ((IData)(
                                                         (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                                          >> 0x1eU)) 
                                                 << 3U)) 
                                          | ((4U & 
                                              ((IData)(
                                                       (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__z_out 
                                                        >> 0x1eU)) 
                                               << 2U)) 
                                             | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241039__Q) 
                                                 << 1U) 
                                                | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241088__Q)))))),5);
    bufp->chgBit(oldp+1125,((1U & ((1U & (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                                  >> 0x1eU)))
                                    ? ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__z_out 
                                                >> 0x1eU)) 
                                       | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241039__Q))
                                    : ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__z_out 
                                                >> 0x1eU)) 
                                       & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241039__Q))))));
    bufp->chgBit(oldp+1126,((1U & ((1U & (IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                                  >> 0x1eU)))
                                    ? ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__z_out 
                                                >> 0x1eU)) 
                                       | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241088__Q))
                                    : ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__z_out 
                                                >> 0x1eU)) 
                                       & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241088__Q))))));
    bufp->chgCData(oldp+1127,(((8U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024auto__024alumacc__02ecc__03a485__03areplace_alu__02447__02eC 
                                               >> 0x1eU)) 
                                      << 3U)) | ((4U 
                                                  & ((IData)(
                                                             (vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__z_out 
                                                              >> 0x1eU)) 
                                                     << 2U)) 
                                                 | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241039__Q) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241088__Q))))),4);
    bufp->chgBit(oldp+1128,(((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__z_out 
                                      >> 0x1eU)) & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241039__Q))));
    bufp->chgBit(oldp+1129,((1U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__z_out 
                                            >> 0x1eU)) 
                                   | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241039__Q)))));
    bufp->chgCData(oldp+1130,(((4U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__z_out 
                                               >> 0x1eU)) 
                                      << 2U)) | (((IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241039__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241088__Q)))),3);
    bufp->chgBit(oldp+1131,(((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__z_out 
                                      >> 0x1eU)) & (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241088__Q))));
    bufp->chgBit(oldp+1132,((1U & ((IData)((vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__z_out 
                                            >> 0x1eU)) 
                                   | (IData)(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellout____024abc__0241008__024auto__024blifparse__02ecc__03a362__03aparse_blif__0241088__Q)))));
    bufp->chgIData(oldp+1133,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____Vcellinp____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__A),20);
    bufp->chgIData(oldp+1134,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__a_int),20);
    bufp->chgQData(oldp+1135,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__add_sub_in),64);
    bufp->chgIData(oldp+1137,(vlSelf->co_sim_dsp_multiplier_accum_with_add_neg__DOT__netlist__DOT____024mul__024__02fnfs_scratch__0__VhshRsIAIIIM5c5x3TN6CYqkhfPgfejD7BI7P3Aa0HPc__DOT__mult_a),20);
}

void Vco_sim_dsp_multiplier_accum_with_add_neg___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_dsp_multiplier_accum_with_add_neg___024root__trace_cleanup\n"); );
    // Init
    Vco_sim_dsp_multiplier_accum_with_add_neg___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vco_sim_dsp_multiplier_accum_with_add_neg___024root*>(voidSelf);
    Vco_sim_dsp_multiplier_accum_with_add_neg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
}
