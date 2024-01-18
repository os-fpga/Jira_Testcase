create_design matmul_16x16_systolic
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl/
add_library_path ./rtl/
add_library_ext .v .sv
add_design_file -V_2001 ./rtl/Dual_port_ram.v
add_design_file -V_2001 ./rtl/RC_tpu_16x16_int8.v
set_top_module matmul_16x16_systolic
add_constraint_file ./raptor_sdc.sdc
analyze
synth_options -effort high
synthesize delay