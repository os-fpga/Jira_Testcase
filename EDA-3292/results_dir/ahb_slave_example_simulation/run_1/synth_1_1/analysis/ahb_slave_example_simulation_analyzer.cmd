read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/10_03_2024_09_15_02/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
plugin -i systemverilog
read_systemverilog -synth  -top ahb_slave_example_simulation -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/Validation/RTL_testcases/RS_Primitive_example_designs/ahb_slave_example_simulation/results_dir/.././rtl   /nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/Validation/RTL_testcases/RS_Primitive_example_designs/ahb_slave_example_simulation/results_dir/.././rtl/bscell.sv \
/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/Validation/RTL_testcases/RS_Primitive_example_designs/ahb_slave_example_simulation/results_dir/.././rtl/ff_sync.sv \
/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/Validation/RTL_testcases/RS_Primitive_example_designs/ahb_slave_example_simulation/results_dir/.././rtl/jtag_axi_wrap.sv \
/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/Validation/RTL_testcases/RS_Primitive_example_designs/ahb_slave_example_simulation/results_dir/.././rtl/jtag_to_axi_top.sv \
/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/Validation/RTL_testcases/RS_Primitive_example_designs/ahb_slave_example_simulation/results_dir/.././rtl/jtag_to_axi_wrapper.sv \
/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/Validation/RTL_testcases/RS_Primitive_example_designs/ahb_slave_example_simulation/results_dir/.././rtl/jtagreg.sv \
/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/Validation/RTL_testcases/RS_Primitive_example_designs/ahb_slave_example_simulation/results_dir/.././rtl/tap_top.sv \
/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/Validation/RTL_testcases/RS_Primitive_example_designs/ahb_slave_example_simulation/results_dir/.././rtl/ahb2axi4.sv \
/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/Validation/RTL_testcases/RS_Primitive_example_designs/ahb_slave_example_simulation/results_dir/.././rtl/ahb2axi4_wrapper.v \
/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/Validation/RTL_testcases/RS_Primitive_example_designs/ahb_slave_example_simulation/results_dir/.././rtl/beh_lib.sv \
/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/Validation/RTL_testcases/RS_Primitive_example_designs/ahb_slave_example_simulation/results_dir/.././rtl/ahb_slave_example_simulation.v \

analyze -top ahb_slave_example_simulation
