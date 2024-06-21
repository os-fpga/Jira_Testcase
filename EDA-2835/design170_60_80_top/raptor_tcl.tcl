create_design design170_60_80_top
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/design170_60_80_top.v
set_top_module design170_60_80_top
add_simulation_file ./sim/co_sim_tb/co_sim_design170_60_80_top.v ./rtl/design170_60_80_top.v
set_top_testbench co_sim_design170_60_80_top
analyze
synthesize delay
# Open the input file in read mode
set input_file [open "design170_60_80_top/run_1/synth_1_1/synthesis/design170_60_80_top\_post_synth.v" r]
# Read the file content
set file_content [read $input_file]
# Close the input file after reading
close $input_file
set modified_content [string map {"design170_60_80_top(" "design170_60_80_top_post_synth("} $file_content]
# Open the file again, this time in write mode to overwrite the old content
set output_file [open "design170_60_80_top/run_1/synth_1_1/synthesis/design170_60_80_top\_post_synth.v" w]
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
sta
power
bitstream 
