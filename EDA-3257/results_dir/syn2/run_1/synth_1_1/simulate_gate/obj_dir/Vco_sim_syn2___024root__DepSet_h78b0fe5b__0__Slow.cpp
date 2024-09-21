// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_syn2.h for the primary calling header

#include "Vco_sim_syn2__pch.h"
#include "Vco_sim_syn2__Syms.h"
#include "Vco_sim_syn2___024root.h"

VL_ATTR_COLD void Vco_sim_syn2___024root___eval_static__TOP(Vco_sim_syn2___024root* vlSelf);
VL_ATTR_COLD void Vco_sim_syn2_fpu_mul___eval_static__TOP__co_sim_syn2__DOT__golden__DOT__x1_mul(Vco_sim_syn2_fpu_mul* vlSelf);
VL_ATTR_COLD void Vco_sim_syn2_fpu_add___eval_static__TOP__co_sim_syn2__DOT__golden__DOT__add1_add(Vco_sim_syn2_fpu_add* vlSelf);
VL_ATTR_COLD void Vco_sim_syn2_post_norm___eval_static__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4(Vco_sim_syn2_post_norm* vlSelf);

VL_ATTR_COLD void Vco_sim_syn2___024root___eval_static(Vco_sim_syn2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_syn2___024root___eval_static\n"); );
    // Body
    Vco_sim_syn2___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[0xaU] = 1U;
    vlSelf->__Vm_traceActivity[9U] = 1U;
    vlSelf->__Vm_traceActivity[8U] = 1U;
    vlSelf->__Vm_traceActivity[7U] = 1U;
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vco_sim_syn2_fpu_mul___eval_static__TOP__co_sim_syn2__DOT__golden__DOT__x1_mul((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul));
    Vco_sim_syn2_fpu_mul___eval_static__TOP__co_sim_syn2__DOT__golden__DOT__x1_mul((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul));
    Vco_sim_syn2_fpu_mul___eval_static__TOP__co_sim_syn2__DOT__golden__DOT__x1_mul((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul));
    Vco_sim_syn2_fpu_mul___eval_static__TOP__co_sim_syn2__DOT__golden__DOT__x1_mul((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul));
    Vco_sim_syn2_fpu_add___eval_static__TOP__co_sim_syn2__DOT__golden__DOT__add1_add((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add));
    Vco_sim_syn2_fpu_add___eval_static__TOP__co_sim_syn2__DOT__golden__DOT__add1_add((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add));
    Vco_sim_syn2_fpu_add___eval_static__TOP__co_sim_syn2__DOT__golden__DOT__add1_add((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add));
    Vco_sim_syn2_fpu_add___eval_static__TOP__co_sim_syn2__DOT__golden__DOT__add1_add((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add));
    Vco_sim_syn2_fpu_add___eval_static__TOP__co_sim_syn2__DOT__golden__DOT__add1_add((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add));
    Vco_sim_syn2_post_norm___eval_static__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4));
    Vco_sim_syn2_post_norm___eval_static__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4));
    Vco_sim_syn2_post_norm___eval_static__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4));
    Vco_sim_syn2_post_norm___eval_static__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4));
    Vco_sim_syn2_post_norm___eval_static__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4));
    Vco_sim_syn2_post_norm___eval_static__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4));
    Vco_sim_syn2_post_norm___eval_static__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4));
    Vco_sim_syn2_post_norm___eval_static__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4));
    Vco_sim_syn2_post_norm___eval_static__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4));
}

VL_ATTR_COLD void Vco_sim_syn2___024root___eval_initial__TOP(Vco_sim_syn2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_syn2___024root___eval_initial__TOP\n"); );
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"tb.vcd"});
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_syn2___024root___dump_triggers__stl(Vco_sim_syn2___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vco_sim_syn2___024root___eval_triggers__stl(Vco_sim_syn2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_syn2___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vco_sim_syn2___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vco_sim_syn2___024root___stl_sequent__TOP__0(Vco_sim_syn2___024root* vlSelf);
VL_ATTR_COLD void Vco_sim_syn2___024root___stl_sequent__TOP__1(Vco_sim_syn2___024root* vlSelf);
VL_ATTR_COLD void Vco_sim_syn2___024root___stl_sequent__TOP__2(Vco_sim_syn2___024root* vlSelf);
VL_ATTR_COLD void Vco_sim_syn2___024root___stl_sequent__TOP__3(Vco_sim_syn2___024root* vlSelf);
VL_ATTR_COLD void Vco_sim_syn2___024root___stl_sequent__TOP__4(Vco_sim_syn2___024root* vlSelf);
VL_ATTR_COLD void Vco_sim_syn2___024root___stl_sequent__TOP__5(Vco_sim_syn2___024root* vlSelf);
VL_ATTR_COLD void Vco_sim_syn2___024root___stl_sequent__TOP__6(Vco_sim_syn2___024root* vlSelf);
VL_ATTR_COLD void Vco_sim_syn2___024root___stl_sequent__TOP__7(Vco_sim_syn2___024root* vlSelf);
VL_ATTR_COLD void Vco_sim_syn2___024root___stl_sequent__TOP__8(Vco_sim_syn2___024root* vlSelf);
VL_ATTR_COLD void Vco_sim_syn2___024root___stl_sequent__TOP__9(Vco_sim_syn2___024root* vlSelf);
VL_ATTR_COLD void Vco_sim_syn2___024root___stl_sequent__TOP__10(Vco_sim_syn2___024root* vlSelf);
VL_ATTR_COLD void Vco_sim_syn2___024root___stl_sequent__TOP__11(Vco_sim_syn2___024root* vlSelf);
VL_ATTR_COLD void Vco_sim_syn2___024root___stl_sequent__TOP__12(Vco_sim_syn2___024root* vlSelf);
VL_ATTR_COLD void Vco_sim_syn2___024root___stl_sequent__TOP__13(Vco_sim_syn2___024root* vlSelf);
VL_ATTR_COLD void Vco_sim_syn2___024root___stl_sequent__TOP__14(Vco_sim_syn2___024root* vlSelf);
VL_ATTR_COLD void Vco_sim_syn2___024root___stl_sequent__TOP__15(Vco_sim_syn2___024root* vlSelf);
VL_ATTR_COLD void Vco_sim_syn2___024root___stl_sequent__TOP__16(Vco_sim_syn2___024root* vlSelf);
VL_ATTR_COLD void Vco_sim_syn2___024root___stl_sequent__TOP__17(Vco_sim_syn2___024root* vlSelf);
VL_ATTR_COLD void Vco_sim_syn2___024root___stl_sequent__TOP__18(Vco_sim_syn2___024root* vlSelf);
VL_ATTR_COLD void Vco_sim_syn2_fpu_mul___stl_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__0(Vco_sim_syn2_fpu_mul* vlSelf);
VL_ATTR_COLD void Vco_sim_syn2_post_norm___stl_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4__0(Vco_sim_syn2_post_norm* vlSelf);
VL_ATTR_COLD void Vco_sim_syn2_post_norm___stl_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4__0(Vco_sim_syn2_post_norm* vlSelf);
VL_ATTR_COLD void Vco_sim_syn2_post_norm___stl_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4__0(Vco_sim_syn2_post_norm* vlSelf);
VL_ATTR_COLD void Vco_sim_syn2_post_norm___stl_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4__0(Vco_sim_syn2_post_norm* vlSelf);
VL_ATTR_COLD void Vco_sim_syn2_post_norm___stl_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4__0(Vco_sim_syn2_post_norm* vlSelf);
VL_ATTR_COLD void Vco_sim_syn2_fpu_add___stl_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__0(Vco_sim_syn2_fpu_add* vlSelf);
VL_ATTR_COLD void Vco_sim_syn2_fpu_add___stl_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add2_add__0(Vco_sim_syn2_fpu_add* vlSelf);
VL_ATTR_COLD void Vco_sim_syn2_fpu_add___stl_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add3_add__0(Vco_sim_syn2_fpu_add* vlSelf);
VL_ATTR_COLD void Vco_sim_syn2_fpu_add___stl_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add4_add__0(Vco_sim_syn2_fpu_add* vlSelf);
VL_ATTR_COLD void Vco_sim_syn2_fpu_add___stl_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add5_add__0(Vco_sim_syn2_fpu_add* vlSelf);
VL_ATTR_COLD void Vco_sim_syn2_post_norm___stl_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4__0(Vco_sim_syn2_post_norm* vlSelf);
VL_ATTR_COLD void Vco_sim_syn2_post_norm___stl_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4__0(Vco_sim_syn2_post_norm* vlSelf);
VL_ATTR_COLD void Vco_sim_syn2_post_norm___stl_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4__0(Vco_sim_syn2_post_norm* vlSelf);
VL_ATTR_COLD void Vco_sim_syn2_post_norm___stl_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4__0(Vco_sim_syn2_post_norm* vlSelf);
void Vco_sim_syn2_fpu_mul___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__2(Vco_sim_syn2_fpu_mul* vlSelf);

VL_ATTR_COLD void Vco_sim_syn2___024root___eval_stl(Vco_sim_syn2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_syn2___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vco_sim_syn2___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        Vco_sim_syn2___024root___stl_sequent__TOP__1(vlSelf);
        Vco_sim_syn2___024root___stl_sequent__TOP__2(vlSelf);
        Vco_sim_syn2___024root___stl_sequent__TOP__3(vlSelf);
        Vco_sim_syn2___024root___stl_sequent__TOP__4(vlSelf);
        Vco_sim_syn2___024root___stl_sequent__TOP__5(vlSelf);
        Vco_sim_syn2___024root___stl_sequent__TOP__6(vlSelf);
        Vco_sim_syn2___024root___stl_sequent__TOP__7(vlSelf);
        Vco_sim_syn2___024root___stl_sequent__TOP__8(vlSelf);
        Vco_sim_syn2___024root___stl_sequent__TOP__9(vlSelf);
        Vco_sim_syn2___024root___stl_sequent__TOP__10(vlSelf);
        Vco_sim_syn2___024root___stl_sequent__TOP__11(vlSelf);
        Vco_sim_syn2___024root___stl_sequent__TOP__12(vlSelf);
        Vco_sim_syn2___024root___stl_sequent__TOP__13(vlSelf);
        Vco_sim_syn2___024root___stl_sequent__TOP__14(vlSelf);
        Vco_sim_syn2___024root___stl_sequent__TOP__15(vlSelf);
        Vco_sim_syn2___024root___stl_sequent__TOP__16(vlSelf);
        Vco_sim_syn2___024root___stl_sequent__TOP__17(vlSelf);
        Vco_sim_syn2___024root___stl_sequent__TOP__18(vlSelf);
        Vco_sim_syn2_fpu_mul___stl_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__0((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul));
        Vco_sim_syn2_fpu_mul___stl_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__0((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul));
        Vco_sim_syn2_fpu_mul___stl_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__0((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul));
        Vco_sim_syn2_fpu_mul___stl_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__0((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul));
        Vco_sim_syn2_post_norm___stl_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4__0((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4));
        Vco_sim_syn2_post_norm___stl_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4__0((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4));
        Vco_sim_syn2_post_norm___stl_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4__0((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4));
        Vco_sim_syn2_post_norm___stl_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4__0((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4));
        Vco_sim_syn2_post_norm___stl_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4__0((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4));
        Vco_sim_syn2_fpu_add___stl_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__0((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add));
        Vco_sim_syn2_fpu_add___stl_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add2_add__0((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add));
        Vco_sim_syn2_fpu_add___stl_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add3_add__0((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add));
        Vco_sim_syn2_fpu_add___stl_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add4_add__0((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add));
        Vco_sim_syn2_fpu_add___stl_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add5_add__0((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add));
        Vco_sim_syn2_post_norm___stl_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4__0((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4));
        Vco_sim_syn2_post_norm___stl_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4__0((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4));
        Vco_sim_syn2_post_norm___stl_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4__0((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4));
        Vco_sim_syn2_post_norm___stl_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4__0((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4));
        Vco_sim_syn2_fpu_mul___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__2((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul));
        Vco_sim_syn2_fpu_mul___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__2((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul));
        Vco_sim_syn2_fpu_mul___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__2((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul));
        Vco_sim_syn2_fpu_mul___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__2((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul));
    }
}
