create_design asym_ram_sdp_wide_sync_read
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/asym_ram_sdp_wide_sync_read.v
set_top_module asym_ram_sdp_wide_sync_read
add_simulation_file ./sim/co_sim_tb/co_sim_asym_ram_sdp_wide_sync_read.v ./rtl/asym_ram_sdp_wide_sync_read.v
set_top_testbench co_sim_asym_ram_sdp_wide_sync_read
analyze
synth_options -new_tdp36k 
synthesize delay
# Open the input file in read mode
set input_file [open "asym_ram_sdp_wide_sync_read/run_1/synth_1_1/synthesis/asym_ram_sdp_wide_sync_read\_post_synth.v" r]
# Read the file content
set file_content [read $input_file]
# Close the input file after reading
close $input_file
set modified_content [string map {"asym_ram_sdp_wide_sync_read(" "asym_ram_sdp_wide_sync_read_post_synth("} $file_content]
# Open the file again, this time in write mode to overwrite the old content
set output_file [open "asym_ram_sdp_wide_sync_read/run_1/synth_1_1/synthesis/asym_ram_sdp_wide_sync_read\_post_synth.v" w]
# Write the modified content back to the file
puts $output_file $modified_content
# Close the file
close $output_file
puts "Modification completed."
simulation_options compilation verilator gate
simulate gate verilator
