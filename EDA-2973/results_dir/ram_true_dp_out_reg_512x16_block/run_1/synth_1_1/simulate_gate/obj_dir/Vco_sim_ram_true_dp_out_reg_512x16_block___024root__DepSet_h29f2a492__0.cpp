// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_ram_true_dp_out_reg_512x16_block.h for the primary calling header

#include "Vco_sim_ram_true_dp_out_reg_512x16_block__pch.h"
#include "Vco_sim_ram_true_dp_out_reg_512x16_block__Syms.h"
#include "Vco_sim_ram_true_dp_out_reg_512x16_block___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_ram_true_dp_out_reg_512x16_block___024root___dump_triggers__act(Vco_sim_ram_true_dp_out_reg_512x16_block___024root* vlSelf);
#endif  // VL_DEBUG

void Vco_sim_ram_true_dp_out_reg_512x16_block___024root___eval_triggers__act(Vco_sim_ram_true_dp_out_reg_512x16_block___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_ram_true_dp_out_reg_512x16_block__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_ram_true_dp_out_reg_512x16_block___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a_write_flag) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a_write_flag__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a_read_flag) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a_read_flag__0))));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b_write_flag) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b_write_flag__0))));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b_read_flag) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b_read_flag__0))));
    vlSelf->__VactTriggered.set(4U, ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a2_write_flag) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a2_write_flag__0))));
    vlSelf->__VactTriggered.set(5U, ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a2_read_flag) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a2_read_flag__0))));
    vlSelf->__VactTriggered.set(6U, ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b2_write_flag) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b2_write_flag__0))));
    vlSelf->__VactTriggered.set(7U, ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b2_read_flag) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b2_read_flag__0))));
    vlSelf->__VactTriggered.set(8U, ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_ram_true_dp_out_reg_512x16_block__DOT__clk__0))));
    vlSelf->__VactTriggered.set(9U, ((~ (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_ram_true_dp_out_reg_512x16_block__DOT__clk__0)));
    vlSelf->__VactTriggered.set(0xaU, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a_write_flag__0 
        = vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a_write_flag;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a_read_flag__0 
        = vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a_read_flag;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b_write_flag__0 
        = vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b_write_flag;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b_read_flag__0 
        = vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b_read_flag;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a2_write_flag__0 
        = vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a2_write_flag;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a2_read_flag__0 
        = vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a2_read_flag;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b2_write_flag__0 
        = vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b2_write_flag;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b2_read_flag__0 
        = vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b2_read_flag;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_ram_true_dp_out_reg_512x16_block__DOT__clk__0 
        = vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vco_sim_ram_true_dp_out_reg_512x16_block___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vco_sim_ram_true_dp_out_reg_512x16_block___024root___act_sequent__TOP__2(Vco_sim_ram_true_dp_out_reg_512x16_block___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_ram_true_dp_out_reg_512x16_block__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_ram_true_dp_out_reg_512x16_block___024root___act_sequent__TOP__2\n"); );
    // Body
    if (VL_UNLIKELY(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b2_write_flag)) {
        VL_WRITEF_NX("ERROR: Write collision occured on TDP_RAM18K instance %Nco_sim_ram_true_dp_out_reg_512x16_block.netlist.ram.0.0 at time %^ where port A2 is writing to the same address, 0000, as port B2.\n       The write data may not be valid.\n",0,
                     vlSymsp->name(),64,VL_TIME_UNITED_D(1e+06),
                     -9);
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a2_write_flag = 0U;
    }
    if (VL_UNLIKELY(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b2_read_flag)) {
        VL_WRITEF_NX("ERROR: Memory collision occured on TDP_RAM18K instance %Nco_sim_ram_true_dp_out_reg_512x16_block.netlist.ram.0.0 at time %^ where port A2 is writing to the same address, 0000, as port B2 is reading.\n       The write data is valid but the read data is not.\n",0,
                     vlSymsp->name(),64,VL_TIME_UNITED_D(1e+06),
                     -9);
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a2_write_flag = 0U;
    }
}

VL_INLINE_OPT void Vco_sim_ram_true_dp_out_reg_512x16_block___024root___act_sequent__TOP__3(Vco_sim_ram_true_dp_out_reg_512x16_block___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_ram_true_dp_out_reg_512x16_block__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_ram_true_dp_out_reg_512x16_block___024root___act_sequent__TOP__3\n"); );
    // Body
    if (VL_UNLIKELY(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a2_write_flag)) {
        VL_WRITEF_NX("ERROR: Memory collision occured on TDP_RAM18K instance %Nco_sim_ram_true_dp_out_reg_512x16_block.netlist.ram.0.0 at time %^ where port A2 is writing to the same address, 0000, as port B2 is reading.\n       The write data is valid but the read data is not.\n",0,
                     vlSymsp->name(),64,VL_TIME_UNITED_D(1e+06),
                     -9);
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b2_read_flag = 0U;
    }
}

VL_INLINE_OPT void Vco_sim_ram_true_dp_out_reg_512x16_block___024root___act_sequent__TOP__4(Vco_sim_ram_true_dp_out_reg_512x16_block___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_ram_true_dp_out_reg_512x16_block__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_ram_true_dp_out_reg_512x16_block___024root___act_sequent__TOP__4\n"); );
    // Body
    if (VL_UNLIKELY(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a2_write_flag)) {
        VL_WRITEF_NX("ERROR: Write collision occured on TDP_RAM18K instance %Nco_sim_ram_true_dp_out_reg_512x16_block.netlist.ram.0.0 at time %^ where port B2 is writing to the same address, 0000, as port A2.\n       The write data may not be valid.\n",0,
                     vlSymsp->name(),64,VL_TIME_UNITED_D(1e+06),
                     -9);
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b2_write_flag = 0U;
    }
    if (VL_UNLIKELY(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a2_read_flag)) {
        VL_WRITEF_NX("ERROR: Memory collision occured on TDP_RAM18K instance %Nco_sim_ram_true_dp_out_reg_512x16_block.netlist.ram.0.0 at time %^ where port B2 is writing to the same address, 0000, as port A2 is reading.\n       The write data is valid but the read data is not.\n",0,
                     vlSymsp->name(),64,VL_TIME_UNITED_D(1e+06),
                     -9);
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b2_write_flag = 0U;
    }
}

VL_INLINE_OPT void Vco_sim_ram_true_dp_out_reg_512x16_block___024root___act_sequent__TOP__5(Vco_sim_ram_true_dp_out_reg_512x16_block___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_ram_true_dp_out_reg_512x16_block__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_ram_true_dp_out_reg_512x16_block___024root___act_sequent__TOP__5\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b_write_flag) 
                     & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a_address) 
                        == (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b_address))))) {
        VL_WRITEF_NX("ERROR: Write collision occured on TDP_RAM18K instance %Nco_sim_ram_true_dp_out_reg_512x16_block.netlist.ram.0.0 at time %^ where port A1 is writing to the same address, %x, as port B1.\n       The write data may not be valid.\n",0,
                     vlSymsp->name(),64,VL_TIME_UNITED_D(1e+06),
                     -9,10,(IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a_address));
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a_write_flag = 0U;
    }
    if (VL_UNLIKELY(((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b_read_flag) 
                     & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a_address) 
                        == (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b_address))))) {
        VL_WRITEF_NX("ERROR: Memory collision occured on TDP_RAM18K instance %Nco_sim_ram_true_dp_out_reg_512x16_block.netlist.ram.0.0 at time %^ where port A1 is writing to the same address, %x, as port B1 is reading.\n       The write data is valid but the read data is not.\n",0,
                     vlSymsp->name(),64,VL_TIME_UNITED_D(1e+06),
                     -9,10,(IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b_address));
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a_write_flag = 0U;
    }
}

VL_INLINE_OPT void Vco_sim_ram_true_dp_out_reg_512x16_block___024root___act_sequent__TOP__6(Vco_sim_ram_true_dp_out_reg_512x16_block___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_ram_true_dp_out_reg_512x16_block__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_ram_true_dp_out_reg_512x16_block___024root___act_sequent__TOP__6\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a_write_flag) 
                     & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a_address) 
                        == (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b_address))))) {
        VL_WRITEF_NX("ERROR: Memory collision occured on TDP_RAM18K instance %Nco_sim_ram_true_dp_out_reg_512x16_block.netlist.ram.0.0 at time %^ where port A1 is writing to the same address, %x, as port B1 is reading.\n       The write data is valid but the read data is not.\n",0,
                     vlSymsp->name(),64,VL_TIME_UNITED_D(1e+06),
                     -9,10,(IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b_address));
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b_read_flag = 0U;
    }
}

VL_INLINE_OPT void Vco_sim_ram_true_dp_out_reg_512x16_block___024root___act_sequent__TOP__7(Vco_sim_ram_true_dp_out_reg_512x16_block___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_ram_true_dp_out_reg_512x16_block__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_ram_true_dp_out_reg_512x16_block___024root___act_sequent__TOP__7\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a_write_flag) 
                     & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a_address) 
                        == (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b_address))))) {
        VL_WRITEF_NX("ERROR: Write collision occured on TDP_RAM18K instance %Nco_sim_ram_true_dp_out_reg_512x16_block.netlist.ram.0.0 at time %^ where port B1 is writing to the same address, %x, as port A1.\n       The write data may not be valid.\n",0,
                     vlSymsp->name(),64,VL_TIME_UNITED_D(1e+06),
                     -9,10,(IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b_address));
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b_write_flag = 0U;
    }
    if (VL_UNLIKELY(((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a_read_flag) 
                     & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a_address) 
                        == (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b_address))))) {
        VL_WRITEF_NX("ERROR: Memory collision occured on TDP_RAM18K instance %Nco_sim_ram_true_dp_out_reg_512x16_block.netlist.ram.0.0 at time %^ where port B1 is writing to the same address, %x, as port A1 is reading.\n       The write data is valid but the read data is not.\n",0,
                     vlSymsp->name(),64,VL_TIME_UNITED_D(1e+06),
                     -9,10,(IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b_address));
        vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b_write_flag = 0U;
    }
}

VL_INLINE_OPT void Vco_sim_ram_true_dp_out_reg_512x16_block___024root___nba_sequent__TOP__0(Vco_sim_ram_true_dp_out_reg_512x16_block___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_ram_true_dp_out_reg_512x16_block__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_ram_true_dp_out_reg_512x16_block___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b2_write_flag)) {
        VL_WRITEF_NX("ERROR: Memory collision occured on TDP_RAM18K instance %Nco_sim_ram_true_dp_out_reg_512x16_block.netlist.ram.0.0 at time %^ where port B2 is writing to the same address, 0000, as port A2 is reading.\n       The write data is valid but the read data is not.\n",0,
                     vlSymsp->name(),64,VL_TIME_UNITED_D(1e+06),
                     -9);
    }
}

VL_INLINE_OPT void Vco_sim_ram_true_dp_out_reg_512x16_block___024root___nba_sequent__TOP__1(Vco_sim_ram_true_dp_out_reg_512x16_block___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_ram_true_dp_out_reg_512x16_block__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_ram_true_dp_out_reg_512x16_block___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b_write_flag) 
                     & ((IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a_address) 
                        == (IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b_address))))) {
        VL_WRITEF_NX("ERROR: Memory collision occured on TDP_RAM18K instance %Nco_sim_ram_true_dp_out_reg_512x16_block.netlist.ram.0.0 at time %^ where port B1 is writing to the same address, %x, as port A1 is reading.\n       The write data is valid but the read data is not.\n",0,
                     vlSymsp->name(),64,VL_TIME_UNITED_D(1e+06),
                     -9,10,(IData)(vlSelf->co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a_address));
    }
}
