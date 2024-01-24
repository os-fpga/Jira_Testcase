create_design and2_bitstream_sim
add_design_file -V_2001 ./rtl/and2.v
set_top_module and2
add_simulation_file testbench.sv
set_top_testbench tb_and2
target_device GEMINI_COMPACT_10x8
analyze
simulate "rtl" "icarus" dump.fst
synthesize delay
simulate "gate" "icarus" dump.fst
packing
place
route
sta
bitstream enable_simulation

# Bitstream Simulation
clear_simulation_files
add_simulation_file testbench.sv
add_library_path ../openfpga-pd-castor-rs/k6n8_TSMC16nm_7.5T/CommonFiles/task/CustomModules/
simulate "bitstream_bd" "icarus" 
