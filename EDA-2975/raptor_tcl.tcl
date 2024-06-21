create_design wbif_68k
target_device 1VG28
add_include_path ./rtl/
add_design_file ./rtl/dragonball_wbmaster_top.v
set_top_module dragonball_wbmaster_top
add_constraint_file ./raptor_sdc.sdc
analyze
synthesize delay
exec python3 /nfs_scratch/scratch/CompilerValidation/abdul_hameed/1111/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/wbif_68k/../../../scripts/tb_generator.py wbif_68k /nfs_scratch/scratch/CompilerValidation/abdul_hameed/1111/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/wbif_68k
add_simulation_file ./sim/co_sim_tb/co_sim_dragonball_wbmaster_top.v ./rtl/dragonball_wbmaster_top.v
set_top_testbench co_sim_dragonball_wbmaster_top
# Open the input file in read mode
set input_file [open "wbif_68k/run_1/synth_1_1/synthesis/wbif_68k\_post_synth.v" r]
# Read the file content
set file_content [read $input_file]
# Close the input file after reading
close $input_file
set modified_content [string map {"dragonball_wbmaster_top(" "dragonball_wbmaster_top_post_synth("} $file_content]
# Open the file again, this time in write mode to overwrite the old content
set output_file [open "wbif_68k/run_1/synth_1_1/synthesis/wbif_68k\_post_synth.v" w]
# Write the modified content back to the file
puts $output_file $modified_content
# Close the file
close $output_file
puts "Modification completed."
simulation_options compilation icarus gate
simulate gate icarus