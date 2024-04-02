create_design design67_15_45_top
target_device GEMINI_COMPACT_10x8
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/design67_15_45_top.v
set_top_module design67_15_45_top
add_simulation_file ./sim/post_route_tb/sim_route_design67_15_45_top.sv
set_top_testbench sim_route_design67_15_45_top
add_constraint_file ./clk_constraint.sdc
synthesize 
packing
place
route

set input_file [open "design67_15_45_top/run_1/synth_1_1/synthesis/post_pnr_wrapper_design67_15_45_top_post_synth.v" r]

set file_content [read $input_file]

close $input_file
set modified_content [string map {"module design67_15_45_top(" "module design67_15_45_top_post_route ("} $file_content]

set output_file [open "design67_15_45_top/run_1/synth_1_1/synthesis/post_pnr_wrapper_design67_15_45_top_post_synth.v" w]

puts $output_file $modified_content

close $output_file
puts "Modification completed."

simulation_options compilation icarus pnr
simulate pnr icarus
sta
power
bitstream
