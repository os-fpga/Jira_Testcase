set_top_module i_buf_ds_i_ddr

create_clock -period 10 clk_i

set_output_delay 3 -clock clk_i [get_ports {data_o}]

