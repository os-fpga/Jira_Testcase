create_design subtract_mult_output_coeff2_from_shifted_a_verilator
target_device 1GVTC
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/subtract_mult_output_coeff2_from_shifted_a_verilator.v
set_top_module subtract_mult_output_coeff2_from_shifted_a_verilator
add_simulation_file ./sim/co_sim_tb/co_sim_subtract_mult_output_coeff2_from_shifted_a_verilator.v ./rtl/subtract_mult_output_coeff2_from_shifted_a_verilator.v
set_top_testbench co_sim_subtract_mult_output_coeff2_from_shifted_a_verilator
analyze
synthesize delay
# Open the input file in read mode
set input_file [open "subtract_mult_output_coeff2_from_shifted_a_verilator/run_1/synth_1_1/synthesis/subtract_mult_output_coeff2_from_shifted_a_verilator\_post_synth.v" r]
# Read the file content
set file_content [read $input_file]
# Close the input file after reading
close $input_file
set modified_content [string map {"subtract_mult_output_coeff2_from_shifted_a_verilator(" "subtract_mult_output_coeff2_from_shifted_a_verilator_post_synth("} $file_content]
# Open the file again, this time in write mode to overwrite the old content
set output_file [open "subtract_mult_output_coeff2_from_shifted_a_verilator/run_1/synth_1_1/synthesis/subtract_mult_output_coeff2_from_shifted_a_verilator\_post_synth.v" w]
# Write the modified content back to the file
puts $output_file $modified_content
# Close the file
close $output_file
puts "Modification completed."
simulation_options compilation verilator gate
simulate gate verilator
packing
place
route
sta
power
bitstream 
