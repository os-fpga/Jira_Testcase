create_design GJC4_updated
target_device 1VG28
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/GJC4_updated.v
set_top_module GJC4_updated
analyze
synthesize delay
add_simulation_file ./sim/co_sim_tb/co_sim_GJC4_updated.v ./rtl/GJC4_updated.v
set_top_testbench co_sim_GJC4_updated
# Open the input file in read mode
set input_file [open "GJC4_updated/run_1/synth_1_1/synthesis/GJC4_updated\_post_synth.v" r]
# Read the file content
set file_content [read $input_file]
# Close the input file after reading
close $input_file
set modified_content [string map {"GJC4_updated(" "GJC4_updated_post_synth("} $file_content]
# Open the file again, this time in write mode to overwrite the old content
set output_file [open "GJC4_updated/run_1/synth_1_1/synthesis/GJC4_updated\_post_synth.v" w]
# Write the modified content back to the file
puts $output_file $modified_content
# Close the file
close $output_file
puts "Modification completed."
simulation_options compilation icarus gate
simulate gate icarus
