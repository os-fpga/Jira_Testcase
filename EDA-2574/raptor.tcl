create_design accum_output_shifted_rounded
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/accum_output_shifted_rounded.v
set_top_module accum_output_shifted_rounded
add_simulation_file ./sim/co_sim_tb/co_sim_accum_output_shifted_rounded.v ./rtl/accum_output_shifted_rounded.v
set_top_testbench co_sim_accum_output_shifted_rounded
analyze
synthesize delay
# Open the input file in read mode
set input_file [open "accum_output_shifted_rounded/run_1/synth_1_1/synthesis/accum_output_shifted_rounded\_post_synth.v" r]
# Read the file content
set file_content [read $input_file]
# Close the input file after reading
close $input_file
set modified_content [string map {"accum_output_shifted_rounded(" "accum_output_shifted_rounded_post_synth("} $file_content]
# Open the file again, this time in write mode to overwrite the old content
set output_file [open "accum_output_shifted_rounded/run_1/synth_1_1/synthesis/accum_output_shifted_rounded\_post_synth.v" w]
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
set input_file [open "accum_output_shifted_rounded/run_1/synth_1_1/synthesis/wrapper_accum_output_shifted_rounded\_post_synth.v" r]
# Read the file content
set file_content [read $input_file]
# Close the input file after reading
close $input_file
set modified_content [string map {"module accum_output_shifted_rounded(" "module accum_output_shifted_rounded_post_route ("} $file_content]
# Open the file again, this time in write mode to overwrite the old content
set output_file [open "accum_output_shifted_rounded/run_1/synth_1_1/synthesis/wrapper_accum_output_shifted_rounded\_post_synth.v" w]
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
