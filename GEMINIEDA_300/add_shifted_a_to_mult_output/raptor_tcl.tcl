#!/usr/bin/tclsh
create_design add_shifted_a_to_mult_output
target_device GEMINI
add_include_path ./rtl
add_library_path ./rtl
add_design_file ./rtl/add_shifted_a_to_mult_output.v
set_top_module add_shifted_a_to_mult_output
synthesize delay
pnr_options --gen_post_synthesis_netlist on
packing
#global_placement
#place
#route
#sta
#power
#bitstream
#tcl_exit
