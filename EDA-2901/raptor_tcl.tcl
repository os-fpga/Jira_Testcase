create_design ram_simple_dp_synch_undefined_collision_1024x32
target_device 1VG28
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/ram_simple_dp_synch_undefined_collision_1024x32.v
set_top_module ram_simple_dp_synch_undefined_collision_1024x32
add_simulation_file ./sim/co_sim_tb/co_sim_ram_simple_dp_synch_undefined_collision_1024x32.v ./rtl/ram_simple_dp_synch_undefined_collision_1024x32.v
set_top_testbench co_sim_ram_simple_dp_synch_undefined_collision_1024x32
analyze
synth_options -new_tdp36k 
synthesize delay
# Open the input file in read mode
set input_file [open "ram_simple_dp_synch_undefined_collision_1024x32/run_1/synth_1_1/synthesis/ram_simple_dp_synch_undefined_collision_1024x32\_post_synth.v" r]
# Read the file content
set file_content [read $input_file]
# Close the input file after reading
close $input_file
set modified_content [string map {"ram_simple_dp_synch_undefined_collision_1024x32(" "ram_simple_dp_synch_undefined_collision_1024x32_post_synth("} $file_content]
# Open the file again, this time in write mode to overwrite the old content
set output_file [open "ram_simple_dp_synch_undefined_collision_1024x32/run_1/synth_1_1/synthesis/ram_simple_dp_synch_undefined_collision_1024x32\_post_synth.v" w]
# Write the modified content back to the file
puts $output_file $modified_content
# Close the file
close $output_file
puts "Modification completed."
simulation_options compilation icarus gate
simulate gate icarus