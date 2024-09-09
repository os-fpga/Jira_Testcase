// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_GJC46_edit.h for the primary calling header

#include "Vco_sim_GJC46_edit__pch.h"
#include "Vco_sim_GJC46_edit__Syms.h"
#include "Vco_sim_GJC46_edit___024root.h"

VL_INLINE_OPT VlCoroutine Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__1(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Init
    IData/*31:0*/ co_sim_GJC46_edit__DOT____Vrepeat1;
    co_sim_GJC46_edit__DOT____Vrepeat1 = 0;
    IData/*31:0*/ co_sim_GJC46_edit__DOT____Vrepeat3;
    co_sim_GJC46_edit__DOT____Vrepeat3 = 0;
    // Body
    VL_WRITEF_NX("***Reset Test is applied***\n",0);
    vlSelf->co_sim_GJC46_edit__DOT__reset = 1U;
    vlSelf->co_sim_GJC46_edit__DOT__bitslip_ctrl_n = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__data_i = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__enable_n = 0U;
    co_await vlSelf->__VtrigSched_h90ee1be2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_GJC46_edit.clkGHz)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/GJC_INVALID_UPDATE/Validation/RTL_testcases/GJC-IO-Testcases/GJC46/EDA-3196/./sim/co_sim_tb/co_sim_GJC46_edit.v", 
                                                       40);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h90ee1be2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_GJC46_edit.clkGHz)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/GJC_INVALID_UPDATE/Validation/RTL_testcases/GJC-IO-Testcases/GJC46/EDA-3196/./sim/co_sim_tb/co_sim_GJC46_edit.v", 
                                                       40);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->co_sim_GJC46_edit__DOT__reset = 0U;
    co_await vlSelf->__VtrigSched_h90ee1be2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_GJC46_edit.clkGHz)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/GJC_INVALID_UPDATE/Validation/RTL_testcases/GJC-IO-Testcases/GJC46/EDA-3196/./sim/co_sim_tb/co_sim_GJC46_edit.v", 
                                                       42);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__oe_shift_reg) 
           & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__delay_out)) 
          != ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__oe_shift_reg) 
              & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__delay_out))) 
         | (((0xffU == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__wait_pll)) 
             & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_lock)) 
            != (1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_lock)
                       ? (1U & (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b6__05d)
                                  ? (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                                       ? ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                           ? 8U : 0U)
                                       : 0U) >> 2U)
                                  : ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                                      ? ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                          ? 8U : 0U)
                                      : 0U)) >> 1U))
                       : (3U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b6__05d)
                                 ? (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                                      ? ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                          ? 8U : 0U)
                                      : 0U) >> 2U) : 
                                ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                                  ? ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                      ? 8U : 0U) : 0U)))))))) {
        VL_WRITEF_NX("Data Mismatch: Actual output: %0#, %0#, Netlist Output %0#, %0#, Time: %0t \n",0,
                     1,((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__oe_shift_reg) 
                        & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__delay_out)),
                     1,((0xffU == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__wait_pll)) 
                        & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_lock)),
                     1,((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__oe_shift_reg) 
                        & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__delay_out)),
                     1,(1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_lock)
                               ? (1U & (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b6__05d)
                                          ? (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                                               ? ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                                   ? 8U
                                                   : 0U)
                                               : 0U) 
                                             >> 2U)
                                          : ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                                              ? ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                                  ? 8U
                                                  : 0U)
                                              : 0U)) 
                                        >> 1U)) : (3U 
                                                   & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b6__05d)
                                                       ? 
                                                      (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                                                         ? 
                                                        ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                                          ? 8U
                                                          : 0U)
                                                         : 0U) 
                                                       >> 2U)
                                                       : 
                                                      ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                                                        ? 
                                                       ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                                         ? 8U
                                                         : 0U)
                                                        : 0U))))),
                     64,VL_TIME_UNITED_Q(100000),-9);
        vlSelf->co_sim_GJC46_edit__DOT__mismatch = 
            ((IData)(1U) + vlSelf->co_sim_GJC46_edit__DOT__mismatch);
    } else {
        VL_WRITEF_NX("Data Matched: Actual output: %0#, %0#, Netlist Output %0#, %0#, Time: %0t \n",0,
                     1,((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__oe_shift_reg) 
                        & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__delay_out)),
                     1,((0xffU == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__wait_pll)) 
                        & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_lock)),
                     1,((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__oe_shift_reg) 
                        & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__delay_out)),
                     1,(1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_lock)
                               ? (1U & (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b6__05d)
                                          ? (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                                               ? ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                                   ? 8U
                                                   : 0U)
                                               : 0U) 
                                             >> 2U)
                                          : ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                                              ? ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                                  ? 8U
                                                  : 0U)
                                              : 0U)) 
                                        >> 1U)) : (3U 
                                                   & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b6__05d)
                                                       ? 
                                                      (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                                                         ? 
                                                        ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                                          ? 8U
                                                          : 0U)
                                                         : 0U) 
                                                       >> 2U)
                                                       : 
                                                      ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                                                        ? 
                                                       ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                                         ? 8U
                                                         : 0U)
                                                        : 0U))))),
                     64,VL_TIME_UNITED_Q(100000),-9);
    }
    VL_WRITEF_NX("***Reset Test is ended***\n",0);
    co_sim_GJC46_edit__DOT____Vrepeat1 = 0x7d0U;
    while (VL_LTS_III(32, 0U, co_sim_GJC46_edit__DOT____Vrepeat1)) {
        co_await vlSelf->__VtrigSched_h90ee1be2__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge co_sim_GJC46_edit.clkGHz)", 
                                                           "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/GJC_INVALID_UPDATE/Validation/RTL_testcases/GJC-IO-Testcases/GJC46/EDA-3196/./sim/co_sim_tb/co_sim_GJC46_edit.v", 
                                                           46);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->co_sim_GJC46_edit__DOT__bitslip_ctrl_n 
            = (1U & VL_RANDOM_I());
        vlSelf->co_sim_GJC46_edit__DOT__data_i = (1U 
                                                  & VL_RANDOM_I());
        vlSelf->co_sim_GJC46_edit__DOT__enable_n = 
            (1U & VL_RANDOM_I());
        if (((((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__oe_shift_reg) 
               & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__delay_out)) 
              != ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__oe_shift_reg) 
                  & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__delay_out))) 
             | (((0xffU == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__wait_pll)) 
                 & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_lock)) 
                != (1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_lock)
                           ? (1U & (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b6__05d)
                                      ? (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                                           ? ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                               ? 8U
                                               : 0U)
                                           : 0U) >> 2U)
                                      : ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                                          ? ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                              ? 8U : 0U)
                                          : 0U)) >> 1U))
                           : (3U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b6__05d)
                                     ? (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                                          ? ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                              ? 8U : 0U)
                                          : 0U) >> 2U)
                                     : ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                                         ? ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                             ? 8U : 0U)
                                         : 0U)))))))) {
            VL_WRITEF_NX("Data Mismatch: Actual output: %0#, %0#, Netlist Output %0#, %0#, Time: %0t \n",0,
                         1,((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__oe_shift_reg) 
                            & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__delay_out)),
                         1,((0xffU == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__wait_pll)) 
                            & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_lock)),
                         1,((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__oe_shift_reg) 
                            & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__delay_out)),
                         1,(1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_lock)
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
                                                 : 0U))))),
                         64,VL_TIME_UNITED_Q(100000),
                         -9);
            vlSelf->co_sim_GJC46_edit__DOT__mismatch 
                = ((IData)(1U) + vlSelf->co_sim_GJC46_edit__DOT__mismatch);
        } else {
            VL_WRITEF_NX("Data Matched: Actual output: %0#, %0#, Netlist Output %0#, %0#, Time: %0t \n",0,
                         1,((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__oe_shift_reg) 
                            & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__delay_out)),
                         1,((0xffU == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__wait_pll)) 
                            & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_lock)),
                         1,((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__oe_shift_reg) 
                            & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__delay_out)),
                         1,(1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_lock)
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
                                                 : 0U))))),
                         64,VL_TIME_UNITED_Q(100000),
                         -9);
        }
        co_sim_GJC46_edit__DOT____Vrepeat1 = (co_sim_GJC46_edit__DOT____Vrepeat1 
                                              - (IData)(1U));
    }
    co_await vlSelf->__VtrigSched_h90ee1be2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_GJC46_edit.clkGHz)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/GJC_INVALID_UPDATE/Validation/RTL_testcases/GJC-IO-Testcases/GJC46/EDA-3196/./sim/co_sim_tb/co_sim_GJC46_edit.v", 
                                                       54);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h90ee1be2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_GJC46_edit.clkGHz)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/GJC_INVALID_UPDATE/Validation/RTL_testcases/GJC-IO-Testcases/GJC46/EDA-3196/./sim/co_sim_tb/co_sim_GJC46_edit.v", 
                                                       54);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->co_sim_GJC46_edit__DOT__bitslip_ctrl_n = 1U;
    vlSelf->co_sim_GJC46_edit__DOT__data_i = 1U;
    vlSelf->co_sim_GJC46_edit__DOT__enable_n = 1U;
    if (((((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__oe_shift_reg) 
           & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__delay_out)) 
          != ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__oe_shift_reg) 
              & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__delay_out))) 
         | (((0xffU == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__wait_pll)) 
             & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_lock)) 
            != (1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_lock)
                       ? (1U & (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b6__05d)
                                  ? (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                                       ? ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                           ? 8U : 0U)
                                       : 0U) >> 2U)
                                  : ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                                      ? ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                          ? 8U : 0U)
                                      : 0U)) >> 1U))
                       : (3U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b6__05d)
                                 ? (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                                      ? ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                          ? 8U : 0U)
                                      : 0U) >> 2U) : 
                                ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                                  ? ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                      ? 8U : 0U) : 0U)))))))) {
        VL_WRITEF_NX("Data Mismatch: Actual output: %0#, %0#, Netlist Output %0#, %0#, Time: %0t \n",0,
                     1,((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__oe_shift_reg) 
                        & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__delay_out)),
                     1,((0xffU == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__wait_pll)) 
                        & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_lock)),
                     1,((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__oe_shift_reg) 
                        & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__delay_out)),
                     1,(1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_lock)
                               ? (1U & (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b6__05d)
                                          ? (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                                               ? ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                                   ? 8U
                                                   : 0U)
                                               : 0U) 
                                             >> 2U)
                                          : ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                                              ? ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                                  ? 8U
                                                  : 0U)
                                              : 0U)) 
                                        >> 1U)) : (3U 
                                                   & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b6__05d)
                                                       ? 
                                                      (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                                                         ? 
                                                        ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                                          ? 8U
                                                          : 0U)
                                                         : 0U) 
                                                       >> 2U)
                                                       : 
                                                      ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                                                        ? 
                                                       ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                                         ? 8U
                                                         : 0U)
                                                        : 0U))))),
                     64,VL_TIME_UNITED_Q(100000),-9);
        vlSelf->co_sim_GJC46_edit__DOT__mismatch = 
            ((IData)(1U) + vlSelf->co_sim_GJC46_edit__DOT__mismatch);
    } else {
        VL_WRITEF_NX("Data Matched: Actual output: %0#, %0#, Netlist Output %0#, %0#, Time: %0t \n",0,
                     1,((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_serdes__DOT__oe_shift_reg) 
                        & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__delay_out)),
                     1,((0xffU == (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__wait_pll)) 
                        & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__dpa_lock)),
                     1,((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_serdes__DOT__oe_shift_reg) 
                        & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__delay_out)),
                     1,(1U & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__dpa_lock)
                               ? (1U & (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b6__05d)
                                          ? (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                                               ? ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                                   ? 8U
                                                   : 0U)
                                               : 0U) 
                                             >> 2U)
                                          : ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                                              ? ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                                  ? 8U
                                                  : 0U)
                                              : 0U)) 
                                        >> 1U)) : (3U 
                                                   & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b6__05d)
                                                       ? 
                                                      (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                                                         ? 
                                                        ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                                          ? 8U
                                                          : 0U)
                                                         : 0U) 
                                                       >> 2U)
                                                       : 
                                                      ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__wait_pll__05b7__05d)
                                                        ? 
                                                       ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT____024abc__0241729__024new_new_n29___05F)
                                                         ? 8U
                                                         : 0U)
                                                        : 0U))))),
                     64,VL_TIME_UNITED_Q(100000),-9);
    }
    if (VL_LIKELY((0U == vlSelf->co_sim_GJC46_edit__DOT__mismatch))) {
        VL_WRITEF_NX("**** All Comparison Matched *** \n\t\tSimulation Passed\n\n",0);
    } else {
        VL_WRITEF_NX("%0d comparison(s) mismatched\nERROR: SIM: Simulation Failed\n[%0t] %%Fatal: co_sim_GJC46_edit.v:65: Assertion failed in %Nco_sim_GJC46_edit\n",0,
                     32,vlSelf->co_sim_GJC46_edit__DOT__mismatch,
                     64,VL_TIME_UNITED_Q(100000),-9,
                     vlSymsp->name());
        VL_STOP_MT("/nfs_scratch/scratch/CompilerValidation/abdul_hameed/GJC_INVALID_UPDATE/Validation/RTL_testcases/GJC-IO-Testcases/GJC46/EDA-3196/./sim/co_sim_tb/co_sim_GJC46_edit.v", 65, "");
    }
    co_sim_GJC46_edit__DOT____Vrepeat3 = 0xc8U;
    while (VL_LTS_III(32, 0U, co_sim_GJC46_edit__DOT____Vrepeat3)) {
        co_await vlSelf->__VtrigSched_h90ee1c21__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge co_sim_GJC46_edit.clkGHz)", 
                                                           "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/GJC_INVALID_UPDATE/Validation/RTL_testcases/GJC-IO-Testcases/GJC46/EDA-3196/./sim/co_sim_tb/co_sim_GJC46_edit.v", 
                                                           67);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        co_sim_GJC46_edit__DOT____Vrepeat3 = (co_sim_GJC46_edit__DOT____Vrepeat3 
                                              - (IData)(1U));
    }
    VL_FINISH_MT("/nfs_scratch/scratch/CompilerValidation/abdul_hameed/GJC_INVALID_UPDATE/Validation/RTL_testcases/GJC-IO-Testcases/GJC46/EDA-3196/./sim/co_sim_tb/co_sim_GJC46_edit.v", 68, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_GJC46_edit___024root___dump_triggers__act(Vco_sim_GJC46_edit___024root* vlSelf);
#endif  // VL_DEBUG

void Vco_sim_GJC46_edit___024root___eval_triggers__act(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_vco) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_vco__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco__0))));
    vlSelf->__VactTriggered.set(2U, (((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__core_clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__core_clk__0))) 
                                     | ((IData)(vlSelf->co_sim_GJC46_edit__DOT__reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__reset__0)))));
    vlSelf->__VactTriggered.set(3U, (((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_vco) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_vco__0))) 
                                     | ((IData)(vlSelf->co_sim_GJC46_edit__DOT__reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__reset__0)))));
    vlSelf->__VactTriggered.set(4U, ((IData)(vlSelf->co_sim_GJC46_edit__DOT__clkGHz) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__clkGHz__0))));
    vlSelf->__VactTriggered.set(5U, ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_vco) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_vco__0)));
    vlSelf->__VactTriggered.set(6U, ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_out_div2) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_out_div2__0))));
    vlSelf->__VactTriggered.set(7U, ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_vco) 
                                     ^ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_vco__0)));
    vlSelf->__VactTriggered.set(8U, (((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_0) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_0__0))) 
                                     | ((IData)(vlSelf->co_sim_GJC46_edit__DOT__reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__reset__0)))));
    vlSelf->__VactTriggered.set(9U, (((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_90) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_90__0))) 
                                     | ((IData)(vlSelf->co_sim_GJC46_edit__DOT__reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__reset__0)))));
    vlSelf->__VactTriggered.set(0xaU, (((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_180) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_180__0))) 
                                       | ((IData)(vlSelf->co_sim_GJC46_edit__DOT__reset) 
                                          & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__reset__0)))));
    vlSelf->__VactTriggered.set(0xbU, (((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_270) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_270__0))) 
                                       | ((IData)(vlSelf->co_sim_GJC46_edit__DOT__reset) 
                                          & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__reset__0)))));
    vlSelf->__VactTriggered.set(0xcU, (((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_clk__0))) 
                                       | ((IData)(vlSelf->co_sim_GJC46_edit__DOT__reset) 
                                          & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__reset__0)))));
    vlSelf->__VactTriggered.set(0xdU, ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_clk) 
                                       & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_clk__0))));
    vlSelf->__VactTriggered.set(0xeU, (((IData)(vlSelf->co_sim_GJC46_edit__DOT__clkGHz) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__clkGHz__0))) 
                                       | ((IData)(vlSelf->co_sim_GJC46_edit__DOT__reset) 
                                          & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__reset__0)))));
    vlSelf->__VactTriggered.set(0xfU, (((IData)(vlSelf->co_sim_GJC46_edit__DOT__reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__reset__0))) 
                                       | ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco) 
                                          & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco__0)))));
    vlSelf->__VactTriggered.set(0x10U, (((IData)(vlSelf->co_sim_GJC46_edit__DOT__reset) 
                                         & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__reset__0))) 
                                        | ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk__0)))));
    vlSelf->__VactTriggered.set(0x11U, ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco__0)));
    vlSelf->__VactTriggered.set(0x12U, ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_out_div2) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_out_div2__0))));
    vlSelf->__VactTriggered.set(0x13U, ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco) 
                                        ^ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco__0)));
    vlSelf->__VactTriggered.set(0x14U, (((IData)(vlSelf->co_sim_GJC46_edit__DOT__reset) 
                                         & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__reset__0))) 
                                        | ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_0) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_0__0)))));
    vlSelf->__VactTriggered.set(0x15U, (((IData)(vlSelf->co_sim_GJC46_edit__DOT__reset) 
                                         & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__reset__0))) 
                                        | ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_90) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_90__0)))));
    vlSelf->__VactTriggered.set(0x16U, (((IData)(vlSelf->co_sim_GJC46_edit__DOT__reset) 
                                         & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__reset__0))) 
                                        | ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_180) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_180__0)))));
    vlSelf->__VactTriggered.set(0x17U, (((IData)(vlSelf->co_sim_GJC46_edit__DOT__reset) 
                                         & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__reset__0))) 
                                        | ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_270) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_270__0)))));
    vlSelf->__VactTriggered.set(0x18U, (((IData)(vlSelf->co_sim_GJC46_edit__DOT__reset) 
                                         & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__reset__0))) 
                                        | ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_clk) 
                                           & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_clk__0)))));
    vlSelf->__VactTriggered.set(0x19U, ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_clk__0))));
    vlSelf->__VactTriggered.set(0x1aU, (((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_0) 
                                         ^ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_0__0)) 
                                        | vlSelf->__VdlySched.awaitingCurrentTime()));
    vlSelf->__VactTriggered.set(0x1bU, (((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_180) 
                                         ^ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_180__0)) 
                                        | vlSelf->__VdlySched.awaitingCurrentTime()));
    vlSelf->__VactTriggered.set(0x1cU, (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_0) 
                                         ^ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_0__0)) 
                                        | vlSelf->__VdlySched.awaitingCurrentTime()));
    vlSelf->__VactTriggered.set(0x1dU, (((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_180) 
                                         ^ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_180__0)) 
                                        | vlSelf->__VdlySched.awaitingCurrentTime()));
    vlSelf->__VactTriggered.set(0x1eU, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(0x1fU, ((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__clkGHz)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__clkGHz__0)));
    vlSelf->__VactTriggered.set(0x20U, ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__vcostart_ff) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__vcostart_ff__0)));
    vlSelf->__VactTriggered.set(0x21U, ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__vcostart_ff) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__vcostart_ff__0)));
    vlSelf->__VactTriggered.set(0x22U, ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_0) 
                                        ^ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_0__0)));
    vlSelf->__VactTriggered.set(0x23U, ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_180) 
                                        ^ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_180__0)));
    vlSelf->__VactTriggered.set(0x24U, ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_0) 
                                        ^ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_0__0)));
    vlSelf->__VactTriggered.set(0x25U, ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_180) 
                                        ^ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_180__0)));
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_vco__0 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_vco;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco__0 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_vco;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__core_clk__0 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__core_clk;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__reset__0 
        = vlSelf->co_sim_GJC46_edit__DOT__reset;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__clkGHz__0 
        = vlSelf->co_sim_GJC46_edit__DOT__clkGHz;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_out_div2__0 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__clk_out_div2;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_0__0 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_0;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_90__0 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_90;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_180__0 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_180;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_270__0 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__clk_270;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_clk__0 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__cdr_clk;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk__0 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__core_clk;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_out_div2__0 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__clk_out_div2;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_0__0 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_0;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_90__0 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_90;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_180__0 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_180;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_270__0 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__clk_270;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_clk__0 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__cdr_clk;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__vcostart_ff__0 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__vcostart_ff;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__vcostart_ff__0 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__vcostart_ff;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(5U, 1U);
        vlSelf->__VactTriggered.set(0x11U, 1U);
        vlSelf->__VactTriggered.set(0x20U, 1U);
        vlSelf->__VactTriggered.set(0x21U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vco_sim_GJC46_edit___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__0(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*5:0*/ __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_delay__DOT__dly_tap_val;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_delay__DOT__dly_tap_val = 0;
    CData/*5:0*/ __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_delay__DOT__dly_tap_val;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_delay__DOT__dly_tap_val = 0;
    CData/*5:0*/ __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_delay__DOT__dly_tap_val;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_delay__DOT__dly_tap_val = 0;
    CData/*5:0*/ __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_delay__DOT__dly_tap_val;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_delay__DOT__dly_tap_val = 0;
    // Body
    if (vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__pllstart_ff2) {
        if (VL_UNLIKELY((vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__ref_period 
                         < 3.12500000000000000e+02))) {
            VL_WRITEF_NX("[%0t] %%Fatal: PLL.v:163: Assertion failed in %Nco_sim_GJC46_edit.golden.clk_pll_gen0: \nError at time %^: PLL instance %Nco_sim_GJC46_edit.golden.clk_pll_gen0 REF clock period %0d fs violates minimum period.\nMust be greater than 313 fs.\n\n",0,
                         64,VL_TIME_UNITED_Q(100),-12,
                         vlSymsp->name(),64,VL_TIME_UNITED_D(100),
                         -12,vlSymsp->name(),64,VL_RTOIROUND_Q_D(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__ref_period));
            VL_STOP_MT("/nfs_eda_sw/softwares/Raptor/instl_dir/09_08_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/PLL.v", 163, "");
        } else if (VL_UNLIKELY((vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__ref_period 
                                > 6.25000000000000000e+04))) {
            VL_WRITEF_NX("[%0t] %%Fatal: PLL.v:166: Assertion failed in %Nco_sim_GJC46_edit.golden.clk_pll_gen0: \nError at time %^: PLL instance %Nco_sim_GJC46_edit.golden.clk_pll_gen0 REF clock period %0d fs violates maximum period.\nMust be less than 62500 fs.\n\n",0,
                         64,VL_TIME_UNITED_Q(100),-12,
                         vlSymsp->name(),64,VL_TIME_UNITED_D(100),
                         -12,vlSymsp->name(),64,VL_RTOIROUND_Q_D(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__ref_period));
            VL_STOP_MT("/nfs_eda_sw/softwares/Raptor/instl_dir/09_08_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/PLL.v", 166, "");
        }
    }
    if (vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__pllstart_ff2) {
        if (VL_UNLIKELY((vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__ref_period 
                         < 3.12500000000000000e+02))) {
            VL_WRITEF_NX("[%0t] %%Fatal: PLL.v:163: Assertion failed in %Nco_sim_GJC46_edit.synth_net.clk_pll_gen0: \nError at time %^: PLL instance %Nco_sim_GJC46_edit.synth_net.clk_pll_gen0 REF clock period %0d fs violates minimum period.\nMust be greater than 313 fs.\n\n",0,
                         64,VL_TIME_UNITED_Q(100),-12,
                         vlSymsp->name(),64,VL_TIME_UNITED_D(100),
                         -12,vlSymsp->name(),64,VL_RTOIROUND_Q_D(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__ref_period));
            VL_STOP_MT("/nfs_eda_sw/softwares/Raptor/instl_dir/09_08_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/PLL.v", 163, "");
        } else if (VL_UNLIKELY((vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__ref_period 
                                > 6.25000000000000000e+04))) {
            VL_WRITEF_NX("[%0t] %%Fatal: PLL.v:166: Assertion failed in %Nco_sim_GJC46_edit.synth_net.clk_pll_gen0: \nError at time %^: PLL instance %Nco_sim_GJC46_edit.synth_net.clk_pll_gen0 REF clock period %0d fs violates maximum period.\nMust be less than 62500 fs.\n\n",0,
                         64,VL_TIME_UNITED_Q(100),-12,
                         vlSymsp->name(),64,VL_TIME_UNITED_D(100),
                         -12,vlSymsp->name(),64,VL_RTOIROUND_Q_D(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__ref_period));
            VL_STOP_MT("/nfs_eda_sw/softwares/Raptor/instl_dir/09_08_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/PLL.v", 166, "");
        }
    }
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_delay__DOT__dly_tap_val 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_delay__DOT__dly_tap_val;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_delay__DOT__dly_tap_val 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_delay__DOT__dly_tap_val;
    __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_delay__DOT__dly_tap_val 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_delay__DOT__dly_tap_val;
    __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_delay__DOT__dly_tap_val 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_delay__DOT__dly_tap_val;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__old_ref_period 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__ref_period;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__old_ref_period 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__ref_period;
    if (VL_UNLIKELY((((0x1f4U <= (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__lock_counter)) 
                      & (vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__ref_period 
                         > (1.05000000000000004e+00 
                            * vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__old_ref_period))) 
                     | (vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__ref_period 
                        < (9.49999999999999956e-01 
                           * vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__old_ref_period))))) {
        VL_WRITEF_NX("Warning at time %^: PLL instance %Nco_sim_GJC46_edit.golden.clk_pll_gen0 input clock, CLK_IN, changed frequency and lost lock. Current value = %0d fs, old value = %20d fs.\n\n",0,
                     64,VL_TIME_UNITED_D(100),-12,vlSymsp->name(),
                     64,VL_RTOIROUND_Q_D(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__ref_period),
                     64,VL_RTOIROUND_Q_D(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__old_ref_period));
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__lose_lock = 1U;
    } else {
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__lose_lock = 0U;
    }
    if (VL_UNLIKELY((((0x1f4U <= (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__lock_counter)) 
                      & (vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__ref_period 
                         > (1.05000000000000004e+00 
                            * vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__old_ref_period))) 
                     | (vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__ref_period 
                        < (9.49999999999999956e-01 
                           * vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__old_ref_period))))) {
        VL_WRITEF_NX("Warning at time %^: PLL instance %Nco_sim_GJC46_edit.synth_net.clk_pll_gen0 input clock, CLK_IN, changed frequency and lost lock. Current value = %0d fs, old value = %20d fs.\n\n",0,
                     64,VL_TIME_UNITED_D(100),-12,vlSymsp->name(),
                     64,VL_RTOIROUND_Q_D(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__ref_period),
                     64,VL_RTOIROUND_Q_D(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__old_ref_period));
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__lose_lock = 1U;
    } else {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__lose_lock = 0U;
    }
    if (((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__LOCK)) 
         & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__vcostart))) {
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__lock_counter 
            = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__lock_counter)));
    } else if ((((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__lose_lock) 
                 | (0x32U != (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__PLL_MULT_ff))) 
                | (2U != (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__PLL_DIV_ff)))) {
        vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__lock_counter = 0U;
    }
    if (((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__LOCK)) 
         & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__vcostart))) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__lock_counter 
            = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__lock_counter)));
    } else if ((((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__lose_lock) 
                 | (0x32U != (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__PLL_MULT_ff))) 
                | (2U != (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__PLL_DIV_ff)))) {
        vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__lock_counter = 0U;
    }
    if (((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_delay__DOT__dly_ld_1)) 
         & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_delay__DOT__dly_ld_0))) {
        __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_delay__DOT__dly_tap_val = 0U;
    } else if ((((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_delay__DOT__dly_adj_1)) 
                 & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_delay__DOT__dly_adj_0)) 
                & (0U != (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_delay__DOT__dly_tap_val)))) {
        __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_delay__DOT__dly_tap_val 
            = (0x3fU & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_delay__DOT__dly_tap_val) 
                        - (IData)(1U)));
    }
    if (((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_delay__DOT__dly_ld_1)) 
         & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_delay__DOT__dly_ld_0))) {
        __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_delay__DOT__dly_tap_val = 0U;
    } else if ((((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_delay__DOT__dly_adj_1)) 
                 & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_delay__DOT__dly_adj_0)) 
                & (0U != (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_delay__DOT__dly_tap_val)))) {
        __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_delay__DOT__dly_tap_val 
            = (0x3fU & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_delay__DOT__dly_tap_val) 
                        - (IData)(1U)));
    }
    if (((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_delay__DOT__dly_ld_1)) 
         & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_delay__DOT__dly_ld_0))) {
        __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_delay__DOT__dly_tap_val = 0U;
    } else if ((((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_delay__DOT__dly_adj_1)) 
                 & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_delay__DOT__dly_adj_0)) 
                & (0U != (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_delay__DOT__dly_tap_val)))) {
        __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_delay__DOT__dly_tap_val 
            = (0x3fU & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_delay__DOT__dly_tap_val) 
                        - (IData)(1U)));
    }
    if (((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_delay__DOT__dly_ld_1)) 
         & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_delay__DOT__dly_ld_0))) {
        __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_delay__DOT__dly_tap_val = 0U;
    } else if ((((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_delay__DOT__dly_adj_1)) 
                 & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_delay__DOT__dly_adj_0)) 
                & (0U != (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_delay__DOT__dly_tap_val)))) {
        __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_delay__DOT__dly_tap_val 
            = (0x3fU & ((IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_delay__DOT__dly_tap_val) 
                        - (IData)(1U)));
    }
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_delay__DOT__dly_tap_val 
        = __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__counter_o_delay__DOT__dly_tap_val;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_delay__DOT__dly_tap_val 
        = __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_delay__DOT__dly_tap_val;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_delay__DOT__dly_tap_val 
        = __Vdly__co_sim_GJC46_edit__DOT__golden__DOT__input_data_delay__DOT__dly_tap_val;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_delay__DOT__dly_tap_val 
        = __Vdly__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_delay__DOT__dly_tap_val;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__LOCK 
        = (0x1f4U <= (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__lock_counter));
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__PLL_MULT_ff = 0x32U;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__PLL_DIV_ff = 2U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__LOCK 
        = (0x1f4U <= (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__lock_counter));
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__PLL_MULT_ff = 0x32U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__PLL_DIV_ff = 2U;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_delay__DOT__dly_ld_1 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_delay__DOT__dly_ld_0;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_delay__DOT__dly_adj_1 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_delay__DOT__dly_adj_0;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_delay__DOT__dly_ld_1 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_delay__DOT__dly_ld_0;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_delay__DOT__dly_adj_1 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_delay__DOT__dly_adj_0;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_delay__DOT__dly_ld_1 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_delay__DOT__dly_ld_0;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_delay__DOT__dly_adj_1 
        = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_delay__DOT__dly_adj_0;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_delay__DOT__dly_ld_1 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_delay__DOT__dly_ld_0;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_delay__DOT__dly_adj_1 
        = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_delay__DOT__dly_adj_0;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_delay__DOT__dly_ld_0 = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__counter_o_delay__DOT__dly_adj_0 = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_delay__DOT__dly_ld_0 = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__counter_o_delay__DOT__dly_adj_0 = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_delay__DOT__dly_ld_0 = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_delay__DOT__dly_adj_0 = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_delay__DOT__dly_ld_0 = 0U;
    vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_delay__DOT__dly_adj_0 = 0U;
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__1(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__vcostart_ff) {
        if (VL_UNLIKELY((vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__vco_period 
                         < 3.12500000000000000e+02))) {
            VL_WRITEF_NX("[%0t] %%Fatal: PLL.v:183: Assertion failed in %Nco_sim_GJC46_edit.golden.clk_pll_gen0: \nError at time %^: PLL instance %Nco_sim_GJC46_edit.golden.clk_pll_gen0 VCO clock period %0d fs violates minimum period.\nMust be greater than 313 fs.\nTry increasing PLL_DIV or decreasing PLL_MULT values.\n\n",0,
                         64,VL_TIME_UNITED_Q(100),-12,
                         vlSymsp->name(),64,VL_TIME_UNITED_D(100),
                         -12,vlSymsp->name(),64,VL_RTOIROUND_Q_D(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__vco_period));
            VL_STOP_MT("/nfs_eda_sw/softwares/Raptor/instl_dir/09_08_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/PLL.v", 183, "");
        } else if (VL_UNLIKELY((vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__vco_period 
                                > 6.25000000000000000e+04))) {
            VL_WRITEF_NX("[%0t] %%Fatal: PLL.v:186: Assertion failed in %Nco_sim_GJC46_edit.golden.clk_pll_gen0: \nError at time %^: PLL instance %Nco_sim_GJC46_edit.golden.clk_pll_gen0 VCO clock period %0d fs violates maximum period.\nMust be less than 62500 fs.\nTry increasing PLL_MULT or decreasing PLL_DIV values.\n\n",0,
                         64,VL_TIME_UNITED_Q(100),-12,
                         vlSymsp->name(),64,VL_TIME_UNITED_D(100),
                         -12,vlSymsp->name(),64,VL_RTOIROUND_Q_D(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__clk_pll_gen0__DOT__vco_period));
            VL_STOP_MT("/nfs_eda_sw/softwares/Raptor/instl_dir/09_08_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/PLL.v", 186, "");
        }
    }
    vlSelf->__Vdlyvset__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__dual_port_ram__DOT__genblk1__DOT__mem__v0 = 0U;
    if (((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__des_fifo_full)) 
         & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT____Vcellinp__afifo_inst__wr))) {
        vlSelf->__Vdlyvval__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__dual_port_ram__DOT__genblk1__DOT__mem__v0 
            = vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__des_parallel_reg;
        vlSelf->__Vdlyvset__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__dual_port_ram__DOT__genblk1__DOT__mem__v0 = 1U;
        vlSelf->__Vdlyvdim0__co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__dual_port_ram__DOT__genblk1__DOT__mem__v0 
            = (0x3ffU & (IData)(vlSelf->co_sim_GJC46_edit__DOT__golden__DOT__input_data_serdes__DOT__afifo_inst__DOT__wr_addr));
    }
}

VL_INLINE_OPT void Vco_sim_GJC46_edit___024root___nba_sequent__TOP__2(Vco_sim_GJC46_edit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_GJC46_edit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_GJC46_edit___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__vcostart_ff) {
        if (VL_UNLIKELY((vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__vco_period 
                         < 3.12500000000000000e+02))) {
            VL_WRITEF_NX("[%0t] %%Fatal: PLL.v:183: Assertion failed in %Nco_sim_GJC46_edit.synth_net.clk_pll_gen0: \nError at time %^: PLL instance %Nco_sim_GJC46_edit.synth_net.clk_pll_gen0 VCO clock period %0d fs violates minimum period.\nMust be greater than 313 fs.\nTry increasing PLL_DIV or decreasing PLL_MULT values.\n\n",0,
                         64,VL_TIME_UNITED_Q(100),-12,
                         vlSymsp->name(),64,VL_TIME_UNITED_D(100),
                         -12,vlSymsp->name(),64,VL_RTOIROUND_Q_D(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__vco_period));
            VL_STOP_MT("/nfs_eda_sw/softwares/Raptor/instl_dir/09_08_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/PLL.v", 183, "");
        } else if (VL_UNLIKELY((vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__vco_period 
                                > 6.25000000000000000e+04))) {
            VL_WRITEF_NX("[%0t] %%Fatal: PLL.v:186: Assertion failed in %Nco_sim_GJC46_edit.synth_net.clk_pll_gen0: \nError at time %^: PLL instance %Nco_sim_GJC46_edit.synth_net.clk_pll_gen0 VCO clock period %0d fs violates maximum period.\nMust be less than 62500 fs.\nTry increasing PLL_MULT or decreasing PLL_DIV values.\n\n",0,
                         64,VL_TIME_UNITED_Q(100),-12,
                         vlSymsp->name(),64,VL_TIME_UNITED_D(100),
                         -12,vlSymsp->name(),64,VL_RTOIROUND_Q_D(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__clk_pll_gen0__DOT__vco_period));
            VL_STOP_MT("/nfs_eda_sw/softwares/Raptor/instl_dir/09_08_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/PLL.v", 186, "");
        }
    }
    vlSelf->__Vdlyvset__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__dual_port_ram__DOT__genblk1__DOT__mem__v0 = 0U;
    if (((~ (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__des_fifo_full)) 
         & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT____Vcellinp__afifo_inst__wr))) {
        vlSelf->__Vdlyvval__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__dual_port_ram__DOT__genblk1__DOT__mem__v0 
            = vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__des_parallel_reg;
        vlSelf->__Vdlyvset__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__dual_port_ram__DOT__genblk1__DOT__mem__v0 = 1U;
        vlSelf->__Vdlyvdim0__co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__dual_port_ram__DOT__genblk1__DOT__mem__v0 
            = (0x3ffU & (IData)(vlSelf->co_sim_GJC46_edit__DOT__synth_net__DOT__input_data_serdes__DOT__afifo_inst__DOT__wr_addr));
    }
}
