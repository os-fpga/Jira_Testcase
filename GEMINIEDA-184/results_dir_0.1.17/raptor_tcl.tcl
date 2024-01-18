create_design asym_ram_tdp_read_first_dc
target_device GEMINI
add_include_path /nfs_scratch/scratch/CompilerValidation/abdul_hameed/reggression/Compiler_Validation/RTL_testcases/Memory_Designs/Asymmetric_memory/asym_ram_tdp_read_first_dc/rtl
add_library_path /nfs_scratch/scratch/CompilerValidation/abdul_hameed/reggression/Compiler_Validation/RTL_testcases/Memory_Designs/Asymmetric_memory/asym_ram_tdp_read_first_dc/rtl
add_design_file /nfs_scratch/scratch/CompilerValidation/abdul_hameed/reggression/Compiler_Validation/RTL_testcases/Memory_Designs/Asymmetric_memory/asym_ram_tdp_read_first_dc/rtl/asym_ram_tdp_read_first_dc.v
set_top_module asym_ram_tdp_read_first_dc
#add_constraint_file <file>: Sets SDC + location constraints
#Constraints: set_pin_loc, set_region_loc, all SDC commands
#batch { cmd1 ... cmdn } : Run compilation script using commands below
#ipgenerate
synthesize delay
packing
global_placement
place
route
sta
power
bitstream
