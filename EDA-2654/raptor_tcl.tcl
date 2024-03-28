create_design rams_sp_re_we_asynch_rst_1024x32_neg
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/rams_sp_re_we_asynch_rst_1024x32_neg.v
set_top_module rams_sp_re_we_asynch_rst_1024x32_neg
add_simulation_file ./sim/co_sim_tb/co_sim_rams_sp_re_we_asynch_rst_1024x32_neg.v ./rtl/rams_sp_re_we_asynch_rst_1024x32_neg.v
set_top_testbench co_sim_rams_sp_re_we_asynch_rst_1024x32_neg
analyze
synthesize delay
# Open the input file in read mode
set input_file [open "rams_sp_re_we_asynch_rst_1024x32_neg/run_1/synth_1_1/synthesis/rams_sp_re_we_asynch_rst_1024x32_neg\_post_synth.v" r]
# Read the file content
set file_content [read $input_file]
# Close the input file after reading
close $input_file
set modified_content [string map {"rams_sp_re_we_asynch_rst_1024x32_neg(" "rams_sp_re_we_asynch_rst_1024x32_neg_post_synth("} $file_content]
# Open the file again, this time in write mode to overwrite the old content
set output_file [open "rams_sp_re_we_asynch_rst_1024x32_neg/run_1/synth_1_1/synthesis/rams_sp_re_we_asynch_rst_1024x32_neg\_post_synth.v" w]
# Write the modified content back to the file
puts $output_file $modified_content
# Close the file
close $output_file
puts "Modification completed."
simulation_options compilation icarus gate
simulate gate icarus
