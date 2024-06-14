create_design ram_true_dp_out_reg_512x16_block
target_device 1VG28
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/ram_true_dp_out_reg_512x16_block.v
set_top_module ram_true_dp_out_reg_512x16_block
add_simulation_file ./sim/co_sim_tb/co_sim_ram_true_dp_out_reg_512x16_block.v ./rtl/ram_true_dp_out_reg_512x16_block.v
set_top_testbench co_sim_ram_true_dp_out_reg_512x16_block
analyze
synthesize delay
# Open the input file in read mode
set input_file [open "ram_true_dp_out_reg_512x16_block/run_1/synth_1_1/synthesis/ram_true_dp_out_reg_512x16_block\_post_synth.v" r]
# Read the file content
set file_content [read $input_file]
# Close the input file after reading
close $input_file
set modified_content [string map {"ram_true_dp_out_reg_512x16_block(" "ram_true_dp_out_reg_512x16_block_post_synth("} $file_content]
# Open the file again, this time in write mode to overwrite the old content
set output_file [open "ram_true_dp_out_reg_512x16_block/run_1/synth_1_1/synthesis/ram_true_dp_out_reg_512x16_block\_post_synth.v" w]
# Write the modified content back to the file
puts $output_file $modified_content
# Close the file
close $output_file
puts "Modification completed."
simulation_options compilation verilator -DSIM_VERILATOR gate
simulate gate verilator
