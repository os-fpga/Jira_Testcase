create_design up5bit_counter_dual_clock
target_device GEMINI_COMPACT_10x8
add_include_path rtl
add_library_path rtl
add_library_ext .v .sv
add_design_file rtl/up5bit_counter_dual_clock.v
set_top_module up5bit_counter_dual_clock
add_simulation_file sim/post_route_tb/sim_route_up5bit_counter_dual_clock.sv
set_top_testbench sim_route_up5bit_counter_dual_clock
add_constraint_file clk_constraint.sdc
add_constraint_file pin_constraints.pin
analyze
synthesize 
packing
place
route
# Open the input file in read mode
set input_file [open "up5bit_counter_dual_clock/run_1/synth_1_1/synthesis/post_pnr_wrapper_up5bit_counter_dual_clock_post_synth.v" r]
# Read the file content
set file_content [read $input_file]
# Close the input file after reading
close $input_file
set modified_content [string map {"module up5bit_counter_dual_clock(" "module up5bit_counter_dual_clock_post_route ("} $file_content]
# Open the file again, this time in write mode to overwrite the old content
set output_file [open "up5bit_counter_dual_clock/run_1/synth_1_1/synthesis/post_pnr_wrapper_up5bit_counter_dual_clock_post_synth.v" w]
# Write the modified content back to the file
puts $output_file $modified_content
# Close the file
close $output_file
puts "Modification completed."
simulation_options compilation icarus pnr
simulate pnr icarus
sta
power
bitstream enable_simulation
add_simulation_file up5bit_counter_dual_clock/run_1/synth_1_1/impl_1_1_1/bitstream/BIT_SIM/fabric_up5bit_counter_dual_clock_formal_random_top_tb.v
set_top_testbench fabric_up5bit_counter_dual_clock_top_formal_verification_random_tb

exec python3 scripts/file_overwrite.py sim/bitstream_tb/bitstream_testbench.v up5bit_counter_dual_clock/run_1/synth_1_1/impl_1_1_1/bitstream/BIT_SIM/fabric_up5bit_counter_dual_clock_formal_random_top_tb.v
exec python3 scripts/bt_tb_io_update.py up5bit_counter_dual_clock/run_1/synth_1_1/impl_1_1_1/bitstream/BIT_SIM/fabric_up5bit_counter_dual_clock_top_formal_verification.v up5bit_counter_dual_clock 2
exec python3 scripts/bt_tb_io_update.py up5bit_counter_dual_clock/run_1/synth_1_1/impl_1_1_1/bitstream/BIT_SIM/fabric_netlists.v up5bit_counter_dual_clock

file mkdir up5bit_counter_dual_clock/run_1/synth_1_1/impl_1_1_1/bitstream/SRC/
if {[file exists up5bit_counter_dual_clock/run_1/synth_1_1/impl_1_1_1/bitstream/SRC/CustomModules]} {
    puts "Destination directory already exists. Skipping the copy operation."
} else {
    file copy -force openfpga-pd-castor-rs/k6n8_TSMC16nm_7.5T/CommonFiles/task/CustomModules/ up5bit_counter_dual_clock/run_1/synth_1_1/impl_1_1_1/bitstream/SRC/
}

exec /bin/bash sed.sh
add_library_path openfpga-pd-castor-rs/k6n8_TSMC16nm_7.5T/CommonFiles/task/CustomModules/

simulate "bitstream_bd" "icarus"
