create_design SBox
target_device 1GVTC
add_design_file ./rtl/SBox.v
set_top_module SBox
analyze
synth_options -new_tdp36k
synthesize delay
