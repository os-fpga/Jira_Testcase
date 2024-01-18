#!/usr/bin/tclsh
create_design dsp_mul_parameterized
target_device GEMINI
add_include_path ./rtl
add_library_path ./rtl
add_design_file ./rtl/dsp_mul_parameterized.v
set_top_module dsp_mul_parameterized
#add_constraint_file <file>: Sets SDC + location constraints
#Constraints: set_pin_loc, set_region_loc, all SDC commands
#batch { cmd1 ... cmdn } : Run compilation script using commands below
ipgenerate
synthesize delay
pnr_netlist_lang verilog
pnr_options --gen_post_synthesis_netlist on
packing
global_placement
place
route
sta
power
bitstream
#tcl_exit
