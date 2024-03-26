create_design ram_true_dp_dc_32768x4
target_device 1GVTC
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/ram_true_dp_dc_32768x4.v
set_top_module ram_true_dp_dc_32768x4
add_constraint_file constraints.sdc
add_simulation_file ./sim/co_sim_tb/co_sim_ram_true_dp_dc_32768x4.v ./rtl/ram_true_dp_dc_32768x4.v
set_top_testbench co_sim_ram_true_dp_dc_32768x4
analyze
synth_options -new_tdp36k 
synthesize delay
# Open the input file in read mode
set input_file [open "ram_true_dp_dc_32768x4/run_1/synth_1_1/synthesis/ram_true_dp_dc_32768x4\_post_synth.v" r]
# Read the file content
set file_content [read $input_file]
# Close the input file after reading
close $input_file
set modified_content [string map {"ram_true_dp_dc_32768x4(" "ram_true_dp_dc_32768x4_post_synth("} $file_content]
# Open the file again, this time in write mode to overwrite the old content
set output_file [open "ram_true_dp_dc_32768x4/run_1/synth_1_1/synthesis/ram_true_dp_dc_32768x4\_post_synth.v" w]
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
set input_file [open "ram_true_dp_dc_32768x4/run_1/synth_1_1/synthesis/post_pnr_wrapper_ram_true_dp_dc_32768x4\_post_synth.v" r]
# Read the file content
set file_content [read $input_file]
# Close the input file after reading
close $input_file
set modified_content [string map {"module ram_true_dp_dc_32768x4(" "module ram_true_dp_dc_32768x4_post_route ("} $file_content]
# Open the file again, this time in write mode to overwrite the old content
set output_file [open "ram_true_dp_dc_32768x4/run_1/synth_1_1/synthesis/post_pnr_wrapper_ram_true_dp_dc_32768x4\_post_synth.v" w]
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
