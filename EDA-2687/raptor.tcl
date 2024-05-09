create_design sp_ram
target_device GEMINI_COMPACT_10x8
add_include_path ./rtl
add_library_path ./rtl
add_design_file ./rtl/sp_ram.v
set_top_module sp_ram
add_simulation_file ./sim/post_route_tb/sim_route_sp_ram.sv
set_top_testbench sim_route_sp_ram
add_constraint_file ./clk_constraint.sdc
add_constraint_file ./pin_mapping.pin
analyze
synthesize 
packing
place
route

set input_file [open "sp_ram/run_1/synth_1_1/synthesis/post_pnr_wrapper_sp_ram_post_synth.v" r]

set file_content [read $input_file]

close $input_file
set modified_content [string map {"module sp_ram(" "module sp_ram_post_route ("} $file_content]

set output_file [open "sp_ram/run_1/synth_1_1/synthesis/post_pnr_wrapper_sp_ram_post_synth.v" w]

puts $output_file $modified_content

close $output_file
puts "Modification completed."
simulation_options compilation icarus pnr
simulate pnr icarus
sta
power
bitstream enable_simulation
add_simulation_file sp_ram/run_1/synth_1_1/impl_1_1_1/bitstream/BIT_SIM/fabric_sp_ram_formal_random_top_tb.v
set_top_testbench fabric_sp_ram_top_formal_verification_random_tb

exec python3 ./scripts/bt_tb_io_update.py sp_ram/run_1/synth_1_1/impl_1_1_1/bitstream/BIT_SIM/fabric_sp_ram_formal_random_top_tb.v sp_ram
exec python3 ./scripts/bt_tb_io_update.py sp_ram/run_1/synth_1_1/impl_1_1_1/bitstream/BIT_SIM/fabric_sp_ram_top_formal_verification.v sp_ram
exec python3 ./scripts/bt_tb_io_update.py sp_ram/run_1/synth_1_1/impl_1_1_1/bitstream/BIT_SIM/fabric_netlists.v sp_ram

file mkdir sp_ram/run_1/synth_1_1/impl_1_1_1/bitstream/SRC/
if {[file exists sp_ram/run_1/synth_1_1/impl_1_1_1/bitstream/SRC/CustomModules]} {
    puts "Destination directory already exists. Skipping the copy operation."
} else {
    file copy -force ./openfpga-pd-castor-rs/k6n8_TSMC16nm_7.5T/CommonFiles/task/CustomModules/ sp_ram/run_1/synth_1_1/impl_1_1_1/bitstream/SRC/
}

exec /bin/bash ./sed.sh
clear_simulation_files
add_library_path ./openfpga-pd-castor-rs/k6n8_TSMC16nm_7.5T/CommonFiles/task/CustomModules/

simulate "bitstream_bd" "icarus"
