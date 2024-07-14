create_clock -period 20.000000 clk_i 
set_output_delay 2 -clock clk_i [get_ports data_o] 
