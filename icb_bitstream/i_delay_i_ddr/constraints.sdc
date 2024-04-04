# -name is used for creating virtual clock and for actual clock -name option will not be used
set_clock_pin -device_clock clk[0] -design_clock clk_i

set_property mode Mode_BP_DIR_A_RX HP_1_CC_10_5P
set_pin_loc clk_i HP_1_CC_10_5P

set_property mode Mode_BP_DIR_A_RX HR_1_0_0P
set_pin_loc data_i HR_1_0_0P

set_property mode Mode_BP_DIR_A_RX HR_1_2_1P
set_pin_loc reset_n HR_1_2_1P

set_property mode Mode_BP_DIR_A_RX HR_1_4_2P
set_pin_loc enable HR_1_4_2P

set_property mode Mode_BP_DIR_A_RX HR_1_8_4P
set_pin_loc dly_inc_pulse_inv HR_1_8_4P

set_property mode Mode_BP_DIR_A_TX HR_1_12_6P
set_pin_loc data_o[0] HR_1_12_6P

set_property mode Mode_BP_DIR_A_TX HR_1_18_9P
set_pin_loc data_o[1] HR_1_18_9P
