// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2.h for the primary calling header

#include "verilated.h"

#include "Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__Syms.h"
#include "Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__Syms.h"
#include "Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root.h"

VL_INLINE_OPT VlCoroutine Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___eval_initial__TOP__2(Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___eval_initial__TOP__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_hc605704e__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2.acc_fir)", 
                                                           "/nfs_eda_sw/softwares/Raptor/instl_dir/02_23_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/DSP19X2.v", 
                                                           381);
        if (VL_UNLIKELY((0x15U < (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__acc_fir)))) {
            VL_WRITEF("WARNING: DSP19x2 instance %Nco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2.netlist.RS_DSP_MULTADD_REGIN_z_out[20].genblk1.DSP19X2_MULTADD_REGIN ACC_FIR input is %2# which is greater than 21 which serves no function\n",
                      vlSymsp->name(),5,vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__acc_fir);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "/nfs_eda_sw/softwares/Raptor/instl_dir/02_23_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/DSP19X2.v", 
                                               385);
            VL_FINISH_MT("/nfs_eda_sw/softwares/Raptor/instl_dir/02_23_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/DSP19X2.v", 385, "");
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___dump_triggers__act(Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root* vlSelf);
#endif  // VL_DEBUG

void Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___eval_triggers__act(Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__clk__0))) 
                                     | ((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__reset__0)))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((~ (IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__clk__0)));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__acc_fir) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__acc_fir__0)));
    vlSelf->__Vtrigprevexpr___TOP__co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__clk__0 
        = vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__reset__0 
        = vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__reset;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__acc_fir__0 
        = vlSelf->co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2__DOT__acc_fir;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(3U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vco_sim_add_shifted_a_to_mult_output_coeff1_input_registered_dsp19x2___024root___dump_triggers__act(vlSelf);
    }
#endif
}
