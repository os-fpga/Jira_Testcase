#!/usr/bin/tclsh
create_design b_registered_input_to_output
target_device GEMINI
add_include_path ./rtl
add_library_path ./rtl
add_design_file ./rtl/b_registered_input_to_output.v
set_top_module b_registered_input_to_output
#add_constraint_file <file>: Sets SDC + location constraints
#Constraints: set_pin_loc, set_region_loc, all SDC commands
#batch { cmd1 ... cmdn } : Run compilation script using commands below
ipgenerate
synthesize delay
pnr_options --gen_post_synthesis_netlist on
packing
global_placement
place
route
sta
power
bitstream
#tcl_exit
