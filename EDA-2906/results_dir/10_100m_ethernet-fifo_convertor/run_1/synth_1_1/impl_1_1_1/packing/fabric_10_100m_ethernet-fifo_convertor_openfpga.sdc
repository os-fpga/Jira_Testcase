create_clock -period 2.5 EthernetModule_inst.clk_10K 
set_input_delay 0.1 -clock EthernetModule_inst.clk_10K [get_ports {*}] 
set_output_delay 0.1 -clock EthernetModule_inst.clk_10K [get_ports {*}] 
