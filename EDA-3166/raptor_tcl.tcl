create_design aes_192
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file -V_2001 ./rtl/table.v
add_design_file -V_2001 ./rtl/round.v
add_design_file -V_2001 ./rtl/aes_192.v
set_top_module aes_192
add_simulation_file ./sim/co_sim_tb/co_sim_aes_192.v ./rtl/aes_192.v ./rtl/table.v ./rtl/round.v
set_top_testbench co_sim_aes_192
analyze
synthesize delay
# Open the input file in read mode
set input_file [open "aes_192/run_1/synth_1_1/synthesis/aes_192\_post_synth.v" r]
# Read the file content
set file_content [read $input_file]
# Close the input file after reading
close $input_file
set modified_content [string map {"aes_192(" "aes_192_post_synth("} $file_content]
# Open the file again, this time in write mode to overwrite the old content
set output_file [open "aes_192/run_1/synth_1_1/synthesis/aes_192\_post_synth.v" w]
# Write the modified content back to the file
puts $output_file $modified_content
# Close the file
close $output_file
puts "Modification completed."
simulation_options compilation icarus gate
simulate gate icarus
