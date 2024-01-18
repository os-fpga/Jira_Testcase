read_verilog -sv /nfs_home/bphilofsky/Raptor/Raptor_2023.10/Raptor/2023.10/share/raptor/sim_models/rapidsilicon/genesis3/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I/nfs_home/bphilofsky/Raptor/Scripts -I/nfs_home/bphilofsky/Raptor/Test_Designs/Github/Video_stream_Scaler/./Src  /nfs_home/bphilofsky/Raptor/Test_Designs/Github/Video_stream_Scaler/./Src/scaler.v 
read_verilog  -I/nfs_home/bphilofsky/Raptor/Scripts -I/nfs_home/bphilofsky/Raptor/Test_Designs/Github/Video_stream_Scaler/./Src  /nfs_home/bphilofsky/Raptor/Test_Designs/Github/Video_stream_Scaler/./Src/scaler_sr_top.v 

analyze -top streamScaler_sr_top
