#############
#
# Fabric clock assignment
#
#############

#############
#
# Each pin mode and location assignment
#
#############
# Clock data from object clk_i_buf port O is not routed to fabric
# Pin clk_i_buf              :: I_BUF |-> CLK_BUF

# Pin location is not assigned
# Pin dly_incdec_buf         :: I_BUF

# Pin location is not assigned
# Pin dly_ld_buf             :: I_BUF

# Pin location is not assigned
# Pin dly_adj_buf            :: I_BUF

# Pin location is not assigned
# Pin data_i                 :: I_BUF |-> I_DELAY

# Pin location is not assigned
# Pin data_o_inv_delayed_buf :: O_BUF

# Pin location is not assigned
# Pin dly_tap_val_inv_buf[0] :: O_BUF

# Pin location is not assigned
# Pin dly_tap_val_inv_buf[1] :: O_BUF

# Pin location is not assigned
# Pin dly_tap_val_inv_buf[2] :: O_BUF

# Pin location is not assigned
# Pin dly_tap_val_inv_buf[3] :: O_BUF

# Pin location is not assigned
# Pin dly_tap_val_inv_buf[4] :: O_BUF

# Pin location is not assigned
# Pin dly_tap_val_inv_buf[5] :: O_BUF

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
set_io $auto$rs_design_edit.cc:885:execute$501 HP_1_CC_18_9P -mode MODE_BP_DIR_A_RX -internal_pin f2g_in_en_A

# Module: I_BUF
# LinkedObject: dly_incdec_buf
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: dly_ld_buf
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: dly_adj_buf
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

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

