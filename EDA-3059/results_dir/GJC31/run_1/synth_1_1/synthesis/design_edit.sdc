#############
#
# Fabric clock assignment
#
#############
# set_clock_pin -device_clock clk[0] -design_clock clk_i_buf (Physical port name)
# set_clock_pin -device_clock clk[0] -design_clock clk_i (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[0] -design_clock clk_i

#############
#
# Each pin mode and location assignment
#
#############
# Object clk_i_buf is primitive \PLL but data signal is not defined
# Pin      clk_i_buf             :: I_BUF |-> CLK_BUF |-> PLL

# Pin location is not assigned
# Pin      data_i                :: I_BUF |-> I_DELAY |-> I_DDR

# Pin      dly_inc_pulse_inv_buf :: I_BUF
# set_mode MODE_BP_DIR_A_RX      HP_1_0_0P
# set_io   dly_inc_pulse_inv_buf HP_1_0_0P                      --> (original)
set_io     dly_inc_pulse_inv     HP_1_0_0P                      -mode          MODE_BP_DIR_A_RX -internal_pin g2f_rx_in[0]_A

# Pin      enable_buf            :: I_BUF
# set_mode MODE_BP_DIR_A_RX      HP_1_4_2P
# set_io   enable_buf            HP_1_4_2P                      --> (original)
set_io     enable                HP_1_4_2P                      -mode          MODE_BP_DIR_A_RX -internal_pin g2f_rx_in[0]_A

# Pin      reset_n_buf           :: I_BUF
# set_mode MODE_BP_DIR_A_RX      HP_1_2_1P
# set_io   reset_n_buf           HP_1_2_1P                      --> (original)
set_io     reset_n               HP_1_2_1P                      -mode          MODE_BP_DIR_A_RX -internal_pin g2f_rx_in[0]_A

# Pin      data_o_buf[0]         :: O_BUF
# set_mode MODE_BP_DIR_B_TX      HP_1_3_1N
# set_io   data_o_buf[0]         HP_1_3_1N                      --> (original)
set_io     data_o[0]             HP_1_2_1P                      -mode          MODE_BP_DIR_B_TX -internal_pin f2g_tx_out[5]_A

# Pin      data_o_buf[1]         :: O_BUF
# set_mode MODE_BP_DIR_A_TX      HP_1_4_2P
# set_io   data_o_buf[1]         HP_1_4_2P                      --> (original)
set_io     data_o[1]             HP_1_4_2P                      -mode          MODE_BP_DIR_A_TX -internal_pin f2g_tx_out[0]_A

#############
#
# Internal Control Signals
#
#############
# Module: I_BUF
# LinkedObject: clk_i_buf
# Location: HP_1_CC_18_9P
# Port: EN
# Signal: in:f2g_in_en_{A|B}
set_io   $auto$rs_design_edit.cc:885:execute$614 HP_1_CC_18_9P -mode MODE_BP_DIR_A_RX -internal_pin f2g_in_en_A

# Module: PLL
# LinkedObject: clk_i_buf
# Location: HP_1_CC_18_9P
# Port: LOCK
# Signal: out:TO_BE_DETERMINED
# User design does not utilize linked-object clk_i_buf wrapped-instance port LOCK

# Module: PLL
# LinkedObject: clk_i_buf
# Location: HP_1_CC_18_9P
# Port: PLL_EN
# Signal: in:TO_BE_DETERMINED
# set_io $auto$rs_design_edit.cc:885:execute$619 HP_1_CC_18_9P -mode MODE_BP_DIR_A_RX -internal_pin TO_BE_DETERMINED

# Module: I_BUF
# LinkedObject: data_i
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_DELAY
# LinkedObject: data_i
# Location: 
# Port: DLY_ADJ
# Signal: in:rule=half-first:f2g_trx_dly_adj
# Location  does not have any mode to begin with

# Module: I_DELAY
# LinkedObject: data_i
# Location: 
# Port: DLY_INCDEC
# Signal: in:rule=half-first:f2g_trx_dly_inc
# Location  does not have any mode to begin with

# Module: I_DELAY
# LinkedObject: data_i
# Location: 
# Port: DLY_LOAD
# Signal: in:rule=half-first:f2g_trx_dly_ld
# Location  does not have any mode to begin with

# Module: I_DELAY
# LinkedObject: data_i
# Location: 
# Port: DLY_TAP_VALUE
# Signal: out:rule=half-first:g2f_trx_dly_tap
# Location  does not have any mode to begin with

# Module: I_DDR
# LinkedObject: data_i
# Location: 
# Port: E
# Signal: in:TO_BE_DETERMINED
# Location  does not have any mode to begin with

# Module: I_DDR
# LinkedObject: data_i
# Location: 
# Port: R
# Signal: in:TO_BE_DETERMINED
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: dly_inc_pulse_inv_buf
# Location: HP_1_0_0P
# Port: EN
# Signal: in:f2g_in_en_{A|B}
set_io   $auto$rs_design_edit.cc:885:execute$616 HP_1_0_0P     -mode MODE_BP_DIR_A_RX -internal_pin f2g_in_en_A

# Module: I_BUF
# LinkedObject: enable_buf
# Location: HP_1_4_2P
# Port: EN
# Signal: in:f2g_in_en_{A|B}
set_io   $auto$rs_design_edit.cc:885:execute$617 HP_1_4_2P     -mode MODE_BP_DIR_A_RX -internal_pin f2g_in_en_A

# Module: I_BUF
# LinkedObject: reset_n_buf
# Location: HP_1_2_1P
# Port: EN
# Signal: in:f2g_in_en_{A|B}
set_io   $auto$rs_design_edit.cc:885:execute$618 HP_1_2_1P     -mode MODE_BP_DIR_A_RX -internal_pin f2g_in_en_A

