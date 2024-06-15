create_design GJC24
target_device 1VG28
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/GJC24.v
set_top_module GJC24
add_constraint_file pin_constraints.pin
add_constraint_file constraints.sdc
analyze
synthesize delay
exec python3 /nfs_scratch/scratch/CompilerValidation/abdul_hameed/1111/Validation/RTL_testcases/GJC-IO-Testcases/GJC24/../../../scripts/tb_generator.py GJC24 /nfs_scratch/scratch/CompilerValidation/abdul_hameed/1111/Validation/RTL_testcases/GJC-IO-Testcases/GJC24
add_simulation_file ./sim/co_sim_tb/co_sim_GJC24.v ./rtl/GJC24.v
set_top_testbench co_sim_GJC24
# Open the input file in read mode
set input_file [open "GJC24/run_1/synth_1_1/synthesis/GJC24\_post_synth.v" r]
# Read the file content
set file_content [read $input_file]
# Close the input file after reading
close $input_file
set modified_content [string map {"GJC24(" "GJC24_post_synth("} $file_content]
# Open the file again, this time in write mode to overwrite the old content
set output_file [open "GJC24/run_1/synth_1_1/synthesis/GJC24\_post_synth.v" w]
# Write the modified content back to the file
puts $output_file $modified_content
# Close the file
close $output_file
puts "Modification completed."
simulation_options compilation icarus gate
simulate gate icarus
packing
place
route
# Open the input file in read mode
set input_file [open "GJC24/run_1/synth_1_1/synthesis/post_pnr_wrapper_GJC24\_post_synth.v" r]
# Read the file content
set file_content [read $input_file]
# Close the input file after reading
close $input_file
set modified_content [string map {"module GJC24(" "module GJC24_post_route ("} $file_content]
# Open the file again, this time in write mode to overwrite the old content
set output_file [open "GJC24/run_1/synth_1_1/synthesis/post_pnr_wrapper_GJC24\_post_synth.v" w]
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
