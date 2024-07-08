create_design sudoku_check
target_device 1VG28
add_include_path ./rtl
add_design_file ./rtl/fifo.v
add_design_file ./rtl/pll.v
add_design_file ./rtl/puz_bank3.v
add_design_file ./rtl/sudoku.v
add_design_file ./rtl/sudoku_ans.v
add_design_file ./rtl/sudoku_bin2hex.v
add_design_file ./rtl/sudoku_check.v
add_design_file ./rtl/sudoku_core.v
add_design_file ./rtl/sudoku_hex2bin.v
add_design_file ./rtl/sudoku_mask.v
add_design_file ./rtl/sudoku_mask_stg2.v
add_design_file ./rtl/sudoku_partials.v
add_design_file ./rtl/sudoku_solution.v
set_top_module sudoku_check
add_constraint_file ./raptor_sdc.sdc
analyze
synthesize delay
packing
place
route
sta
power
bitstream 
