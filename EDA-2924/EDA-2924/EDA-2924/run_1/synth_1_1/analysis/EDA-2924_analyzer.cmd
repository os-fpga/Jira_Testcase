read_verilog -sv /home/rapidsilicon/Aug_2024_Bash/RC1/Raptor/2024.09/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
plugin -i systemverilog
read_systemverilog -synth  -top mealy_fsm -I/home/rapidsilicon/FPGA_Course_Shawn_Hymel/introduction-to-fpga/05-finite-state-machines/example-02-mealy-fsm   /home/rapidsilicon/FPGA_Course_Shawn_Hymel/introduction-to-fpga/05-finite-state-machines/example-02-mealy-fsm/mealy-fsm.v \

analyze -top mealy_fsm
