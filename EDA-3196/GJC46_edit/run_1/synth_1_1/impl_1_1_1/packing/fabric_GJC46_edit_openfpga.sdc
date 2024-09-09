create_clock -period 0.200000 pll_clk 
create_clock -period 2.000000 fabric_clk_div 
set_input_delay 1 -clock $auto_1776.clkGHz_clkbuf [get_ports reset_buf] 
set_input_delay 1 -clock fabric_clk_div [get_ports reset_buf] 
set_input_delay 1 -clock $auto_1776.clkGHz_clkbuf [get_ports enable_buf_n] 
set_output_delay 2 -clock $auto_1776.clkGHz_clkbuf [get_ports $auto_1776.data_i_delay] 
set_output_delay 2 -clock fabric_clk_div [get_ports $auto_1776.delay_in] 
set_output_delay 1 -clock fabric_clk_div [get_ports bitslip_ctrl_n_buf] 
set_output_delay 1 -clock $auto_1776.clkGHz_clkbuf [get_ports ready_buf] 
