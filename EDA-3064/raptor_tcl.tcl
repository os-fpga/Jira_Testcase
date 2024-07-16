create_design dsp_mult_accum_input_not_registered_output_registered_inf_dsp19x2
target_device 1VG28
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/dsp_mult_accum_input_not_registered_output_registered_inf_dsp19x2.v
set_top_module dsp_mult_accum_input_not_registered_output_registered_inf_dsp19x2
add_simulation_file ./sim/co_sim_tb/co_sim_dsp_mult_accum_input_not_registered_output_registered_inf_dsp19x2.v ./rtl/dsp_mult_accum_input_not_registered_output_registered_inf_dsp19x2.v
set_top_testbench co_sim_dsp_mult_accum_input_not_registered_output_registered_inf_dsp19x2
analyze
synth_options -new_dsp19x2
synthesize delay
# Open the input file in read mode
set input_file [open "dsp_mult_accum_input_not_registered_output_registered_inf_dsp19x2/run_1/synth_1_1/synthesis/dsp_mult_accum_input_not_registered_output_registered_inf_dsp19x2\_post_synth.v" r]
# Read the file content
set file_content [read $input_file]
# Close the input file after reading
close $input_file
set modified_content [string map {"dsp_mult_accum_input_not_registered_output_registered_inf_dsp19x2(" "dsp_mult_accum_input_not_registered_output_registered_inf_dsp19x2_post_synth("} $file_content]
# Open the file again, this time in write mode to overwrite the old content
set output_file [open "dsp_mult_accum_input_not_registered_output_registered_inf_dsp19x2/run_1/synth_1_1/synthesis/dsp_mult_accum_input_not_registered_output_registered_inf_dsp19x2\_post_synth.v" w]
# Write the modified content back to the file
puts $output_file $modified_content
# Close the file
close $output_file
puts "Modification completed."
simulation_options compilation icarus gate
simulate gate icarus
