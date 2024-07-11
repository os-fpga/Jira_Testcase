create_design add_output_of_four_multipliers
target_device 1VG28
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/add_output_of_four_multipliers.v
set_top_module add_output_of_four_multipliers
add_simulation_file ./sim/co_sim_tb/co_sim_add_output_of_four_multipliers.v
set_top_testbench co_sim_add_output_of_four_multipliers
analyze
synthesize delay
# Open the input file in read mode
set input_file [open "add_output_of_four_multipliers/run_1/synth_1_1/synthesis/add_output_of_four_multipliers\_post_synth.v" r]
# Read the file content
set file_content [read $input_file]
# Close the input file after reading
close $input_file
set modified_content [string map {"add_output_of_four_multipliers(" "add_output_of_four_multipliers_post_synth("} $file_content]
# Open the file again, this time in write mode to overwrite the old content
set output_file [open "add_output_of_four_multipliers/run_1/synth_1_1/synthesis/add_output_of_four_multipliers\_post_synth.v" w]
# Write the modified content back to the file
puts $output_file $modified_content
# Close the file
close $output_file
puts "Modification completed."
simulation_options compilation icarus gate
simulate gate icarus
