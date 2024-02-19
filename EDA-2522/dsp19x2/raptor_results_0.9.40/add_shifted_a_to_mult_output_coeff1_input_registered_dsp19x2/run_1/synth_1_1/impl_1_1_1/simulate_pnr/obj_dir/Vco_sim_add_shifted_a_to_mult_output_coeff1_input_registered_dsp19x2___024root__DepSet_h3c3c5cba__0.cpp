// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2.h for the primary calling header

#include "verilated.h"

#include "Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__Syms.h"
#include "Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root.h"

VL_ATTR_COLD void Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___eval_initial__TOP(Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root* vlSelf);
VlCoroutine Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___eval_initial__TOP__0(Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root* vlSelf);
VlCoroutine Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___eval_initial__TOP__1(Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root* vlSelf);
VlCoroutine Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___eval_initial__TOP__2(Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root* vlSelf);

void Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___eval_initial(Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___eval_initial\n"); );
    // Body
    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___eval_initial__TOP__0(vlSelf);
    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___eval_initial__TOP__1(vlSelf);
    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___eval_initial__TOP__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__clk__0 
        = vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__reset__0 
        = vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__reset;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__acc_fir__0 
        = vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__acc_fir;
}

VL_INLINE_OPT VlCoroutine Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___eval_initial__TOP__0(Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___eval_initial__TOP__0\n"); );
    // Body
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Validation/RTL_testcases/DSP_Instantiation_19x2/add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2/EDA-2522/./sim/co_sim_tb/co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2.v", 
                                           104);
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__clk 
            = (1U & (~ (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___eval_initial__TOP__1(Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___eval_initial__TOP__1\n"); );
    // Init
    IData/*31:0*/ co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT____Vrepeat0;
    co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT____Vrepeat0 = 0;
    // Body
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__reset = 0U;
    co_await vlSelf->__VtrigSched_hfedab95c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Validation/RTL_testcases/DSP_Instantiation_19x2/add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2/EDA-2522/./sim/co_sim_tb/co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2.v", 
                                                       109);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__reset = 1U;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a = 0U;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b = 0U;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__expected_out = 0ULL;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__acc_fir = 0U;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__mult1 = 0U;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__mult2 = 0U;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_in = 0ULL;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_out = 0ULL;
    VL_WRITEF("\n\n***Reset Test is applied***\n\n\n");
    co_await vlSelf->__VtrigSched_hfedab95c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Validation/RTL_testcases/DSP_Instantiation_19x2/add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2/EDA-2522/./sim/co_sim_tb/co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2.v", 
                                                       113);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hfedab95c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Validation/RTL_testcases/DSP_Instantiation_19x2/add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2/EDA-2522/./sim/co_sim_tb/co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2.v", 
                                                       114);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("%20#  Test stimulus is: a=%0#, b=%0#, acc_fir=%0#\n",
              64,VL_TIME_UNITED_Q(1000),20,vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a,
              18,vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b,
              5,(IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__acc_fir));
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Validation/RTL_testcases/DSP_Instantiation_19x2/add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2/EDA-2522/./sim/co_sim_tb/co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2.v", 
                                       116);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out)))) 
           << 0x13U) | (QData)((IData)((0x7ffffU & (IData)(
                                                           (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                                            >> 0x13U)))))) 
         != vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__expected_out)) {
        VL_WRITEF("Data Mismatch, Netlist: %0#, Expected output: %0#, Time: %0t\n",
                  38,(((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out)))) 
                       << 0x13U) | (QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(
                                                              (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                                               >> 0x13U)))))),
                  38,vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__expected_out,
                  64,VL_TIME_UNITED_Q(1000),-9);
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__mismatch 
            = ((IData)(1U) + vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__mismatch);
    } else {
        VL_WRITEF("Data Matched: Netlist: %0#,  Expected output: %0#, Time: %0t\n",
                  38,(((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out)))) 
                       << 0x13U) | (QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(
                                                              (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                                               >> 0x13U)))))),
                  38,vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__expected_out,
                  64,VL_TIME_UNITED_Q(1000),-9);
    }
    VL_WRITEF("\n\n***Reset Test is ended***\n\n\n");
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__reset = 0U;
    co_await vlSelf->__VtrigSched_hfedab95c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Validation/RTL_testcases/DSP_Instantiation_19x2/add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2/EDA-2522/./sim/co_sim_tb/co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2.v", 
                                                       121);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("\n\n*** Random Functionality Tests for multiplier with unsigned inputs are applied***\n\n\n");
    co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT____Vrepeat0 = 0x258U;
    while (VL_LTS_III(32, 0U, co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_hfedab95c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2.clk)", 
                                                           "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Validation/RTL_testcases/DSP_Instantiation_19x2/add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2/EDA-2522/./sim/co_sim_tb/co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2.v", 
                                                           126);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a 
            = (0xfffffU & VL_RANDOM_I());
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b 
            = (0x3ffffU & VL_RANDOM_I());
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__acc_fir = 2U;
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__mult1 = 0U;
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__mult2 
            = (0x1ffU & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b 
                         >> 9U));
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_in 
            = ((0xffffffff00000000ULL & vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_in) 
               | (IData)((IData)(((0x3ffU & vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a) 
                                  << (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__acc_fir)))));
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_in 
            = ((0xffffffffULL & vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_in) 
               | ((QData)((IData)(((0x3ffU & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a 
                                              >> 0xaU)) 
                                   << (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__acc_fir)))) 
                  << 0x20U));
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_out 
            = (((QData)((IData)(((IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_in 
                                          >> 0x20U)) 
                                 + vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__mult2))) 
                << 0x20U) | (QData)((IData)(((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_in) 
                                             + vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__mult1))));
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__expected_out 
            = (((QData)((IData)((0x7ffffU & (IData)(
                                                    (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_out 
                                                     >> 0x20U))))) 
                << 0x13U) | (QData)((IData)((0x7ffffU 
                                             & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_out)))));
        VL_WRITEF("%20#  Test stimulus is: a=%0#, b=%0#, acc_fir=%0#\n",
                  64,VL_TIME_UNITED_Q(1000),20,vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a,
                  18,vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b,
                  5,(IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__acc_fir));
        co_await vlSelf->__VtrigSched_hfedab95c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2.clk)", 
                                                           "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Validation/RTL_testcases/DSP_Instantiation_19x2/add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2/EDA-2522/./sim/co_sim_tb/co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2.v", 
                                                           138);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if (((((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out)))) 
               << 0x13U) | (QData)((IData)((0x7ffffU 
                                            & (IData)(
                                                      (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                                       >> 0x13U)))))) 
             != vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__expected_out)) {
            VL_WRITEF("Data Mismatch, Netlist: %0#, Expected output: %0#, Time: %0t\n",
                      38,(((QData)((IData)((0x7ffffU 
                                            & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out)))) 
                           << 0x13U) | (QData)((IData)(
                                                       (0x7ffffU 
                                                        & (IData)(
                                                                  (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                                                   >> 0x13U)))))),
                      38,vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__expected_out,
                      64,VL_TIME_UNITED_Q(1000),-9);
            vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__mismatch 
                = ((IData)(1U) + vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__mismatch);
        } else {
            VL_WRITEF("Data Matched: Netlist: %0#,  Expected output: %0#, Time: %0t\n",
                      38,(((QData)((IData)((0x7ffffU 
                                            & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out)))) 
                           << 0x13U) | (QData)((IData)(
                                                       (0x7ffffU 
                                                        & (IData)(
                                                                  (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                                                   >> 0x13U)))))),
                      38,vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__expected_out,
                      64,VL_TIME_UNITED_Q(1000),-9);
        }
        co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT____Vrepeat0 
            = (co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT____Vrepeat0 
               - (IData)(1U));
    }
    VL_WRITEF("\n\n***Random Functionality Tests for multiplier with unsigned inputs are ended***\n\n\n\n\n***Directed Functionality Test for multiplier is applied***\n\n\n");
    co_await vlSelf->__VtrigSched_hfedab95c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Validation/RTL_testcases/DSP_Instantiation_19x2/add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2/EDA-2522/./sim/co_sim_tb/co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2.v", 
                                                       144);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a = 0xffU;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b = 1U;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__acc_fir = 2U;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__mult1 = 0U;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__mult2 
        = (0x1ffU & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b 
                     >> 9U));
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_in 
        = ((0xffffffff00000000ULL & vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_in) 
           | (IData)((IData)(((0x3ffU & vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a) 
                              << (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__acc_fir)))));
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_in 
        = ((0xffffffffULL & vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_in) 
           | ((QData)((IData)(((0x3ffU & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a 
                                          >> 0xaU)) 
                               << (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__acc_fir)))) 
              << 0x20U));
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_out 
        = (((QData)((IData)(((IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_in 
                                      >> 0x20U)) + vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__mult2))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_in) 
                                         + vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__mult1))));
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__expected_out 
        = (((QData)((IData)((0x7ffffU & (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_out 
                                                 >> 0x20U))))) 
            << 0x13U) | (QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_out)))));
    VL_WRITEF("%20#  Test stimulus is: a=%0#, b=%0#, acc_fir=%0#\n",
              64,VL_TIME_UNITED_Q(1000),20,vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a,
              18,vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b,
              5,(IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__acc_fir));
    co_await vlSelf->__VtrigSched_hfedab95c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Validation/RTL_testcases/DSP_Instantiation_19x2/add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2/EDA-2522/./sim/co_sim_tb/co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2.v", 
                                                       156);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out)))) 
           << 0x13U) | (QData)((IData)((0x7ffffU & (IData)(
                                                           (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                                            >> 0x13U)))))) 
         != vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__expected_out)) {
        VL_WRITEF("Data Mismatch, Netlist: %0#, Expected output: %0#, Time: %0t\n",
                  38,(((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out)))) 
                       << 0x13U) | (QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(
                                                              (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                                               >> 0x13U)))))),
                  38,vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__expected_out,
                  64,VL_TIME_UNITED_Q(1000),-9);
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__mismatch 
            = ((IData)(1U) + vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__mismatch);
    } else {
        VL_WRITEF("Data Matched: Netlist: %0#,  Expected output: %0#, Time: %0t\n",
                  38,(((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out)))) 
                       << 0x13U) | (QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(
                                                              (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                                               >> 0x13U)))))),
                  38,vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__expected_out,
                  64,VL_TIME_UNITED_Q(1000),-9);
    }
    VL_WRITEF("\n\n***Directed Functionality Test for multiplier is ended***\n\n\n\n\n***Directed Functionality Test for multiplier is applied***\n\n\n");
    co_await vlSelf->__VtrigSched_hfedab95c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Validation/RTL_testcases/DSP_Instantiation_19x2/add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2/EDA-2522/./sim/co_sim_tb/co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2.v", 
                                                       161);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a = 0xffU;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b = 1U;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__acc_fir = 2U;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__mult1 = 0U;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__mult2 
        = (0x1ffU & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b 
                     >> 9U));
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_in 
        = ((0xffffffff00000000ULL & vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_in) 
           | (IData)((IData)(((0x3ffU & vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a) 
                              << (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__acc_fir)))));
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_in 
        = ((0xffffffffULL & vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_in) 
           | ((QData)((IData)(((0x3ffU & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a 
                                          >> 0xaU)) 
                               << (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__acc_fir)))) 
              << 0x20U));
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_out 
        = (((QData)((IData)(((IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_in 
                                      >> 0x20U)) + vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__mult2))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_in) 
                                         + vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__mult1))));
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__expected_out 
        = (((QData)((IData)((0x7ffffU & (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_out 
                                                 >> 0x20U))))) 
            << 0x13U) | (QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_out)))));
    VL_WRITEF("%20#  Test stimulus is: a=%0#, b=%0#, acc_fir=%0#\n",
              64,VL_TIME_UNITED_Q(1000),20,vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a,
              18,vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b,
              5,(IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__acc_fir));
    co_await vlSelf->__VtrigSched_hfedab95c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Validation/RTL_testcases/DSP_Instantiation_19x2/add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2/EDA-2522/./sim/co_sim_tb/co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2.v", 
                                                       173);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out)))) 
           << 0x13U) | (QData)((IData)((0x7ffffU & (IData)(
                                                           (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                                            >> 0x13U)))))) 
         != vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__expected_out)) {
        VL_WRITEF("Data Mismatch, Netlist: %0#, Expected output: %0#, Time: %0t\n",
                  38,(((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out)))) 
                       << 0x13U) | (QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(
                                                              (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                                               >> 0x13U)))))),
                  38,vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__expected_out,
                  64,VL_TIME_UNITED_Q(1000),-9);
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__mismatch 
            = ((IData)(1U) + vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__mismatch);
    } else {
        VL_WRITEF("Data Matched: Netlist: %0#,  Expected output: %0#, Time: %0t\n",
                  38,(((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out)))) 
                       << 0x13U) | (QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(
                                                              (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                                               >> 0x13U)))))),
                  38,vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__expected_out,
                  64,VL_TIME_UNITED_Q(1000),-9);
    }
    VL_WRITEF("\n\n***Directed Functionality Test for multiplier is ended***\n\n\n\n\n***Directed Functionality Test for multiplier is applied***\n\n\n");
    co_await vlSelf->__VtrigSched_hfedab95c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Validation/RTL_testcases/DSP_Instantiation_19x2/add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2/EDA-2522/./sim/co_sim_tb/co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2.v", 
                                                       178);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a = 0xffU;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b = 1U;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__acc_fir = 2U;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__mult1 = 0U;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__mult2 
        = (0x1ffU & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b 
                     >> 9U));
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_in 
        = ((0xffffffff00000000ULL & vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_in) 
           | (IData)((IData)(((0x3ffU & vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a) 
                              << (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__acc_fir)))));
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_in 
        = ((0xffffffffULL & vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_in) 
           | ((QData)((IData)(((0x3ffU & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a 
                                          >> 0xaU)) 
                               << (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__acc_fir)))) 
              << 0x20U));
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_out 
        = (((QData)((IData)(((IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_in 
                                      >> 0x20U)) + vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__mult2))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_in) 
                                         + vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__mult1))));
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__expected_out 
        = (((QData)((IData)((0x7ffffU & (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_out 
                                                 >> 0x20U))))) 
            << 0x13U) | (QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_out)))));
    VL_WRITEF("%20#  Test stimulus is: a=%0#, b=%0#, acc_fir=%0#\n",
              64,VL_TIME_UNITED_Q(1000),20,vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a,
              18,vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b,
              5,(IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__acc_fir));
    co_await vlSelf->__VtrigSched_hfedab95c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Validation/RTL_testcases/DSP_Instantiation_19x2/add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2/EDA-2522/./sim/co_sim_tb/co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2.v", 
                                                       190);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out)))) 
           << 0x13U) | (QData)((IData)((0x7ffffU & (IData)(
                                                           (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                                            >> 0x13U)))))) 
         != vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__expected_out)) {
        VL_WRITEF("Data Mismatch, Netlist: %0#, Expected output: %0#, Time: %0t\n",
                  38,(((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out)))) 
                       << 0x13U) | (QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(
                                                              (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                                               >> 0x13U)))))),
                  38,vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__expected_out,
                  64,VL_TIME_UNITED_Q(1000),-9);
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__mismatch 
            = ((IData)(1U) + vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__mismatch);
    } else {
        VL_WRITEF("Data Matched: Netlist: %0#,  Expected output: %0#, Time: %0t\n",
                  38,(((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out)))) 
                       << 0x13U) | (QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(
                                                              (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                                               >> 0x13U)))))),
                  38,vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__expected_out,
                  64,VL_TIME_UNITED_Q(1000),-9);
    }
    VL_WRITEF("\n\n***Directed Functionality Test for multiplier is ended***\n\n\n\n\n***Directed Functionality Test for multiplier is applied***\n\n\n");
    co_await vlSelf->__VtrigSched_hfedab95c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Validation/RTL_testcases/DSP_Instantiation_19x2/add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2/EDA-2522/./sim/co_sim_tb/co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2.v", 
                                                       195);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a = 0xfffffU;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b = 0x3ffffU;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__acc_fir = 2U;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__mult1 = 0U;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__mult2 
        = (0x1ffU & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b 
                     >> 9U));
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_in 
        = ((0xffffffff00000000ULL & vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_in) 
           | (IData)((IData)(((0x3ffU & vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a) 
                              << (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__acc_fir)))));
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_in 
        = ((0xffffffffULL & vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_in) 
           | ((QData)((IData)(((0x3ffU & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a 
                                          >> 0xaU)) 
                               << (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__acc_fir)))) 
              << 0x20U));
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_out 
        = (((QData)((IData)(((IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_in 
                                      >> 0x20U)) + vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__mult2))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_in) 
                                         + vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__mult1))));
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__expected_out 
        = (((QData)((IData)((0x7ffffU & (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_out 
                                                 >> 0x20U))))) 
            << 0x13U) | (QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__add_sub_out)))));
    VL_WRITEF("%20#  Test stimulus is: a=%0#, b=%0#, acc_fir=%0#\n",
              64,VL_TIME_UNITED_Q(1000),20,vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a,
              18,vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b,
              5,(IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__acc_fir));
    co_await vlSelf->__VtrigSched_hfedab95c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2.clk)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Validation/RTL_testcases/DSP_Instantiation_19x2/add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2/EDA-2522/./sim/co_sim_tb/co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2.v", 
                                                       207);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out)))) 
           << 0x13U) | (QData)((IData)((0x7ffffU & (IData)(
                                                           (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                                            >> 0x13U)))))) 
         != vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__expected_out)) {
        VL_WRITEF("Data Mismatch, Netlist: %0#, Expected output: %0#, Time: %0t\n",
                  38,(((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out)))) 
                       << 0x13U) | (QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(
                                                              (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                                               >> 0x13U)))))),
                  38,vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__expected_out,
                  64,VL_TIME_UNITED_Q(1000),-9);
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__mismatch 
            = ((IData)(1U) + vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__mismatch);
    } else {
        VL_WRITEF("Data Matched: Netlist: %0#,  Expected output: %0#, Time: %0t\n",
                  38,(((QData)((IData)((0x7ffffU & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out)))) 
                       << 0x13U) | (QData)((IData)(
                                                   (0x7ffffU 
                                                    & (IData)(
                                                              (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
                                                               >> 0x13U)))))),
                  38,vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__expected_out,
                  64,VL_TIME_UNITED_Q(1000),-9);
    }
    VL_WRITEF("\n\n***Directed Functionality Test for multiplier is ended***\n\n\n");
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Validation/RTL_testcases/DSP_Instantiation_19x2/add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2/EDA-2522/./sim/co_sim_tb/co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2.v", 
                                       210);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if ((0U == vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__mismatch)) {
        VL_WRITEF("\n**** All Comparison Matched ***\nSimulation Passed\n");
    } else {
        VL_WRITEF("%0d comparison(s) mismatched\nERROR: SIM: Simulation Failed\n",
                  32,vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__mismatch);
    }
    VL_FINISH_MT("/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Validation/RTL_testcases/DSP_Instantiation_19x2/add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2/EDA-2522/./sim/co_sim_tb/co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2.v", 215, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

void Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___eval_act(Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___nba_sequent__TOP__0(Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__reset) {
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__accumulator = 0ULL;
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__dly_b2 = 0U;
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__dly_b1 = 0U;
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out_reg = 0ULL;
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__acc_fir_reg = 0U;
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__shift_right_reg2 = 0U;
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__b1_reg = 0U;
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__b2_reg = 0U;
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a1_reg = 0U;
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a2_reg = 0U;
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__feedback_reg = 0U;
    } else {
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__accumulator 
            = ((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__load_acc_int)
                ? vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__add_sub_out
                : vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__accumulator);
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__dly_b2 
            = (0x1ffU & vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b);
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__dly_b1 
            = (0x1ffU & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b 
                         >> 9U));
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out_reg 
            = vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out;
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__acc_fir_reg 
            = vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__acc_fir;
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__shift_right_reg2 
            = vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__shift_right_reg1;
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__b1_reg 
            = (0x1ffU & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b 
                         >> 9U));
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__b2_reg 
            = (0x1ffU & vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__b);
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a1_reg 
            = (0x3ffU & (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a 
                         >> 0xaU));
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a2_reg 
            = (0x3ffU & vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__a);
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__feedback_reg = 5U;
    }
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__load_acc_reg = 0U;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__subtract_reg = 0U;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__round_reg2 
        = ((~ (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__reset)) 
           & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__round_reg1));
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__saturate_reg2 
        = ((~ (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__reset)) 
           & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__saturate_reg1));
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__unsigned_b_reg = 1U;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__unsigned_a_reg = 1U;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__load_acc_int 
        = vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__load_acc_reg;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__subtract_int 
        = vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__subtract_reg;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__acc_fir_int 
        = vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__acc_fir_reg;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__round_reg1 = 0U;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__saturate_reg1 = 0U;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__shift_right_reg1 = 0U;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__b1_int 
        = vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__b1_reg;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__b2_int 
        = vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__b2_reg;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__unsigned_b_int 
        = vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__unsigned_b_reg;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a1_int 
        = vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a1_reg;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a2_int 
        = vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a2_reg;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__unsigned_a_int 
        = vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__unsigned_a_reg;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__feedback_int 
        = vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__feedback_reg;
    if ((4U & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__feedback_int))) {
        if ((2U & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__feedback_int))) {
            vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__add_sub_in 
                = ((1U & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__feedback_int))
                    ? ((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__unsigned_a_int)
                        ? (((QData)((IData)(((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a2_int) 
                                             << (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__acc_fir_int)))) 
                            << 0x20U) | (QData)((IData)(
                                                        ((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a1_int) 
                                                         << (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__acc_fir_int)))))
                        : (((QData)((IData)(((((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a2_int) 
                                                              >> 9U)))) 
                                               << 0xaU) 
                                              | (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a2_int)) 
                                             << (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__acc_fir_int)))) 
                            << 0x20U) | (QData)((IData)(
                                                        ((((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a1_int) 
                                                                          >> 9U)))) 
                                                           << 0xaU) 
                                                          | (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a1_int)) 
                                                         << (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__acc_fir_int))))))
                    : ((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__unsigned_a_int)
                        ? (((QData)((IData)(((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a2_int) 
                                             << (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__acc_fir_int)))) 
                            << 0x20U) | (QData)((IData)(
                                                        ((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a1_int) 
                                                         << (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__acc_fir_int)))))
                        : (((QData)((IData)(((((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a2_int) 
                                                              >> 9U)))) 
                                               << 0xaU) 
                                              | (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a2_int)) 
                                             << (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__acc_fir_int)))) 
                            << 0x20U) | (QData)((IData)(
                                                        ((((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a1_int) 
                                                                          >> 9U)))) 
                                                           << 0xaU) 
                                                          | (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a1_int)) 
                                                         << (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__acc_fir_int)))))));
            vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_a2 
                = (0x3ffU & 0U);
        } else if ((1U & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__feedback_int))) {
            vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__add_sub_in 
                = ((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__unsigned_a_int)
                    ? (((QData)((IData)(((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a2_int) 
                                         << (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__acc_fir_int)))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a1_int) 
                                                     << (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__acc_fir_int)))))
                    : (((QData)((IData)(((((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a2_int) 
                                                          >> 9U)))) 
                                           << 0xaU) 
                                          | (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a2_int)) 
                                         << (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__acc_fir_int)))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a1_int) 
                                                                      >> 9U)))) 
                                                       << 0xaU) 
                                                      | (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a1_int)) 
                                                     << (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__acc_fir_int))))));
            vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_a2 
                = (0x3ffU & 1U);
        } else {
            vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__add_sub_in 
                = ((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__unsigned_a_int)
                    ? (((QData)((IData)(((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a2_int) 
                                         << (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__acc_fir_int)))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a1_int) 
                                                     << (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__acc_fir_int)))))
                    : (((QData)((IData)(((((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a2_int) 
                                                          >> 9U)))) 
                                           << 0xaU) 
                                          | (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a2_int)) 
                                         << (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__acc_fir_int)))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a1_int) 
                                                                      >> 9U)))) 
                                                       << 0xaU) 
                                                      | (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a1_int)) 
                                                     << (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__acc_fir_int))))));
            vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_a2 
                = (0x3ffU & 0U);
        }
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_b1 
            = vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__b1_int;
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_b2 
            = vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__b2_int;
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_a1 = 0U;
    } else if ((2U & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__feedback_int))) {
        if ((1U & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__feedback_int))) {
            vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__add_sub_in 
                = ((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__unsigned_a_int)
                    ? (((QData)((IData)(((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a2_int) 
                                         << (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__acc_fir_int)))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a1_int) 
                                                     << (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__acc_fir_int)))))
                    : (((QData)((IData)(((((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a2_int) 
                                                          >> 9U)))) 
                                           << 0xaU) 
                                          | (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a2_int)) 
                                         << (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__acc_fir_int)))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a1_int) 
                                                                      >> 9U)))) 
                                                       << 0xaU) 
                                                      | (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a1_int)) 
                                                     << (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__acc_fir_int))))));
            vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_b1 
                = vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__b1_int;
            vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_b2 
                = vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__b2_int;
            vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_a1 
                = (0x3ffU & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__accumulator));
            vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_a2 
                = (0x3ffU & (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__accumulator 
                                     >> 0x20U)));
        } else {
            vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__add_sub_in 
                = ((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__unsigned_a_int)
                    ? (((QData)((IData)(((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a2_int) 
                                         << (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__acc_fir_int)))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a1_int) 
                                                     << (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__acc_fir_int)))))
                    : (((QData)((IData)(((((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a2_int) 
                                                          >> 9U)))) 
                                           << 0xaU) 
                                          | (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a2_int)) 
                                         << (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__acc_fir_int)))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a1_int) 
                                                                      >> 9U)))) 
                                                       << 0xaU) 
                                                      | (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a1_int)) 
                                                     << (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__acc_fir_int))))));
            vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_b1 = 0U;
            vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_b2 = 0U;
            vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_a1 
                = (0x3ffU & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a1_int));
            vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_a2 
                = (0x3ffU & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a2_int));
        }
    } else {
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__add_sub_in 
            = ((1U & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__feedback_int))
                ? 0ULL : vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__accumulator);
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_b1 
            = vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__b1_int;
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_b2 
            = vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__b2_int;
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_a1 
            = (0x3ffU & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a1_int));
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_a2 
            = (0x3ffU & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__a2_int));
    }
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__round_int 
        = vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__round_reg1;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__saturate_int 
        = vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__saturate_reg1;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__shift_right_int 
        = vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__shift_right_reg1;
    if (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__unsigned_a_int) {
        if (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__unsigned_b_int) {
            vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_out1 
                = ((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_a1) 
                   * (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_b1));
            vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_out2 
                = ((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_a2) 
                   * (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_b2));
            vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_out 
                = (((QData)((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_out2)) 
                    << 0x20U) | (QData)((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_out1)));
        } else {
            vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_out1 
                = VL_MULS_III(32, VL_EXTENDS_II(32,11, (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_a1)), 
                              VL_EXTENDS_II(32,9, (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_b1)));
            vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_out2 
                = VL_MULS_III(32, VL_EXTENDS_II(32,11, (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_a2)), 
                              VL_EXTENDS_II(32,9, (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_b2)));
            vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_out 
                = (((QData)((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_out2)) 
                    << 0x20U) | (QData)((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_out1)));
        }
    } else if (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__unsigned_b_int) {
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_out1 
            = VL_MULS_III(32, VL_EXTENDS_II(32,10, (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_a1)), 
                          VL_EXTENDS_II(32,10, (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_b1)));
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_out2 
            = VL_MULS_III(32, VL_EXTENDS_II(32,10, (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_a2)), 
                          VL_EXTENDS_II(32,10, (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_b2)));
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_out 
            = (((QData)((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_out2)) 
                << 0x20U) | (QData)((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_out1)));
    } else {
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_out1 
            = VL_MULS_III(32, VL_EXTENDS_II(32,10, (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_a1)), 
                          VL_EXTENDS_II(32,9, (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_b1)));
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_out2 
            = VL_MULS_III(32, VL_EXTENDS_II(32,10, (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_a2)), 
                          VL_EXTENDS_II(32,9, (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_b2)));
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_out 
            = (((QData)((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_out2)) 
                << 0x20U) | (QData)((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_out1)));
    }
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__add_sub_out 
        = ((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__subtract_int)
            ? (((QData)((IData)(((IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__add_sub_in 
                                          >> 0x20U)) 
                                 - (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_out 
                                            >> 0x20U))))) 
                << 0x20U) | (QData)((IData)(((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__add_sub_in) 
                                             - (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_out)))))
            : (((QData)((IData)(((IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__add_sub_in 
                                          >> 0x20U)) 
                                 + (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_out 
                                            >> 0x20U))))) 
                << 0x20U) | (QData)((IData)(((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__add_sub_in) 
                                             + (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__mult_out))))));
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__pre_shift 
        = vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__add_sub_out;
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__shift_right_f0 
        = ((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__pre_shift) 
           >> (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__shift_right_int));
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__shift_right_f1 
        = ((IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__pre_shift 
                    >> 0x20U)) >> (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__shift_right_int));
    if (((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__round_int) 
         & (0U < (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__shift_right_int)))) {
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__round_f0 
            = ((1U & (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__pre_shift 
                              >> (0x3fU & ((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__shift_right_int) 
                                           - (IData)(1U))))))
                ? ((IData)(1U) + vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__shift_right_f0)
                : vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__shift_right_f0);
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__round_f1 
            = ((1U & (IData)((vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__pre_shift 
                              >> (0x3fU & ((IData)(0x1fU) 
                                           + (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__shift_right_int))))))
                ? ((IData)(1U) + vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__shift_right_f1)
                : vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__shift_right_f1);
    } else {
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__round_f0 
            = vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__shift_right_f0;
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__round_f1 
            = vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__shift_right_f1;
    }
    if (vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__saturate_int) {
        if (((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__unsigned_a_int) 
             & (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__unsigned_b_int))) {
            vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__saturate_f0 
                = (VL_GTS_III(32, 0U, vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__round_f0)
                    ? 0U : ((0x7ffffU < vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__round_f0)
                             ? 0x7ffffU : (0x7ffffU 
                                           & vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__round_f0)));
            vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__saturate_f1 
                = (VL_GTS_III(32, 0U, vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__round_f1)
                    ? 0U : ((0x7ffffU < vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__round_f1)
                             ? 0x7ffffU : (0x7ffffU 
                                           & vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__round_f1)));
        } else {
            vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__saturate_f0 
                = (VL_LTS_III(32, 0x3ffffU, vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__round_f0)
                    ? 0x3ffffU : (VL_GTS_III(32, 0xfffc0000U, vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__round_f0)
                                   ? 0x40000U : (0x7ffffU 
                                                 & vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__round_f0)));
            vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__saturate_f1 
                = (VL_LTS_III(32, 0x3ffffU, vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__round_f1)
                    ? 0x3ffffU : (VL_GTS_III(32, 0xfffc0000U, vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__round_f1)
                                   ? 0x40000U : (0x7ffffU 
                                                 & vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__round_f1)));
        }
    } else {
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__saturate_f0 
            = (0x7ffffU & vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__round_f0);
        vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__saturate_f1 
            = (0x7ffffU & vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__round_f1);
    }
    vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__z_out 
        = (((QData)((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__saturate_f1)) 
            << 0x13U) | (QData)((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__netlist__DOT__RS_DSP_MULTADD_REGIN_z_out__05b1__05d__DOT__genblk1__DOT__DSP19X2_MULTADD_REGIN__DOT__saturate_f0)));
}

void Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___eval_nba(Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

void Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___eval_triggers__act(Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root* vlSelf);
void Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___timing_commit(Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___dump_triggers__act(Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root* vlSelf);
#endif  // VL_DEBUG
void Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___timing_resume(Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___dump_triggers__nba(Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root* vlSelf);
#endif  // VL_DEBUG

void Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___eval(Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___eval\n"); );
    // Init
    VlTriggerVec<4> __VpreTriggered;
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
            Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___eval_triggers__act(vlSelf);
            Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___timing_commit(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Validation/RTL_testcases/DSP_Instantiation_19x2/add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2/EDA-2522/./sim/co_sim_tb/co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___timing_resume(vlSelf);
                Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Validation/RTL_testcases/DSP_Instantiation_19x2/add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2/EDA-2522/./sim/co_sim_tb/co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___eval_nba(vlSelf);
        }
    }
}

void Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___timing_commit(Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hfedab95c__0.commit("@(negedge co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2.clk)");
    }
    if ((! (8ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hc605704e__0.commit("@([changed] co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2.acc_fir)");
    }
}

void Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___timing_resume(Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hfedab95c__0.resume("@(negedge co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2.clk)");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hc605704e__0.resume("@([changed] co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2.acc_fir)");
    }
}

#ifdef VL_DEBUG
void Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___eval_debug_assertions(Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
