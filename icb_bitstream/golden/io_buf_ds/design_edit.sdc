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
# Skip this because 'This is secondary pin. But IO bitstream generation will still make sure it is used in pair. Otherwise the IO bitstream will be invalid'
# Pin      din_n            :: I_BUF_DS

# Pin      din_p            :: I_BUF_DS
# set_mode MODE_BP_DIR_A_RX HP_1_4_2P
# set_io   din_p            HP_1_4_2P   --> (original)
set_io     o_buf_ds_i       HP_1_4_2P   -mode          MODE_BP_DIR_A_RX -internal_pin g2f_rx_in[0]_A

# Skip this because 'This is secondary pin. But IO bitstream generation will still make sure it is used in pair. Otherwise the IO bitstream will be invalid'
# Pin      dout_n           :: O_BUF_DS

# Pin      dout_p           :: O_BUF_DS
# set_mode MODE_BP_DIR_A_TX HP_1_6_3P
# set_io   dout_p           HP_1_6_3P   --> (original)
set_io     $auto_397        HP_1_6_3P   -mode          MODE_BP_DIR_A_TX -internal_pin f2g_tx_out[0]_A

#############
#
# Internal Control Signals
#
#############
# Module: I_BUF_DS
# LinkedObject: din_n+din_p
# Location: HP_1_4_2P
# Port: EN
# Signal: in:f2g_in_en_{A|B}
set_io $auto_396 HP_1_4_2P -mode MODE_BP_DIR_A_RX -internal_pin f2g_in_en_A

#############
#
# Each gearbox core clock
#
#############
