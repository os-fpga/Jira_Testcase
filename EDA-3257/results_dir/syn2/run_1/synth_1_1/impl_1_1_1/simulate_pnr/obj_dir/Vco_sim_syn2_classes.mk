# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vco_sim_syn2.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 1

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vco_sim_syn2 \
	Vco_sim_syn2___024root__DepSet_h78b0fe5b__0 \
	Vco_sim_syn2___024root__DepSet_h5867f094__0 \
	Vco_sim_syn2___024root__DepSet_h5867f094__1 \
	Vco_sim_syn2___024root__DepSet_h5867f094__2 \
	Vco_sim_syn2___024root__DepSet_h5867f094__3 \
	Vco_sim_syn2___024root__DepSet_h5867f094__4 \
	Vco_sim_syn2___024root__DepSet_h5867f094__5 \
	Vco_sim_syn2___024root__DepSet_h5867f094__6 \
	Vco_sim_syn2___024root__DepSet_h5867f094__7 \
	Vco_sim_syn2___024root__DepSet_h5867f094__8 \
	Vco_sim_syn2___024root__DepSet_h5867f094__9 \
	Vco_sim_syn2___024root__DepSet_h5867f094__10 \
	Vco_sim_syn2___024root__DepSet_h5867f094__11 \
	Vco_sim_syn2___024root__DepSet_h5867f094__12 \
	Vco_sim_syn2___024root__DepSet_h5867f094__13 \
	Vco_sim_syn2___024root__DepSet_h5867f094__14 \
	Vco_sim_syn2___024root__DepSet_h5867f094__15 \
	Vco_sim_syn2___024root__DepSet_h5867f094__16 \
	Vco_sim_syn2___024root__DepSet_h5867f094__17 \
	Vco_sim_syn2___024root__DepSet_h5867f094__18 \
	Vco_sim_syn2___024root__DepSet_h5867f094__19 \
	Vco_sim_syn2___024root__DepSet_h5867f094__20 \
	Vco_sim_syn2_fpu_mul__DepSet_h4ea1875c__0 \
	Vco_sim_syn2_fpu_mul__DepSet_h2e77178d__0 \
	Vco_sim_syn2_fpu_add__DepSet_h3c721270__0 \
	Vco_sim_syn2_fpu_add__DepSet_h9d2a8cb9__0 \
	Vco_sim_syn2__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vco_sim_syn2__ConstPool_0 \
	Vco_sim_syn2___024root__Slow \
	Vco_sim_syn2___024root__DepSet_h78b0fe5b__0__Slow \
	Vco_sim_syn2___024root__DepSet_h5867f094__0__Slow \
	Vco_sim_syn2___024root__DepSet_h5867f094__1__Slow \
	Vco_sim_syn2___024root__DepSet_h5867f094__2__Slow \
	Vco_sim_syn2___024root__DepSet_h5867f094__3__Slow \
	Vco_sim_syn2___024root__DepSet_h5867f094__4__Slow \
	Vco_sim_syn2___024root__DepSet_h5867f094__5__Slow \
	Vco_sim_syn2___024root__DepSet_h5867f094__6__Slow \
	Vco_sim_syn2___024root__DepSet_h5867f094__7__Slow \
	Vco_sim_syn2___024root__DepSet_h5867f094__8__Slow \
	Vco_sim_syn2___024root__DepSet_h5867f094__9__Slow \
	Vco_sim_syn2___024root__DepSet_h5867f094__10__Slow \
	Vco_sim_syn2___024root__DepSet_h5867f094__11__Slow \
	Vco_sim_syn2___024root__DepSet_h5867f094__12__Slow \
	Vco_sim_syn2___024root__DepSet_h5867f094__13__Slow \
	Vco_sim_syn2___024root__DepSet_h5867f094__14__Slow \
	Vco_sim_syn2___024root__DepSet_h5867f094__15__Slow \
	Vco_sim_syn2___024root__DepSet_h5867f094__16__Slow \
	Vco_sim_syn2___024root__DepSet_h5867f094__17__Slow \
	Vco_sim_syn2___024root__DepSet_h5867f094__18__Slow \
	Vco_sim_syn2___024root__DepSet_h5867f094__19__Slow \
	Vco_sim_syn2___024root__DepSet_h5867f094__20__Slow \
	Vco_sim_syn2___024root__DepSet_h5867f094__21__Slow \
	Vco_sim_syn2___024root__DepSet_h5867f094__22__Slow \
	Vco_sim_syn2_fpu_mul__Slow \
	Vco_sim_syn2_fpu_mul__DepSet_h2e77178d__0__Slow \
	Vco_sim_syn2_fpu_add__Slow \
	Vco_sim_syn2_fpu_add__DepSet_h9d2a8cb9__0__Slow \
	Vco_sim_syn2_fpu_add__DepSet_h9d2a8cb9__1__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vco_sim_syn2__Trace__0 \
	Vco_sim_syn2__Trace__1 \
	Vco_sim_syn2__Trace__2 \
	Vco_sim_syn2__Trace__3 \
	Vco_sim_syn2__Trace__4 \
	Vco_sim_syn2__Trace__5 \
	Vco_sim_syn2__Trace__6 \
	Vco_sim_syn2__Trace__7 \
	Vco_sim_syn2__Trace__8 \
	Vco_sim_syn2__Trace__9 \
	Vco_sim_syn2__Trace__10 \
	Vco_sim_syn2__Trace__11 \
	Vco_sim_syn2__Trace__12 \
	Vco_sim_syn2__Trace__13 \
	Vco_sim_syn2__Trace__14 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vco_sim_syn2__Syms \
	Vco_sim_syn2__Trace__0__Slow \
	Vco_sim_syn2__TraceDecls__0__Slow \
	Vco_sim_syn2__Trace__1__Slow \
	Vco_sim_syn2__Trace__2__Slow \
	Vco_sim_syn2__Trace__3__Slow \
	Vco_sim_syn2__Trace__4__Slow \
	Vco_sim_syn2__Trace__5__Slow \
	Vco_sim_syn2__Trace__6__Slow \
	Vco_sim_syn2__Trace__7__Slow \
	Vco_sim_syn2__Trace__8__Slow \
	Vco_sim_syn2__Trace__9__Slow \
	Vco_sim_syn2__Trace__10__Slow \
	Vco_sim_syn2__Trace__11__Slow \
	Vco_sim_syn2__Trace__12__Slow \
	Vco_sim_syn2__Trace__13__Slow \
	Vco_sim_syn2__Trace__14__Slow \
	Vco_sim_syn2__Trace__15__Slow \
	Vco_sim_syn2__Trace__16__Slow \
	Vco_sim_syn2__Trace__17__Slow \
	Vco_sim_syn2__Trace__18__Slow \
	Vco_sim_syn2__Trace__19__Slow \
	Vco_sim_syn2__Trace__20__Slow \
	Vco_sim_syn2__Trace__21__Slow \
	Vco_sim_syn2__Trace__22__Slow \
	Vco_sim_syn2__Trace__23__Slow \
	Vco_sim_syn2__Trace__24__Slow \
	Vco_sim_syn2__Trace__25__Slow \
	Vco_sim_syn2__Trace__26__Slow \
	Vco_sim_syn2__Trace__27__Slow \
	Vco_sim_syn2__Trace__28__Slow \
	Vco_sim_syn2__Trace__29__Slow \
	Vco_sim_syn2__Trace__30__Slow \
	Vco_sim_syn2__Trace__31__Slow \
	Vco_sim_syn2__Trace__32__Slow \
	Vco_sim_syn2__Trace__33__Slow \
	Vco_sim_syn2__Trace__34__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_fst_c \
	verilated_timing \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
