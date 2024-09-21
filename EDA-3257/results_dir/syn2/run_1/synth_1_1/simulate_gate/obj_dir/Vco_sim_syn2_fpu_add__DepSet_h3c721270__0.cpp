// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vco_sim_syn2.h for the primary calling header

#include "Vco_sim_syn2__pch.h"
#include "Vco_sim_syn2__Syms.h"
#include "Vco_sim_syn2_fpu_add.h"

VL_INLINE_OPT void Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__3(Vco_sim_syn2_fpu_add* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add1_add__3\n"); );
    // Body
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))) {
        if ((8U & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))) {
            if ((4U & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: syn2.v:2134: Assertion failed in %Nco_sim_syn2.golden.add1_add.u1: synthesis full_case parallel_case, but non-match found for '5'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(100000),
                                 -9,vlSymsp->name(),
                                 5,(IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft));
                    VL_STOP_MT("/nfs_scratch/scratch/CompilerValidation/abdul_hameed/12SEPT/Validation/RTL_testcases/Benchmarking_QoR_testcases/syn2/results_dir/.././rtl/syn2.v", 2134, "");
                }
            } else {
                vlSelf->__PVT__u1__DOT__sticky = ((2U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != vlSelf->__PVT__u1__DOT__adj_op_tmp)
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0x3ffffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x1ffffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xffffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))));
            }
        } else {
            vlSelf->__PVT__u1__DOT__sticky = ((4U & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x7fffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0x3fffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x1fffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x7ffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0x3ffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x1ffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp)))));
        }
    } else {
        vlSelf->__PVT__u1__DOT__sticky = ((8U & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                           ? ((4U & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x7fffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0x3fffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x1fffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x7ffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0x3ffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x1ffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp)))))
                                           : ((4U & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x7fU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0x3fU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft)) 
                                                   && (1U 
                                                       & vlSelf->__PVT__u1__DOT__adj_op_tmp)))));
    }
}

VL_INLINE_OPT void Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add2_add__3(Vco_sim_syn2_fpu_add* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add2_add__3\n"); );
    // Body
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))) {
        if ((8U & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))) {
            if ((4U & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: syn2.v:2134: Assertion failed in %Nco_sim_syn2.golden.add2_add.u1: synthesis full_case parallel_case, but non-match found for '5'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(100000),
                                 -9,vlSymsp->name(),
                                 5,(IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft));
                    VL_STOP_MT("/nfs_scratch/scratch/CompilerValidation/abdul_hameed/12SEPT/Validation/RTL_testcases/Benchmarking_QoR_testcases/syn2/results_dir/.././rtl/syn2.v", 2134, "");
                }
            } else {
                vlSelf->__PVT__u1__DOT__sticky = ((2U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != vlSelf->__PVT__u1__DOT__adj_op_tmp)
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0x3ffffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x1ffffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xffffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))));
            }
        } else {
            vlSelf->__PVT__u1__DOT__sticky = ((4U & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x7fffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0x3fffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x1fffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x7ffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0x3ffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x1ffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp)))));
        }
    } else {
        vlSelf->__PVT__u1__DOT__sticky = ((8U & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                           ? ((4U & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x7fffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0x3fffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x1fffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x7ffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0x3ffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x1ffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp)))))
                                           : ((4U & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x7fU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0x3fU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft)) 
                                                   && (1U 
                                                       & vlSelf->__PVT__u1__DOT__adj_op_tmp)))));
    }
}

VL_INLINE_OPT void Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add3_add__2(Vco_sim_syn2_fpu_add* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add3_add__2\n"); );
    // Body
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))) {
        if ((8U & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))) {
            if ((4U & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: syn2.v:2134: Assertion failed in %Nco_sim_syn2.golden.add3_add.u1: synthesis full_case parallel_case, but non-match found for '5'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(100000),
                                 -9,vlSymsp->name(),
                                 5,(IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft));
                    VL_STOP_MT("/nfs_scratch/scratch/CompilerValidation/abdul_hameed/12SEPT/Validation/RTL_testcases/Benchmarking_QoR_testcases/syn2/results_dir/.././rtl/syn2.v", 2134, "");
                }
            } else {
                vlSelf->__PVT__u1__DOT__sticky = ((2U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != vlSelf->__PVT__u1__DOT__adj_op_tmp)
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0x3ffffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x1ffffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xffffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))));
            }
        } else {
            vlSelf->__PVT__u1__DOT__sticky = ((4U & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x7fffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0x3fffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x1fffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x7ffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0x3ffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x1ffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp)))));
        }
    } else {
        vlSelf->__PVT__u1__DOT__sticky = ((8U & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                           ? ((4U & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x7fffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0x3fffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x1fffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x7ffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0x3ffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x1ffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp)))))
                                           : ((4U & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x7fU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0x3fU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft)) 
                                                   && (1U 
                                                       & vlSelf->__PVT__u1__DOT__adj_op_tmp)))));
    }
}

VL_INLINE_OPT void Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add4_add__2(Vco_sim_syn2_fpu_add* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add4_add__2\n"); );
    // Body
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))) {
        if ((8U & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))) {
            if ((4U & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: syn2.v:2134: Assertion failed in %Nco_sim_syn2.golden.add4_add.u1: synthesis full_case parallel_case, but non-match found for '5'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(100000),
                                 -9,vlSymsp->name(),
                                 5,(IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft));
                    VL_STOP_MT("/nfs_scratch/scratch/CompilerValidation/abdul_hameed/12SEPT/Validation/RTL_testcases/Benchmarking_QoR_testcases/syn2/results_dir/.././rtl/syn2.v", 2134, "");
                }
            } else {
                vlSelf->__PVT__u1__DOT__sticky = ((2U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != vlSelf->__PVT__u1__DOT__adj_op_tmp)
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0x3ffffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x1ffffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xffffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))));
            }
        } else {
            vlSelf->__PVT__u1__DOT__sticky = ((4U & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x7fffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0x3fffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x1fffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x7ffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0x3ffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x1ffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp)))));
        }
    } else {
        vlSelf->__PVT__u1__DOT__sticky = ((8U & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                           ? ((4U & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x7fffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0x3fffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x1fffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x7ffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0x3ffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x1ffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp)))))
                                           : ((4U & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x7fU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0x3fU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft)) 
                                                   && (1U 
                                                       & vlSelf->__PVT__u1__DOT__adj_op_tmp)))));
    }
}

VL_INLINE_OPT void Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add5_add__3(Vco_sim_syn2_fpu_add* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vco_sim_syn2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vco_sim_syn2_fpu_add___nba_sequent__TOP__co_sim_syn2__DOT__golden__DOT__add5_add__3\n"); );
    // Body
    if ((0x10U & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))) {
        if ((8U & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))) {
            if ((4U & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF_NX("[%0t] %%Error: syn2.v:2134: Assertion failed in %Nco_sim_syn2.golden.add5_add.u1: synthesis full_case parallel_case, but non-match found for '5'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(100000),
                                 -9,vlSymsp->name(),
                                 5,(IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft));
                    VL_STOP_MT("/nfs_scratch/scratch/CompilerValidation/abdul_hameed/12SEPT/Validation/RTL_testcases/Benchmarking_QoR_testcases/syn2/results_dir/.././rtl/syn2.v", 2134, "");
                }
            } else {
                vlSelf->__PVT__u1__DOT__sticky = ((2U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != vlSelf->__PVT__u1__DOT__adj_op_tmp)
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0x3ffffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x1ffffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xffffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))));
            }
        } else {
            vlSelf->__PVT__u1__DOT__sticky = ((4U & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x7fffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0x3fffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x1fffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x7ffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0x3ffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x1ffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xffffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp)))));
        }
    } else {
        vlSelf->__PVT__u1__DOT__sticky = ((8U & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                           ? ((4U & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x7fffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0x3fffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x1fffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x7ffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0x3ffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x1ffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xffU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp)))))
                                           : ((4U & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x7fU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0x3fU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0xfU 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft))
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & vlSelf->__PVT__u1__DOT__adj_op_tmp)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__u1__DOT__exp_diff_sft)) 
                                                   && (1U 
                                                       & vlSelf->__PVT__u1__DOT__adj_op_tmp)))));
    }
}
