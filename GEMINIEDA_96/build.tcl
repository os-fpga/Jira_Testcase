create_design test_soc
target_device GEMINI
add_include_path ./
add_design_file VexRiscv.v
add_design_file test_soc.v
set_top_module test_soc
add_constraint_file test_soc.sdc
synth_options -fast
synth
#packing
#place
#route
#sta
#power
#bitstream
