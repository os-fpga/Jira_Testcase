create_design dsp_fractured_accum_output_shifted_rounded
target_device 1GVTC
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/dsp_fractured_accum_output_shifted_rounded.v
set_top_module dsp_fractured_accum_output_shifted_rounded
add_simulation_file ./sim/co_sim_tb/co_sim_dsp_fractured_accum_output_shifted_rounded.v
set_top_testbench co_sim_dsp_fractured_accum_output_shifted_rounded
analyze
synthesize delay
# Open the input file in read mode
set input_file [open "dsp_fractured_accum_output_shifted_rounded/run_1/synth_1_1/synthesis/dsp_fractured_accum_output_shifted_rounded\_post_synth.v" r]
# Read the file content
set file_content [read $input_file]
# Close the input file after reading
close $input_file
set modified_content [string map {"dsp_fractured_accum_output_shifted_rounded(" "dsp_fractured_accum_output_shifted_rounded_post_synth("} $file_content]
# Open the file again, this time in write mode to overwrite the old content
set output_file [open "dsp_fractured_accum_output_shifted_rounded/run_1/synth_1_1/synthesis/dsp_fractured_accum_output_shifted_rounded\_post_synth.v" w]
# Write the modified content back to the file
puts $output_file $modified_content
# Close the file
close $output_file
puts "Modification completed."
simulation_options compilation icarus gate
simulate gate icarus
