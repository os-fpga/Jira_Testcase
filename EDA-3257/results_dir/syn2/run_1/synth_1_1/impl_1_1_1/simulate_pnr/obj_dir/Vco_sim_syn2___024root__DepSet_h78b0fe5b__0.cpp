// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_syn2.h for the primary calling header

#include "Vco_sim_syn2__pch.h"
#include "Vco_sim_syn2__Syms.h"
#include "Vco_sim_syn2___024root.h"

VL_ATTR_COLD void Vco_sim_syn2___024root___eval_initial__TOP(Vco_sim_syn2___024root* vlSelf);
VlCoroutine Vco_sim_syn2___024root___eval_initial__TOP__Vtiming__0(Vco_sim_syn2___024root* vlSelf);
VlCoroutine Vco_sim_syn2___024root___eval_initial__TOP__Vtiming__1(Vco_sim_syn2___024root* vlSelf);
void Vco_sim_syn2_fpu_mul___eval_initial__TOP__co_sim_syn2__DOT__golden__DOT__x1_mul(Vco_sim_syn2_fpu_mul* vlSelf);
void Vco_sim_syn2_fpu_add___eval_initial__TOP__co_sim_syn2__DOT__golden__DOT__add1_add(Vco_sim_syn2_fpu_add* vlSelf);

void Vco_sim_syn2___024root___eval_initial(Vco_sim_syn2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_syn2___024root___eval_initial\n"); );
    // Body
    Vco_sim_syn2___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vco_sim_syn2___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vco_sim_syn2___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vco_sim_syn2_fpu_mul___eval_initial__TOP__co_sim_syn2__DOT__golden__DOT__x1_mul((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul));
    Vco_sim_syn2_fpu_mul___eval_initial__TOP__co_sim_syn2__DOT__golden__DOT__x1_mul((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul));
    Vco_sim_syn2_fpu_mul___eval_initial__TOP__co_sim_syn2__DOT__golden__DOT__x1_mul((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul));
    Vco_sim_syn2_fpu_mul___eval_initial__TOP__co_sim_syn2__DOT__golden__DOT__x1_mul((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul));
    Vco_sim_syn2_fpu_add___eval_initial__TOP__co_sim_syn2__DOT__golden__DOT__add1_add((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add));
    Vco_sim_syn2_fpu_add___eval_initial__TOP__co_sim_syn2__DOT__golden__DOT__add1_add((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add));
    Vco_sim_syn2_fpu_add___eval_initial__TOP__co_sim_syn2__DOT__golden__DOT__add1_add((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add));
    Vco_sim_syn2_fpu_add___eval_initial__TOP__co_sim_syn2__DOT__golden__DOT__add1_add((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add));
    Vco_sim_syn2_fpu_add___eval_initial__TOP__co_sim_syn2__DOT__golden__DOT__add1_add((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add));
    vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__clock__0 
        = vlSelf->co_sim_syn2__DOT__clock;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d_input_5_0__0 
        = vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d_input_5_0;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__ACC_FIR__0 
        = vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__ACC_FIR;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__ACC_FIR__0 
        = vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__ACC_FIR;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__ACC_FIR__0 
        = vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__ACC_FIR;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__ACC_FIR__0 
        = vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__ACC_FIR;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__golden__DOT__add1_add____PVT__u1__DOT__adj_op_tmp__0 
        = vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__adj_op_tmp;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__golden__DOT__add1_add____PVT__u1__DOT__exp_diff_sft__0 
        = vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__exp_diff_sft;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__golden__DOT__add2_add____PVT__u1__DOT__adj_op_tmp__0 
        = vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__adj_op_tmp;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__golden__DOT__add2_add____PVT__u1__DOT__exp_diff_sft__0 
        = vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__exp_diff_sft;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__golden__DOT__add3_add____PVT__u1__DOT__adj_op_tmp__0 
        = vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__adj_op_tmp;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__golden__DOT__add3_add____PVT__u1__DOT__exp_diff_sft__0 
        = vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__exp_diff_sft;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__golden__DOT__add4_add____PVT__u1__DOT__adj_op_tmp__0 
        = vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__adj_op_tmp;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__golden__DOT__add4_add____PVT__u1__DOT__exp_diff_sft__0 
        = vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__exp_diff_sft;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__golden__DOT__add5_add____PVT__u1__DOT__adj_op_tmp__0 
        = vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__adj_op_tmp;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__golden__DOT__add5_add____PVT__u1__DOT__exp_diff_sft__0 
        = vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__exp_diff_sft;
}

VL_INLINE_OPT VlCoroutine Vco_sim_syn2___024root___eval_initial__TOP__Vtiming__1(Vco_sim_syn2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_syn2___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Init
    IData/*31:0*/ co_sim_syn2__DOT____Vrepeat1;
    co_sim_syn2__DOT____Vrepeat1 = 0;
    // Body
    vlSelf->co_sim_syn2__DOT__in4 = 0U;
    vlSelf->co_sim_syn2__DOT__in1 = 0U;
    vlSelf->co_sim_syn2__DOT__in5 = 0U;
    vlSelf->co_sim_syn2__DOT__in3 = 0U;
    vlSelf->co_sim_syn2__DOT__in2 = 0U;
    vlSelf->co_sim_syn2__DOT__reset = 0U;
    co_await vlSelf->__VtrigSched_h3dca9bc5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_syn2.clock)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/12SEPT/Validation/RTL_testcases/Benchmarking_QoR_testcases/syn2/results_dir/./sim/co_sim_tb/co_sim_syn2.v", 
                                                       41);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VtrigSched_h3dca9bc5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_syn2.clock)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/12SEPT/Validation/RTL_testcases/Benchmarking_QoR_testcases/syn2/results_dir/./sim/co_sim_tb/co_sim_syn2.v", 
                                                       41);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    if (((((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.out 
            != vlSelf->co_sim_syn2__DOT__out_3_netlist) 
           | (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.out 
              != vlSelf->co_sim_syn2__DOT__out_4_netlist)) 
          | (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.out 
             != vlSelf->co_sim_syn2__DOT__out_1_netlist)) 
         | (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.out 
            != vlSelf->co_sim_syn2__DOT__out_2_netlist))) {
        VL_WRITEF_NX("Data Mismatch: Actual output: %0#, %0#, %0#, %0#, Netlist Output %0#, %0#, %0#, %0#, Time: %0t \n",0,
                     32,vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.out,
                     32,vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.out,
                     32,vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.out,
                     32,vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.out,
                     32,vlSelf->co_sim_syn2__DOT__out_3_netlist,
                     32,vlSelf->co_sim_syn2__DOT__out_4_netlist,
                     32,vlSelf->co_sim_syn2__DOT__out_1_netlist,
                     32,vlSelf->co_sim_syn2__DOT__out_2_netlist,
                     64,VL_TIME_UNITED_Q(100000),-9);
        vlSelf->co_sim_syn2__DOT__mismatch = ((IData)(1U) 
                                              + vlSelf->co_sim_syn2__DOT__mismatch);
    } else {
        VL_WRITEF_NX("Data Matched: Actual output: %0#, %0#, %0#, %0#, Netlist Output %0#, %0#, %0#, %0#, Time: %0t \n",0,
                     32,vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.out,
                     32,vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.out,
                     32,vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.out,
                     32,vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.out,
                     32,vlSelf->co_sim_syn2__DOT__out_3_netlist,
                     32,vlSelf->co_sim_syn2__DOT__out_4_netlist,
                     32,vlSelf->co_sim_syn2__DOT__out_1_netlist,
                     32,vlSelf->co_sim_syn2__DOT__out_2_netlist,
                     64,VL_TIME_UNITED_Q(100000),-9);
    }
    co_sim_syn2__DOT____Vrepeat1 = 0x64U;
    while (VL_LTS_III(32, 0U, co_sim_syn2__DOT____Vrepeat1)) {
        co_await vlSelf->__VtrigSched_h3dca9bc5__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge co_sim_syn2.clock)", 
                                                           "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/12SEPT/Validation/RTL_testcases/Benchmarking_QoR_testcases/syn2/results_dir/./sim/co_sim_tb/co_sim_syn2.v", 
                                                           44);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->co_sim_syn2__DOT__in4 = VL_RANDOM_I();
        vlSelf->co_sim_syn2__DOT__in1 = VL_RANDOM_I();
        vlSelf->co_sim_syn2__DOT__in5 = VL_RANDOM_I();
        vlSelf->co_sim_syn2__DOT__in3 = VL_RANDOM_I();
        vlSelf->co_sim_syn2__DOT__in2 = VL_RANDOM_I();
        vlSelf->co_sim_syn2__DOT__reset = (1U & VL_RANDOM_I());
        if (((((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.out 
                != vlSelf->co_sim_syn2__DOT__out_3_netlist) 
               | (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.out 
                  != vlSelf->co_sim_syn2__DOT__out_4_netlist)) 
              | (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.out 
                 != vlSelf->co_sim_syn2__DOT__out_1_netlist)) 
             | (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.out 
                != vlSelf->co_sim_syn2__DOT__out_2_netlist))) {
            VL_WRITEF_NX("Data Mismatch: Actual output: %0#, %0#, %0#, %0#, Netlist Output %0#, %0#, %0#, %0#, Time: %0t \n",0,
                         32,vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.out,
                         32,vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.out,
                         32,vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.out,
                         32,vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.out,
                         32,vlSelf->co_sim_syn2__DOT__out_3_netlist,
                         32,vlSelf->co_sim_syn2__DOT__out_4_netlist,
                         32,vlSelf->co_sim_syn2__DOT__out_1_netlist,
                         32,vlSelf->co_sim_syn2__DOT__out_2_netlist,
                         64,VL_TIME_UNITED_Q(100000),
                         -9);
            vlSelf->co_sim_syn2__DOT__mismatch = ((IData)(1U) 
                                                  + vlSelf->co_sim_syn2__DOT__mismatch);
        } else {
            VL_WRITEF_NX("Data Matched: Actual output: %0#, %0#, %0#, %0#, Netlist Output %0#, %0#, %0#, %0#, Time: %0t \n",0,
                         32,vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.out,
                         32,vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.out,
                         32,vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.out,
                         32,vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.out,
                         32,vlSelf->co_sim_syn2__DOT__out_3_netlist,
                         32,vlSelf->co_sim_syn2__DOT__out_4_netlist,
                         32,vlSelf->co_sim_syn2__DOT__out_1_netlist,
                         32,vlSelf->co_sim_syn2__DOT__out_2_netlist,
                         64,VL_TIME_UNITED_Q(100000),
                         -9);
        }
        co_sim_syn2__DOT____Vrepeat1 = (co_sim_syn2__DOT____Vrepeat1 
                                        - (IData)(1U));
    }
    co_await vlSelf->__VtrigSched_h3dca9bc5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_syn2.clock)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/12SEPT/Validation/RTL_testcases/Benchmarking_QoR_testcases/syn2/results_dir/./sim/co_sim_tb/co_sim_syn2.v", 
                                                       56);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VtrigSched_h3dca9bc5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_syn2.clock)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/12SEPT/Validation/RTL_testcases/Benchmarking_QoR_testcases/syn2/results_dir/./sim/co_sim_tb/co_sim_syn2.v", 
                                                       56);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->co_sim_syn2__DOT__in4 = 0xffffffffU;
    vlSelf->co_sim_syn2__DOT__in1 = 0xffffffffU;
    vlSelf->co_sim_syn2__DOT__in5 = 0xffffffffU;
    vlSelf->co_sim_syn2__DOT__in3 = 0xffffffffU;
    vlSelf->co_sim_syn2__DOT__in2 = 0xffffffffU;
    vlSelf->co_sim_syn2__DOT__reset = 1U;
    co_await vlSelf->__VtrigSched_h3dca9bc5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_syn2.clock)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/12SEPT/Validation/RTL_testcases/Benchmarking_QoR_testcases/syn2/results_dir/./sim/co_sim_tb/co_sim_syn2.v", 
                                                       63);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VtrigSched_h3dca9bc5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge co_sim_syn2.clock)", 
                                                       "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/12SEPT/Validation/RTL_testcases/Benchmarking_QoR_testcases/syn2/results_dir/./sim/co_sim_tb/co_sim_syn2.v", 
                                                       63);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    if (((((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.out 
            != vlSelf->co_sim_syn2__DOT__out_3_netlist) 
           | (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.out 
              != vlSelf->co_sim_syn2__DOT__out_4_netlist)) 
          | (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.out 
             != vlSelf->co_sim_syn2__DOT__out_1_netlist)) 
         | (vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.out 
            != vlSelf->co_sim_syn2__DOT__out_2_netlist))) {
        VL_WRITEF_NX("Data Mismatch: Actual output: %0#, %0#, %0#, %0#, Netlist Output %0#, %0#, %0#, %0#, Time: %0t \n",0,
                     32,vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.out,
                     32,vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.out,
                     32,vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.out,
                     32,vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.out,
                     32,vlSelf->co_sim_syn2__DOT__out_3_netlist,
                     32,vlSelf->co_sim_syn2__DOT__out_4_netlist,
                     32,vlSelf->co_sim_syn2__DOT__out_1_netlist,
                     32,vlSelf->co_sim_syn2__DOT__out_2_netlist,
                     64,VL_TIME_UNITED_Q(100000),-9);
        vlSelf->co_sim_syn2__DOT__mismatch = ((IData)(1U) 
                                              + vlSelf->co_sim_syn2__DOT__mismatch);
    } else {
        VL_WRITEF_NX("Data Matched: Actual output: %0#, %0#, %0#, %0#, Netlist Output %0#, %0#, %0#, %0#, Time: %0t \n",0,
                     32,vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.out,
                     32,vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.out,
                     32,vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.out,
                     32,vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.out,
                     32,vlSelf->co_sim_syn2__DOT__out_3_netlist,
                     32,vlSelf->co_sim_syn2__DOT__out_4_netlist,
                     32,vlSelf->co_sim_syn2__DOT__out_1_netlist,
                     32,vlSelf->co_sim_syn2__DOT__out_2_netlist,
                     64,VL_TIME_UNITED_Q(100000),-9);
    }
    if (VL_LIKELY((0U == vlSelf->co_sim_syn2__DOT__mismatch))) {
        VL_WRITEF_NX("**** All Comparison Matched *** \n\t\tSimulation Passed\n\n",0);
    } else {
        VL_WRITEF_NX("%0d comparison(s) mismatched\nERROR: SIM: Simulation Failed\n[%0t] %%Fatal: co_sim_syn2.v:70: Assertion failed in %Nco_sim_syn2\n",0,
                     32,vlSelf->co_sim_syn2__DOT__mismatch,
                     64,VL_TIME_UNITED_Q(100000),-9,
                     vlSymsp->name());
        VL_STOP_MT("/nfs_scratch/scratch/CompilerValidation/abdul_hameed/12SEPT/Validation/RTL_testcases/Benchmarking_QoR_testcases/syn2/results_dir/./sim/co_sim_tb/co_sim_syn2.v", 70, "");
    }
    co_await vlSelf->__VdlySched.delay(0x1312d00ULL, 
                                       nullptr, "/nfs_scratch/scratch/CompilerValidation/abdul_hameed/12SEPT/Validation/RTL_testcases/Benchmarking_QoR_testcases/syn2/results_dir/./sim/co_sim_tb/co_sim_syn2.v", 
                                       72);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_FINISH_MT("/nfs_scratch/scratch/CompilerValidation/abdul_hameed/12SEPT/Validation/RTL_testcases/Benchmarking_QoR_testcases/syn2/results_dir/./sim/co_sim_tb/co_sim_syn2.v", 73, "");
    vlSelf->__Vm_traceActivity[3U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vco_sim_syn2___024root___dump_triggers__act(Vco_sim_syn2___024root* vlSelf);
#endif  // VL_DEBUG

void Vco_sim_syn2___024root___eval_triggers__act(Vco_sim_syn2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_syn2___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->co_sim_syn2__DOT__clock) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__clock__0))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->co_sim_syn2__DOT__clock) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__clock__0))) 
                                     | ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d_input_5_0) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d_input_5_0__0)))));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__ACC_FIR) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__ACC_FIR__0)));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__ACC_FIR) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__ACC_FIR__0)));
    vlSelf->__VactTriggered.set(4U, ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__ACC_FIR) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__ACC_FIR__0)));
    vlSelf->__VactTriggered.set(5U, ((IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__ACC_FIR) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__ACC_FIR__0)));
    vlSelf->__VactTriggered.set(6U, ((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__adj_op_tmp 
                                      != vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__golden__DOT__add1_add____PVT__u1__DOT__adj_op_tmp__0) 
                                     | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__exp_diff_sft) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__golden__DOT__add1_add____PVT__u1__DOT__exp_diff_sft__0))));
    vlSelf->__VactTriggered.set(7U, ((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__adj_op_tmp 
                                      != vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__golden__DOT__add2_add____PVT__u1__DOT__adj_op_tmp__0) 
                                     | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__exp_diff_sft) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__golden__DOT__add2_add____PVT__u1__DOT__exp_diff_sft__0))));
    vlSelf->__VactTriggered.set(8U, ((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__adj_op_tmp 
                                      != vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__golden__DOT__add3_add____PVT__u1__DOT__adj_op_tmp__0) 
                                     | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__exp_diff_sft) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__golden__DOT__add3_add____PVT__u1__DOT__exp_diff_sft__0))));
    vlSelf->__VactTriggered.set(9U, ((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__adj_op_tmp 
                                      != vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__golden__DOT__add4_add____PVT__u1__DOT__adj_op_tmp__0) 
                                     | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__exp_diff_sft) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__golden__DOT__add4_add____PVT__u1__DOT__exp_diff_sft__0))));
    vlSelf->__VactTriggered.set(0xaU, ((vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__adj_op_tmp 
                                        != vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__golden__DOT__add5_add____PVT__u1__DOT__adj_op_tmp__0) 
                                       | ((IData)(vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__exp_diff_sft) 
                                          != (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__golden__DOT__add5_add____PVT__u1__DOT__exp_diff_sft__0))));
    vlSelf->__VactTriggered.set(0xbU, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(0xcU, ((~ (IData)(vlSelf->co_sim_syn2__DOT__clock)) 
                                       & (IData)(vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__clock__0)));
    vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__clock__0 
        = vlSelf->co_sim_syn2__DOT__clock;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d_input_5_0__0 
        = vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d_input_5_0;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__ACC_FIR__0 
        = vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__ACC_FIR;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__ACC_FIR__0 
        = vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__ACC_FIR;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__ACC_FIR__0 
        = vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__ACC_FIR;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__ACC_FIR__0 
        = vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__ACC_FIR;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__golden__DOT__add1_add____PVT__u1__DOT__adj_op_tmp__0 
        = vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__adj_op_tmp;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__golden__DOT__add1_add____PVT__u1__DOT__exp_diff_sft__0 
        = vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u1__DOT__exp_diff_sft;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__golden__DOT__add2_add____PVT__u1__DOT__adj_op_tmp__0 
        = vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__adj_op_tmp;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__golden__DOT__add2_add____PVT__u1__DOT__exp_diff_sft__0 
        = vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u1__DOT__exp_diff_sft;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__golden__DOT__add3_add____PVT__u1__DOT__adj_op_tmp__0 
        = vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__adj_op_tmp;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__golden__DOT__add3_add____PVT__u1__DOT__exp_diff_sft__0 
        = vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u1__DOT__exp_diff_sft;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__golden__DOT__add4_add____PVT__u1__DOT__adj_op_tmp__0 
        = vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__adj_op_tmp;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__golden__DOT__add4_add____PVT__u1__DOT__exp_diff_sft__0 
        = vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u1__DOT__exp_diff_sft;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__golden__DOT__add5_add____PVT__u1__DOT__adj_op_tmp__0 
        = vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__adj_op_tmp;
    vlSelf->__Vtrigprevexpr___TOP__co_sim_syn2__DOT__golden__DOT__add5_add____PVT__u1__DOT__exp_diff_sft__0 
        = vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u1__DOT__exp_diff_sft;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(2U, 1U);
        vlSelf->__VactTriggered.set(3U, 1U);
        vlSelf->__VactTriggered.set(4U, 1U);
        vlSelf->__VactTriggered.set(5U, 1U);
        vlSelf->__VactTriggered.set(6U, 1U);
        vlSelf->__VactTriggered.set(7U, 1U);
        vlSelf->__VactTriggered.set(8U, 1U);
        vlSelf->__VactTriggered.set(9U, 1U);
        vlSelf->__VactTriggered.set(0xaU, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vco_sim_syn2___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vco_sim_syn2___024root___nba_sequent__TOP__0(Vco_sim_syn2___024root* vlSelf);
void Vco_sim_syn2___024root___nba_sequent__TOP__1(Vco_sim_syn2___024root* vlSelf);
void Vco_sim_syn2___024root___nba_sequent__TOP__2(Vco_sim_syn2___024root* vlSelf);
void Vco_sim_syn2___024root___nba_sequent__TOP__3(Vco_sim_syn2___024root* vlSelf);
void Vco_sim_syn2___024root___nba_sequent__TOP__4(Vco_sim_syn2___024root* vlSelf);
void Vco_sim_syn2___024root___nba_sequent__TOP__5(Vco_sim_syn2___024root* vlSelf);
void Vco_sim_syn2___024root___nba_sequent__TOP__6(Vco_sim_syn2___024root* vlSelf);
void Vco_sim_syn2___024root___nba_sequent__TOP__7(Vco_sim_syn2___024root* vlSelf);
void Vco_sim_syn2___024root___nba_sequent__TOP__8(Vco_sim_syn2___024root* vlSelf);
void Vco_sim_syn2___024root___nba_sequent__TOP__9(Vco_sim_syn2___024root* vlSelf);
void Vco_sim_syn2___024root___nba_sequent__TOP__10(Vco_sim_syn2___024root* vlSelf);
void Vco_sim_syn2___024root___nba_sequent__TOP__11(Vco_sim_syn2___024root* vlSelf);
void Vco_sim_syn2___024root___nba_sequent__TOP__12(Vco_sim_syn2___024root* vlSelf);
void Vco_sim_syn2___024root___nba_sequent__TOP__13(Vco_sim_syn2___024root* vlSelf);
void Vco_sim_syn2___024root___nba_sequent__TOP__14(Vco_sim_syn2___024root* vlSelf);
void Vco_sim_syn2___024root___nba_sequent__TOP__15(Vco_sim_syn2___024root* vlSelf);
void Vco_sim_syn2___024root___nba_sequent__TOP__16(Vco_sim_syn2___024root* vlSelf);
void Vco_sim_syn2___024root___nba_sequent__TOP__17(Vco_sim_syn2___024root* vlSelf);
void Vco_sim_syn2___024root___nba_sequent__TOP__18(Vco_sim_syn2___024root* vlSelf);
void Vco_sim_syn2___024root___nba_sequent__TOP__19(Vco_sim_syn2___024root* vlSelf);
void Vco_sim_syn2___024root___nba_sequent__TOP__20(Vco_sim_syn2___024root* vlSelf);
void Vco_sim_syn2___024root___nba_sequent__TOP__21(Vco_sim_syn2___024root* vlSelf);
void Vco_sim_syn2___024root___nba_sequent__TOP__22(Vco_sim_syn2___024root* vlSelf);
void Vco_sim_syn2___024root___nba_sequent__TOP__23(Vco_sim_syn2___024root* vlSelf);
void Vco_sim_syn2___024root___nba_sequent__TOP__24(Vco_sim_syn2___024root* vlSelf);
void Vco_sim_syn2___024root___nba_sequent__TOP__25(Vco_sim_syn2___024root* vlSelf);
void Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__0(Vco_sim_syn2_fpu_add* vlSelf);
void Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add2_add__0(Vco_sim_syn2_fpu_add* vlSelf);
void Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add3_add__0(Vco_sim_syn2_fpu_add* vlSelf);
void Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add4_add__0(Vco_sim_syn2_fpu_add* vlSelf);
void Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add5_add__0(Vco_sim_syn2_fpu_add* vlSelf);
void Vco_sim_syn2_fpu_mul___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__0(Vco_sim_syn2_fpu_mul* vlSelf);
void Vco_sim_syn2_fpu_mul___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__0(Vco_sim_syn2_fpu_mul* vlSelf);
void Vco_sim_syn2_fpu_mul___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__0(Vco_sim_syn2_fpu_mul* vlSelf);
void Vco_sim_syn2_fpu_mul___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__0(Vco_sim_syn2_fpu_mul* vlSelf);
void Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add2_add__1(Vco_sim_syn2_fpu_add* vlSelf);
void Vco_sim_syn2_fpu_mul___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__1(Vco_sim_syn2_fpu_mul* vlSelf);
void Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add5_add__1(Vco_sim_syn2_fpu_add* vlSelf);
void Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__1(Vco_sim_syn2_fpu_add* vlSelf);
void Vco_sim_syn2_fpu_mul___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__1(Vco_sim_syn2_fpu_mul* vlSelf);
void Vco_sim_syn2___024root___nba_sequent__TOP__26(Vco_sim_syn2___024root* vlSelf);
void Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__2(Vco_sim_syn2_fpu_add* vlSelf);
void Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add2_add__2(Vco_sim_syn2_fpu_add* vlSelf);
void Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add3_add__1(Vco_sim_syn2_fpu_add* vlSelf);
void Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add4_add__1(Vco_sim_syn2_fpu_add* vlSelf);
void Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add5_add__2(Vco_sim_syn2_fpu_add* vlSelf);
void Vco_sim_syn2___024root___nba_sequent__TOP__27(Vco_sim_syn2___024root* vlSelf);
void Vco_sim_syn2___024root___nba_comb__TOP__0(Vco_sim_syn2___024root* vlSelf);
void Vco_sim_syn2___024root___nba_comb__TOP__1(Vco_sim_syn2___024root* vlSelf);
void Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__3(Vco_sim_syn2_fpu_add* vlSelf);
void Vco_sim_syn2___024root___nba_comb__TOP__2(Vco_sim_syn2___024root* vlSelf);
void Vco_sim_syn2_fpu_add___nba_comb__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__0(Vco_sim_syn2_fpu_add* vlSelf);
void Vco_sim_syn2_fpu_add___nba_comb__TOP__co_sim_syn2__DOT__golden__DOT__add2_add__0(Vco_sim_syn2_fpu_add* vlSelf);
void Vco_sim_syn2_fpu_add___nba_comb__TOP__co_sim_syn2__DOT__golden__DOT__add3_add__0(Vco_sim_syn2_fpu_add* vlSelf);
void Vco_sim_syn2_fpu_add___nba_comb__TOP__co_sim_syn2__DOT__golden__DOT__add4_add__0(Vco_sim_syn2_fpu_add* vlSelf);
void Vco_sim_syn2_fpu_add___nba_comb__TOP__co_sim_syn2__DOT__golden__DOT__add5_add__0(Vco_sim_syn2_fpu_add* vlSelf);

void Vco_sim_syn2___024root___eval_nba(Vco_sim_syn2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_syn2___024root___eval_nba\n"); );
    // Body
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_syn2___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_syn2___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_syn2___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_syn2___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_syn2___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_syn2___024root___nba_sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
        Vco_sim_syn2___024root___nba_sequent__TOP__6(vlSelf);
        Vco_sim_syn2___024root___nba_sequent__TOP__7(vlSelf);
        Vco_sim_syn2___024root___nba_sequent__TOP__8(vlSelf);
        Vco_sim_syn2___024root___nba_sequent__TOP__9(vlSelf);
        Vco_sim_syn2___024root___nba_sequent__TOP__10(vlSelf);
        Vco_sim_syn2___024root___nba_sequent__TOP__11(vlSelf);
        Vco_sim_syn2___024root___nba_sequent__TOP__12(vlSelf);
        Vco_sim_syn2___024root___nba_sequent__TOP__13(vlSelf);
        Vco_sim_syn2___024root___nba_sequent__TOP__14(vlSelf);
        Vco_sim_syn2___024root___nba_sequent__TOP__15(vlSelf);
        Vco_sim_syn2___024root___nba_sequent__TOP__16(vlSelf);
        Vco_sim_syn2___024root___nba_sequent__TOP__17(vlSelf);
        Vco_sim_syn2___024root___nba_sequent__TOP__18(vlSelf);
        Vco_sim_syn2___024root___nba_sequent__TOP__19(vlSelf);
        Vco_sim_syn2___024root___nba_sequent__TOP__20(vlSelf);
        Vco_sim_syn2___024root___nba_sequent__TOP__21(vlSelf);
        Vco_sim_syn2___024root___nba_sequent__TOP__22(vlSelf);
        Vco_sim_syn2___024root___nba_sequent__TOP__23(vlSelf);
        Vco_sim_syn2___024root___nba_sequent__TOP__24(vlSelf);
        Vco_sim_syn2___024root___nba_sequent__TOP__25(vlSelf);
        Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__0((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add));
        Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add2_add__0((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add));
        Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add3_add__0((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add));
        Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add4_add__0((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add));
        Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add5_add__0((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add));
        Vco_sim_syn2_fpu_mul___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__0((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x4_mul));
        Vco_sim_syn2_fpu_mul___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__0((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul));
        Vco_sim_syn2_fpu_mul___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__0((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul));
        Vco_sim_syn2_fpu_mul___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__0((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x2_mul));
        Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add2_add__1((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add));
        Vco_sim_syn2_fpu_mul___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__1((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x1_mul));
        Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add5_add__1((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add));
        Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__1((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add));
        Vco_sim_syn2_fpu_mul___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__1((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__x3_mul));
        Vco_sim_syn2___024root___nba_sequent__TOP__26(vlSelf);
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__2((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add));
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add2_add__2((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add));
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add3_add__1((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add));
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add4_add__1((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add));
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add5_add__2((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add));
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_syn2___024root___nba_sequent__TOP__27(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((0x1801ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_syn2___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if ((0x1800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_syn2___024root___nba_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__3((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add));
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__3((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add));
        Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__3((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add));
        Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__3((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add));
        Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__3((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add));
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_syn2___024root___nba_comb__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
    }
    if ((0x41ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_syn2_fpu_add___nba_comb__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__0((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add1_add));
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
    }
    if ((0x81ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_syn2_fpu_add___nba_comb__TOP__co_sim_syn2__DOT__golden__DOT__add2_add__0((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add2_add));
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
    }
    if ((0x101ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_syn2_fpu_add___nba_comb__TOP__co_sim_syn2__DOT__golden__DOT__add3_add__0((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add3_add));
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
    }
    if ((0x201ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_syn2_fpu_add___nba_comb__TOP__co_sim_syn2__DOT__golden__DOT__add4_add__0((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add4_add));
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
    }
    if ((0x401ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vco_sim_syn2_fpu_add___nba_comb__TOP__co_sim_syn2__DOT__golden__DOT__add5_add__0((&vlSymsp->TOP__co_sim_syn2__DOT__golden__DOT__add5_add));
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
    }
}

VL_INLINE_OPT void Vco_sim_syn2___024root___nba_sequent__TOP__0(Vco_sim_syn2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_syn2___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY((0x2bU < (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__ACC_FIR)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: DSP38.v:301: Assertion failed in %Nco_sim_syn2.route_net.fabric_instance.RS_DSP_MULT_REGIN_REGOUT_$auto_6180.B[37].genblk1.DSP38_MULT_REGIN_REGOUT: \nERROR: DSP38 instance %Nco_sim_syn2.route_net.fabric_instance.RS_DSP_MULT_REGIN_REGOUT_$auto_6180.B[37].genblk1.DSP38_MULT_REGIN_REGOUT ACC_FIR input is %2# which is greater than 43 which serves no function\n",0,
                     64,VL_TIME_UNITED_Q(100000),-9,
                     vlSymsp->name(),vlSymsp->name(),
                     6,(IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__ACC_FIR));
        VL_STOP_MT("/nfs_eda_sw/softwares/Raptor/instl_dir/09_20_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/DSP38.v", 301, "");
    }
}

VL_INLINE_OPT void Vco_sim_syn2___024root___nba_sequent__TOP__1(Vco_sim_syn2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_syn2___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (VL_UNLIKELY((0x2bU < (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__ACC_FIR)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: DSP38.v:301: Assertion failed in %Nco_sim_syn2.route_net.fabric_instance.RS_DSP_MULT_REGIN_REGOUT_$auto_6186.B[37].genblk1.DSP38_MULT_REGIN_REGOUT: \nERROR: DSP38 instance %Nco_sim_syn2.route_net.fabric_instance.RS_DSP_MULT_REGIN_REGOUT_$auto_6186.B[37].genblk1.DSP38_MULT_REGIN_REGOUT ACC_FIR input is %2# which is greater than 43 which serves no function\n",0,
                     64,VL_TIME_UNITED_Q(100000),-9,
                     vlSymsp->name(),vlSymsp->name(),
                     6,(IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__ACC_FIR));
        VL_STOP_MT("/nfs_eda_sw/softwares/Raptor/instl_dir/09_20_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/DSP38.v", 301, "");
    }
}

VL_INLINE_OPT void Vco_sim_syn2___024root___nba_sequent__TOP__2(Vco_sim_syn2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_syn2___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (VL_UNLIKELY((0x2bU < (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__ACC_FIR)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: DSP38.v:301: Assertion failed in %Nco_sim_syn2.route_net.fabric_instance.RS_DSP_MULT_REGIN_REGOUT_$auto_6192.B[37].genblk1.DSP38_MULT_REGIN_REGOUT: \nERROR: DSP38 instance %Nco_sim_syn2.route_net.fabric_instance.RS_DSP_MULT_REGIN_REGOUT_$auto_6192.B[37].genblk1.DSP38_MULT_REGIN_REGOUT ACC_FIR input is %2# which is greater than 43 which serves no function\n",0,
                     64,VL_TIME_UNITED_Q(100000),-9,
                     vlSymsp->name(),vlSymsp->name(),
                     6,(IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__ACC_FIR));
        VL_STOP_MT("/nfs_eda_sw/softwares/Raptor/instl_dir/09_20_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/DSP38.v", 301, "");
    }
}

VL_INLINE_OPT void Vco_sim_syn2___024root___nba_sequent__TOP__3(Vco_sim_syn2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_syn2___024root___nba_sequent__TOP__3\n"); );
    // Body
    if (VL_UNLIKELY((0x2bU < (IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__ACC_FIR)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: DSP38.v:301: Assertion failed in %Nco_sim_syn2.route_net.fabric_instance.RS_DSP_MULT_REGIN_REGOUT_$auto_5911.B[37].genblk1.DSP38_MULT_REGIN_REGOUT: \nERROR: DSP38 instance %Nco_sim_syn2.route_net.fabric_instance.RS_DSP_MULT_REGIN_REGOUT_$auto_5911.B[37].genblk1.DSP38_MULT_REGIN_REGOUT ACC_FIR input is %2# which is greater than 43 which serves no function\n",0,
                     64,VL_TIME_UNITED_Q(100000),-9,
                     vlSymsp->name(),vlSymsp->name(),
                     6,(IData)(vlSelf->co_sim_syn2__DOT__route_net__DOT__fabric_instance__DOT__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__DOT__genblk1__DOT__DSP38_MULT_REGIN_REGOUT__DOT__ACC_FIR));
        VL_STOP_MT("/nfs_eda_sw/softwares/Raptor/instl_dir/09_20_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/sim_models/verilog/DSP38.v", 301, "");
    }
}
