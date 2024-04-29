create_design mult_28x20_unsigned_regout
target_device 1GVTC
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/mult_28x20_unsigned_regout.v
set_top_module mult_28x20_unsigned_regout
add_simulation_file ./sim/co_sim_tb/co_sim_mult_28x20_unsigned_regout.v
set_top_testbench co_sim_mult_28x20_unsigned_regout
analyze
synthesize delay
# Open the input file in read mode
set input_file [open "mult_28x20_unsigned_regout/run_1/synth_1_1/synthesis/mult_28x20_unsigned_regout\_post_synth.v" r]
# Read the file content
set file_content [read $input_file]
# Close the input file after reading
close $input_file
set modified_content [string map {"mult_28x20_unsigned_regout(" "mult_28x20_unsigned_regout_post_synth("} $file_content]
# Open the file again, this time in write mode to overwrite the old content
set output_file [open "mult_28x20_unsigned_regout/run_1/synth_1_1/synthesis/mult_28x20_unsigned_regout\_post_synth.v" w]
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
set input_file [open "mult_28x20_unsigned_regout/run_1/synth_1_1/synthesis/post_pnr_wrapper_mult_28x20_unsigned_regout\_post_synth.v" r]
# Read the file content
set file_content [read $input_file]
# Close the input file after reading
close $input_file
set modified_content [string map {"module mult_28x20_unsigned_regout(" "module mult_28x20_unsigned_regout_post_route ("} $file_content]
# Open the file again, this time in write mode to overwrite the old content
set output_file [open "mult_28x20_unsigned_regout/run_1/synth_1_1/synthesis/post_pnr_wrapper_mult_28x20_unsigned_regout\_post_synth.v" w]
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
