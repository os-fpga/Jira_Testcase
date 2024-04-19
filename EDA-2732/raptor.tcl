create_design accumulator
target_device GEMINI_COMPACT_10x8
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/accumulator.v
set_top_module accumulator
set_top_module accumulator
add_simulation_file ./sim/co_sim_tb/co_sim_carry_inference.v
set_top_testbench co_sim_carry_inference
analyze
synthesize delay
# Open the input file in read mode
set input_file [open "accumulator/run_1/synth_1_1/synthesis/accumulator\_post_synth.v" r]
# Read the file content
set file_content [read $input_file]
# Close the input file after reading
close $input_file
set modified_content [string map {"accumulator(" "accumulator_post_synth("} $file_content]
# Open the file again, this time in write mode to overwrite the old content
set output_file [open "accumulator/run_1/synth_1_1/synthesis/accumulator\_post_synth.v" w]
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
set input_file [open "accumulator/run_1/synth_1_1/synthesis/post_pnr_wrapper_accumulator\_post_synth.v" r]
# Read the file content
set file_content [read $input_file]
# Close the input file after reading
close $input_file
set modified_content [string map {"module accumulator(" "module accumulator_post_route ("} $file_content]
# Open the file again, this time in write mode to overwrite the old content
set output_file [open "accumulator/run_1/synth_1_1/synthesis/post_pnr_wrapper_accumulator\_post_synth.v" w]
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
