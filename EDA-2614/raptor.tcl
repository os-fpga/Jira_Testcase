create_design lut_ff_mux
target_device GEMINI_COMPACT_10x8
add_include_path ./rtl
add_library_path ./rtl
add_design_file ./rtl/lut_ff_mux.v
set_top_module lut_ff_mux
add_constraint_file ./clk_constraint.sdc
synthesize 
packing
place
route

set input_file [open "lut_ff_mux/run_1/synth_1_1/synthesis/post_pnr_wrapper_lut_ff_mux_post_synth.v" r]

set file_content [read $input_file]

close $input_file
set modified_content [string map {"module lut_ff_mux(" "module lut_ff_mux_post_route ("} $file_content]

set output_file [open "lut_ff_mux/run_1/synth_1_1/synthesis/post_pnr_wrapper_lut_ff_mux_post_synth.v" w]

puts $output_file $modified_content

close $output_file
puts "Modification completed."

simulation_options simulation icarus pnr
simulate pnr icarus
sta
power
bitstream
