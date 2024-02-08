create_design PNR_SIM
target_device 1GVTC
add_design_file ./rtl/ram_simple_dp_dc_512x32.v
add_simulation_file ./sim/co_sim_tb/co_sim_ram_simple_dp_dc_512x32.v ./rtl/ram_simple_dp_dc_512x32.v
set_top_testbench co_sim_ram_simple_dp_dc_512x32
set_top_module ram_simple_dp_dc_512x32
analyze
synthesize delay
packing
place
route


# Open the input file in read mode
set input_file [open "PNR_SIM/run_1/synth_1_1/impl_1_1_1/routing/ram_simple_dp_dc_512x32_post_route.v" r]
# Read the file content
set file_content [read $input_file]
# Close the input file after reading
close $input_file


# Replace 'design' with 'design_abc' in the file content
set modified_content [string map {"ram_simple_dp_dc_512x32 (" "ram_simple_dp_dc_512x32_post_route ("} $file_content]

# Open the file again, this time in write mode to overwrite the old content
set output_file [open "PNR_SIM/run_1/synth_1_1/impl_1_1_1/routing/ram_simple_dp_dc_512x32_post_route.v" w]
# Write the modified content back to the file
puts $output_file $modified_content
# Close the file
close $output_file

puts "Modification completed."
simulation_options compilation icarus pnr
simulate pnr icarus
sta
power
bitstream
