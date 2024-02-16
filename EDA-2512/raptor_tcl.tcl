create_design axil_interconnect_wrapper
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/axil_interconnect_wrapper_v1_0.v
set_top_module axil_interconnect_wrapper
analyze
cd ./sim
set logFile [open "rtl_sim.log" "w"]
puts "RTL Simulation Started"
exec make POST_SYNTH_SIM=0 >@ $logFile 2>@ $logFile
puts "RTL Simulation Finised, please see rtl_sim.log"
cd ..
synthesize delay
cd ./sim
puts "Post-Synth Simulation Started"
set logFile [open "post_synth_sim.log" "w"]
exec make POST_SYNTH_SIM=1 >@ $logFile 2>@ $logFile
puts "Post-Synth Simulation Finised, please see post_synth_sim.log"
