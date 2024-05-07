create_clock -period 2.5 1'0 
set_input_delay 0.1 -clock 1'0 [get_ports {*}] 
set_output_delay 0.1 -clock 1'0 [get_ports {*}] 
create_clock -period 2.5 EthernetModule_inst.RxModule_inst.phy_rxclk 
set_input_delay 0.1 -clock EthernetModule_inst.RxModule_inst.phy_rxclk [get_ports {*}] 
set_output_delay 0.1 -clock EthernetModule_inst.RxModule_inst.phy_rxclk [get_ports {*}] 
create_clock -period 2.5 EthernetModule_inst.clk_10K 
set_input_delay 0.1 -clock EthernetModule_inst.clk_10K [get_ports {*}] 
set_output_delay 0.1 -clock EthernetModule_inst.clk_10K [get_ports {*}] 
create_clock -period 2.5 EthernetModule_inst.RxModule_inst.ff_clk 
set_input_delay 0.1 -clock EthernetModule_inst.RxModule_inst.ff_clk [get_ports {*}] 
set_output_delay 0.1 -clock EthernetModule_inst.RxModule_inst.ff_clk [get_ports {*}] 
