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

set tb_path "bitstream_testbench.v"
set openfpga_tb_path "and2_bitstream_sim/run_1/synth_1_1/impl_1_1_1/bitstream/BIT_SIM/and2_formal_random_top_tb.v"
set search_line "// ----- Can be changed by the user for his/her need -------"

set source_file [open $tb_path r]
set destination_file [open $openfpga_tb_path r+]
set search_string $search_line

set content [read $source_file]
close $source_file
set destination_lines [split [read $destination_file] "\n"]

set line_number_to_insert_after -1
foreach line $destination_lines {
    if {[string first $search_string $line] != -1} {
        set line_number_to_insert_after [expr {[lsearch $destination_lines $line] + 1}]
        break
    }
}
if {$line_number_to_insert_after > 0} {
    set destination_lines [linsert $destination_lines $line_number_to_insert_after $content]
} else {
    puts "Search string not found in the destination file."
}
seek $destination_file 0
puts -nonewline $destination_file [join $destination_lines "\n"]

close $destination_file


# Bitstream Simulation
clear_simulation_files
# add_simulation_file testbench.sv
add_library_path ../../openfpga-pd-castor-rs/k6n8_TSMC16nm_7.5T/CommonFiles/task/CustomModules/
simulate "bitstream_bd" "icarus" 
