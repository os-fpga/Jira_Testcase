read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/02_20_2024_09_15_02/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog -sv -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/EDA-2526/spis/./rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/EDA-2526/spis/./rtl/asyncfifo.sv 
read_verilog -sv -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/EDA-2526/spis/./rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/EDA-2526/spis/./rtl/levelsync.sv 
read_verilog -sv -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/EDA-2526/spis/./rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/EDA-2526/spis/./rtl/pulse_sync.sv 
read_verilog -sv -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/EDA-2526/spis/./rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/EDA-2526/spis/./rtl/rst_regen_low.sv 
read_verilog -sv -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/EDA-2526/spis/./rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/EDA-2526/spis/./rtl/spi.svh 
read_verilog  -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/EDA-2526/spis/./rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/EDA-2526/spis/./rtl/spi.vh 
read_verilog -sv -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/EDA-2526/spis/./rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/EDA-2526/spis/./rtl/spis_intf.sv 
read_verilog -sv -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/EDA-2526/spis/./rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/EDA-2526/spis/./rtl/spis_miso_buf.sv 
read_verilog -sv -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/EDA-2526/spis/./rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/EDA-2526/spis/./rtl/spis_reg.sv 
read_verilog -sv -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/EDA-2526/spis/./rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/EDA-2526/spis/./rtl/spis_reg_top.sv 
read_verilog -sv -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/EDA-2526/spis/./rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/EDA-2526/spis/./rtl/spis_top.sv 
read_verilog -sv -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/EDA-2526/spis/./rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/EDA-2526/spis/./rtl/spisavb.sv 
read_verilog -sv -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/EDA-2526/spis/./rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/EDA-2526/spis/./rtl/syncfifo.sv 
read_verilog -sv -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/EDA-2526/spis/./rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/EDA-2526/spis/./rtl/syncfifo_mem1r1w.sv 
read_verilog -sv -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/EDA-2526/spis/./rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/EDA-2526/spis/./rtl/syncfifo_ram.sv 
read_verilog -sv -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/EDA-2526/spis/./rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/EDA-2526/spis/./rtl/syncfifo_reg.sv 

analyze -top spis_top
