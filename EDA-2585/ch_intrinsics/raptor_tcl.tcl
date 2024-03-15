create_design memset
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/ch_intrinsics.v
set_top_module memset
add_simulation_file ./sim/co_sim_tb/co_sim_memset.v
set_top_testbench co_sim_memset
analyze
synthesize delay
# Open the input file in read mode
set input_file [open "memset/run_1/synth_1_1/synthesis/memset\_post_synth.v" r]
# Read the file content
set file_content [read $input_file]
# Close the input file after reading
close $input_file
set modified_content [string map {"memset(" "memset_post_synth("} $file_content]
# Open the file again, this time in write mode to overwrite the old content
set output_file [open "memset/run_1/synth_1_1/synthesis/memset\_post_synth.v" w]
# Write the modified content back to the file
puts $output_file $modified_content
# Close the file
close $output_file
puts "Modification completed."
simulation_options compilation icarus gate
simulate gate icarus
pnr_options --place_algorithm congestion_aware --congest_tradeoff 160
packing
place
route
# Open the input file in read mode
set input_file [open "memset/run_1/synth_1_1/impl_1_1_1/routing/memset\_post_route.v" r]
# Read the file content
set file_content [read $input_file]
# Close the input file after reading
close $input_file
set modified_content [string map {"memset (" "memset_post_route ("} $file_content]
# Open the file again, this time in write mode to overwrite the old content
set output_file [open "memset/run_1/synth_1_1/impl_1_1_1/routing/memset\_post_route.v" w]
# Write the modified content back to the file
puts $output_file $modified_content
# Close the file
close $output_file
puts "Modification completed."
exec python3 /nfs_project/cxl/DV/bilal_malik/Validation/RTL_testcases/Benchmarking_QoR_testcases/ch_intrinsics/../../../scripts/post_route_script.py memset
simulation_options compilation icarus -DPNR=1 pnr
simulate pnr icarus
sta
power
bitstream 
