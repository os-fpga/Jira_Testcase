create_design ram_true_dp_dc_512x32
target_device GEMINI
add_include_path /home/users/abdulhameed.akram/Documents/Compiler_validation_team/Compiler_Validation/RTL_testcases/Memory_Designs/True_dual_port_rams/ram_true_dp_dc_512x32/rtl
add_library_path /home/users/abdulhameed.akram/Documents/Compiler_validation_team/Compiler_Validation/RTL_testcases/Memory_Designs/True_dual_port_rams/ram_true_dp_dc_512x32/rtl
add_design_file /home/users/abdulhameed.akram/Documents/Compiler_validation_team/Compiler_Validation/RTL_testcases/Memory_Designs/True_dual_port_rams/ram_true_dp_dc_512x32/rtl/ram_true_dp_dc_512x32.v
set_top_module ram_true_dp_dc_512x32
#add_constraint_file <file>: Sets SDC + location constraints
#Constraints: set_pin_loc, set_region_loc, all SDC commands
#batch { cmd1 ... cmdn } : Run compilation script using commands below
#ipgenerate
synthesize delay
