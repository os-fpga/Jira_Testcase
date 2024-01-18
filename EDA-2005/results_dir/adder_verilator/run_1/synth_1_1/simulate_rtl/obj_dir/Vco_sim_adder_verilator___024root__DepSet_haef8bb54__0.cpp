// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_adder_verilator.h for the primary calling header

#include "verilated.h"

#include "Vco_sim_adder_verilator__Syms.h"
#include "Vco_sim_adder_verilator___024root.h"

VL_ATTR_COLD void Vco_sim_adder_verilator___024root___eval_initial__TOP(Vco_sim_adder_verilator___024root* vlSelf);
VlCoroutine Vco_sim_adder_verilator___024root___eval_initial__TOP__0(Vco_sim_adder_verilator___024root* vlSelf);
VlCoroutine Vco_sim_adder_verilator___024root___eval_initial__TOP__1(Vco_sim_adder_verilator___024root* vlSelf);

void Vco_sim_adder_verilator___024root___eval_initial(Vco_sim_adder_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_adder_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_adder_verilator___024root___eval_initial\n"); );
    // Body
    Vco_sim_adder_verilator___024root___eval_initial__TOP(vlSelf);
    Vco_sim_adder_verilator___024root___eval_initial__TOP__0(vlSelf);
    Vco_sim_adder_verilator___024root___eval_initial__TOP__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__co_sim_adder_verilator__DOT__clock__0 
        = vlSelf->co_sim_adder_verilator__DOT__clock;
}

VL_INLINE_OPT VlCoroutine Vco_sim_adder_verilator___024root___eval_initial__TOP__0(Vco_sim_adder_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_adder_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_adder_verilator___024root___eval_initial__TOP__0\n"); );
    // Body
    vlSelf->co_sim_adder_verilator__DOT__clock = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "../../../../.././sim/co_sim_tb/co_sim_adder_verilator.v", 
                                           35);
        vlSelf->co_sim_adder_verilator__DOT__clock 
            = (1U & (~ (IData)(vlSelf->co_sim_adder_verilator__DOT__clock)));
    }
}

VL_INLINE_OPT VlCoroutine Vco_sim_adder_verilator___024root___eval_initial__TOP__1(Vco_sim_adder_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_adder_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_adder_verilator___024root___eval_initial__TOP__1\n"); );
    // Body
    vlSelf->co_sim_adder_verilator__DOT__reset = 0U;
    vlSelf->co_sim_adder_verilator__DOT__a = 0U;
    vlSelf->co_sim_adder_verilator__DOT__b = 0U;
    co_await vlSelf->__VtrigSched_h7979c960__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_adder_verilator.clock)", 
                                                       "../../../../.././sim/co_sim_tb/co_sim_adder_verilator.v", 
                                                       41);
    vlSelf->co_sim_adder_verilator__DOT__reset = 1U;
    VL_WRITEF("\n\n***Reset Test is applied***\n\n\n");
    co_await vlSelf->__VtrigSched_h7979c960__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_adder_verilator.clock)", 
                                                       "../../../../.././sim/co_sim_tb/co_sim_adder_verilator.v", 
                                                       44);
    VL_WRITEF("%20#  Test stimulus is: a=%0#, b=%0#, sum=%0#\n",
              64,VL_TIME_UNITED_Q(1),4,(IData)(vlSelf->co_sim_adder_verilator__DOT__a),
              4,vlSelf->co_sim_adder_verilator__DOT__b,
              5,(IData)(vlSelf->co_sim_adder_verilator__DOT__sum));
    co_await vlSelf->__VtrigSched_h7979c960__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_adder_verilator.clock)", 
                                                       "../../../../.././sim/co_sim_tb/co_sim_adder_verilator.v", 
                                                       47);
    VL_WRITEF("\n\n***Reset Test is ended***\n\n\n");
    vlSelf->co_sim_adder_verilator__DOT__reset = 0U;
    co_await vlSelf->__VtrigSched_h7979c960__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_adder_verilator.clock)", 
                                                       "../../../../.././sim/co_sim_tb/co_sim_adder_verilator.v", 
                                                       51);
    VL_WRITEF("\n\n***Directed Functionality Test is applied ***\n\n\n");
    vlSelf->co_sim_adder_verilator__DOT__a = 0U;
    vlSelf->co_sim_adder_verilator__DOT__b = 0U;
    co_await vlSelf->__VtrigSched_h7979c960__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_adder_verilator.clock)", 
                                                       "../../../../.././sim/co_sim_tb/co_sim_adder_verilator.v", 
                                                       56);
    VL_WRITEF("%20#  Test stimulus is: a=%0#, b=%0#, sum=%0#\n\n\n***Directed Functionality Test is ended***\n\n\n\n\n***Directed Functionality Test is applied ***\n\n\n",
              64,VL_TIME_UNITED_Q(1),4,(IData)(vlSelf->co_sim_adder_verilator__DOT__a),
              4,vlSelf->co_sim_adder_verilator__DOT__b,
              5,(IData)(vlSelf->co_sim_adder_verilator__DOT__sum));
    vlSelf->co_sim_adder_verilator__DOT__a = 5U;
    vlSelf->co_sim_adder_verilator__DOT__b = 0xaU;
    co_await vlSelf->__VtrigSched_h7979c960__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_adder_verilator.clock)", 
                                                       "../../../../.././sim/co_sim_tb/co_sim_adder_verilator.v", 
                                                       64);
    VL_WRITEF("%20#  Test stimulus is: a=%0#, b=%0#, sum=%0#\n\n\n***Directed Functionality Test is ended***\n\n\n\n\n*** Random Functionality Tests are applied***\n\n\n",
              64,VL_TIME_UNITED_Q(1),4,(IData)(vlSelf->co_sim_adder_verilator__DOT__a),
              4,vlSelf->co_sim_adder_verilator__DOT__b,
              5,(IData)(vlSelf->co_sim_adder_verilator__DOT__sum));
    vlSelf->co_sim_adder_verilator__DOT__a = (0xfU 
                                              & VL_RANDOM_I());
    vlSelf->co_sim_adder_verilator__DOT__b = (0xfU 
                                              & VL_RANDOM_I());
    co_await vlSelf->__VtrigSched_h7979c960__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_adder_verilator.clock)", 
                                                       "../../../../.././sim/co_sim_tb/co_sim_adder_verilator.v", 
                                                       73);
    VL_WRITEF("%20#  Test stimulus is: a=%0#, b=%0#, sum=%0#\n\n\n***Random Functionality Tests are ended***\n\n\n",
              64,VL_TIME_UNITED_Q(1),4,(IData)(vlSelf->co_sim_adder_verilator__DOT__a),
              4,vlSelf->co_sim_adder_verilator__DOT__b,
              5,(IData)(vlSelf->co_sim_adder_verilator__DOT__sum));
    co_await vlSelf->__VtrigSched_h7979c960__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_adder_verilator.clock)", 
                                                       "../../../../.././sim/co_sim_tb/co_sim_adder_verilator.v", 
                                                       77);
    VL_FINISH_MT("../../../../.././sim/co_sim_tb/co_sim_adder_verilator.v", 78, "");
}

void Vco_sim_adder_verilator___024root___eval_act(Vco_sim_adder_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_adder_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_adder_verilator___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vco_sim_adder_verilator___024root___nba_sequent__TOP__0(Vco_sim_adder_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_adder_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_adder_verilator___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->co_sim_adder_verilator__DOT__sum = ((IData)(vlSelf->co_sim_adder_verilator__DOT__reset)
                                                 ? 0U
                                                 : 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->co_sim_adder_verilator__DOT__a) 
                                                    + (IData)(vlSelf->co_sim_adder_verilator__DOT__b))));
}

void Vco_sim_adder_verilator___024root___eval_nba(Vco_sim_adder_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_adder_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_adder_verilator___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_adder_verilator___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vco_sim_adder_verilator___024root___eval_triggers__act(Vco_sim_adder_verilator___024root* vlSelf);
void Vco_sim_adder_verilator___024root___timing_commit(Vco_sim_adder_verilator___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_adder_verilator___024root___dump_triggers__act(Vco_sim_adder_verilator___024root* vlSelf);
#endif  // VL_DEBUG
void Vco_sim_adder_verilator___024root___timing_resume(Vco_sim_adder_verilator___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_adder_verilator___024root___dump_triggers__nba(Vco_sim_adder_verilator___024root* vlSelf);
#endif  // VL_DEBUG

void Vco_sim_adder_verilator___024root___eval(Vco_sim_adder_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_adder_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_adder_verilator___024root___eval\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vco_sim_adder_verilator___024root___eval_triggers__act(vlSelf);
            Vco_sim_adder_verilator___024root___timing_commit(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vco_sim_adder_verilator___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("../../../../.././sim/co_sim_tb/co_sim_adder_verilator.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vco_sim_adder_verilator___024root___timing_resume(vlSelf);
                Vco_sim_adder_verilator___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vco_sim_adder_verilator___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("../../../../.././sim/co_sim_tb/co_sim_adder_verilator.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vco_sim_adder_verilator___024root___eval_nba(vlSelf);
        }
    }
}

void Vco_sim_adder_verilator___024root___timing_commit(Vco_sim_adder_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_adder_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_adder_verilator___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h7979c960__0.commit("@(negedge co_sim_adder_verilator.clock)");
    }
}

void Vco_sim_adder_verilator___024root___timing_resume(Vco_sim_adder_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_adder_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_adder_verilator___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h7979c960__0.resume("@(negedge co_sim_adder_verilator.clock)");
    }
}

#ifdef VL_DEBUG
void Vco_sim_adder_verilator___024root___eval_debug_assertions(Vco_sim_adder_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_adder_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_adder_verilator___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
