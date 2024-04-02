create_design input_to_adder_and_mul_A_input_wrt_feedback_i
target_device 1GVTC
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/input_to_adder_and_mul_A_input_wrt_feedback_i.v
set_top_module input_to_adder_and_mul_A_input_wrt_feedback_i
add_simulation_file ./sim/co_sim_tb/co_sim_input_to_adder_and_mul_A_input_wrt_feedback_i.v
set_top_testbench co_sim_input_to_adder_and_mul_A_input_wrt_feedback_i
analyze
synthesize delay
# Open the input file in read mode
set input_file [open "input_to_adder_and_mul_A_input_wrt_feedback_i/run_1/synth_1_1/synthesis/input_to_adder_and_mul_A_input_wrt_feedback_i\_post_synth.v" r]
# Read the file content
set file_content [read $input_file]
# Close the input file after reading
close $input_file
set modified_content [string map {"input_to_adder_and_mul_A_input_wrt_feedback_i(" "input_to_adder_and_mul_A_input_wrt_feedback_i_post_synth("} $file_content]
# Open the file again, this time in write mode to overwrite the old content
set output_file [open "input_to_adder_and_mul_A_input_wrt_feedback_i/run_1/synth_1_1/synthesis/input_to_adder_and_mul_A_input_wrt_feedback_i\_post_synth.v" w]
# Write the modified content back to the file
puts $output_file $modified_content
# Close the file
close $output_file
puts "Modification completed."
simulation_options compilation icarus gate
simulate gate icarus
