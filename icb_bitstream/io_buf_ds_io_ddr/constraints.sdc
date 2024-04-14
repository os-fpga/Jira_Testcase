# -name is used for creating virtual clock and for actual clock -name option will not be used
create_clock -period 5 clk
set_clock_pin -device_clock clk[0] -design_clock clk

set_property mode Mode_BP_SDR_A_RX HP_2_CC_10_5P
set_pin_loc clk_i HP_2_CC_10_5P

set_property mode Mode_BP_SDR_A_RX HR_1_0_0P
set_pin_loc dly_inc_pulse_inv HR_1_0_0P

set_property mode Mode_BP_SDR_A_RX HR_2_6_3P
set_pin_loc data_i[0] HR_2_6_3P

set_property mode Mode_BP_SDR_A_RX HR_2_8_4P
set_pin_loc data_i[1] HR_2_8_4P

set_property mode Mode_BP_SDR_A_RX HR_1_6_3P
set_pin_loc enable HR_1_6_3P

set_property mode Mode_BP_SDR_A_RX HR_1_8_4P
set_pin_loc reset_n HR_1_8_4P

set_property mode Mode_BP_DDR_A_TX HR_5_12_6P
set_pin_loc data_o HR_5_12_6P
