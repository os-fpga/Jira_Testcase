create_design axi_dmac
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/axi_dmac.v
set_top_module axi_dmac
analyze
synthesize delay
exec python3 /nfs_project/cxl/DV/bilal_malik/temp_work/Validation/RTL_testcases/opensource_with_testbench/axi_dmac/../../../scripts/tb_generator.py axi_dmac /nfs_project/cxl/DV/bilal_malik/temp_work/Validation/RTL_testcases/opensource_with_testbench/axi_dmac
add_simulation_file ./sim/co_sim_tb/co_sim_axi_dmac.v ./rtl/axi_dmac.v
set_top_testbench co_sim_axi_dmac
# Open the input file in read mode
set input_file [open "axi_dmac/run_1/synth_1_1/synthesis/axi_dmac\_post_synth.v" r]
# Read the file content
set file_content [read $input_file]
# Close the input file after reading
close $input_file
set modified_content [string map {"axi_dmac(" "axi_dmac_post_synth("} $file_content]
# Open the file again, this time in write mode to overwrite the old content
set output_file [open "axi_dmac/run_1/synth_1_1/synthesis/axi_dmac\_post_synth.v" w]
# Write the modified content back to the file
puts $output_file $modified_content
# Close the file
close $output_file
puts "Modification completed."
simulation_options compilation icarus gate
simulate gate icarus

