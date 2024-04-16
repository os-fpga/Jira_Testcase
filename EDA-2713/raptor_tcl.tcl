create_design b_registered_input_to_output_new_primitive
target_device 1GVTC
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/b_registered_input_to_output_new_primitive.v
set_top_module b_registered_input_to_output_new_primitive
add_simulation_file ./sim/co_sim_tb/co_sim_b_registered_input_to_output_new_primitive.v ./rtl/b_registered_input_to_output_new_primitive.v
set_top_testbench co_sim_b_registered_input_to_output_new_primitive
analyze
synthesize delay
# Open the input file in read mode
set input_file [open "b_registered_input_to_output_new_primitive/run_1/synth_1_1/synthesis/b_registered_input_to_output_new_primitive\_post_synth.v" r]
# Read the file content
set file_content [read $input_file]
# Close the input file after reading
close $input_file
set modified_content [string map {"b_registered_input_to_output_new_primitive(" "b_registered_input_to_output_new_primitive_post_synth("} $file_content]
# Open the file again, this time in write mode to overwrite the old content
set output_file [open "b_registered_input_to_output_new_primitive/run_1/synth_1_1/synthesis/b_registered_input_to_output_new_primitive\_post_synth.v" w]
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
# Open the input file in read mode
set input_file [open "b_registered_input_to_output_new_primitive/run_1/synth_1_1/synthesis/post_pnr_wrapper_b_registered_input_to_output_new_primitive\_post_synth.v" r]
# Read the file content
set file_content [read $input_file]
# Close the input file after reading
close $input_file
set modified_content [string map {"module b_registered_input_to_output_new_primitive(" "module b_registered_input_to_output_new_primitive_post_route ("} $file_content]
# Open the file again, this time in write mode to overwrite the old content
set output_file [open "b_registered_input_to_output_new_primitive/run_1/synth_1_1/synthesis/post_pnr_wrapper_b_registered_input_to_output_new_primitive\_post_synth.v" w]
# Write the modified content back to the file
puts $output_file $modified_content
# Close the file
close $output_file
puts "Modification completed."
simulation_options compilation verilator -DPNR=1 pnr
simulate pnr verilator
sta
power
bitstream 
