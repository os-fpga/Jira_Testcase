create_design I_DELAY_primitive_inst
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/I_DELAY_primitive_inst.v
set_top_module I_DELAY_primitive_inst
add_constraint_file ./constraint.sdc
analyze
synthesize delay
exec python3 /nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/Validation/RTL_testcases/RS_FPGA_PRIMITIVES_new/I_DELAY_primitive_inst/../../../scripts/tb_generator.py I_DELAY_primitive_inst /nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/Validation/RTL_testcases/RS_FPGA_PRIMITIVES_new/I_DELAY_primitive_inst
add_simulation_file ./sim/co_sim_tb/co_sim_I_DELAY_primitive_inst.v ./rtl/I_DELAY_primitive_inst.v
set_top_testbench co_sim_I_DELAY_primitive_inst
packing
place
route
# Open the input file in read mode
set input_file [open "I_DELAY_primitive_inst/run_1/synth_1_1/synthesis/post_pnr_wrapper_I_DELAY_primitive_inst\_post_synth.v" r]
# Read the file content
set file_content [read $input_file]
# Close the input file after reading
close $input_file
set modified_content [string map {"module I_DELAY_primitive_inst(" "module I_DELAY_primitive_inst_post_route ("} $file_content]
# Open the file again, this time in write mode to overwrite the old content
set output_file [open "I_DELAY_primitive_inst/run_1/synth_1_1/synthesis/post_pnr_wrapper_I_DELAY_primitive_inst\_post_synth.v" w]
# Write the modified content back to the file
puts $output_file $modified_content
# Close the file
close $output_file
puts "Modification completed."
simulation_options compilation icarus -DPNR=1 pnr
simulate pnr icarus
sta
power
bitstream 
