create_design GJC8
target_device 1GVTC
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/GJC8.v
set_top_module GJC8
add_constraint_file rs_dsp_mult_test.sdc
analyze
synthesize delay
add_simulation_file ./sim/co_sim_tb/co_sim_GJC8.v ./rtl/GJC8.v
set_top_testbench co_sim_GJC8
# Open the input file in read mode
set input_file [open "GJC8/run_1/synth_1_1/synthesis/GJC8\_post_synth.v" r]
# Read the file content
set file_content [read $input_file]
# Close the input file after reading
close $input_file
set modified_content [string map {"GJC8(" "GJC8_post_synth("} $file_content]
# Open the file again, this time in write mode to overwrite the old content
set output_file [open "GJC8/run_1/synth_1_1/synthesis/GJC8\_post_synth.v" w]
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
set input_file [open "GJC8/run_1/synth_1_1/synthesis/post_pnr_wrapper_GJC8\_post_synth.v" r]
# Read the file content
set file_content [read $input_file]
# Close the input file after reading
close $input_file
set modified_content [string map {"module GJC8(" "module GJC8_post_route ("} $file_content]
# Open the file again, this time in write mode to overwrite the old content
set output_file [open "GJC8/run_1/synth_1_1/synthesis/post_pnr_wrapper_GJC8\_post_synth.v" w]
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
