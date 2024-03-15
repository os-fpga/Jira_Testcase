create_design design107_5_8_top
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/design107_5_8_top.v
add_simulation_file ./sim/co_sim_tb/co_sim_design107_5_8_top.v
set_top_testbench co_sim_design107_5_8_top
set_top_module design107_5_8_top
analyze
# synth_options -effort low
synthesize delay
# Open the input file in read mode
set input_file [open "design107_5_8_top/run_1/synth_1_1/synthesis/design107_5_8_top\_post_synth.v" r]
# Read the file content
set file_content [read $input_file]
# Close the input file after reading
close $input_file
set modified_content [string map {"design107_5_8_top(" "design107_5_8_top_post_synth("} $file_content]
# Open the file again, this time in write mode to overwrite the old content
set output_file [open "design107_5_8_top/run_1/synth_1_1/synthesis/design107_5_8_top\_post_synth.v" w]
# Write the modified content back to the file
puts $output_file $modified_content
# Close the file
close $output_file
puts "Modification completed."
simulation_options compilation icarus gate
simulate gate icarus