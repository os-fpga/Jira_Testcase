#!/usr/bin/tclsh
target_device GEMINI
create_design accumulator
add_include_path /nfs_scratch/scratch/CompilerValidation/abdul_hameed/GEMINIEDA/rtl
add_library_path /nfs_scratch/scratch/CompilerValidation/abdul_hameed/GEMINIEDA/rtl
add_design_file /nfs_scratch/scratch/CompilerValidation/abdul_hameed/GEMINIEDA/rtl/accumulator.v
set_top_module accumulator
#add_constraint_file <file>: Sets SDC + location constraints
#Constraints: set_pin_loc, set_region_loc, all SDC commands
#batch { cmd1 ... cmdn } : Run compilation script using commands below
#ipgenerate
#ipgenerate
synthesize delay
pnr_options --gen_post_synthesis_netlist on
set_device_size 78x66
packing
global_placement
place
route
sta
power
bitstream
#tcl_exit
