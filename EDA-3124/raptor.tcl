create_design multi_clocks
target_device GEMINI_COMPACT_10x8
add_include_path rtl
add_library_path rtl
add_library_ext .v .sv
add_design_file rtl/multi_clocks.v
set_top_module multi_clocks
add_simulation_file sim/post_route_tb/sim_route_multi_clocks.sv
set_top_testbench sim_route_multi_clocks
add_constraint_file clk_constraint.sdc
add_constraint_file pin_constraints.pin
analyze
synthesize delay
packing
place
route
set input_file [open "multi_clocks/run_1/synth_1_1/synthesis/post_pnr_wrapper_multi_clocks_post_synth.v" r]
set file_content [read $input_file]
close $input_file
set modified_content [string map {"module multi_clocks(" "module multi_clocks_post_route ("} $file_content]
set output_file [open "multi_clocks/run_1/synth_1_1/synthesis/post_pnr_wrapper_multi_clocks_post_synth.v" w]
puts $output_file $modified_content
close $output_file
simulation_options compilation icarus pnr
simulate pnr icarus
sta
power
bitstream enable_simulation
add_simulation_file multi_clocks/run_1/synth_1_1/impl_1_1_1/bitstream/BIT_SIM/fabric_multi_clocks_formal_random_top_tb.v
set_top_testbench fabric_multi_clocks_top_formal_verification_random_tb

exec python3 file_overwrite.py sim/bitstream_tb/bitstream_testbench.v multi_clocks/run_1/synth_1_1/impl_1_1_1/bitstream/BIT_SIM/fabric_multi_clocks_formal_random_top_tb.v
exec python3 bt_tb_io_update.py multi_clocks/run_1/synth_1_1/impl_1_1_1/bitstream/BIT_SIM/fabric_multi_clocks_top_formal_verification.v multi_clocks 16
exec python3 bt_tb_io_update.py multi_clocks/run_1/synth_1_1/impl_1_1_1/bitstream/BIT_SIM/fabric_netlists.v multi_clocks

file mkdir multi_clocks/run_1/synth_1_1/impl_1_1_1/bitstream/SRC/
if {[file exists multi_clocks/run_1/synth_1_1/impl_1_1_1/bitstream/SRC/CustomModules]} {
    puts "Destination directory already exists. Skipping the copy operation."
} else {
    file copy -force openfpga-pd-castor-rs/k6n8_TSMC16nm_7.5T/CommonFiles/task/CustomModules/ multi_clocks/run_1/synth_1_1/impl_1_1_1/bitstream/SRC/
}

exec /bin/bash sed.sh

simulate "bitstream_bd" "icarus"
