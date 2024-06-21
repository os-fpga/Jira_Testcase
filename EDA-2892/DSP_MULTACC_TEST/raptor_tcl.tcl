create_design DSP_MULTACC_TEST
target_device 1VG28
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/DSP_MULTACC_TEST.v
set_top_module DSP_MULTACC_TEST
analyze
synthesize delay
add_simulation_file ./sim/co_sim_tb/co_sim_DSP_MULTACC_TEST.v ./rtl/DSP_MULTACC_TEST.v
set_top_testbench co_sim_DSP_MULTACC_TEST
# Open the input file in read mode
set input_file [open "DSP_MULTACC_TEST/run_1/synth_1_1/synthesis/DSP_MULTACC_TEST\_post_synth.v" r]
# Read the file content
set file_content [read $input_file]
# Close the input file after reading
close $input_file
set modified_content [string map {"DSP_MULTACC_TEST(" "DSP_MULTACC_TEST_post_synth("} $file_content]
# Open the file again, this time in write mode to overwrite the old content
set output_file [open "DSP_MULTACC_TEST/run_1/synth_1_1/synthesis/DSP_MULTACC_TEST\_post_synth.v" w]
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
set input_file [open "DSP_MULTACC_TEST/run_1/synth_1_1/synthesis/post_pnr_wrapper_DSP_MULTACC_TEST\_post_synth.v" r]
# Read the file content
set file_content [read $input_file]
# Close the input file after reading
close $input_file
set modified_content [string map {"module DSP_MULTACC_TEST(" "module DSP_MULTACC_TEST_post_route ("} $file_content]
# Open the file again, this time in write mode to overwrite the old content
set output_file [open "DSP_MULTACC_TEST/run_1/synth_1_1/synthesis/post_pnr_wrapper_DSP_MULTACC_TEST\_post_synth.v" w]
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
