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

set line_to_add "   `include \"[pwd]/bitstream_testbench.v\";"
set file_path "and2_bitstream_sim/run_1/synth_1_1/impl_1_1_1/bitstream/BIT_SIM/and2_formal_random_top_tb.v"
set search_line "// ----- Can be changed by the user for his/her need -------"

set temp_file_path "temporary_file.txt"

set infile [open $file_path r]

set outfile [open $temp_file_path w]

set found 0
while {[gets $infile line] != -1} {
    puts $outfile $line
    if {[string equal $line $search_line]} {
        puts $outfile $line_to_add
        set found 1
    }
}

close $infile
close $outfile

if {!$found} {
    puts "Line to search for not found."
} else {
    file rename -force $temp_file_path $file_path
    puts "Line added successfully."
}

# Bitstream Simulation
clear_simulation_files
# add_simulation_file testbench.sv
add_library_path ../openfpga-pd-castor-rs/k6n8_TSMC16nm_7.5T/CommonFiles/task/CustomModules/
simulate "bitstream_bd" "icarus" 
