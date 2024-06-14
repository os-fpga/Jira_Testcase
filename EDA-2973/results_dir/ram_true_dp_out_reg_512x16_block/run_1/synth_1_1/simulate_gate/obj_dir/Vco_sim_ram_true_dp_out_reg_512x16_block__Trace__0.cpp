// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vco_sim_ram_true_dp_out_reg_512x16_block__Syms.h"


void Vco_sim_ram_true_dp_out_reg_512x16_block___024root__trace_chg_0_sub_0(Vco_sim_ram_true_dp_out_reg_512x16_block___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vco_sim_ram_true_dp_out_reg_512x16_block___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_ram_true_dp_out_reg_512x16_block___024root__trace_chg_0\n"); );
    // Init
    Vco_sim_ram_true_dp_out_reg_512x16_block___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vco_sim_ram_true_dp_out_reg_512x16_block___024root*>(voidSelf);
    Vco_sim_ram_true_dp_out_reg_512x16_block__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vco_sim_ram_true_dp_out_reg_512x16_block___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vco_sim_ram_true_dp_out_reg_512x16_block___024root__trace_chg_0_sub_0(Vco_sim_ram_true_dp_out_reg_512x16_block___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_ram_true_dp_out_reg_512x16_block__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_ram_true_dp_out_reg_512x16_block___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f),32);
        bufp->chgIData(oldp+1,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__g),32);
        bufp->chgIData(oldp+2,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__h),32);
        bufp->chgIData(oldp+3,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__a),32);
        bufp->chgIData(oldp+4,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__b),32);
        bufp->chgIData(oldp+5,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__c),32);
        bufp->chgIData(oldp+6,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__parity_RAM1__DOT__f_p),32);
        bufp->chgIData(oldp+7,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__parity_RAM1__DOT__g_p),32);
        bufp->chgIData(oldp+8,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__parity_RAM1__DOT__h_p),32);
        bufp->chgIData(oldp+9,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+10,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__weA));
        bufp->chgBit(oldp+11,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__weB));
        bufp->chgBit(oldp+12,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__reA));
        bufp->chgBit(oldp+13,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__reB));
        bufp->chgSData(oldp+14,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrA),9);
        bufp->chgSData(oldp+15,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrB),9);
        bufp->chgSData(oldp+16,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinA),16);
        bufp->chgSData(oldp+17,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinB),16);
        bufp->chgIData(oldp+18,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__mismatch),32);
        bufp->chgCData(oldp+19,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__cycle),7);
        bufp->chgCData(oldp+20,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__i),7);
        bufp->chgBit(oldp+21,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrB) 
                                     >> 8U))));
        bufp->chgBit(oldp+22,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrB) 
                                     >> 7U))));
        bufp->chgBit(oldp+23,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrB) 
                                     >> 6U))));
        bufp->chgBit(oldp+24,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrB) 
                                     >> 5U))));
        bufp->chgBit(oldp+25,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrB) 
                                     >> 4U))));
        bufp->chgBit(oldp+26,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrB) 
                                     >> 3U))));
        bufp->chgBit(oldp+27,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrB) 
                                     >> 2U))));
        bufp->chgBit(oldp+28,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrB) 
                                     >> 1U))));
        bufp->chgBit(oldp+29,((1U & (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrB))));
        bufp->chgBit(oldp+30,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrA) 
                                     >> 8U))));
        bufp->chgBit(oldp+31,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrA) 
                                     >> 7U))));
        bufp->chgBit(oldp+32,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrA) 
                                     >> 6U))));
        bufp->chgBit(oldp+33,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrA) 
                                     >> 5U))));
        bufp->chgBit(oldp+34,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrA) 
                                     >> 4U))));
        bufp->chgBit(oldp+35,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrA) 
                                     >> 3U))));
        bufp->chgBit(oldp+36,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrA) 
                                     >> 2U))));
        bufp->chgBit(oldp+37,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrA) 
                                     >> 1U))));
        bufp->chgBit(oldp+38,((1U & (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrA))));
        bufp->chgBit(oldp+39,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinB) 
                                     >> 0xfU))));
        bufp->chgBit(oldp+40,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinB) 
                                     >> 0xeU))));
        bufp->chgBit(oldp+41,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinB) 
                                     >> 0xdU))));
        bufp->chgBit(oldp+42,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinB) 
                                     >> 0xcU))));
        bufp->chgBit(oldp+43,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinB) 
                                     >> 0xbU))));
        bufp->chgBit(oldp+44,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinB) 
                                     >> 0xaU))));
        bufp->chgBit(oldp+45,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinB) 
                                     >> 9U))));
        bufp->chgBit(oldp+46,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinB) 
                                     >> 8U))));
        bufp->chgBit(oldp+47,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinB) 
                                     >> 7U))));
        bufp->chgBit(oldp+48,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinB) 
                                     >> 6U))));
        bufp->chgBit(oldp+49,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinB) 
                                     >> 5U))));
        bufp->chgBit(oldp+50,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinB) 
                                     >> 4U))));
        bufp->chgBit(oldp+51,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinB) 
                                     >> 3U))));
        bufp->chgBit(oldp+52,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinB) 
                                     >> 2U))));
        bufp->chgBit(oldp+53,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinB) 
                                     >> 1U))));
        bufp->chgBit(oldp+54,((1U & (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinB))));
        bufp->chgBit(oldp+55,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinA) 
                                     >> 0xfU))));
        bufp->chgBit(oldp+56,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinA) 
                                     >> 0xeU))));
        bufp->chgBit(oldp+57,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinA) 
                                     >> 0xdU))));
        bufp->chgBit(oldp+58,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinA) 
                                     >> 0xcU))));
        bufp->chgBit(oldp+59,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinA) 
                                     >> 0xbU))));
        bufp->chgBit(oldp+60,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinA) 
                                     >> 0xaU))));
        bufp->chgBit(oldp+61,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinA) 
                                     >> 9U))));
        bufp->chgBit(oldp+62,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinA) 
                                     >> 8U))));
        bufp->chgBit(oldp+63,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinA) 
                                     >> 7U))));
        bufp->chgBit(oldp+64,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinA) 
                                     >> 6U))));
        bufp->chgBit(oldp+65,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinA) 
                                     >> 5U))));
        bufp->chgBit(oldp+66,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinA) 
                                     >> 4U))));
        bufp->chgBit(oldp+67,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinA) 
                                     >> 3U))));
        bufp->chgBit(oldp+68,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinA) 
                                     >> 2U))));
        bufp->chgBit(oldp+69,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinA) 
                                     >> 1U))));
        bufp->chgBit(oldp+70,((1U & (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinA))));
        bufp->chgBit(oldp+71,((1U & (~ (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__weB)))));
        bufp->chgBit(oldp+72,((1U & (~ (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__weA)))));
        bufp->chgCData(oldp+73,((3U & (- (IData)((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__weB))))),2);
        bufp->chgCData(oldp+74,((3U & (- (IData)((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__weA))))),2);
        bufp->chgSData(oldp+75,(((0x1000U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrB) 
                                             << 4U)) 
                                 | ((0x800U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrB) 
                                               << 4U)) 
                                    | ((0x400U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrB) 
                                                  << 4U)) 
                                       | ((0x200U & 
                                           ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrB) 
                                            << 4U)) 
                                          | ((0x100U 
                                              & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrB) 
                                                 << 4U)) 
                                             | ((0x80U 
                                                 & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrB) 
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
        bufp->chgSData(oldp+76,(((0x1000U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrA) 
                                             << 4U)) 
                                 | ((0x800U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrA) 
                                               << 4U)) 
                                    | ((0x400U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrA) 
                                                  << 4U)) 
                                       | ((0x200U & 
                                           ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrA) 
                                            << 4U)) 
                                          | ((0x100U 
                                              & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrA) 
                                                 << 4U)) 
                                             | ((0x80U 
                                                 & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrA) 
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
        bufp->chgSData(oldp+77,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrB),10);
        bufp->chgSData(oldp+78,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrA),10);
        bufp->chgIData(oldp+79,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+80,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+81,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+82,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__unnamedblk5__DOT__i),32);
        bufp->chgIData(oldp+83,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__unnamedblk6__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+84,((1U & (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1))));
        bufp->chgBit(oldp+85,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                     >> 0xaU))));
        bufp->chgBit(oldp+86,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                     >> 0xbU))));
        bufp->chgBit(oldp+87,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                     >> 0xcU))));
        bufp->chgBit(oldp+88,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                     >> 0xdU))));
        bufp->chgBit(oldp+89,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                     >> 0xeU))));
        bufp->chgBit(oldp+90,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                     >> 0xfU))));
        bufp->chgBit(oldp+91,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                     >> 1U))));
        bufp->chgBit(oldp+92,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                     >> 2U))));
        bufp->chgBit(oldp+93,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                     >> 3U))));
        bufp->chgBit(oldp+94,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                     >> 4U))));
        bufp->chgBit(oldp+95,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                     >> 5U))));
        bufp->chgBit(oldp+96,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                     >> 6U))));
        bufp->chgBit(oldp+97,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                     >> 7U))));
        bufp->chgBit(oldp+98,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                     >> 8U))));
        bufp->chgBit(oldp+99,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                     >> 9U))));
        bufp->chgSData(oldp+100,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1),16);
        bufp->chgIData(oldp+101,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__m),32);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[3U]) 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+102,((1U & ((0x2000U & (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1))
                                       ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242653__DOT__s1) 
                                          >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242653__DOT__s1)))));
        bufp->chgCData(oldp+103,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__024103) 
                                   << 2U) | (((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b13__05d) 
                                              << 1U) 
                                             | (1U 
                                                & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                                   >> 0xdU))))),3);
        bufp->chgCData(oldp+104,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__024103) 
                                   << 2U) | ((2U & 
                                              ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                               >> 0xdU)) 
                                             | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b14__05d)))),3);
        bufp->chgCData(oldp+105,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__024103) 
                                   << 2U) | ((2U & 
                                              ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                               >> 0xeU)) 
                                             | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b15__05d)))),3);
        bufp->chgCData(oldp+106,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__024103) 
                                   << 2U) | ((2U & 
                                              ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                               >> 0xaU)) 
                                             | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b11__05d)))),3);
        bufp->chgCData(oldp+107,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__024103) 
                                   << 2U) | ((2U & 
                                              ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                               >> 9U)) 
                                             | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b10__05d)))),3);
        bufp->chgCData(oldp+108,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__024103) 
                                   << 2U) | ((2U & 
                                              ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                               >> 8U)) 
                                             | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b9__05d)))),3);
        bufp->chgCData(oldp+109,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__024103) 
                                   << 2U) | ((2U & 
                                              ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                               >> 7U)) 
                                             | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b8__05d)))),3);
        bufp->chgCData(oldp+110,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__024103) 
                                   << 2U) | ((2U & 
                                              ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                               >> 6U)) 
                                             | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b7__05d)))),3);
        bufp->chgCData(oldp+111,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__024103) 
                                   << 2U) | ((2U & 
                                              ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                               >> 5U)) 
                                             | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b6__05d)))),3);
        bufp->chgCData(oldp+112,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__024103) 
                                   << 2U) | ((2U & 
                                              ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                               >> 4U)) 
                                             | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b5__05d)))),3);
        bufp->chgCData(oldp+113,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__024103) 
                                   << 2U) | ((2U & 
                                              ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                               >> 3U)) 
                                             | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b4__05d)))),3);
        bufp->chgCData(oldp+114,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__024103) 
                                   << 2U) | ((2U & 
                                              ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                               >> 2U)) 
                                             | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b3__05d)))),3);
        bufp->chgCData(oldp+115,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__024103) 
                                   << 2U) | ((2U & 
                                              ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                               >> 1U)) 
                                             | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b2__05d)))),3);
        bufp->chgCData(oldp+116,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__024103) 
                                   << 2U) | ((2U & (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1)) 
                                             | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b1__05d)))),3);
        bufp->chgCData(oldp+117,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__024103) 
                                   << 2U) | ((2U & 
                                              ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                               << 1U)) 
                                             | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b0__05d)))),3);
        bufp->chgCData(oldp+118,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__024103) 
                                   << 2U) | ((2U & 
                                              ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1) 
                                               >> 0xbU)) 
                                             | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b12__05d)))),3);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+119,((1U & (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1))));
        bufp->chgBit(oldp+120,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+121,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+122,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+123,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                      >> 0xdU))));
        bufp->chgBit(oldp+124,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                      >> 0xeU))));
        bufp->chgBit(oldp+125,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+126,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                      >> 1U))));
        bufp->chgBit(oldp+127,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                      >> 2U))));
        bufp->chgBit(oldp+128,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                      >> 3U))));
        bufp->chgBit(oldp+129,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                      >> 4U))));
        bufp->chgBit(oldp+130,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                      >> 5U))));
        bufp->chgBit(oldp+131,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                      >> 6U))));
        bufp->chgBit(oldp+132,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                      >> 7U))));
        bufp->chgBit(oldp+133,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                      >> 8U))));
        bufp->chgBit(oldp+134,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                      >> 9U))));
        bufp->chgSData(oldp+135,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1),16);
        bufp->chgIData(oldp+136,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__j),32);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[4U]) 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+137,((1U & ((8U & (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1))
                                       ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242650__DOT__s1) 
                                          >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242650__DOT__s1)))));
        bufp->chgCData(oldp+138,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__02496) 
                                   << 2U) | (((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b3__05d) 
                                              << 1U) 
                                             | (1U 
                                                & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                                   >> 3U))))),3);
        bufp->chgCData(oldp+139,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__02496) 
                                   << 2U) | ((2U & 
                                              ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                               >> 3U)) 
                                             | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b4__05d)))),3);
        bufp->chgCData(oldp+140,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__02496) 
                                   << 2U) | ((2U & 
                                              ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                               >> 4U)) 
                                             | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b5__05d)))),3);
        bufp->chgCData(oldp+141,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__02496) 
                                   << 2U) | ((2U & 
                                              ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                               >> 1U)) 
                                             | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b2__05d)))),3);
        bufp->chgCData(oldp+142,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__02496) 
                                   << 2U) | ((2U & 
                                              ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                               >> 0xbU)) 
                                             | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b12__05d)))),3);
        bufp->chgCData(oldp+143,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__02496) 
                                   << 2U) | ((2U & 
                                              ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                               >> 7U)) 
                                             | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b8__05d)))),3);
        bufp->chgCData(oldp+144,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__02496) 
                                   << 2U) | ((2U & 
                                              ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                               >> 0xaU)) 
                                             | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b11__05d)))),3);
        bufp->chgCData(oldp+145,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__02496) 
                                   << 2U) | ((2U & 
                                              ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                               >> 9U)) 
                                             | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b10__05d)))),3);
        bufp->chgCData(oldp+146,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__02496) 
                                   << 2U) | ((2U & 
                                              ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                               >> 8U)) 
                                             | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b9__05d)))),3);
        bufp->chgCData(oldp+147,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__02496) 
                                   << 2U) | ((2U & (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1)) 
                                             | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b1__05d)))),3);
        bufp->chgCData(oldp+148,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__02496) 
                                   << 2U) | ((2U & 
                                              ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                               << 1U)) 
                                             | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b0__05d)))),3);
        bufp->chgCData(oldp+149,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__02496) 
                                   << 2U) | ((2U & 
                                              ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                               >> 6U)) 
                                             | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b7__05d)))),3);
        bufp->chgCData(oldp+150,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__02496) 
                                   << 2U) | ((2U & 
                                              ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                               >> 5U)) 
                                             | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b6__05d)))),3);
        bufp->chgCData(oldp+151,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__02496) 
                                   << 2U) | ((2U & 
                                              ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                               >> 0xeU)) 
                                             | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b15__05d)))),3);
        bufp->chgCData(oldp+152,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__02496) 
                                   << 2U) | ((2U & 
                                              ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                               >> 0xdU)) 
                                             | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b14__05d)))),3);
        bufp->chgCData(oldp+153,((((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__02496) 
                                   << 2U) | ((2U & 
                                              ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1) 
                                               >> 0xcU)) 
                                             | (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b13__05d)))),3);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[5U] 
                      | vlSelf->__Vm_traceActivity[6U]) 
                     | vlSelf->__Vm_traceActivity[7U]))) {
        bufp->chgBit(oldp+154,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b15__05d)
                                       ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242678__DOT__s1) 
                                          >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242678__DOT__s1)))));
        bufp->chgBit(oldp+155,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b14__05d)
                                       ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242679__DOT__s1) 
                                          >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242679__DOT__s1)))));
        bufp->chgBit(oldp+156,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b13__05d)
                                       ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242680__DOT__s1) 
                                          >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242680__DOT__s1)))));
        bufp->chgBit(oldp+157,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b12__05d)
                                       ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242657__DOT__s1) 
                                          >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242657__DOT__s1)))));
        bufp->chgBit(oldp+158,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b11__05d)
                                       ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242659__DOT__s1) 
                                          >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242659__DOT__s1)))));
        bufp->chgBit(oldp+159,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b10__05d)
                                       ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242660__DOT__s1) 
                                          >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242660__DOT__s1)))));
        bufp->chgBit(oldp+160,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b9__05d)
                                       ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242661__DOT__s1) 
                                          >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242661__DOT__s1)))));
        bufp->chgBit(oldp+161,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b8__05d)
                                       ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242658__DOT__s1) 
                                          >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242658__DOT__s1)))));
        bufp->chgBit(oldp+162,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b7__05d)
                                       ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242664__DOT__s1) 
                                          >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242664__DOT__s1)))));
        bufp->chgBit(oldp+163,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b6__05d)
                                       ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242665__DOT__s1) 
                                          >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242665__DOT__s1)))));
        bufp->chgBit(oldp+164,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b5__05d)
                                       ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242652__DOT__s1) 
                                          >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242652__DOT__s1)))));
        bufp->chgBit(oldp+165,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b4__05d)
                                       ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242651__DOT__s1) 
                                          >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242651__DOT__s1)))));
        bufp->chgBit(oldp+166,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b2__05d)
                                       ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242654__DOT__s1) 
                                          >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242654__DOT__s1)))));
        bufp->chgBit(oldp+167,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b1__05d)
                                       ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242662__DOT__s1) 
                                          >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242662__DOT__s1)))));
        bufp->chgBit(oldp+168,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b0__05d)
                                       ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242663__DOT__s1) 
                                          >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242663__DOT__s1)))));
        bufp->chgBit(oldp+169,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b15__05d)
                                       ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242656__DOT__s1) 
                                          >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242656__DOT__s1)))));
        bufp->chgBit(oldp+170,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b14__05d)
                                       ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242655__DOT__s1) 
                                          >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242655__DOT__s1)))));
        bufp->chgBit(oldp+171,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b12__05d)
                                       ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242681__DOT__s1) 
                                          >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242681__DOT__s1)))));
        bufp->chgBit(oldp+172,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b11__05d)
                                       ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242666__DOT__s1) 
                                          >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242666__DOT__s1)))));
        bufp->chgBit(oldp+173,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b10__05d)
                                       ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242667__DOT__s1) 
                                          >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242667__DOT__s1)))));
        bufp->chgBit(oldp+174,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b9__05d)
                                       ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242668__DOT__s1) 
                                          >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242668__DOT__s1)))));
        bufp->chgBit(oldp+175,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b8__05d)
                                       ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242669__DOT__s1) 
                                          >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242669__DOT__s1)))));
        bufp->chgBit(oldp+176,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b7__05d)
                                       ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242670__DOT__s1) 
                                          >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242670__DOT__s1)))));
        bufp->chgBit(oldp+177,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b6__05d)
                                       ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242671__DOT__s1) 
                                          >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242671__DOT__s1)))));
        bufp->chgBit(oldp+178,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b5__05d)
                                       ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242672__DOT__s1) 
                                          >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242672__DOT__s1)))));
        bufp->chgBit(oldp+179,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b4__05d)
                                       ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242673__DOT__s1) 
                                          >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242673__DOT__s1)))));
        bufp->chgBit(oldp+180,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b3__05d)
                                       ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242674__DOT__s1) 
                                          >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242674__DOT__s1)))));
        bufp->chgBit(oldp+181,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b2__05d)
                                       ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242675__DOT__s1) 
                                          >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242675__DOT__s1)))));
        bufp->chgBit(oldp+182,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b1__05d)
                                       ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242676__DOT__s1) 
                                          >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242676__DOT__s1)))));
        bufp->chgBit(oldp+183,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b0__05d)
                                       ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242677__DOT__s1) 
                                          >> 1U) : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242677__DOT__s1)))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[5U] 
                     | vlSelf->__Vm_traceActivity[7U]))) {
        bufp->chgCData(oldp+184,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242651__DOT__s1),2);
        bufp->chgCData(oldp+185,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242652__DOT__s1),2);
        bufp->chgCData(oldp+186,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242654__DOT__s1),2);
        bufp->chgCData(oldp+187,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242655__DOT__s1),2);
        bufp->chgCData(oldp+188,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242656__DOT__s1),2);
        bufp->chgCData(oldp+189,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242657__DOT__s1),2);
        bufp->chgCData(oldp+190,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242658__DOT__s1),2);
        bufp->chgCData(oldp+191,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242659__DOT__s1),2);
        bufp->chgCData(oldp+192,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242660__DOT__s1),2);
        bufp->chgCData(oldp+193,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242661__DOT__s1),2);
        bufp->chgCData(oldp+194,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242662__DOT__s1),2);
        bufp->chgCData(oldp+195,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242663__DOT__s1),2);
        bufp->chgCData(oldp+196,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242664__DOT__s1),2);
        bufp->chgCData(oldp+197,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242665__DOT__s1),2);
        bufp->chgCData(oldp+198,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242666__DOT__s1),2);
        bufp->chgCData(oldp+199,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242667__DOT__s1),2);
        bufp->chgCData(oldp+200,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242668__DOT__s1),2);
        bufp->chgCData(oldp+201,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242669__DOT__s1),2);
        bufp->chgCData(oldp+202,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242670__DOT__s1),2);
        bufp->chgCData(oldp+203,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242671__DOT__s1),2);
        bufp->chgCData(oldp+204,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242672__DOT__s1),2);
        bufp->chgCData(oldp+205,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242673__DOT__s1),2);
        bufp->chgCData(oldp+206,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242674__DOT__s1),2);
        bufp->chgCData(oldp+207,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242675__DOT__s1),2);
        bufp->chgCData(oldp+208,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242676__DOT__s1),2);
        bufp->chgCData(oldp+209,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242677__DOT__s1),2);
        bufp->chgCData(oldp+210,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242678__DOT__s1),2);
        bufp->chgCData(oldp+211,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242679__DOT__s1),2);
        bufp->chgCData(oldp+212,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242680__DOT__s1),2);
        bufp->chgCData(oldp+213,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242681__DOT__s1),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgSData(oldp+214,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__doutA),16);
        bufp->chgSData(oldp+215,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__doutB),16);
        bufp->chgBit(oldp+216,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b0__05d));
        bufp->chgBit(oldp+217,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b1__05d));
        bufp->chgBit(oldp+218,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b2__05d));
        bufp->chgBit(oldp+219,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b3__05d));
        bufp->chgBit(oldp+220,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b15__05d));
        bufp->chgBit(oldp+221,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b14__05d));
        bufp->chgBit(oldp+222,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b13__05d));
        bufp->chgBit(oldp+223,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b12__05d));
        bufp->chgBit(oldp+224,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b11__05d));
        bufp->chgBit(oldp+225,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b10__05d));
        bufp->chgBit(oldp+226,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b9__05d));
        bufp->chgBit(oldp+227,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b8__05d));
        bufp->chgBit(oldp+228,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b7__05d));
        bufp->chgBit(oldp+229,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b6__05d));
        bufp->chgBit(oldp+230,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b5__05d));
        bufp->chgBit(oldp+231,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b4__05d));
        bufp->chgBit(oldp+232,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b3__05d));
        bufp->chgBit(oldp+233,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b2__05d));
        bufp->chgBit(oldp+234,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b1__05d));
        bufp->chgBit(oldp+235,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b0__05d));
        bufp->chgBit(oldp+236,((1U & (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RPARITY_A1))));
        bufp->chgBit(oldp+237,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RPARITY_A1) 
                                      >> 1U))));
        bufp->chgBit(oldp+238,((1U & (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RPARITY_B1))));
        bufp->chgBit(oldp+239,((1U & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RPARITY_B1) 
                                      >> 1U))));
        bufp->chgBit(oldp+240,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b14__05d));
        bufp->chgBit(oldp+241,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b9__05d));
        bufp->chgBit(oldp+242,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b10__05d));
        bufp->chgBit(oldp+243,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b15__05d));
        bufp->chgBit(oldp+244,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__024103));
        bufp->chgBit(oldp+245,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__02496));
        bufp->chgBit(oldp+246,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b11__05d));
        bufp->chgBit(oldp+247,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b12__05d));
        bufp->chgBit(oldp+248,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b5__05d));
        bufp->chgBit(oldp+249,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b6__05d));
        bufp->chgBit(oldp+250,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b4__05d));
        bufp->chgBit(oldp+251,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b8__05d));
        bufp->chgBit(oldp+252,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b13__05d));
        bufp->chgBit(oldp+253,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b7__05d));
        bufp->chgCData(oldp+254,(((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__02496)
                                   ? 0xaU : 0xcU)),4);
        bufp->chgCData(oldp+255,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242650__DOT__s1),2);
        bufp->chgCData(oldp+256,(((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__02496)
                                   ? 0xcU : 0xaU)),4);
        bufp->chgCData(oldp+257,(((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__024103)
                                   ? 0xaU : 0xcU)),4);
        bufp->chgCData(oldp+258,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242653__DOT__s1),2);
        bufp->chgCData(oldp+259,(((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__024103)
                                   ? 0xcU : 0xaU)),4);
        bufp->chgCData(oldp+260,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RPARITY_A1),2);
        bufp->chgCData(oldp+261,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RPARITY_B1),2);
        bufp->chgIData(oldp+262,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__parity_RAM1__DOT__i_p),32);
        bufp->chgIData(oldp+263,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__parity_RAM1__DOT__j_p),32);
        bufp->chgIData(oldp+264,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__parity_RAM1__DOT__k_p),32);
        bufp->chgIData(oldp+265,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__parity_RAM1__DOT__m_p),32);
    }
    bufp->chgBit(oldp+266,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__clk));
    bufp->chgSData(oldp+267,(((0x8000U & (((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b15__05d)
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
                                    | ((0x1000U & (
                                                   ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b12__05d)
                                                     ? 
                                                    ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242681__DOT__s1) 
                                                     >> 1U)
                                                     : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242681__DOT__s1)) 
                                                   << 0xcU)) 
                                       | ((0x800U & 
                                           (((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b11__05d)
                                              ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242666__DOT__s1) 
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
    bufp->chgSData(oldp+268,(((0x8000U & (((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b15__05d)
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
                                    | ((0x1000U & (
                                                   ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b12__05d)
                                                     ? 
                                                    ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242657__DOT__s1) 
                                                     >> 1U)
                                                     : (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242657__DOT__s1)) 
                                                   << 0xcU)) 
                                       | ((0x800U & 
                                           (((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b11__05d)
                                              ? ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242659__DOT__s1) 
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
    bufp->chgIData(oldp+269,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__i),32);
    bufp->chgIData(oldp+270,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__k),32);
    bufp->chgBit(oldp+271,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a_write_flag));
    bufp->chgBit(oldp+272,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b_write_flag));
    bufp->chgBit(oldp+273,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a_read_flag));
    bufp->chgBit(oldp+274,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b_read_flag));
    bufp->chgSData(oldp+275,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a_address),10);
    bufp->chgSData(oldp+276,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b_address),10);
    bufp->chgBit(oldp+277,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a2_write_flag));
    bufp->chgBit(oldp+278,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b2_write_flag));
    bufp->chgBit(oldp+279,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a2_read_flag));
    bufp->chgBit(oldp+280,(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b2_read_flag));
}

void Vco_sim_ram_true_dp_out_reg_512x16_block___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_ram_true_dp_out_reg_512x16_block___024root__trace_cleanup\n"); );
    // Init
    Vco_sim_ram_true_dp_out_reg_512x16_block___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vco_sim_ram_true_dp_out_reg_512x16_block___024root*>(voidSelf);
    Vco_sim_ram_true_dp_out_reg_512x16_block__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
}
