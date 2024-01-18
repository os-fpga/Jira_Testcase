#!/usr/bin/tclsh
create_design synthesis_type_ql_adder
target_device GEMINI
add_include_path /nfs_scratch/scratch/CompilerValidation/yasir_farooq/new_commit/cv_new/CV_add_new_test/Compiler_Validation/RTL_testcases/test_raptor_batch_options/synthesis_type_ql_adder/rtl
add_library_path /nfs_scratch/scratch/CompilerValidation/yasir_farooq/new_commit/cv_new/CV_add_new_test/Compiler_Validation/RTL_testcases/test_raptor_batch_options/synthesis_type_ql_adder/rtl
add_design_file /nfs_scratch/scratch/CompilerValidation/yasir_farooq/new_commit/cv_new/CV_add_new_test/Compiler_Validation/RTL_testcases/test_raptor_batch_options/synthesis_type_ql_adder/rtl/synthesis_type_ql_adder.v
set_top_module synthesis_type_ql_adder
#add_constraint_file <file>: Sets SDC + location constraints
#Constraints: set_pin_loc, set_region_loc, all SDC commands
#batch { cmd1 ... cmdn } : Run compilation script using commands below
synthesis_type QL
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
