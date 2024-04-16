# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vco_sim_b_registered_input_to_output_new_primitive.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 1

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vco_sim_b_registered_input_to_output_new_primitive \
	Vco_sim_b_registered_input_to_output_new_primitive___024root__DepSet_hd837b0dd__0 \
	Vco_sim_b_registered_input_to_output_new_primitive___024root__DepSet_h0a8e0242__0 \
	Vco_sim_b_registered_input_to_output_new_primitive__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vco_sim_b_registered_input_to_output_new_primitive___024root__Slow \
	Vco_sim_b_registered_input_to_output_new_primitive___024root__DepSet_hd837b0dd__0__Slow \
	Vco_sim_b_registered_input_to_output_new_primitive___024root__DepSet_h0a8e0242__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vco_sim_b_registered_input_to_output_new_primitive__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vco_sim_b_registered_input_to_output_new_primitive__Syms \
	Vco_sim_b_registered_input_to_output_new_primitive__Trace__0__Slow \
	Vco_sim_b_registered_input_to_output_new_primitive__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_fst_c \
	verilated_timing \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
