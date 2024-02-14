create_design SBox
target_device 1GVTC
add_design_file ./rtl/SBox.v
add_simulation_file ./sim/co_sim_tb/co_sim_SBox.v ./rtl/SBox.v
set_top_testbench co_sim_SBox
set_top_module SBox
analyze
synthesize delay
packing
global_placement
place
route
# Open the input file in read mode
set input_file [open "SBox/run_1/synth_1_1/impl_1_1_1/routing/SBox\_post_route.v" r]
# Read the file content
set file_content [read $input_file]
# Close the input file after reading
close $input_file
set modified_content [string map {"SBox (" "SBox_post_route ("} $file_content]
# Open the file again, this time in write mode to overwrite the old content
set output_file [open "SBox/run_1/synth_1_1/impl_1_1_1/routing/SBox\_post_route.v" w]
# Write the modified content back to the file
puts $output_file $modified_content
# Close the file
close $output_file
puts "Modification completed."
simulation_options compilation icarus -DPNR=1 pnr
simulate pnr icarus
