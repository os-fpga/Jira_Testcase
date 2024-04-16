create_design add_shifted_input_to_the_mul_output
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/add_shifted_input_to_the_mul_output.v
set_top_module add_shifted_input_to_the_mul_output
add_simulation_file ./sim/co_sim_tb/co_sim_add_shifted_input_to_the_mul_output.v
set_top_testbench co_sim_add_shifted_input_to_the_mul_output
analyze
synthesize delay
packing
place
route
# Open the input file in read mode
set input_file [open "add_shifted_input_to_the_mul_output/run_1/synth_1_1/synthesis/post_pnr_wrapper_add_shifted_input_to_the_mul_output\_post_synth.v" r]
# Read the file content
set file_content [read $input_file]
# Close the input file after reading
close $input_file
set modified_content [string map {"module add_shifted_input_to_the_mul_output(" "module add_shifted_input_to_the_mul_output_post_route ("} $file_content]
# Open the file again, this time in write mode to overwrite the old content
set output_file [open "add_shifted_input_to_the_mul_output/run_1/synth_1_1/synthesis/post_pnr_wrapper_add_shifted_input_to_the_mul_output\_post_synth.v" w]
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
