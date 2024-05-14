create_design and2
target_device GEMINI_COMPACT_10x8
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/and2.v
set_top_module and2
add_simulation_file ./sim/post_route_tb/sim_route_and2.sv
set_top_testbench sim_route_and2
add_constraint_file ./clk_constraint.sdc
add_constraint_file ./pin_mapping.pin
analyze
synthesize 
packing
place
route
# Open the input file in read mode
set input_file [open "and2/run_1/synth_1_1/synthesis/post_pnr_wrapper_and2_post_synth.v" r]
# Read the file content
set file_content [read $input_file]
# Close the input file after reading
close $input_file
set modified_content [string map {"module and2(" "module and2_post_route ("} $file_content]
# Open the file again, this time in write mode to overwrite the old content
set output_file [open "and2/run_1/synth_1_1/synthesis/post_pnr_wrapper_and2_post_synth.v" w]
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

add_simulation_file and2/run_1/synth_1_1/impl_1_1_1/bitstream/BIT_SIM/fabric_and2_formal_random_top_tb.v
set_top_testbench fabric_and2_top_formal_verification_random_tb

exec python3 scripts/bt_tb_io_update.py and2/run_1/synth_1_1/impl_1_1_1/bitstream/BIT_SIM/fabric_and2_formal_random_top_tb.v and2
exec python3 scripts/bt_tb_io_update.py and2/run_1/synth_1_1/impl_1_1_1/bitstream/BIT_SIM/fabric_and2_top_formal_verification.v and2
exec python3 scripts/bt_tb_io_update.py and2/run_1/synth_1_1/impl_1_1_1/bitstream/BIT_SIM/fabric_netlists.v and2

file mkdir and2/run_1/synth_1_1/impl_1_1_1/bitstream/SRC/
if {[file exists and2/run_1/synth_1_1/impl_1_1_1/bitstream/SRC/CustomModules]} {
    puts "Destination directory already exists. Skipping the copy operation."
} else {
    file copy -force openfpga-pd-castor-rs/k6n8_TSMC16nm_7.5T/CommonFiles/task/CustomModules/ and2/run_1/synth_1_1/impl_1_1_1/bitstream/SRC/
}

# clear_simulation_files
add_library_path openfpga-pd-castor-rs/k6n8_TSMC16nm_7.5T/CommonFiles/task/CustomModules/

simulate "bitstream_bd" "icarus"
