// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_syn2.h for the primary calling header

#include "Vco_sim_syn2__pch.h"
#include "Vco_sim_syn2__Syms.h"
#include "Vco_sim_syn2_post_norm.h"

VL_ATTR_COLD void Vco_sim_syn2_post_norm___stl_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4__0(Vco_sim_syn2_post_norm* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vco_sim_syn2_post_norm___stl_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4__0\n"); );
    // Init
    CData/*0:0*/ __VdfgRegularize_he8d392c1_0_8;
    __VdfgRegularize_he8d392c1_0_8 = 0;
    CData/*0:0*/ __VdfgRegularize_he8d392c1_0_10;
    __VdfgRegularize_he8d392c1_0_10 = 0;
    CData/*0:0*/ __VdfgRegularize_he8d392c1_0_19;
    __VdfgRegularize_he8d392c1_0_19 = 0;
    CData/*0:0*/ __VdfgRegularize_he8d392c1_0_64;
    __VdfgRegularize_he8d392c1_0_64 = 0;
    // Body
    vlSelf->__Vcellout__u3__shift_out = (0xffffffffffffULL 
                                         & ((0x20U 
                                             & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                - (IData)(0x3dU)))
                                             ? ((0x10U 
                                                 & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                    - (IData)(0x3dU)))
                                                 ? 
                                                ((8U 
                                                  & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                     - (IData)(0x3dU)))
                                                  ? 
                                                 ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                  << 0x14U)
                                                  : 
                                                 ((4U 
                                                   & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                      - (IData)(0x3dU)))
                                                   ? 
                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                   << 0x14U)
                                                   : 
                                                  ((2U 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                       - (IData)(0x3dU)))
                                                    ? 
                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                    << 0x14U)
                                                    : 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                     << 0x14U)
                                                     : 0ULL))))
                                                 : 
                                                ((8U 
                                                  & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                     - (IData)(0x3dU)))
                                                  ? 
                                                 ((4U 
                                                   & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                      - (IData)(0x3dU)))
                                                   ? 
                                                  ((2U 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                       - (IData)(0x3dU)))
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x2fU)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x2eU))
                                                    : 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x2dU)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x2cU)))
                                                   : 
                                                  ((2U 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                       - (IData)(0x3dU)))
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x2bU)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x2aU))
                                                    : 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x29U)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x28U))))
                                                  : 
                                                 ((4U 
                                                   & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                      - (IData)(0x3dU)))
                                                   ? 
                                                  ((2U 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                       - (IData)(0x3dU)))
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x27U)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x26U))
                                                    : 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x25U)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x24U)))
                                                   : 
                                                  ((2U 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                       - (IData)(0x3dU)))
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x23U)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x22U))
                                                    : 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x21U)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x20U))))))
                                             : ((0x10U 
                                                 & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                    - (IData)(0x3dU)))
                                                 ? 
                                                ((8U 
                                                  & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                     - (IData)(0x3dU)))
                                                  ? 
                                                 ((4U 
                                                   & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                      - (IData)(0x3dU)))
                                                   ? 
                                                  ((2U 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                       - (IData)(0x3dU)))
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x1fU)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x1eU))
                                                    : 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x1dU)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x1cU)))
                                                   : 
                                                  ((2U 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                       - (IData)(0x3dU)))
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x1bU)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x1aU))
                                                    : 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x19U)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x18U))))
                                                  : 
                                                 ((4U 
                                                   & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                      - (IData)(0x3dU)))
                                                   ? 
                                                  ((2U 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                       - (IData)(0x3dU)))
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x17U)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x16U))
                                                    : 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x15U)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x14U)))
                                                   : 
                                                  ((2U 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                       - (IData)(0x3dU)))
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x13U)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x12U))
                                                    : 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x11U)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x10U)))))
                                                 : 
                                                ((8U 
                                                  & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                     - (IData)(0x3dU)))
                                                  ? 
                                                 ((4U 
                                                   & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                      - (IData)(0x3dU)))
                                                   ? 
                                                  ((2U 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                       - (IData)(0x3dU)))
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0xfU)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0xeU))
                                                    : 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0xdU)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0xcU)))
                                                   : 
                                                  ((2U 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                       - (IData)(0x3dU)))
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0xbU)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0xaU))
                                                    : 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 9U)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 8U))))
                                                  : 
                                                 ((4U 
                                                   & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                      - (IData)(0x3dU)))
                                                   ? 
                                                  ((2U 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                       - (IData)(0x3dU)))
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 7U)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 6U))
                                                    : 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 5U)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 4U)))
                                                   : 
                                                  ((2U 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                       - (IData)(0x3dU)))
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 3U)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 2U))
                                                    : 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 1U)
                                                     : 
                                                    ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                     << 0x14U))))))));
    vlSelf->__VdfgRegularize_he8d392c1_0_37 = ((2U 
                                                == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3)) 
                                               | (3U 
                                                  == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3)));
    vlSelf->__PVT__op_dn = ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opa_dn) 
                            | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opb_dn));
    __VdfgRegularize_he8d392c1_0_19 = ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3)) 
                                       | (4U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3)));
    __VdfgRegularize_he8d392c1_0_8 = ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                      < ((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__rmode_r3))
                                          ? 0x7eU : 0x7fU));
    vlSelf->__VdfgRegularize_he8d392c1_0_70 = ((0U 
                                                != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r))
                                                ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)
                                                : 0U);
    vlSelf->__PVT__div_dn = ((IData)(vlSelf->__PVT__op_dn) 
                             & ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_70) 
                                >> 8U));
    __VdfgRegularize_he8d392c1_0_10 = ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opas_r2) 
                                       & (IData)(__VdfgRegularize_he8d392c1_0_8));
    if ((0x8000000U & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0U;
    } else if ((1U == (3U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q 
                             >> 0x1aU)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 1U;
    } else if ((1U == (7U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q 
                             >> 0x19U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 2U;
    } else if ((1U == (0xfU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q 
                               >> 0x18U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 3U;
    } else if ((1U == (0x1fU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q 
                                >> 0x17U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 4U;
    } else if ((1U == (0x3fU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q 
                                >> 0x16U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 5U;
    } else if ((1U == (0x7fU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q 
                                >> 0x15U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 6U;
    } else if ((1U == (0xffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q 
                                >> 0x14U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 7U;
    } else if ((1U == (0x1ffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q 
                                 >> 0x13U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 8U;
    } else if ((1U == (0x3ffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q 
                                 >> 0x12U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 9U;
    } else if ((1U == (0x7ffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q 
                                 >> 0x11U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0xaU;
    } else if ((1U == (0xfffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q 
                                 >> 0x10U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0xbU;
    } else if ((1U == (0x1fffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q 
                                  >> 0xfU)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0xcU;
    } else if ((1U == (0x3fffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q 
                                  >> 0xeU)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0xdU;
    } else if ((1U == (0x7fffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q 
                                  >> 0xdU)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0xeU;
    } else if ((1U == (0xffffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q 
                                  >> 0xcU)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0xfU;
    } else if ((1U == (0x1ffffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q 
                                   >> 0xbU)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x10U;
    } else if ((1U == (0x3ffffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q 
                                   >> 0xaU)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x11U;
    } else if ((1U == (0x7ffffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q 
                                   >> 9U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x12U;
    } else if ((1U == (0xfffffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q 
                                   >> 8U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x13U;
    } else if ((1U == (0x1fffffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q 
                                    >> 7U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x14U;
    } else if ((1U == (0x3fffffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q 
                                    >> 6U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x15U;
    } else if ((1U == (0x7fffffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q 
                                    >> 5U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x16U;
    } else if ((1U == (0xffffffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q 
                                    >> 4U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x17U;
    } else if ((1U == (0x1ffffffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q 
                                     >> 3U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x18U;
    } else if ((1U == (0x3ffffffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q 
                                     >> 2U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x19U;
    } else if ((1U == (0x7ffffffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q 
                                     >> 1U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x1aU;
    } else if ((1U == vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x1bU;
    } else if ((1U == (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q 
                       << 1U))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x1cU;
    } else if ((1U == (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q 
                       << 2U))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x1dU;
    } else if ((1U == (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q 
                       << 3U))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x1eU;
    } else if ((1U == (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q 
                       << 4U))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x1fU;
    } else if ((1ULL == ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                         << 5U))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x20U;
    } else if ((1ULL == ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                         << 6U))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x21U;
    } else if ((1ULL == ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                         << 7U))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x22U;
    } else if ((1ULL == ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                         << 8U))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x23U;
    } else if ((1ULL == ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                         << 9U))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x24U;
    } else if ((1ULL == ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                         << 0xaU))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x25U;
    } else if ((1ULL == ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                         << 0xbU))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x26U;
    } else if ((1ULL == ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                         << 0xcU))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x27U;
    } else if ((1ULL == ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                         << 0xdU))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x28U;
    } else if ((1ULL == ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                         << 0xeU))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x29U;
    } else if ((1ULL == ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                         << 0xfU))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x2aU;
    } else if ((1ULL == ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                         << 0x10U))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x2bU;
    } else if ((1ULL == ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                         << 0x11U))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x2cU;
    } else if ((1ULL == ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                         << 0x12U))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x2dU;
    } else if ((1ULL == ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                         << 0x13U))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x2eU;
    } else if ((1ULL == ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                         << 0x14U))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x2fU;
    } else if ((0ULL == ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                         << 0x14U))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x30U;
    }
    vlSelf->__PVT__div_exp2 = (0xffU & (((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)) 
                                        - (IData)(vlSelf->__PVT__u6__DOT__fi_ldz_r0)));
    vlSelf->__PVT__fi_ldz_2 = ((0x80U & (((IData)(0x17U) 
                                          - (IData)(vlSelf->__PVT__u6__DOT__fi_ldz_r0)) 
                                         << 1U)) | 
                               (0x7fU & ((IData)(0x17U) 
                                         - (IData)(vlSelf->__PVT__u6__DOT__fi_ldz_r0))));
    vlSelf->__PVT__exp_next_mi = (0x1ffU & (((IData)(1U) 
                                             + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)) 
                                            - (0x3fU 
                                               & ((IData)(vlSelf->__PVT__u6__DOT__fi_ldz_r0) 
                                                  - (IData)(1U)))));
    vlSelf->__VdfgRegularize_he8d392c1_0_23 = (0x1ffU 
                                               & ((0x8000000U 
                                                   & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r))
                                                   : (IData)(vlSelf->__PVT__exp_next_mi)));
    vlSelf->__PVT__f2i_max = (((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opas_r2)) 
                               & (0x9dU < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r))) 
                              | ((IData)(__VdfgRegularize_he8d392c1_0_10) 
                                 & ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q) 
                                    & (3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__rmode_r3)))));
    vlSelf->__PVT__f2i_zero = (((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opas_r2)) 
                                & (IData)(__VdfgRegularize_he8d392c1_0_8)) 
                               | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opas_r2) 
                                   & (0x9dU < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r))) 
                                  | ((IData)(__VdfgRegularize_he8d392c1_0_10) 
                                     & ((~ (IData)(
                                                   (0U 
                                                    != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q))) 
                                        | (3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__rmode_r3))))));
    vlSelf->__PVT__div_exp1 = (0x1ffU & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                          - (IData)(1U)) 
                                         + (IData)(vlSelf->__PVT__fi_ldz_2)));
    vlSelf->__PVT__dn = ((2U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3)) 
                         & ((3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3)) 
                            & ((~ (IData)((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)))) 
                               | ((~ (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q 
                                      >> 0x1bU)) & 
                                  ((IData)(vlSelf->__PVT__exp_next_mi) 
                                   >> 8U)))));
    vlSelf->__VdfgRegularize_he8d392c1_0_46 = ((IData)(vlSelf->__PVT__f2i_max) 
                                               & (5U 
                                                  == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3)));
    vlSelf->__PVT__div_inf = ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opb_dn) 
                              & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opa_dn)) 
                                 & (0x7fU > (0xffU 
                                             & (IData)(vlSelf->__PVT__div_exp1)))));
    vlSelf->__VdfgRegularize_he8d392c1_0_53 = ((~ (IData)(vlSelf->__PVT__dn)) 
                                               & (5U 
                                                  != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3)));
    vlSelf->__PVT__exp_div = (0xffU & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opa_dn) 
                                        & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opb_dn))
                                        ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                           + (IData)(vlSelf->__PVT__fi_ldz_2))
                                        : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opb_dn)
                                            ? (IData)(vlSelf->__PVT__div_exp1)
                                            : (((0xfeU 
                                                 >= (IData)(vlSelf->__PVT__div_exp2)) 
                                                & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opa_dn))
                                                ? (IData)(vlSelf->__PVT__div_exp2)
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opa_dn) 
                                                       | (~ (IData)(
                                                                    (0U 
                                                                     != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r))))))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_23) 
                                                    - (IData)(1U)))))));
    vlSelf->__PVT__exp_out = (0xffU & ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3))
                                        ? (IData)(vlSelf->__PVT__exp_div)
                                        : ((IData)(__VdfgRegularize_he8d392c1_0_19)
                                            ? ((5U 
                                                == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3))
                                                ? ((IData)(vlSelf->__PVT__f2i_zero)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->__PVT__f2i_max)
                                                     ? 0xffU
                                                     : 0U))
                                                : (
                                                   (0U 
                                                    != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)
                                                    ? 
                                                   ((IData)(0x9eU) 
                                                    - (IData)(vlSelf->__PVT__u6__DOT__fi_ldz_r0))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opas_r2)
                                                     ? 0x9eU
                                                     : 0U)))
                                            : (((2U 
                                                 == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3)) 
                                                & ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_23) 
                                                   >> 8U))
                                                ? 0U
                                                : ((IData)(vlSelf->__PVT__dn)
                                                    ? 
                                                   (3U 
                                                    & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q 
                                                       >> 0x1aU))
                                                    : (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_23))))));
    vlSelf->__VdfgRegularize_he8d392c1_0_14 = (0x1ffU 
                                               & ((0U 
                                                   != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                   - (IData)(1U))
                                                   : (IData)(vlSelf->__PVT__exp_out)));
    vlSelf->__PVT__exp_out_fe = (IData)((0xfeU == (IData)(vlSelf->__PVT__exp_out)));
    vlSelf->__VdfgRegularize_he8d392c1_0_38 = ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__sign) 
                                               & (0xffU 
                                                  == (IData)(vlSelf->__PVT__exp_out)));
    __VdfgRegularize_he8d392c1_0_64 = (1U & ((~ (IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->__PVT__exp_out)))) 
                                             | ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_23) 
                                                >> 8U)));
    vlSelf->__PVT__grs_sel_div = ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3)) 
                                  & ((IData)(vlSelf->__PVT__div_dn) 
                                     | (IData)(__VdfgRegularize_he8d392c1_0_64)));
    vlSelf->__VdfgRegularize_he8d392c1_0_63 = ((0U 
                                                != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)) 
                                               & (IData)(__VdfgRegularize_he8d392c1_0_64));
    vlSelf->__VdfgRegularize_he8d392c1_0_62 = (1U & 
                                               (((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_14) 
                                                 >> 8U) 
                                                | ((~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)))) 
                                                   | (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_63))));
    vlSelf->__PVT__shift_right = (0xffU & ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3))
                                            ? ((IData)(vlSelf->__PVT__div_dn)
                                                ? (- (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r))
                                                : ((IData)(2U) 
                                                   + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)))
                                            : (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_14)));
    vlSelf->__PVT__fract_in_shftr_1 = (0xffffffffffffULL 
                                       & ((0x20U & (IData)(vlSelf->__PVT__shift_right))
                                           ? ((0x10U 
                                               & (IData)(vlSelf->__PVT__shift_right))
                                               ? ((8U 
                                                   & (IData)(vlSelf->__PVT__shift_right))
                                                   ? 
                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                   << 0x14U)
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__shift_right))
                                                    ? 
                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                    << 0x14U)
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_right))
                                                     ? 
                                                    ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                     << 0x14U)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                      << 0x14U)
                                                      : 0ULL))))
                                               : ((8U 
                                                   & (IData)(vlSelf->__PVT__shift_right))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__shift_right))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_right))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x2fU)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x2eU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x2dU)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x2cU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_right))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x2bU)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x2aU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x29U)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x28U))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__shift_right))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_right))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x27U)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x26U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x25U)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x24U)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_right))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x23U)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x22U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x21U)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x20U))))))
                                           : ((0x10U 
                                               & (IData)(vlSelf->__PVT__shift_right))
                                               ? ((8U 
                                                   & (IData)(vlSelf->__PVT__shift_right))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__shift_right))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_right))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x1fU)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x1eU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x1dU)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x1cU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_right))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x1bU)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x1aU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x19U)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x18U))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__shift_right))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_right))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x17U)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x16U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x15U)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x14U)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_right))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x13U)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x12U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x11U)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x10U)))))
                                               : ((8U 
                                                   & (IData)(vlSelf->__PVT__shift_right))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__shift_right))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_right))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0xfU)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0xeU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0xdU)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0xcU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_right))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0xbU)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0xaU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 9U)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 8U))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__shift_right))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_right))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 7U)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 6U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 5U)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 4U)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_right))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 3U)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 2U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 1U)
                                                      : 
                                                     ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                      << 0x14U))))))));
    vlSelf->__PVT__shift_left = (0xffU & ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3))
                                           ? (((~ (IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->__PVT__exp_out)))) 
                                               & (IData)(vlSelf->__PVT__op_dn))
                                               ? (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_70)
                                               : ((1U 
                                                   & ((~ (IData)(vlSelf->__PVT__op_dn)) 
                                                      & (~ (IData)(
                                                                   (0U 
                                                                    != (IData)(vlSelf->__PVT__exp_out))))))
                                                   ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)
                                                   : (IData)(vlSelf->__PVT__u6__DOT__fi_ldz_r0)))
                                           : ((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3))
                                               ? ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_62)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r))
                                                   : (IData)(vlSelf->__PVT__u6__DOT__fi_ldz_r0))
                                               : ((IData)(__VdfgRegularize_he8d392c1_0_19)
                                                   ? 
                                                  ((5U 
                                                    == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                    - (IData)(0x7dU))
                                                    : (IData)(vlSelf->__PVT__u6__DOT__fi_ldz_r0))
                                                   : 
                                                  ((1U 
                                                    & ((~ (IData)(
                                                                  (0U 
                                                                   != (IData)(vlSelf->__PVT__exp_out)))) 
                                                       | (IData)(vlSelf->__PVT__dn)))
                                                    ? 
                                                   ((0U 
                                                     != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r))
                                                     : 2U)
                                                    : (IData)(vlSelf->__PVT__u6__DOT__fi_ldz_r0))))));
    vlSelf->__PVT__fract_in_shftl_1 = (0xffffffffffffULL 
                                       & ((0x20U & (IData)(vlSelf->__PVT__shift_left))
                                           ? ((0x10U 
                                               & (IData)(vlSelf->__PVT__shift_left))
                                               ? ((8U 
                                                   & (IData)(vlSelf->__PVT__shift_left))
                                                   ? 
                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                   << 0x14U)
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__shift_left))
                                                    ? 
                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                    << 0x14U)
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_left))
                                                     ? 
                                                    ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                     << 0x14U)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                      << 0x14U)
                                                      : 0ULL))))
                                               : ((8U 
                                                   & (IData)(vlSelf->__PVT__shift_left))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__shift_left))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_left))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x2fU)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x2eU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x2dU)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x2cU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_left))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x2bU)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x2aU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x29U)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x28U))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__shift_left))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_left))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x27U)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x26U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x25U)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x24U)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_left))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x23U)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x22U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x21U)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x20U))))))
                                           : ((0x10U 
                                               & (IData)(vlSelf->__PVT__shift_left))
                                               ? ((8U 
                                                   & (IData)(vlSelf->__PVT__shift_left))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__shift_left))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_left))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x1fU)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x1eU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x1dU)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x1cU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_left))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x1bU)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x1aU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x19U)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x18U))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__shift_left))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_left))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x17U)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x16U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x15U)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x14U)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_left))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x13U)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x12U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x11U)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x10U)))))
                                               : ((8U 
                                                   & (IData)(vlSelf->__PVT__shift_left))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__shift_left))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_left))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0xfU)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0xeU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0xdU)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0xcU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_left))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0xbU)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0xaU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 9U)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 8U))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__shift_left))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_left))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 7U)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 6U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 5U)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 4U)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_left))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 3U)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 2U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 1U)
                                                      : 
                                                     ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                      << 0x14U))))))));
    vlSelf->__VdfgRegularize_he8d392c1_0_21 = ((1U 
                                                & ((3U 
                                                    == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3))
                                                    ? 
                                                   (~ (IData)(vlSelf->__PVT__div_dn))
                                                    : 
                                                   ((2U 
                                                     != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3)) 
                                                    | ((0U 
                                                        != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)) 
                                                       | (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_62)))))
                                                ? (
                                                   ((0U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(vlSelf->__PVT__shift_left) 
                                                         >> 6U))) 
                                                    | ((IData)(vlSelf->__PVT__f2i_zero) 
                                                       & (5U 
                                                          == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3))))
                                                    ? 0ULL
                                                    : vlSelf->__PVT__fract_in_shftl_1)
                                                : (
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->__PVT__shift_right) 
                                                        >> 6U)))
                                                    ? 0ULL
                                                    : vlSelf->__PVT__fract_in_shftr_1));
    if (vlSelf->__PVT__grs_sel_div) {
        vlSelf->__PVT__s = (0U != (0x1ffffffU & (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_21)));
        vlSelf->__PVT__r = (1U & (IData)((vlSelf->__VdfgRegularize_he8d392c1_0_21 
                                          >> 0x18U)));
    } else {
        vlSelf->__PVT__s = ((0U != (0xffffffU & (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_21))) 
                            | ((IData)((vlSelf->__VdfgRegularize_he8d392c1_0_21 
                                        >> 0x18U)) 
                               & (3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3))));
        vlSelf->__PVT__r = (1U & (IData)((vlSelf->__VdfgRegularize_he8d392c1_0_21 
                                          >> 0x18U)));
    }
    vlSelf->__VdfgRegularize_he8d392c1_0_30 = ((IData)(vlSelf->__PVT__r) 
                                               | (IData)(vlSelf->__PVT__s));
    vlSelf->__VdfgRegularize_he8d392c1_0_27 = ((IData)(
                                                       (vlSelf->__VdfgRegularize_he8d392c1_0_21 
                                                        >> 0x19U)) 
                                               & (IData)(vlSelf->__PVT__r));
    vlSelf->__VdfgRegularize_he8d392c1_0_54 = (0xffffffU 
                                               & ((0x7fffffU 
                                                   & (IData)(
                                                             (vlSelf->__VdfgRegularize_he8d392c1_0_21 
                                                              >> 0x19U))) 
                                                  + 
                                                  ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_37)
                                                    ? 
                                                   ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__sign)) 
                                                    & ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_30) 
                                                       | (3U 
                                                          == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3))))
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3))
                                                     ? 
                                                    ((2U 
                                                      == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__rmode_r3)) 
                                                     & (((0U 
                                                          != 
                                                          (0xfU 
                                                           & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q)) 
                                                         & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opas_r2)) 
                                                            & (0x80U 
                                                               > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)))) 
                                                        | (0U 
                                                           != 
                                                           (0x1ffffffU 
                                                            & (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_21)))))
                                                     : 
                                                    ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_30) 
                                                     & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__sign)) 
                                                        & ((~ 
                                                            ((IData)(vlSelf->__PVT__exp_out) 
                                                             >> 7U)) 
                                                           | (((IData)(vlSelf->__PVT__exp_out) 
                                                               >> 7U) 
                                                              & ((~ (IData)(vlSelf->__PVT__exp_out_fe)) 
                                                                 | ((~ (IData)(
                                                                               (0x7fffffU 
                                                                                == 
                                                                                (0x7fffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgRegularize_he8d392c1_0_21 
                                                                                >> 0x19U)))))) 
                                                                    | ((IData)(vlSelf->__PVT__exp_out_fe) 
                                                                       & (0xfffffe000000ULL 
                                                                          == 
                                                                          (0xfffffe000000ULL 
                                                                           & vlSelf->__VdfgRegularize_he8d392c1_0_21)))))))))))));
    vlSelf->__VdfgRegularize_he8d392c1_0_55 = (0xffffffU 
                                               & ((0x7fffffU 
                                                   & (IData)(
                                                             (vlSelf->__VdfgRegularize_he8d392c1_0_21 
                                                              >> 0x19U))) 
                                                  + 
                                                  ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_27) 
                                                   | ((IData)(vlSelf->__PVT__r) 
                                                      & (IData)(vlSelf->__PVT__s)))));
    if ((2U & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__rmode_r3))) {
        vlSelf->__PVT__fract_out_rnd = (0x7fffffU & 
                                        (((3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3)) 
                                          & ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_38) 
                                             & (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_53)))
                                          ? 0x7fffffU
                                          : vlSelf->__VdfgRegularize_he8d392c1_0_54));
        vlSelf->__PVT__exp_out_rnd = (0xffU & (((5U 
                                                 != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3)) 
                                                & (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_38))
                                                ? 0xfeU
                                                : (
                                                   (0x800000U 
                                                    & vlSelf->__VdfgRegularize_he8d392c1_0_54)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__exp_out))
                                                    : (IData)(vlSelf->__PVT__exp_out))));
    } else if ((1U & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__rmode_r3))) {
        vlSelf->__PVT__fract_out_rnd = (0x7fffffU & 
                                        (((3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3)) 
                                          & ((0xffU 
                                              == (IData)(vlSelf->__PVT__exp_out)) 
                                             & (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_53)))
                                          ? 0x7fffffU
                                          : (IData)(
                                                    (vlSelf->__VdfgRegularize_he8d392c1_0_21 
                                                     >> 0x19U))));
        vlSelf->__PVT__exp_out_rnd = (0xffU & (((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_27) 
                                                & ((IData)(vlSelf->__PVT__s) 
                                                   & (0xffU 
                                                      == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r))))
                                                ? (
                                                   (3U 
                                                    == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3))
                                                    ? 
                                                   ((0x16U 
                                                     < (IData)(vlSelf->__PVT__u6__DOT__fi_ldz_r0))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                     - 
                                                     (0x3fU 
                                                      & ((IData)(vlSelf->__PVT__u6__DOT__fi_ldz_r0) 
                                                         - (IData)(0x16U))))
                                                     : 
                                                    ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                     - 
                                                     (0x3fU 
                                                      & ((IData)(vlSelf->__PVT__u6__DOT__fi_ldz_r0) 
                                                         - (IData)(1U)))))
                                                    : (IData)(vlSelf->__PVT__exp_next_mi))
                                                : (
                                                   ((5U 
                                                     != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3)) 
                                                    & (0xffU 
                                                       == (IData)(vlSelf->__PVT__exp_out)))
                                                    ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)
                                                    : (IData)(vlSelf->__PVT__exp_out))));
    } else {
        vlSelf->__PVT__fract_out_rnd = (0x7fffffU & vlSelf->__VdfgRegularize_he8d392c1_0_55);
        vlSelf->__PVT__exp_out_rnd = (0xffU & ((IData)(vlSelf->__PVT__exp_out) 
                                               + (1U 
                                                  & (vlSelf->__VdfgRegularize_he8d392c1_0_55 
                                                     >> 0x17U))));
    }
    vlSelf->__PVT__max_num = (((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__rmode_r3)) 
                               & ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_37) 
                                  & ((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)) 
                                     & ((0x18U > (IData)(vlSelf->__PVT__fi_ldz_2)) 
                                        & (0xfeU != (IData)(vlSelf->__PVT__exp_out)))))) 
                              | ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3)) 
                                 & (((1U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__rmode_r3)) 
                                     & ((IData)(vlSelf->__PVT__div_inf) 
                                        | (0xffU == (IData)(vlSelf->__PVT__exp_out)))) 
                                    | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__rmode_r3) 
                                        >> 1U) & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__sign) 
                                                   & (((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q 
                                                        >> 0x1bU) 
                                                       & (IData)(vlSelf->__PVT__div_inf)) 
                                                      | (((~ 
                                                           ((IData)(vlSelf->__PVT__exp_out_rnd) 
                                                            >> 7U)) 
                                                          & ((~ 
                                                              (((~ (IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x7fU 
                                                                             & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r))))) 
                                                                & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                                   >> 7U)) 
                                                               | (0x7fU 
                                                                  == (IData)(vlSelf->__PVT__exp_out)))) 
                                                             & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                                >> 7U))) 
                                                         | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                                             >> 7U) 
                                                            & (((IData)(vlSelf->__PVT__exp_out_rnd) 
                                                                >> 7U) 
                                                               & ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_38) 
                                                                  & ((IData)(vlSelf->__PVT__op_dn) 
                                                                     & (0xfeU 
                                                                        < (IData)(vlSelf->__PVT__div_exp1))))))))) 
                                                  | ((~ (IData)(
                                                                (0U 
                                                                 != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)))) 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__sign) 
                                                        & ((IData)(vlSelf->__PVT__div_inf) 
                                                           | ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_38) 
                                                              & (0x18U 
                                                                 > (IData)(vlSelf->__PVT__fi_ldz_2)))))))))));
    vlSelf->__PVT__inf_out = ((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__rmode_r3) 
                                >> 1U) & ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_37) 
                                          & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__sign)) 
                                             & ((3U 
                                                 != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3)) 
                                                & (0xffU 
                                                   == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)))))) 
                              | (((IData)(vlSelf->__PVT__div_inf) 
                                  & ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3)) 
                                     & ((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__rmode_r3)) 
                                        | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__rmode_r3) 
                                            >> 1U) 
                                           & ((~ (IData)(
                                                         (0xffU 
                                                          == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)))) 
                                              & (~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__sign))))))) 
                                 | ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3)) 
                                    & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__rmode_r3) 
                                        >> 1U) & ((0xffU 
                                                   == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)) 
                                                  & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__sign)) 
                                                     & ((IData)(vlSelf->__PVT__op_dn) 
                                                        & ((0x18U 
                                                            > (IData)(vlSelf->__PVT__fi_ldz_2)) 
                                                           & (0xfeU 
                                                              != (IData)(vlSelf->__PVT__exp_out_rnd))))))))));
    vlSelf->__VdfgRegularize_he8d392c1_0_51 = ((IData)(vlSelf->__PVT__inf_out) 
                                               | (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_46));
    vlSelf->__PVT__ovf0 = (((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_51) 
                            | ((~ (IData)(vlSelf->__PVT__max_num)) 
                               & (0xffU == (IData)(vlSelf->__PVT__exp_out_rnd)))) 
                           & ((1U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__rmode_r3)) 
                              & (5U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3))));
    vlSelf->__PVT__exp_out_final = ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_51)
                                     ? 0xffU : ((IData)(vlSelf->__PVT__max_num)
                                                 ? 0xfeU
                                                 : (IData)(vlSelf->__PVT__exp_out_rnd)));
    if ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3))) {
        vlSelf->__PVT__overflow = ((IData)(vlSelf->__PVT__inf_out) 
                                   | (((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__rmode_r3)) 
                                       & (IData)(vlSelf->__PVT__max_num)) 
                                      | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r) 
                                          >> 7U) & 
                                         ((IData)(vlSelf->__PVT__op_dn) 
                                          & (0xffU 
                                             == (IData)(vlSelf->__PVT__exp_out))))));
        vlSelf->__PVT__underflow = (1U & ((~ (IData)(vlSelf->__PVT__inf_out)) 
                                          & ((~ (IData)(vlSelf->__PVT__max_num)) 
                                             & ((0xffU 
                                                 != (IData)(vlSelf->__PVT__exp_out_final)) 
                                                & (((0U 
                                                     != 
                                                     (0x1ffffffU 
                                                      & (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_21))) 
                                                    & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__opb_dn)) 
                                                       & ((IData)(vlSelf->__PVT__div_dn) 
                                                          | (~ (IData)(
                                                                       (0U 
                                                                        != (IData)(vlSelf->__PVT__exp_out))))))) 
                                                   | (((IData)(vlSelf->__PVT__op_dn) 
                                                       & ((~ (IData)(
                                                                     (0U 
                                                                      != (IData)(vlSelf->__PVT__exp_out)))) 
                                                          & (0x17U 
                                                             > (IData)(vlSelf->__PVT__u6__DOT__fi_ldz_r0)))) 
                                                      | ((~ (IData)(
                                                                    (0U 
                                                                     != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)))) 
                                                         | ((~ (IData)(vlSelf->__PVT__op_dn)) 
                                                            & ((0x17U 
                                                                > (IData)(vlSelf->__PVT__u6__DOT__fi_ldz_r0)) 
                                                               & ((1U 
                                                                   == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)) 
                                                                  & (~ (IData)(
                                                                               (0U 
                                                                                != (IData)(vlSelf->__PVT__exp_out))))))))))))));
    } else {
        vlSelf->__PVT__overflow = ((IData)(vlSelf->__PVT__ovf0) 
                                   | ((~ (IData)(vlSelf->__PVT__dn)) 
                                      & (0xffU == (IData)(vlSelf->__PVT__exp_out))));
        vlSelf->__PVT__underflow = (1U & ((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fpu_op_r3))
                                           ? ((0U != 
                                               (0x1ffffffU 
                                                & (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_21))) 
                                              & ((~ (IData)(
                                                            (0xffU 
                                                             == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)))) 
                                                 & (((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_14) 
                                                     >> 8U) 
                                                    | ((~ (IData)(
                                                                  (0U 
                                                                   != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__exp_r)))) 
                                                       | (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_63)))))
                                           : ((~ (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__fract_out_q 
                                                  >> 0x1bU)) 
                                              & ((~ (IData)(vlSelf->__PVT__dn)) 
                                                 & ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_23) 
                                                    >> 8U)))));
    }
    vlSelf->__PVT__out = (((IData)(vlSelf->__PVT__exp_out_final) 
                           << 0x17U) | (((IData)(vlSelf->__PVT__inf_out) 
                                         | (IData)(vlSelf->__PVT__ovf0))
                                         ? 0U : (((IData)(vlSelf->__PVT__max_num) 
                                                  | (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_46))
                                                  ? 0x7fffffU
                                                  : vlSelf->__PVT__fract_out_rnd)));
}

VL_ATTR_COLD void Vco_sim_syn2_post_norm___stl_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4__0(Vco_sim_syn2_post_norm* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vco_sim_syn2_post_norm___stl_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4__0\n"); );
    // Init
    CData/*0:0*/ __VdfgRegularize_he8d392c1_0_8;
    __VdfgRegularize_he8d392c1_0_8 = 0;
    CData/*0:0*/ __VdfgRegularize_he8d392c1_0_10;
    __VdfgRegularize_he8d392c1_0_10 = 0;
    CData/*0:0*/ __VdfgRegularize_he8d392c1_0_13;
    __VdfgRegularize_he8d392c1_0_13 = 0;
    CData/*0:0*/ __VdfgRegularize_he8d392c1_0_19;
    __VdfgRegularize_he8d392c1_0_19 = 0;
    CData/*0:0*/ __VdfgRegularize_he8d392c1_0_40;
    __VdfgRegularize_he8d392c1_0_40 = 0;
    CData/*0:0*/ __VdfgRegularize_he8d392c1_0_41;
    __VdfgRegularize_he8d392c1_0_41 = 0;
    CData/*0:0*/ __VdfgRegularize_he8d392c1_0_47;
    __VdfgRegularize_he8d392c1_0_47 = 0;
    CData/*0:0*/ __VdfgRegularize_he8d392c1_0_52;
    __VdfgRegularize_he8d392c1_0_52 = 0;
    CData/*0:0*/ __VdfgRegularize_he8d392c1_0_64;
    __VdfgRegularize_he8d392c1_0_64 = 0;
    // Body
    __VdfgRegularize_he8d392c1_0_47 = ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3)) 
                                       & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_ovf_r) 
                                          >> 1U));
    __VdfgRegularize_he8d392c1_0_41 = (IData)((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_ovf_r)));
    __VdfgRegularize_he8d392c1_0_52 = (IData)(((~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_ovf_r) 
                                                   >> 1U)) 
                                               & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__rmode_r3) 
                                                  >> 1U)));
    __VdfgRegularize_he8d392c1_0_40 = (IData)((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_ovf_r)));
    vlSelf->__PVT__exp_in_80 = (IData)((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                         >> 7U) & (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x7fU 
                                                               & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)))))));
    vlSelf->__VdfgRegularize_he8d392c1_0_37 = ((2U 
                                                == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3)) 
                                               | (3U 
                                                  == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3)));
    vlSelf->__VdfgRegularize_he8d392c1_0_61 = (1U & 
                                               ((~ (IData)(
                                                           (0U 
                                                            != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)))) 
                                                | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_ovf_r) 
                                                   >> 1U)));
    vlSelf->__VdfgRegularize_he8d392c1_0_20 = (IData)(
                                                      (1U 
                                                       == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_ovf_r)));
    vlSelf->__VdfgRegularize_he8d392c1_0_70 = ((0U 
                                                != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r))
                                                ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)
                                                : 0U);
    __VdfgRegularize_he8d392c1_0_13 = (1U & ((~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_ovf_r) 
                                                 >> 1U)) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r))))));
    vlSelf->__PVT__op_dn = ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__opa_dn) 
                            | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__opb_dn));
    vlSelf->__VdfgRegularize_he8d392c1_0_59 = (IData)(
                                                      (2U 
                                                       == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_ovf_r)));
    __VdfgRegularize_he8d392c1_0_19 = ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3)) 
                                       | (4U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3)));
    __VdfgRegularize_he8d392c1_0_8 = ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                      < ((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__rmode_r3))
                                          ? 0x7eU : 0x7fU));
    vlSelf->__Vcellout__u3__shift_out = (0xffffffffffffULL 
                                         & ((0x20U 
                                             & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                - (IData)(0x3dU)))
                                             ? ((0x10U 
                                                 & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                    - (IData)(0x3dU)))
                                                 ? 
                                                ((8U 
                                                  & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                     - (IData)(0x3dU)))
                                                  ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm
                                                  : 
                                                 ((4U 
                                                   & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                      - (IData)(0x3dU)))
                                                   ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm
                                                   : 
                                                  ((2U 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                       - (IData)(0x3dU)))
                                                    ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm
                                                    : 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm
                                                     : 0ULL))))
                                                 : 
                                                ((8U 
                                                  & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                     - (IData)(0x3dU)))
                                                  ? 
                                                 ((4U 
                                                   & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                      - (IData)(0x3dU)))
                                                   ? 
                                                  ((2U 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                       - (IData)(0x3dU)))
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x2fU)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x2eU))
                                                    : 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x2dU)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x2cU)))
                                                   : 
                                                  ((2U 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                       - (IData)(0x3dU)))
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x2bU)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x2aU))
                                                    : 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x29U)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x28U))))
                                                  : 
                                                 ((4U 
                                                   & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                      - (IData)(0x3dU)))
                                                   ? 
                                                  ((2U 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                       - (IData)(0x3dU)))
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x27U)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x26U))
                                                    : 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x25U)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x24U)))
                                                   : 
                                                  ((2U 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                       - (IData)(0x3dU)))
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x23U)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x22U))
                                                    : 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x21U)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x20U))))))
                                             : ((0x10U 
                                                 & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                    - (IData)(0x3dU)))
                                                 ? 
                                                ((8U 
                                                  & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                     - (IData)(0x3dU)))
                                                  ? 
                                                 ((4U 
                                                   & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                      - (IData)(0x3dU)))
                                                   ? 
                                                  ((2U 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                       - (IData)(0x3dU)))
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x1fU)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x1eU))
                                                    : 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x1dU)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x1cU)))
                                                   : 
                                                  ((2U 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                       - (IData)(0x3dU)))
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x1bU)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x1aU))
                                                    : 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x19U)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x18U))))
                                                  : 
                                                 ((4U 
                                                   & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                      - (IData)(0x3dU)))
                                                   ? 
                                                  ((2U 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                       - (IData)(0x3dU)))
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x17U)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x16U))
                                                    : 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x15U)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x14U)))
                                                   : 
                                                  ((2U 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                       - (IData)(0x3dU)))
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x13U)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x12U))
                                                    : 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x11U)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x10U)))))
                                                 : 
                                                ((8U 
                                                  & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                     - (IData)(0x3dU)))
                                                  ? 
                                                 ((4U 
                                                   & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                      - (IData)(0x3dU)))
                                                   ? 
                                                  ((2U 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                       - (IData)(0x3dU)))
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0xfU)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0xeU))
                                                    : 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0xdU)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0xcU)))
                                                   : 
                                                  ((2U 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                       - (IData)(0x3dU)))
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0xbU)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0xaU))
                                                    : 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 9U)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 8U))))
                                                  : 
                                                 ((4U 
                                                   & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                      - (IData)(0x3dU)))
                                                   ? 
                                                  ((2U 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                       - (IData)(0x3dU)))
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 7U)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 6U))
                                                    : 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 5U)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 4U)))
                                                   : 
                                                  ((2U 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                       - (IData)(0x3dU)))
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 3U)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 2U))
                                                    : 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 1U)
                                                     : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm)))))));
    if ((1U & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                       >> 0x2fU)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0U;
    } else if ((1U == (3U & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                     >> 0x2eU))))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 1U;
    } else if ((1U == (7U & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                     >> 0x2dU))))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 2U;
    } else if ((1U == (0xfU & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                       >> 0x2cU))))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 3U;
    } else if ((1U == (0x1fU & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                        >> 0x2bU))))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 4U;
    } else if ((1U == (0x3fU & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                        >> 0x2aU))))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 5U;
    } else if ((1U == (0x7fU & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                        >> 0x29U))))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 6U;
    } else if ((1U == (0xffU & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                        >> 0x28U))))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 7U;
    } else if ((1U == (0x1ffU & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                         >> 0x27U))))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 8U;
    } else if ((1U == (0x3ffU & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                         >> 0x26U))))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 9U;
    } else if ((1U == (0x7ffU & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                         >> 0x25U))))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0xaU;
    } else if ((1U == (0xfffU & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                         >> 0x24U))))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0xbU;
    } else if ((1U == (0x1fffU & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                          >> 0x23U))))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0xcU;
    } else if ((1U == (0x3fffU & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                          >> 0x22U))))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0xdU;
    } else if ((1U == (0x7fffU & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                          >> 0x21U))))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0xeU;
    } else if ((1U == (0xffffU & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                          >> 0x20U))))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0xfU;
    } else if ((1U == (0x1ffffU & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                           >> 0x1fU))))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x10U;
    } else if ((1U == (0x3ffffU & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                           >> 0x1eU))))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x11U;
    } else if ((1U == (0x7ffffU & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                           >> 0x1dU))))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x12U;
    } else if ((1U == (0xfffffU & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                           >> 0x1cU))))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x13U;
    } else if ((1U == (0x1fffffU & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                            >> 0x1bU))))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x14U;
    } else if ((1U == (0x3fffffU & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                            >> 0x1aU))))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x15U;
    } else if ((1U == (0x7fffffU & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                            >> 0x19U))))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x16U;
    } else if ((1U == (0xffffffU & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                            >> 0x18U))))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x17U;
    } else if ((1U == (0x1ffffffU & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                             >> 0x17U))))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x18U;
    } else if ((1U == (0x3ffffffU & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                             >> 0x16U))))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x19U;
    } else if ((1U == (0x7ffffffU & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                             >> 0x15U))))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x1aU;
    } else if ((1U == (0xfffffffU & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                             >> 0x14U))))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x1bU;
    } else if ((1U == (0x1fffffffU & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                              >> 0x13U))))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x1cU;
    } else if ((1U == (0x3fffffffU & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                              >> 0x12U))))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x1dU;
    } else if ((1U == (0x7fffffffU & (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                              >> 0x11U))))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x1eU;
    } else if ((1U == (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                               >> 0x10U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x1fU;
    } else if ((1ULL == (0x1ffffffffULL & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                           >> 0xfU)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x20U;
    } else if ((1ULL == (0x3ffffffffULL & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                           >> 0xeU)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x21U;
    } else if ((1ULL == (0x7ffffffffULL & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                           >> 0xdU)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x22U;
    } else if ((1ULL == (0xfffffffffULL & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                           >> 0xcU)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x23U;
    } else if ((1ULL == (0x1fffffffffULL & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                            >> 0xbU)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x24U;
    } else if ((1ULL == (0x3fffffffffULL & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                            >> 0xaU)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x25U;
    } else if ((1ULL == (0x7fffffffffULL & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                            >> 9U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x26U;
    } else if ((1ULL == (0xffffffffffULL & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                            >> 8U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x27U;
    } else if ((1ULL == (0x1ffffffffffULL & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                             >> 7U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x28U;
    } else if ((1ULL == (0x3ffffffffffULL & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                             >> 6U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x29U;
    } else if ((1ULL == (0x7ffffffffffULL & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                             >> 5U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x2aU;
    } else if ((1ULL == (0xfffffffffffULL & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                             >> 4U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x2bU;
    } else if ((1ULL == (0x1fffffffffffULL & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                              >> 3U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x2cU;
    } else if ((1ULL == (0x3fffffffffffULL & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                              >> 2U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x2dU;
    } else if ((1ULL == (0x7fffffffffffULL & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                              >> 1U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x2eU;
    } else if ((1ULL == vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm)) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x2fU;
    } else if ((0ULL == vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm)) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x30U;
    }
    vlSelf->__VdfgRegularize_he8d392c1_0_48 = (((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_ovf_r)) 
                                                & (IData)(__VdfgRegularize_he8d392c1_0_47)) 
                                               | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__or_result));
    vlSelf->__VdfgRegularize_he8d392c1_0_67 = ((IData)(vlSelf->__PVT__op_dn) 
                                               & (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_20));
    vlSelf->__VdfgRegularize_he8d392c1_0_15 = ((IData)(vlSelf->__PVT__op_dn) 
                                               & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_ovf_r) 
                                                  >> 1U));
    vlSelf->__PVT__div_dn = ((IData)(vlSelf->__PVT__op_dn) 
                             & ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_70) 
                                >> 8U));
    __VdfgRegularize_he8d392c1_0_10 = ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__opas_r2) 
                                       & (IData)(__VdfgRegularize_he8d392c1_0_8));
    vlSelf->__PVT__div_exp2 = (0xffU & (((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)) 
                                        - (IData)(vlSelf->__PVT__u6__DOT__fi_ldz_r0)));
    vlSelf->__PVT__fi_ldz_2 = ((0x80U & (((IData)(0x17U) 
                                          - (IData)(vlSelf->__PVT__u6__DOT__fi_ldz_r0)) 
                                         << 1U)) | 
                               (0x7fU & ((IData)(0x17U) 
                                         - (IData)(vlSelf->__PVT__u6__DOT__fi_ldz_r0))));
    vlSelf->__PVT__exp_next_mi = (0x1ffU & (((IData)(1U) 
                                             + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)) 
                                            - (0x3fU 
                                               & ((IData)(vlSelf->__PVT__u6__DOT__fi_ldz_r0) 
                                                  - (IData)(1U)))));
    vlSelf->__PVT__f2i_max = (((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__opas_r2)) 
                               & (0x9dU < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r))) 
                              | ((IData)(__VdfgRegularize_he8d392c1_0_10) 
                                 & ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm) 
                                    & (3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__rmode_r3)))));
    vlSelf->__PVT__f2i_zero = (((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__opas_r2)) 
                                & (IData)(__VdfgRegularize_he8d392c1_0_8)) 
                               | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__opas_r2) 
                                   & (0x9dU < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r))) 
                                  | ((IData)(__VdfgRegularize_he8d392c1_0_10) 
                                     & ((~ (IData)(
                                                   (0U 
                                                    != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm))) 
                                        | (3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__rmode_r3))))));
    vlSelf->__PVT__div_exp1 = (0x1ffU & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                          - (IData)(1U)) 
                                         + (IData)(vlSelf->__PVT__fi_ldz_2)));
    vlSelf->__PVT__dn = ((2U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3)) 
                         & ((3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3)) 
                            & ((~ (IData)((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)))) 
                               | ((~ (IData)((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                              >> 0x2fU))) 
                                  & ((IData)(vlSelf->__PVT__exp_next_mi) 
                                     >> 8U)))));
    vlSelf->__VdfgRegularize_he8d392c1_0_23 = (0x1ffU 
                                               & ((1U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                                              >> 0x2fU)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r))
                                                   : (IData)(vlSelf->__PVT__exp_next_mi)));
    vlSelf->__VdfgRegularize_he8d392c1_0_46 = ((IData)(vlSelf->__PVT__f2i_max) 
                                               & (5U 
                                                  == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3)));
    vlSelf->__PVT__div_inf = ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__opb_dn) 
                              & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__opa_dn)) 
                                 & (0x7fU > (0xffU 
                                             & (IData)(vlSelf->__PVT__div_exp1)))));
    vlSelf->__VdfgRegularize_he8d392c1_0_53 = ((~ (IData)(vlSelf->__PVT__dn)) 
                                               & (5U 
                                                  != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3)));
    vlSelf->__PVT__exp_div = (0xffU & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__opa_dn) 
                                        & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__opb_dn))
                                        ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                           + (IData)(vlSelf->__PVT__fi_ldz_2))
                                        : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__opb_dn)
                                            ? (IData)(vlSelf->__PVT__div_exp1)
                                            : (((0xfeU 
                                                 >= (IData)(vlSelf->__PVT__div_exp2)) 
                                                & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__opa_dn))
                                                ? (IData)(vlSelf->__PVT__div_exp2)
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__opa_dn) 
                                                       | ((~ (IData)(
                                                                     (0U 
                                                                      != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)))) 
                                                          & (~ 
                                                             ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_ovf_r) 
                                                              >> 1U)))))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_23) 
                                                    - (IData)(1U)))))));
    vlSelf->__PVT__exp_out = (0xffU & ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3))
                                        ? (IData)(vlSelf->__PVT__exp_div)
                                        : ((IData)(__VdfgRegularize_he8d392c1_0_19)
                                            ? ((5U 
                                                == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3))
                                                ? ((IData)(vlSelf->__PVT__f2i_zero)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->__PVT__f2i_max)
                                                     ? 0xffU
                                                     : 0U))
                                                : (
                                                   (0U 
                                                    != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm)
                                                    ? 
                                                   ((IData)(0x9eU) 
                                                    - (IData)(vlSelf->__PVT__u6__DOT__fi_ldz_r0))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__opas_r2)
                                                     ? 0x9eU
                                                     : 0U)))
                                            : ((((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_59) 
                                                 & (2U 
                                                    == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3))) 
                                                | ((2U 
                                                    == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3)) 
                                                   & ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_23) 
                                                      >> 8U)))
                                                ? 0U
                                                : ((IData)(vlSelf->__PVT__dn)
                                                    ? 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                                               >> 0x2eU)))
                                                    : (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_23))))));
    vlSelf->__PVT__exp_out_fe = (IData)((0xfeU == (IData)(vlSelf->__PVT__exp_out)));
    vlSelf->__VdfgRegularize_he8d392c1_0_38 = ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__sign) 
                                               & (0xffU 
                                                  == (IData)(vlSelf->__PVT__exp_out)));
    vlSelf->__VdfgRegularize_he8d392c1_0_66 = ((~ (IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->__PVT__exp_out)))) 
                                               & (IData)(vlSelf->__PVT__op_dn));
    vlSelf->__VdfgRegularize_he8d392c1_0_65 = (1U & 
                                               ((~ (IData)(vlSelf->__PVT__op_dn)) 
                                                & ((~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->__PVT__exp_out)))) 
                                                   & (~ 
                                                      ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_ovf_r) 
                                                       >> 1U)))));
    __VdfgRegularize_he8d392c1_0_64 = (1U & ((~ (IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->__PVT__exp_out)))) 
                                             | ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_23) 
                                                >> 8U)));
    vlSelf->__VdfgRegularize_he8d392c1_0_14 = (0x1ffU 
                                               & ((IData)(__VdfgRegularize_he8d392c1_0_13)
                                                   ? (IData)(vlSelf->__PVT__exp_out)
                                                   : 
                                                  ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                   - (IData)(1U))));
    vlSelf->__PVT__grs_sel_div = ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3)) 
                                  & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_ovf_r) 
                                      >> 1U) | ((IData)(vlSelf->__PVT__div_dn) 
                                                | (IData)(__VdfgRegularize_he8d392c1_0_64))));
    vlSelf->__VdfgRegularize_he8d392c1_0_63 = ((~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_ovf_r) 
                                                   >> 1U)) 
                                               & ((0U 
                                                   != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)) 
                                                  & (IData)(__VdfgRegularize_he8d392c1_0_64)));
    vlSelf->__VdfgRegularize_he8d392c1_0_62 = (IData)(
                                                      ((((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_14) 
                                                         >> 8U) 
                                                        | (IData)(__VdfgRegularize_he8d392c1_0_13)) 
                                                       | (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_63)));
    vlSelf->__PVT__shift_right = (0xffU & ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3))
                                            ? ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_15)
                                                ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)
                                                : ((IData)(vlSelf->__PVT__div_dn)
                                                    ? 
                                                   (- (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r))
                                                    : 
                                                   ((IData)(2U) 
                                                    + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r))))
                                            : (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_14)));
    vlSelf->__PVT__fract_in_shftr_1 = (0xffffffffffffULL 
                                       & ((0x20U & (IData)(vlSelf->__PVT__shift_right))
                                           ? ((0x10U 
                                               & (IData)(vlSelf->__PVT__shift_right))
                                               ? ((8U 
                                                   & (IData)(vlSelf->__PVT__shift_right))
                                                   ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__shift_right))
                                                    ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_right))
                                                     ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm
                                                      : 0ULL))))
                                               : ((8U 
                                                   & (IData)(vlSelf->__PVT__shift_right))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__shift_right))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_right))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x2fU)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x2eU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x2dU)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x2cU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_right))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x2bU)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x2aU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x29U)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x28U))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__shift_right))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_right))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x27U)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x26U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x25U)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x24U)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_right))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x23U)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x22U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x21U)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x20U))))))
                                           : ((0x10U 
                                               & (IData)(vlSelf->__PVT__shift_right))
                                               ? ((8U 
                                                   & (IData)(vlSelf->__PVT__shift_right))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__shift_right))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_right))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x1fU)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x1eU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x1dU)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x1cU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_right))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x1bU)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x1aU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x19U)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x18U))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__shift_right))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_right))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x17U)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x16U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x15U)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x14U)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_right))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x13U)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x12U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x11U)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x10U)))))
                                               : ((8U 
                                                   & (IData)(vlSelf->__PVT__shift_right))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__shift_right))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_right))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0xfU)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0xeU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0xdU)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0xcU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_right))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0xbU)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0xaU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 9U)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 8U))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__shift_right))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_right))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 7U)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 6U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 5U)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 4U)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_right))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 3U)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 2U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 1U)
                                                      : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm)))))));
    vlSelf->__PVT__shift_left = (0xffU & ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3))
                                           ? (((~ (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_20)) 
                                               & (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_66))
                                               ? (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_70)
                                               : ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_65)
                                                   ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)
                                                   : (IData)(vlSelf->__PVT__u6__DOT__fi_ldz_r0)))
                                           : ((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3))
                                               ? ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_62)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r))
                                                   : (IData)(vlSelf->__PVT__u6__DOT__fi_ldz_r0))
                                               : ((IData)(__VdfgRegularize_he8d392c1_0_19)
                                                   ? 
                                                  ((5U 
                                                    == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                    - (IData)(0x7dU))
                                                    : (IData)(vlSelf->__PVT__u6__DOT__fi_ldz_r0))
                                                   : 
                                                  ((1U 
                                                    & ((~ (IData)(
                                                                  (0U 
                                                                   != (IData)(vlSelf->__PVT__exp_out)))) 
                                                       | (IData)(vlSelf->__PVT__dn)))
                                                    ? 
                                                   ((0U 
                                                     != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r))
                                                     : 2U)
                                                    : (IData)(vlSelf->__PVT__u6__DOT__fi_ldz_r0))))));
    vlSelf->__PVT__fract_in_shftl_1 = (0xffffffffffffULL 
                                       & ((0x20U & (IData)(vlSelf->__PVT__shift_left))
                                           ? ((0x10U 
                                               & (IData)(vlSelf->__PVT__shift_left))
                                               ? ((8U 
                                                   & (IData)(vlSelf->__PVT__shift_left))
                                                   ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__shift_left))
                                                    ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_left))
                                                     ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm
                                                      : 0ULL))))
                                               : ((8U 
                                                   & (IData)(vlSelf->__PVT__shift_left))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__shift_left))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_left))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x2fU)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x2eU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x2dU)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x2cU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_left))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x2bU)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x2aU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x29U)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x28U))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__shift_left))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_left))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x27U)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x26U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x25U)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x24U)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_left))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x23U)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x22U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x21U)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x20U))))))
                                           : ((0x10U 
                                               & (IData)(vlSelf->__PVT__shift_left))
                                               ? ((8U 
                                                   & (IData)(vlSelf->__PVT__shift_left))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__shift_left))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_left))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x1fU)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x1eU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x1dU)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x1cU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_left))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x1bU)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x1aU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x19U)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x18U))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__shift_left))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_left))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x17U)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x16U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x15U)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x14U)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_left))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x13U)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x12U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x11U)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0x10U)))))
                                               : ((8U 
                                                   & (IData)(vlSelf->__PVT__shift_left))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__shift_left))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_left))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0xfU)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0xeU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0xdU)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0xcU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_left))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0xbU)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 0xaU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 9U)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 8U))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__shift_left))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_left))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 7U)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 6U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 5U)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 4U)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_left))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 3U)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 2U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm, 1U)
                                                      : vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm)))))));
    vlSelf->__VdfgRegularize_he8d392c1_0_21 = ((1U 
                                                & ((3U 
                                                    == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3))
                                                    ? 
                                                   ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_67) 
                                                    | ((~ (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_15)) 
                                                       & ((~ (IData)(vlSelf->__PVT__div_dn)) 
                                                          & ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_66) 
                                                             | ((~ 
                                                                 ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_ovf_r) 
                                                                  >> 1U)) 
                                                                | (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_65))))))
                                                    : 
                                                   ((2U 
                                                     != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3)) 
                                                    | ((~ (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_61)) 
                                                       | (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_62)))))
                                                ? (
                                                   ((0U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(vlSelf->__PVT__shift_left) 
                                                         >> 6U))) 
                                                    | ((IData)(vlSelf->__PVT__f2i_zero) 
                                                       & (5U 
                                                          == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3))))
                                                    ? 0ULL
                                                    : vlSelf->__PVT__fract_in_shftl_1)
                                                : (
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->__PVT__shift_right) 
                                                        >> 6U)))
                                                    ? 0ULL
                                                    : vlSelf->__PVT__fract_in_shftr_1));
    if (vlSelf->__PVT__grs_sel_div) {
        vlSelf->__PVT__s = (0U != (0x1ffffffU & (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_21)));
        vlSelf->__PVT__r = (1U & ((~ ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_15) 
                                      & ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0xffffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                                                 >> 0x17U)))))) 
                                         & (0x16U < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r))))) 
                                  & (IData)((vlSelf->__VdfgRegularize_he8d392c1_0_21 
                                             >> 0x18U))));
    } else {
        vlSelf->__PVT__s = ((0U != (0xffffffU & (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_21))) 
                            | ((IData)((vlSelf->__VdfgRegularize_he8d392c1_0_21 
                                        >> 0x18U)) 
                               & (3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3))));
        vlSelf->__PVT__r = (1U & (IData)((vlSelf->__VdfgRegularize_he8d392c1_0_21 
                                          >> 0x18U)));
    }
    vlSelf->__VdfgRegularize_he8d392c1_0_27 = ((IData)(
                                                       (vlSelf->__VdfgRegularize_he8d392c1_0_21 
                                                        >> 0x19U)) 
                                               & (IData)(vlSelf->__PVT__r));
    vlSelf->__VdfgRegularize_he8d392c1_0_30 = ((IData)(vlSelf->__PVT__r) 
                                               | (IData)(vlSelf->__PVT__s));
    vlSelf->__VdfgRegularize_he8d392c1_0_55 = (0xffffffU 
                                               & ((0x7fffffU 
                                                   & (IData)(
                                                             (vlSelf->__VdfgRegularize_he8d392c1_0_21 
                                                              >> 0x19U))) 
                                                  + 
                                                  ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_27) 
                                                   | ((IData)(vlSelf->__PVT__r) 
                                                      & (IData)(vlSelf->__PVT__s)))));
    vlSelf->__VdfgRegularize_he8d392c1_0_35 = ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_30) 
                                               | (3U 
                                                  == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3)));
    vlSelf->__VdfgRegularize_he8d392c1_0_54 = (0xffffffU 
                                               & ((0x7fffffU 
                                                   & (IData)(
                                                             (vlSelf->__VdfgRegularize_he8d392c1_0_21 
                                                              >> 0x19U))) 
                                                  + 
                                                  ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_37)
                                                    ? 
                                                   ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__sign)) 
                                                    & ((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_ovf_r) 
                                                         >> 1U) 
                                                        & ((0U 
                                                            != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm) 
                                                           & ((((~ 
                                                                 ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_23) 
                                                                  >> 8U)) 
                                                                | (IData)(vlSelf->__PVT__op_dn)) 
                                                               & (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_35)) 
                                                              | ((~ (IData)(
                                                                            (0U 
                                                                             != 
                                                                             (0x7fffffU 
                                                                              & (IData)(
                                                                                (vlSelf->__VdfgRegularize_he8d392c1_0_21 
                                                                                >> 0x19U)))))) 
                                                                 | ((~ (IData)(vlSelf->__PVT__op_dn)) 
                                                                    & (3U 
                                                                       != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3))))))) 
                                                       | ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_35) 
                                                          & (((~ 
                                                               ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_ovf_r) 
                                                                >> 1U)) 
                                                              & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_ovf_r)) 
                                                                 | (IData)(vlSelf->__PVT__exp_in_80))) 
                                                             | ((3U 
                                                                 == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3)) 
                                                                | ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_59) 
                                                                   & ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_23) 
                                                                      >> 8U)))))))
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3))
                                                     ? 
                                                    ((2U 
                                                      == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__rmode_r3)) 
                                                     & (((0U 
                                                          != 
                                                          (0xffffffU 
                                                           & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm))) 
                                                         & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__opas_r2)) 
                                                            & (0x80U 
                                                               > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)))) 
                                                        | (0U 
                                                           != 
                                                           (0x1ffffffU 
                                                            & (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_21)))))
                                                     : 
                                                    ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_30) 
                                                     & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__sign)) 
                                                        & ((~ 
                                                            ((IData)(vlSelf->__PVT__exp_out) 
                                                             >> 7U)) 
                                                           | (((IData)(vlSelf->__PVT__exp_out) 
                                                               >> 7U) 
                                                              & ((~ (IData)(vlSelf->__PVT__exp_out_fe)) 
                                                                 | ((~ (IData)(
                                                                               (0x7fffffU 
                                                                                == 
                                                                                (0x7fffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgRegularize_he8d392c1_0_21 
                                                                                >> 0x19U)))))) 
                                                                    | ((IData)(vlSelf->__PVT__exp_out_fe) 
                                                                       & (0xfffffe000000ULL 
                                                                          == 
                                                                          (0xfffffe000000ULL 
                                                                           & vlSelf->__VdfgRegularize_he8d392c1_0_21)))))))))))));
    if ((2U & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__rmode_r3))) {
        vlSelf->__PVT__fract_out_rnd = (0x7fffffU & 
                                        (((3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3)) 
                                          & ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_38) 
                                             & (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_53)))
                                          ? 0x7fffffU
                                          : vlSelf->__VdfgRegularize_he8d392c1_0_54));
        vlSelf->__PVT__exp_out_rnd = (0xffU & (((5U 
                                                 != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3)) 
                                                & (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_38))
                                                ? 0xfeU
                                                : (
                                                   (0x800000U 
                                                    & vlSelf->__VdfgRegularize_he8d392c1_0_54)
                                                    ? 
                                                   ((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_ovf_r) 
                                                      >> 1U) 
                                                     & (2U 
                                                        == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3)))
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__exp_out) 
                                                     - (IData)(1U))
                                                     : 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT__exp_out)))
                                                    : (IData)(vlSelf->__PVT__exp_out))));
    } else if ((1U & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__rmode_r3))) {
        vlSelf->__PVT__fract_out_rnd = (0x7fffffU & 
                                        (((3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3)) 
                                          & ((0xffU 
                                              == (IData)(vlSelf->__PVT__exp_out)) 
                                             & (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_53)))
                                          ? 0x7fffffU
                                          : (IData)(
                                                    (vlSelf->__VdfgRegularize_he8d392c1_0_21 
                                                     >> 0x19U))));
        vlSelf->__PVT__exp_out_rnd = (0xffU & (((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_27) 
                                                & ((IData)(vlSelf->__PVT__s) 
                                                   & (0xffU 
                                                      == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r))))
                                                ? (
                                                   (3U 
                                                    == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3))
                                                    ? 
                                                   ((0x16U 
                                                     < (IData)(vlSelf->__PVT__u6__DOT__fi_ldz_r0))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                     - 
                                                     (0x3fU 
                                                      & ((IData)(vlSelf->__PVT__u6__DOT__fi_ldz_r0) 
                                                         - (IData)(0x16U))))
                                                     : 
                                                    ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                     - 
                                                     (0x3fU 
                                                      & ((IData)(vlSelf->__PVT__u6__DOT__fi_ldz_r0) 
                                                         - (IData)(1U)))))
                                                    : (IData)(vlSelf->__PVT__exp_next_mi))
                                                : (
                                                   ((5U 
                                                     != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3)) 
                                                    & (0xffU 
                                                       == (IData)(vlSelf->__PVT__exp_out)))
                                                    ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)
                                                    : (IData)(vlSelf->__PVT__exp_out))));
    } else {
        vlSelf->__PVT__fract_out_rnd = (0x7fffffU & vlSelf->__VdfgRegularize_he8d392c1_0_55);
        vlSelf->__PVT__exp_out_rnd = (0xffU & ((IData)(vlSelf->__PVT__exp_out) 
                                               + (1U 
                                                  & (vlSelf->__VdfgRegularize_he8d392c1_0_55 
                                                     >> 0x17U))));
    }
    vlSelf->__PVT__max_num = (((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__rmode_r3)) 
                               & ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_37) 
                                  & ((IData)(__VdfgRegularize_he8d392c1_0_40) 
                                     | ((IData)(__VdfgRegularize_he8d392c1_0_41) 
                                        & ((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)) 
                                           & ((0x18U 
                                               > (IData)(vlSelf->__PVT__fi_ldz_2)) 
                                              & (0xfeU 
                                                 != (IData)(vlSelf->__PVT__exp_out)))))))) 
                              | ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3)) 
                                 & (((1U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__rmode_r3)) 
                                     & ((IData)(vlSelf->__PVT__div_inf) 
                                        | (((~ ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_ovf_r) 
                                                >> 1U)) 
                                            & (0xffU 
                                               == (IData)(vlSelf->__PVT__exp_out))) 
                                           | (IData)(__VdfgRegularize_he8d392c1_0_40)))) 
                                    | ((IData)(__VdfgRegularize_he8d392c1_0_52) 
                                       & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_ovf_r) 
                                           & ((0xffU 
                                               == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)) 
                                              & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__sign) 
                                                 & (IData)(
                                                           (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                                            >> 0x2fU))))) 
                                          | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__sign) 
                                              & (((IData)(
                                                          (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                                           >> 0x2fU)) 
                                                  & (IData)(vlSelf->__PVT__div_inf)) 
                                                 | (((~ 
                                                      ((IData)(vlSelf->__PVT__exp_out_rnd) 
                                                       >> 7U)) 
                                                     & ((~ 
                                                         ((IData)(vlSelf->__PVT__exp_in_80) 
                                                          | (0x7fU 
                                                             == (IData)(vlSelf->__PVT__exp_out)))) 
                                                        & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                           >> 7U))) 
                                                    | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                        >> 7U) 
                                                       & (((IData)(vlSelf->__PVT__exp_out_rnd) 
                                                           >> 7U) 
                                                          & ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_38) 
                                                             & ((IData)(vlSelf->__PVT__op_dn) 
                                                                & (0xfeU 
                                                                   < (IData)(vlSelf->__PVT__div_exp1))))))))) 
                                             | ((~ (IData)(
                                                           (0U 
                                                            != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)))) 
                                                & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__sign) 
                                                   & ((IData)(vlSelf->__PVT__div_inf) 
                                                      | ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_38) 
                                                         & (0x18U 
                                                            > (IData)(vlSelf->__PVT__fi_ldz_2))))))))))));
    vlSelf->__PVT__inf_out = ((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__rmode_r3) 
                                >> 1U) & ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_37) 
                                          & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__sign)) 
                                             & (((3U 
                                                  != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3)) 
                                                 & (0xffU 
                                                    == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r))) 
                                                | ((IData)(__VdfgRegularize_he8d392c1_0_40) 
                                                   & ((~ (IData)(
                                                                 (0U 
                                                                  != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)))) 
                                                      | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                         >> 7U))))))) 
                              | (((IData)(vlSelf->__PVT__div_inf) 
                                  & ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3)) 
                                     & ((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__rmode_r3)) 
                                        | ((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__rmode_r3) 
                                             >> 1U) 
                                            & ((~ (IData)(
                                                          (0xffU 
                                                           == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)))) 
                                               & (IData)(
                                                         ((0U 
                                                           == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_ovf_r)) 
                                                          & (~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__sign)))))) 
                                           | ((IData)(__VdfgRegularize_he8d392c1_0_52) 
                                              & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_ovf_r) 
                                                 & ((~ (IData)(
                                                               (0U 
                                                                != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)))) 
                                                    & (~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__sign))))))))) 
                                 | ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3)) 
                                    & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__rmode_r3) 
                                        >> 1U) & ((0xffU 
                                                   == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)) 
                                                  & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__sign)) 
                                                     & ((IData)(vlSelf->__PVT__op_dn) 
                                                        & ((0x18U 
                                                            > (IData)(vlSelf->__PVT__fi_ldz_2)) 
                                                           & (0xfeU 
                                                              != (IData)(vlSelf->__PVT__exp_out_rnd))))))))));
    vlSelf->__VdfgRegularize_he8d392c1_0_51 = (((IData)(__VdfgRegularize_he8d392c1_0_47) 
                                                & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_ovf_r) 
                                                   & (0U 
                                                      == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__rmode_r3)))) 
                                               | ((IData)(vlSelf->__PVT__inf_out) 
                                                  | (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_46)));
    vlSelf->__PVT__ovf0 = (((~ (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_48)) 
                            & ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_51) 
                               | ((~ (IData)(vlSelf->__PVT__max_num)) 
                                  & (0xffU == (IData)(vlSelf->__PVT__exp_out_rnd))))) 
                           & ((1U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__rmode_r3)) 
                              & (5U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3))));
    vlSelf->__PVT__exp_out_final = ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_48)
                                     ? 0U : ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_51)
                                              ? 0xffU
                                              : ((IData)(vlSelf->__PVT__max_num)
                                                  ? 0xfeU
                                                  : (IData)(vlSelf->__PVT__exp_out_rnd))));
    vlSelf->__PVT__out = (((IData)(vlSelf->__PVT__exp_out_final) 
                           << 0x17U) | (((IData)(vlSelf->__PVT__inf_out) 
                                         | ((IData)(vlSelf->__PVT__ovf0) 
                                            | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__or_result)))
                                         ? 0U : (((IData)(vlSelf->__PVT__max_num) 
                                                  | (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_46))
                                                  ? 0x7fffffU
                                                  : vlSelf->__PVT__fract_out_rnd)));
    vlSelf->__PVT__undeflow_div = ((~ ((IData)(__VdfgRegularize_he8d392c1_0_40) 
                                       & (0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__rmode_r3)))) 
                                   & ((~ (IData)(vlSelf->__PVT__inf_out)) 
                                      & ((~ (IData)(vlSelf->__PVT__max_num)) 
                                         & ((0xffU 
                                             != (IData)(vlSelf->__PVT__exp_out_final)) 
                                            & (((0U 
                                                 != 
                                                 (0x1ffffffU 
                                                  & (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_21))) 
                                                & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__opb_dn)) 
                                                   & ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_67) 
                                                      | ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_15) 
                                                         | ((IData)(vlSelf->__PVT__div_dn) 
                                                            | ((~ (IData)(
                                                                          (0U 
                                                                           != (IData)(vlSelf->__PVT__exp_out)))) 
                                                               | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_ovf_r) 
                                                                  >> 1U))))))) 
                                               | (((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_59) 
                                                   & (((IData)(vlSelf->__PVT__op_dn) 
                                                       & ((0x16U 
                                                           < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)) 
                                                          & (0x17U 
                                                             > (IData)(vlSelf->__PVT__u6__DOT__fi_ldz_r0)))) 
                                                      | (((IData)(vlSelf->__PVT__op_dn) 
                                                          & ((0x17U 
                                                              > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)) 
                                                             & (0x17U 
                                                                > (IData)(vlSelf->__PVT__u6__DOT__fi_ldz_r0)))) 
                                                         | ((~ (IData)(vlSelf->__PVT__op_dn)) 
                                                            & (((1U 
                                                                 & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                                    >> 7U)) 
                                                                == 
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__exp_div) 
                                                                    >> 7U))) 
                                                               | ((IData)(
                                                                          ((0xfeU 
                                                                            == 
                                                                            (0xfeU 
                                                                             & (IData)(vlSelf->__PVT__exp_div))) 
                                                                           & (~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)))))) 
                                                                  | ((0x7fU 
                                                                      > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)) 
                                                                     & (0x20U 
                                                                        < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r))))))))) 
                                                  | ((IData)(__VdfgRegularize_he8d392c1_0_41) 
                                                     & (((IData)(vlSelf->__PVT__op_dn) 
                                                         & ((~ (IData)(
                                                                       (0U 
                                                                        != (IData)(vlSelf->__PVT__exp_out)))) 
                                                            & (0x17U 
                                                               > (IData)(vlSelf->__PVT__u6__DOT__fi_ldz_r0)))) 
                                                        | ((~ (IData)(
                                                                      (0U 
                                                                       != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)))) 
                                                           | ((~ (IData)(vlSelf->__PVT__op_dn)) 
                                                              & ((0x17U 
                                                                  > (IData)(vlSelf->__PVT__u6__DOT__fi_ldz_r0)) 
                                                                 & ((1U 
                                                                     == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)) 
                                                                    & (~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__PVT__exp_out))))))))))))))));
    if ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3))) {
        vlSelf->__PVT__overflow = (1U & ((IData)(vlSelf->__PVT__inf_out) 
                                         | (((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__rmode_r3)) 
                                             & (IData)(vlSelf->__PVT__max_num)) 
                                            | ((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r) 
                                                 >> 7U) 
                                                & ((IData)(vlSelf->__PVT__op_dn) 
                                                   & (0xffU 
                                                      == (IData)(vlSelf->__PVT__exp_out)))) 
                                               | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_ovf_r) 
                                                  & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_ovf_r) 
                                                      >> 1U) 
                                                     | (0xffU 
                                                        == (IData)(vlSelf->__PVT__exp_out))))))));
        vlSelf->__PVT__underflow = (1U & (IData)(vlSelf->__PVT__undeflow_div));
    } else {
        vlSelf->__PVT__overflow = (1U & ((IData)(vlSelf->__PVT__ovf0) 
                                         | ((~ (IData)(vlSelf->__PVT__dn)) 
                                            & (0xffU 
                                               == (IData)(vlSelf->__PVT__exp_out)))));
        vlSelf->__PVT__underflow = (1U & ((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fpu_op_r3))
                                           ? (((0U 
                                                != 
                                                (0x1ffffffU 
                                                 & (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_21))) 
                                               & ((~ (IData)(
                                                             (0xffU 
                                                              == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_r)))) 
                                                  & (((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_14) 
                                                      >> 8U) 
                                                     | ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_61) 
                                                        | (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_63))))) 
                                              | ((~ (IData)(
                                                            (0U 
                                                             != 
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSelf->__VdfgRegularize_he8d392c1_0_21 
                                                                         >> 0x19U)))))) 
                                                 & ((0U 
                                                     != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm) 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__exp_ovf_r) 
                                                       >> 1U))))
                                           : ((~ (IData)(
                                                         (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__fract_denorm 
                                                          >> 0x2fU))) 
                                              & ((~ (IData)(vlSelf->__PVT__dn)) 
                                                 & ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_23) 
                                                    >> 8U)))));
    }
}

VL_ATTR_COLD void Vco_sim_syn2_post_norm___stl_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4__0(Vco_sim_syn2_post_norm* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vco_sim_syn2_post_norm___stl_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4__0\n"); );
    // Init
    CData/*0:0*/ __VdfgRegularize_he8d392c1_0_8;
    __VdfgRegularize_he8d392c1_0_8 = 0;
    CData/*0:0*/ __VdfgRegularize_he8d392c1_0_10;
    __VdfgRegularize_he8d392c1_0_10 = 0;
    CData/*0:0*/ __VdfgRegularize_he8d392c1_0_19;
    __VdfgRegularize_he8d392c1_0_19 = 0;
    CData/*0:0*/ __VdfgRegularize_he8d392c1_0_64;
    __VdfgRegularize_he8d392c1_0_64 = 0;
    // Body
    vlSelf->__Vcellout__u3__shift_out = (0xffffffffffffULL 
                                         & ((0x20U 
                                             & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                - (IData)(0x3dU)))
                                             ? ((0x10U 
                                                 & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                    - (IData)(0x3dU)))
                                                 ? 
                                                ((8U 
                                                  & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                     - (IData)(0x3dU)))
                                                  ? 
                                                 ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                  << 0x14U)
                                                  : 
                                                 ((4U 
                                                   & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                      - (IData)(0x3dU)))
                                                   ? 
                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                   << 0x14U)
                                                   : 
                                                  ((2U 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                       - (IData)(0x3dU)))
                                                    ? 
                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                    << 0x14U)
                                                    : 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                     << 0x14U)
                                                     : 0ULL))))
                                                 : 
                                                ((8U 
                                                  & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                     - (IData)(0x3dU)))
                                                  ? 
                                                 ((4U 
                                                   & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                      - (IData)(0x3dU)))
                                                   ? 
                                                  ((2U 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                       - (IData)(0x3dU)))
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x2fU)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x2eU))
                                                    : 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x2dU)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x2cU)))
                                                   : 
                                                  ((2U 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                       - (IData)(0x3dU)))
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x2bU)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x2aU))
                                                    : 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x29U)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x28U))))
                                                  : 
                                                 ((4U 
                                                   & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                      - (IData)(0x3dU)))
                                                   ? 
                                                  ((2U 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                       - (IData)(0x3dU)))
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x27U)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x26U))
                                                    : 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x25U)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x24U)))
                                                   : 
                                                  ((2U 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                       - (IData)(0x3dU)))
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x23U)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x22U))
                                                    : 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x21U)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x20U))))))
                                             : ((0x10U 
                                                 & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                    - (IData)(0x3dU)))
                                                 ? 
                                                ((8U 
                                                  & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                     - (IData)(0x3dU)))
                                                  ? 
                                                 ((4U 
                                                   & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                      - (IData)(0x3dU)))
                                                   ? 
                                                  ((2U 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                       - (IData)(0x3dU)))
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x1fU)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x1eU))
                                                    : 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x1dU)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x1cU)))
                                                   : 
                                                  ((2U 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                       - (IData)(0x3dU)))
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x1bU)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x1aU))
                                                    : 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x19U)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x18U))))
                                                  : 
                                                 ((4U 
                                                   & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                      - (IData)(0x3dU)))
                                                   ? 
                                                  ((2U 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                       - (IData)(0x3dU)))
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x17U)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x16U))
                                                    : 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x15U)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x14U)))
                                                   : 
                                                  ((2U 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                       - (IData)(0x3dU)))
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x13U)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x12U))
                                                    : 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x11U)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0x10U)))))
                                                 : 
                                                ((8U 
                                                  & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                     - (IData)(0x3dU)))
                                                  ? 
                                                 ((4U 
                                                   & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                      - (IData)(0x3dU)))
                                                   ? 
                                                  ((2U 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                       - (IData)(0x3dU)))
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0xfU)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0xeU))
                                                    : 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0xdU)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0xcU)))
                                                   : 
                                                  ((2U 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                       - (IData)(0x3dU)))
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0xbU)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 0xaU))
                                                    : 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 9U)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 8U))))
                                                  : 
                                                 ((4U 
                                                   & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                      - (IData)(0x3dU)))
                                                   ? 
                                                  ((2U 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                       - (IData)(0x3dU)))
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 7U)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 6U))
                                                    : 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 5U)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 4U)))
                                                   : 
                                                  ((2U 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                       - (IData)(0x3dU)))
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 3U)
                                                     : 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 2U))
                                                    : 
                                                   ((1U 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    VL_SHIFTL_QQI(48,48,32, 
                                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                   << 0x14U), 1U)
                                                     : 
                                                    ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                     << 0x14U))))))));
    vlSelf->__VdfgRegularize_he8d392c1_0_37 = ((2U 
                                                == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3)) 
                                               | (3U 
                                                  == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3)));
    vlSelf->__PVT__op_dn = ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opa_dn) 
                            | (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opb_dn));
    __VdfgRegularize_he8d392c1_0_19 = ((5U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3)) 
                                       | (4U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3)));
    __VdfgRegularize_he8d392c1_0_8 = ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                      < ((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3))
                                          ? 0x7eU : 0x7fU));
    vlSelf->__VdfgRegularize_he8d392c1_0_70 = ((0U 
                                                != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r))
                                                ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)
                                                : 0U);
    vlSelf->__PVT__div_dn = ((IData)(vlSelf->__PVT__op_dn) 
                             & ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_70) 
                                >> 8U));
    __VdfgRegularize_he8d392c1_0_10 = ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opas_r2) 
                                       & (IData)(__VdfgRegularize_he8d392c1_0_8));
    if ((0x8000000U & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0U;
    } else if ((1U == (3U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q 
                             >> 0x1aU)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 1U;
    } else if ((1U == (7U & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q 
                             >> 0x19U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 2U;
    } else if ((1U == (0xfU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q 
                               >> 0x18U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 3U;
    } else if ((1U == (0x1fU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q 
                                >> 0x17U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 4U;
    } else if ((1U == (0x3fU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q 
                                >> 0x16U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 5U;
    } else if ((1U == (0x7fU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q 
                                >> 0x15U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 6U;
    } else if ((1U == (0xffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q 
                                >> 0x14U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 7U;
    } else if ((1U == (0x1ffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q 
                                 >> 0x13U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 8U;
    } else if ((1U == (0x3ffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q 
                                 >> 0x12U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 9U;
    } else if ((1U == (0x7ffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q 
                                 >> 0x11U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0xaU;
    } else if ((1U == (0xfffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q 
                                 >> 0x10U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0xbU;
    } else if ((1U == (0x1fffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q 
                                  >> 0xfU)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0xcU;
    } else if ((1U == (0x3fffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q 
                                  >> 0xeU)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0xdU;
    } else if ((1U == (0x7fffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q 
                                  >> 0xdU)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0xeU;
    } else if ((1U == (0xffffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q 
                                  >> 0xcU)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0xfU;
    } else if ((1U == (0x1ffffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q 
                                   >> 0xbU)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x10U;
    } else if ((1U == (0x3ffffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q 
                                   >> 0xaU)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x11U;
    } else if ((1U == (0x7ffffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q 
                                   >> 9U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x12U;
    } else if ((1U == (0xfffffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q 
                                   >> 8U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x13U;
    } else if ((1U == (0x1fffffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q 
                                    >> 7U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x14U;
    } else if ((1U == (0x3fffffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q 
                                    >> 6U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x15U;
    } else if ((1U == (0x7fffffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q 
                                    >> 5U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x16U;
    } else if ((1U == (0xffffffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q 
                                    >> 4U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x17U;
    } else if ((1U == (0x1ffffffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q 
                                     >> 3U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x18U;
    } else if ((1U == (0x3ffffffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q 
                                     >> 2U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x19U;
    } else if ((1U == (0x7ffffffU & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q 
                                     >> 1U)))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x1aU;
    } else if ((1U == vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x1bU;
    } else if ((1U == (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q 
                       << 1U))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x1cU;
    } else if ((1U == (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q 
                       << 2U))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x1dU;
    } else if ((1U == (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q 
                       << 3U))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x1eU;
    } else if ((1U == (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q 
                       << 4U))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x1fU;
    } else if ((1ULL == ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                         << 5U))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x20U;
    } else if ((1ULL == ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                         << 6U))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x21U;
    } else if ((1ULL == ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                         << 7U))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x22U;
    } else if ((1ULL == ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                         << 8U))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x23U;
    } else if ((1ULL == ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                         << 9U))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x24U;
    } else if ((1ULL == ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                         << 0xaU))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x25U;
    } else if ((1ULL == ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                         << 0xbU))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x26U;
    } else if ((1ULL == ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                         << 0xcU))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x27U;
    } else if ((1ULL == ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                         << 0xdU))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x28U;
    } else if ((1ULL == ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                         << 0xeU))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x29U;
    } else if ((1ULL == ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                         << 0xfU))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x2aU;
    } else if ((1ULL == ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                         << 0x10U))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x2bU;
    } else if ((1ULL == ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                         << 0x11U))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x2cU;
    } else if ((1ULL == ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                         << 0x12U))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x2dU;
    } else if ((1ULL == ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                         << 0x13U))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x2eU;
    } else if ((1ULL == ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                         << 0x14U))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x2fU;
    } else if ((0ULL == ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                         << 0x14U))) {
        vlSelf->__PVT__u6__DOT__fi_ldz_r0 = 0x30U;
    }
    vlSelf->__PVT__div_exp2 = (0xffU & (((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)) 
                                        - (IData)(vlSelf->__PVT__u6__DOT__fi_ldz_r0)));
    vlSelf->__PVT__fi_ldz_2 = ((0x80U & (((IData)(0x17U) 
                                          - (IData)(vlSelf->__PVT__u6__DOT__fi_ldz_r0)) 
                                         << 1U)) | 
                               (0x7fU & ((IData)(0x17U) 
                                         - (IData)(vlSelf->__PVT__u6__DOT__fi_ldz_r0))));
    vlSelf->__PVT__exp_next_mi = (0x1ffU & (((IData)(1U) 
                                             + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)) 
                                            - (0x3fU 
                                               & ((IData)(vlSelf->__PVT__u6__DOT__fi_ldz_r0) 
                                                  - (IData)(1U)))));
    vlSelf->__VdfgRegularize_he8d392c1_0_23 = (0x1ffU 
                                               & ((0x8000000U 
                                                   & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r))
                                                   : (IData)(vlSelf->__PVT__exp_next_mi)));
    vlSelf->__PVT__f2i_max = (((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opas_r2)) 
                               & (0x9dU < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r))) 
                              | ((IData)(__VdfgRegularize_he8d392c1_0_10) 
                                 & ((0U != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q) 
                                    & (3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3)))));
    vlSelf->__PVT__f2i_zero = (((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opas_r2)) 
                                & (IData)(__VdfgRegularize_he8d392c1_0_8)) 
                               | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opas_r2) 
                                   & (0x9dU < (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r))) 
                                  | ((IData)(__VdfgRegularize_he8d392c1_0_10) 
                                     & ((~ (IData)(
                                                   (0U 
                                                    != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q))) 
                                        | (3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3))))));
    vlSelf->__PVT__div_exp1 = (0x1ffU & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                          - (IData)(1U)) 
                                         + (IData)(vlSelf->__PVT__fi_ldz_2)));
    vlSelf->__PVT__dn = ((2U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3)) 
                         & ((3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3)) 
                            & ((~ (IData)((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)))) 
                               | ((~ (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q 
                                      >> 0x1bU)) & 
                                  ((IData)(vlSelf->__PVT__exp_next_mi) 
                                   >> 8U)))));
    vlSelf->__VdfgRegularize_he8d392c1_0_46 = ((IData)(vlSelf->__PVT__f2i_max) 
                                               & (5U 
                                                  == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3)));
    vlSelf->__PVT__div_inf = ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opb_dn) 
                              & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opa_dn)) 
                                 & (0x7fU > (0xffU 
                                             & (IData)(vlSelf->__PVT__div_exp1)))));
    vlSelf->__VdfgRegularize_he8d392c1_0_53 = ((~ (IData)(vlSelf->__PVT__dn)) 
                                               & (5U 
                                                  != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3)));
    vlSelf->__PVT__exp_div = (0xffU & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opa_dn) 
                                        & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opb_dn))
                                        ? ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                           + (IData)(vlSelf->__PVT__fi_ldz_2))
                                        : ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opb_dn)
                                            ? (IData)(vlSelf->__PVT__div_exp1)
                                            : (((0xfeU 
                                                 >= (IData)(vlSelf->__PVT__div_exp2)) 
                                                & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opa_dn))
                                                ? (IData)(vlSelf->__PVT__div_exp2)
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opa_dn) 
                                                       | (~ (IData)(
                                                                    (0U 
                                                                     != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r))))))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_23) 
                                                    - (IData)(1U)))))));
    vlSelf->__PVT__exp_out = (0xffU & ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3))
                                        ? (IData)(vlSelf->__PVT__exp_div)
                                        : ((IData)(__VdfgRegularize_he8d392c1_0_19)
                                            ? ((5U 
                                                == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3))
                                                ? ((IData)(vlSelf->__PVT__f2i_zero)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->__PVT__f2i_max)
                                                     ? 0xffU
                                                     : 0U))
                                                : (
                                                   (0U 
                                                    != vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)
                                                    ? 
                                                   ((IData)(0x9eU) 
                                                    - (IData)(vlSelf->__PVT__u6__DOT__fi_ldz_r0))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opas_r2)
                                                     ? 0x9eU
                                                     : 0U)))
                                            : (((2U 
                                                 == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3)) 
                                                & ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_23) 
                                                   >> 8U))
                                                ? 0U
                                                : ((IData)(vlSelf->__PVT__dn)
                                                    ? 
                                                   (3U 
                                                    & (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q 
                                                       >> 0x1aU))
                                                    : (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_23))))));
    vlSelf->__VdfgRegularize_he8d392c1_0_14 = (0x1ffU 
                                               & ((0U 
                                                   != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                   - (IData)(1U))
                                                   : (IData)(vlSelf->__PVT__exp_out)));
    vlSelf->__PVT__exp_out_fe = (IData)((0xfeU == (IData)(vlSelf->__PVT__exp_out)));
    vlSelf->__VdfgRegularize_he8d392c1_0_38 = ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__sign) 
                                               & (0xffU 
                                                  == (IData)(vlSelf->__PVT__exp_out)));
    __VdfgRegularize_he8d392c1_0_64 = (1U & ((~ (IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->__PVT__exp_out)))) 
                                             | ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_23) 
                                                >> 8U)));
    vlSelf->__PVT__grs_sel_div = ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3)) 
                                  & ((IData)(vlSelf->__PVT__div_dn) 
                                     | (IData)(__VdfgRegularize_he8d392c1_0_64)));
    vlSelf->__VdfgRegularize_he8d392c1_0_63 = ((0U 
                                                != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)) 
                                               & (IData)(__VdfgRegularize_he8d392c1_0_64));
    vlSelf->__VdfgRegularize_he8d392c1_0_62 = (1U & 
                                               (((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_14) 
                                                 >> 8U) 
                                                | ((~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)))) 
                                                   | (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_63))));
    vlSelf->__PVT__shift_right = (0xffU & ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3))
                                            ? ((IData)(vlSelf->__PVT__div_dn)
                                                ? (- (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r))
                                                : ((IData)(2U) 
                                                   + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)))
                                            : (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_14)));
    vlSelf->__PVT__fract_in_shftr_1 = (0xffffffffffffULL 
                                       & ((0x20U & (IData)(vlSelf->__PVT__shift_right))
                                           ? ((0x10U 
                                               & (IData)(vlSelf->__PVT__shift_right))
                                               ? ((8U 
                                                   & (IData)(vlSelf->__PVT__shift_right))
                                                   ? 
                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                   << 0x14U)
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__shift_right))
                                                    ? 
                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                    << 0x14U)
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_right))
                                                     ? 
                                                    ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                     << 0x14U)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                      << 0x14U)
                                                      : 0ULL))))
                                               : ((8U 
                                                   & (IData)(vlSelf->__PVT__shift_right))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__shift_right))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_right))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x2fU)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x2eU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x2dU)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x2cU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_right))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x2bU)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x2aU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x29U)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x28U))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__shift_right))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_right))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x27U)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x26U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x25U)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x24U)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_right))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x23U)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x22U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x21U)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x20U))))))
                                           : ((0x10U 
                                               & (IData)(vlSelf->__PVT__shift_right))
                                               ? ((8U 
                                                   & (IData)(vlSelf->__PVT__shift_right))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__shift_right))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_right))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x1fU)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x1eU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x1dU)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x1cU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_right))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x1bU)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x1aU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x19U)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x18U))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__shift_right))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_right))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x17U)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x16U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x15U)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x14U)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_right))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x13U)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x12U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x11U)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x10U)))))
                                               : ((8U 
                                                   & (IData)(vlSelf->__PVT__shift_right))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__shift_right))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_right))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0xfU)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0xeU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0xdU)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0xcU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_right))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0xbU)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0xaU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 9U)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 8U))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__shift_right))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_right))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 7U)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 6U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 5U)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 4U)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_right))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 3U)
                                                      : 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 2U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_right))
                                                      ? 
                                                     VL_SHIFTR_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 1U)
                                                      : 
                                                     ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                      << 0x14U))))))));
    vlSelf->__PVT__shift_left = (0xffU & ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3))
                                           ? (((~ (IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->__PVT__exp_out)))) 
                                               & (IData)(vlSelf->__PVT__op_dn))
                                               ? (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_70)
                                               : ((1U 
                                                   & ((~ (IData)(vlSelf->__PVT__op_dn)) 
                                                      & (~ (IData)(
                                                                   (0U 
                                                                    != (IData)(vlSelf->__PVT__exp_out))))))
                                                   ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)
                                                   : (IData)(vlSelf->__PVT__u6__DOT__fi_ldz_r0)))
                                           : ((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3))
                                               ? ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_62)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r))
                                                   : (IData)(vlSelf->__PVT__u6__DOT__fi_ldz_r0))
                                               : ((IData)(__VdfgRegularize_he8d392c1_0_19)
                                                   ? 
                                                  ((5U 
                                                    == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                    - (IData)(0x7dU))
                                                    : (IData)(vlSelf->__PVT__u6__DOT__fi_ldz_r0))
                                                   : 
                                                  ((1U 
                                                    & ((~ (IData)(
                                                                  (0U 
                                                                   != (IData)(vlSelf->__PVT__exp_out)))) 
                                                       | (IData)(vlSelf->__PVT__dn)))
                                                    ? 
                                                   ((0U 
                                                     != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r))
                                                     : 2U)
                                                    : (IData)(vlSelf->__PVT__u6__DOT__fi_ldz_r0))))));
    vlSelf->__PVT__fract_in_shftl_1 = (0xffffffffffffULL 
                                       & ((0x20U & (IData)(vlSelf->__PVT__shift_left))
                                           ? ((0x10U 
                                               & (IData)(vlSelf->__PVT__shift_left))
                                               ? ((8U 
                                                   & (IData)(vlSelf->__PVT__shift_left))
                                                   ? 
                                                  ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                   << 0x14U)
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__shift_left))
                                                    ? 
                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                    << 0x14U)
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_left))
                                                     ? 
                                                    ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                     << 0x14U)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                      << 0x14U)
                                                      : 0ULL))))
                                               : ((8U 
                                                   & (IData)(vlSelf->__PVT__shift_left))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__shift_left))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_left))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x2fU)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x2eU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x2dU)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x2cU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_left))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x2bU)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x2aU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x29U)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x28U))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__shift_left))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_left))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x27U)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x26U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x25U)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x24U)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_left))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x23U)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x22U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x21U)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x20U))))))
                                           : ((0x10U 
                                               & (IData)(vlSelf->__PVT__shift_left))
                                               ? ((8U 
                                                   & (IData)(vlSelf->__PVT__shift_left))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__shift_left))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_left))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x1fU)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x1eU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x1dU)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x1cU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_left))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x1bU)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x1aU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x19U)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x18U))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__shift_left))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_left))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x17U)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x16U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x15U)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x14U)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_left))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x13U)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x12U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x11U)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0x10U)))))
                                               : ((8U 
                                                   & (IData)(vlSelf->__PVT__shift_left))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__shift_left))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_left))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0xfU)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0xeU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0xdU)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0xcU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_left))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0xbU)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 0xaU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 9U)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 8U))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->__PVT__shift_left))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_left))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 7U)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 6U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 5U)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 4U)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__shift_left))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 3U)
                                                      : 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 2U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__shift_left))
                                                      ? 
                                                     VL_SHIFTL_QQI(48,48,32, 
                                                                   ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                                    << 0x14U), 1U)
                                                      : 
                                                     ((QData)((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                      << 0x14U))))))));
    vlSelf->__VdfgRegularize_he8d392c1_0_21 = ((1U 
                                                & ((3U 
                                                    == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3))
                                                    ? 
                                                   (~ (IData)(vlSelf->__PVT__div_dn))
                                                    : 
                                                   ((2U 
                                                     != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3)) 
                                                    | ((0U 
                                                        != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)) 
                                                       | (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_62)))))
                                                ? (
                                                   ((0U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(vlSelf->__PVT__shift_left) 
                                                         >> 6U))) 
                                                    | ((IData)(vlSelf->__PVT__f2i_zero) 
                                                       & (5U 
                                                          == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3))))
                                                    ? 0ULL
                                                    : vlSelf->__PVT__fract_in_shftl_1)
                                                : (
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelf->__PVT__shift_right) 
                                                        >> 6U)))
                                                    ? 0ULL
                                                    : vlSelf->__PVT__fract_in_shftr_1));
    if (vlSelf->__PVT__grs_sel_div) {
        vlSelf->__PVT__s = (0U != (0x1ffffffU & (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_21)));
        vlSelf->__PVT__r = (1U & (IData)((vlSelf->__VdfgRegularize_he8d392c1_0_21 
                                          >> 0x18U)));
    } else {
        vlSelf->__PVT__s = ((0U != (0xffffffU & (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_21))) 
                            | ((IData)((vlSelf->__VdfgRegularize_he8d392c1_0_21 
                                        >> 0x18U)) 
                               & (3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3))));
        vlSelf->__PVT__r = (1U & (IData)((vlSelf->__VdfgRegularize_he8d392c1_0_21 
                                          >> 0x18U)));
    }
    vlSelf->__VdfgRegularize_he8d392c1_0_30 = ((IData)(vlSelf->__PVT__r) 
                                               | (IData)(vlSelf->__PVT__s));
    vlSelf->__VdfgRegularize_he8d392c1_0_27 = ((IData)(
                                                       (vlSelf->__VdfgRegularize_he8d392c1_0_21 
                                                        >> 0x19U)) 
                                               & (IData)(vlSelf->__PVT__r));
    vlSelf->__VdfgRegularize_he8d392c1_0_54 = (0xffffffU 
                                               & ((0x7fffffU 
                                                   & (IData)(
                                                             (vlSelf->__VdfgRegularize_he8d392c1_0_21 
                                                              >> 0x19U))) 
                                                  + 
                                                  ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_37)
                                                    ? 
                                                   ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__sign)) 
                                                    & ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_30) 
                                                       | (3U 
                                                          == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3))))
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3))
                                                     ? 
                                                    ((2U 
                                                      == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3)) 
                                                     & (((0U 
                                                          != 
                                                          (0xfU 
                                                           & vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q)) 
                                                         & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opas_r2)) 
                                                            & (0x80U 
                                                               > (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)))) 
                                                        | (0U 
                                                           != 
                                                           (0x1ffffffU 
                                                            & (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_21)))))
                                                     : 
                                                    ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_30) 
                                                     & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__sign)) 
                                                        & ((~ 
                                                            ((IData)(vlSelf->__PVT__exp_out) 
                                                             >> 7U)) 
                                                           | (((IData)(vlSelf->__PVT__exp_out) 
                                                               >> 7U) 
                                                              & ((~ (IData)(vlSelf->__PVT__exp_out_fe)) 
                                                                 | ((~ (IData)(
                                                                               (0x7fffffU 
                                                                                == 
                                                                                (0x7fffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgRegularize_he8d392c1_0_21 
                                                                                >> 0x19U)))))) 
                                                                    | ((IData)(vlSelf->__PVT__exp_out_fe) 
                                                                       & (0xfffffe000000ULL 
                                                                          == 
                                                                          (0xfffffe000000ULL 
                                                                           & vlSelf->__VdfgRegularize_he8d392c1_0_21)))))))))))));
    vlSelf->__VdfgRegularize_he8d392c1_0_55 = (0xffffffU 
                                               & ((0x7fffffU 
                                                   & (IData)(
                                                             (vlSelf->__VdfgRegularize_he8d392c1_0_21 
                                                              >> 0x19U))) 
                                                  + 
                                                  ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_27) 
                                                   | ((IData)(vlSelf->__PVT__r) 
                                                      & (IData)(vlSelf->__PVT__s)))));
    if ((2U & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3))) {
        vlSelf->__PVT__fract_out_rnd = (0x7fffffU & 
                                        (((3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3)) 
                                          & ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_38) 
                                             & (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_53)))
                                          ? 0x7fffffU
                                          : vlSelf->__VdfgRegularize_he8d392c1_0_54));
        vlSelf->__PVT__exp_out_rnd = (0xffU & (((5U 
                                                 != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3)) 
                                                & (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_38))
                                                ? 0xfeU
                                                : (
                                                   (0x800000U 
                                                    & vlSelf->__VdfgRegularize_he8d392c1_0_54)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__exp_out))
                                                    : (IData)(vlSelf->__PVT__exp_out))));
    } else if ((1U & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3))) {
        vlSelf->__PVT__fract_out_rnd = (0x7fffffU & 
                                        (((3U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3)) 
                                          & ((0xffU 
                                              == (IData)(vlSelf->__PVT__exp_out)) 
                                             & (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_53)))
                                          ? 0x7fffffU
                                          : (IData)(
                                                    (vlSelf->__VdfgRegularize_he8d392c1_0_21 
                                                     >> 0x19U))));
        vlSelf->__PVT__exp_out_rnd = (0xffU & (((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_27) 
                                                & ((IData)(vlSelf->__PVT__s) 
                                                   & (0xffU 
                                                      == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r))))
                                                ? (
                                                   (3U 
                                                    == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3))
                                                    ? 
                                                   ((0x16U 
                                                     < (IData)(vlSelf->__PVT__u6__DOT__fi_ldz_r0))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                     - 
                                                     (0x3fU 
                                                      & ((IData)(vlSelf->__PVT__u6__DOT__fi_ldz_r0) 
                                                         - (IData)(0x16U))))
                                                     : 
                                                    ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                     - 
                                                     (0x3fU 
                                                      & ((IData)(vlSelf->__PVT__u6__DOT__fi_ldz_r0) 
                                                         - (IData)(1U)))))
                                                    : (IData)(vlSelf->__PVT__exp_next_mi))
                                                : (
                                                   ((5U 
                                                     != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3)) 
                                                    & (0xffU 
                                                       == (IData)(vlSelf->__PVT__exp_out)))
                                                    ? (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)
                                                    : (IData)(vlSelf->__PVT__exp_out))));
    } else {
        vlSelf->__PVT__fract_out_rnd = (0x7fffffU & vlSelf->__VdfgRegularize_he8d392c1_0_55);
        vlSelf->__PVT__exp_out_rnd = (0xffU & ((IData)(vlSelf->__PVT__exp_out) 
                                               + (1U 
                                                  & (vlSelf->__VdfgRegularize_he8d392c1_0_55 
                                                     >> 0x17U))));
    }
    vlSelf->__PVT__max_num = (((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3)) 
                               & ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_37) 
                                  & ((0xffU == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)) 
                                     & ((0x18U > (IData)(vlSelf->__PVT__fi_ldz_2)) 
                                        & (0xfeU != (IData)(vlSelf->__PVT__exp_out)))))) 
                              | ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3)) 
                                 & (((1U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3)) 
                                     & ((IData)(vlSelf->__PVT__div_inf) 
                                        | (0xffU == (IData)(vlSelf->__PVT__exp_out)))) 
                                    | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3) 
                                        >> 1U) & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__sign) 
                                                   & (((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q 
                                                        >> 0x1bU) 
                                                       & (IData)(vlSelf->__PVT__div_inf)) 
                                                      | (((~ 
                                                           ((IData)(vlSelf->__PVT__exp_out_rnd) 
                                                            >> 7U)) 
                                                          & ((~ 
                                                              (((~ (IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x7fU 
                                                                             & (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r))))) 
                                                                & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                                   >> 7U)) 
                                                               | (0x7fU 
                                                                  == (IData)(vlSelf->__PVT__exp_out)))) 
                                                             & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                                >> 7U))) 
                                                         | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                                             >> 7U) 
                                                            & (((IData)(vlSelf->__PVT__exp_out_rnd) 
                                                                >> 7U) 
                                                               & ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_38) 
                                                                  & ((IData)(vlSelf->__PVT__op_dn) 
                                                                     & (0xfeU 
                                                                        < (IData)(vlSelf->__PVT__div_exp1))))))))) 
                                                  | ((~ (IData)(
                                                                (0U 
                                                                 != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)))) 
                                                     & ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__sign) 
                                                        & ((IData)(vlSelf->__PVT__div_inf) 
                                                           | ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_38) 
                                                              & (0x18U 
                                                                 > (IData)(vlSelf->__PVT__fi_ldz_2)))))))))));
    vlSelf->__PVT__inf_out = ((((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3) 
                                >> 1U) & ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_37) 
                                          & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__sign)) 
                                             & ((3U 
                                                 != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3)) 
                                                & (0xffU 
                                                   == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)))))) 
                              | (((IData)(vlSelf->__PVT__div_inf) 
                                  & ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3)) 
                                     & ((0U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3)) 
                                        | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3) 
                                            >> 1U) 
                                           & ((~ (IData)(
                                                         (0xffU 
                                                          == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)))) 
                                              & (~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__sign))))))) 
                                 | ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3)) 
                                    & (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3) 
                                        >> 1U) & ((0xffU 
                                                   == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)) 
                                                  & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__sign)) 
                                                     & ((IData)(vlSelf->__PVT__op_dn) 
                                                        & ((0x18U 
                                                            > (IData)(vlSelf->__PVT__fi_ldz_2)) 
                                                           & (0xfeU 
                                                              != (IData)(vlSelf->__PVT__exp_out_rnd))))))))));
    vlSelf->__VdfgRegularize_he8d392c1_0_51 = ((IData)(vlSelf->__PVT__inf_out) 
                                               | (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_46));
    vlSelf->__PVT__ovf0 = (((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_51) 
                            | ((~ (IData)(vlSelf->__PVT__max_num)) 
                               & (0xffU == (IData)(vlSelf->__PVT__exp_out_rnd)))) 
                           & ((1U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3)) 
                              & (5U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3))));
    vlSelf->__PVT__exp_out_final = ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_51)
                                     ? 0xffU : ((IData)(vlSelf->__PVT__max_num)
                                                 ? 0xfeU
                                                 : (IData)(vlSelf->__PVT__exp_out_rnd)));
    if ((3U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3))) {
        vlSelf->__PVT__overflow = ((IData)(vlSelf->__PVT__inf_out) 
                                   | (((0U != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__rmode_r3)) 
                                       & (IData)(vlSelf->__PVT__max_num)) 
                                      | (((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r) 
                                          >> 7U) & 
                                         ((IData)(vlSelf->__PVT__op_dn) 
                                          & (0xffU 
                                             == (IData)(vlSelf->__PVT__exp_out))))));
        vlSelf->__PVT__underflow = (1U & ((~ (IData)(vlSelf->__PVT__inf_out)) 
                                          & ((~ (IData)(vlSelf->__PVT__max_num)) 
                                             & ((0xffU 
                                                 != (IData)(vlSelf->__PVT__exp_out_final)) 
                                                & (((0U 
                                                     != 
                                                     (0x1ffffffU 
                                                      & (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_21))) 
                                                    & ((~ (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__opb_dn)) 
                                                       & ((IData)(vlSelf->__PVT__div_dn) 
                                                          | (~ (IData)(
                                                                       (0U 
                                                                        != (IData)(vlSelf->__PVT__exp_out))))))) 
                                                   | (((IData)(vlSelf->__PVT__op_dn) 
                                                       & ((~ (IData)(
                                                                     (0U 
                                                                      != (IData)(vlSelf->__PVT__exp_out)))) 
                                                          & (0x17U 
                                                             > (IData)(vlSelf->__PVT__u6__DOT__fi_ldz_r0)))) 
                                                      | ((~ (IData)(
                                                                    (0U 
                                                                     != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)))) 
                                                         | ((~ (IData)(vlSelf->__PVT__op_dn)) 
                                                            & ((0x17U 
                                                                > (IData)(vlSelf->__PVT__u6__DOT__fi_ldz_r0)) 
                                                               & ((1U 
                                                                   == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)) 
                                                                  & (~ (IData)(
                                                                               (0U 
                                                                                != (IData)(vlSelf->__PVT__exp_out))))))))))))));
    } else {
        vlSelf->__PVT__overflow = ((IData)(vlSelf->__PVT__ovf0) 
                                   | ((~ (IData)(vlSelf->__PVT__dn)) 
                                      & (0xffU == (IData)(vlSelf->__PVT__exp_out))));
        vlSelf->__PVT__underflow = (1U & ((2U == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fpu_op_r3))
                                           ? ((0U != 
                                               (0x1ffffffU 
                                                & (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_21))) 
                                              & ((~ (IData)(
                                                            (0xffU 
                                                             == (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)))) 
                                                 & (((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_14) 
                                                     >> 8U) 
                                                    | ((~ (IData)(
                                                                  (0U 
                                                                   != (IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__exp_r)))) 
                                                       | (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_63)))))
                                           : ((~ (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__fract_out_q 
                                                  >> 0x1bU)) 
                                              & ((~ (IData)(vlSelf->__PVT__dn)) 
                                                 & ((IData)(vlSelf->__VdfgRegularize_he8d392c1_0_23) 
                                                    >> 8U)))));
    }
    vlSelf->__PVT__out = (((IData)(vlSelf->__PVT__exp_out_final) 
                           << 0x17U) | (((IData)(vlSelf->__PVT__inf_out) 
                                         | (IData)(vlSelf->__PVT__ovf0))
                                         ? 0U : (((IData)(vlSelf->__PVT__max_num) 
                                                  | (IData)(vlSelf->__VdfgRegularize_he8d392c1_0_46))
                                                  ? 0x7fffffU
                                                  : vlSelf->__PVT__fract_out_rnd)));
}
