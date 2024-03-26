create_design mac_32
target_device 1GVTC
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/mac_32.v
set_top_module mac_32
add_simulation_file ./sim/co_sim_tb/co_sim_mac_32.v
set_top_testbench co_sim_mac_32
analyze
synthesize delay
# Open the input file in read mode
set input_file [open "mac_32/run_1/synth_1_1/synthesis/mac_32\_post_synth.v" r]
# Read the file content
set file_content [read $input_file]
# Close the input file after reading
close $input_file
set modified_content [string map {"mac_32(" "mac_32_post_synth("} $file_content]
# Open the file again, this time in write mode to overwrite the old content
set output_file [open "mac_32/run_1/synth_1_1/synthesis/mac_32\_post_synth.v" w]
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
set input_file [open "mac_32/run_1/synth_1_1/synthesis/post_pnr_wrapper_mac_32\_post_synth.v" r]
# Read the file content
set file_content [read $input_file]
# Close the input file after reading
close $input_file
set modified_content [string map {"module mac_32(" "module mac_32_post_route ("} $file_content]
# Open the file again, this time in write mode to overwrite the old content
set output_file [open "mac_32/run_1/synth_1_1/synthesis/post_pnr_wrapper_mac_32\_post_synth.v" w]
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
