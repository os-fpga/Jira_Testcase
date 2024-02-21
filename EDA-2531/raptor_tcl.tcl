create_design dsp_mul_unsigned_reg_inf_dsp19x2
target_device 1GVTC
add_design_file ./dsp_mul_unsigned_reg_inf_dsp19x2.v
add_simulation_file ./co_sim_dsp_mul_unsigned_reg_inf_dsp19x2.v ./dsp_mul_unsigned_reg_inf_dsp19x2.v
set_top_testbench co_sim_dsp_mul_unsigned_reg_inf_dsp19x2
set_top_module dsp_mul_unsigned_reg_inf_dsp19x2
analyze
synthesize delay
# Open the input file in read mode
set input_file [open "dsp_mul_unsigned_reg_inf_dsp19x2/run_1/synth_1_1/synthesis/dsp_mul_unsigned_reg_inf_dsp19x2\_post_synth.v" r]
# Read the file content
set file_content [read $input_file]
# Close the input file after reading
close $input_file
set modified_content [string map {"dsp_mul_unsigned_reg_inf_dsp19x2(" "dsp_mul_unsigned_reg_inf_dsp19x2_post_synth("} $file_content]
# Open the file again, this time in write mode to overwrite the old content
set output_file [open "dsp_mul_unsigned_reg_inf_dsp19x2/run_1/synth_1_1/synthesis/dsp_mul_unsigned_reg_inf_dsp19x2\_post_synth.v" w]
# Write the modified content back to the file
puts $output_file $modified_content
# Close the file
close $output_file
puts "Modification completed."
simulation_options compilation icarus gate
simulate gate icarus

packing
global_placement
place
route
# Open the input file in read mode
set input_file [open "dsp_mul_unsigned_reg_inf_dsp19x2/run_1/synth_1_1/impl_1_1_1/routing/dsp_mul_unsigned_reg_inf_dsp19x2\_post_route.v" r]
# Read the file content
set file_content [read $input_file]
# Close the input file after reading
close $input_file
set modified_content [string map {"dsp_mul_unsigned_reg_inf_dsp19x2 (" "dsp_mul_unsigned_reg_inf_dsp19x2_post_route ("} $file_content]
# Open the file again, this time in write mode to overwrite the old content
set output_file [open "dsp_mul_unsigned_reg_inf_dsp19x2/run_1/synth_1_1/impl_1_1_1/routing/dsp_mul_unsigned_reg_inf_dsp19x2\_post_route.v" w]
# Write the modified content back to the file
puts $output_file $modified_content
# Close the file
close $output_file
puts "Modification completed."
simulation_options compilation icarus -DPNR=1 pnr
simulate pnr icarus
