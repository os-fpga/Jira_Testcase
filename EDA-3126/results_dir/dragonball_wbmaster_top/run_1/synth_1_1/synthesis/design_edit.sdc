#############
#
# Fabric clock assignment
#
#############
# set_clock_pin -device_clock clk[0] -design_clock clk (Physical port name)
# set_clock_pin -device_clock clk[0] -design_clock $clk_buf_$ibuf_clk (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[0] -design_clock $clk_buf_$ibuf_clk

#############
#
# Each pin mode and location assignment
#
#############
# Pin location is not assigned
# Pin a[1]      :: I_BUF

# Pin location is not assigned
# Pin a[2]      :: I_BUF

# Pin location is not assigned
# Pin a[3]      :: I_BUF

# Pin location is not assigned
# Pin a[4]      :: I_BUF

# Pin location is not assigned
# Pin a[5]      :: I_BUF

# Pin location is not assigned
# Pin a[6]      :: I_BUF

# Pin location is not assigned
# Pin a[7]      :: I_BUF

# Pin location is not assigned
# Pin a[8]      :: I_BUF

# Pin location is not assigned
# Pin a[9]      :: I_BUF

# Pin location is not assigned
# Pin ack_i     :: I_BUF

# Pin location is not assigned
# Pin clk       :: I_BUF |-> CLK_BUF

# Pin location is not assigned
# Pin cs_n      :: I_BUF

# Pin location is not assigned
# Pin dat_i[0]  :: I_BUF

# Pin location is not assigned
# Pin dat_i[1]  :: I_BUF

# Pin location is not assigned
# Pin dat_i[10] :: I_BUF

# Pin location is not assigned
# Pin dat_i[11] :: I_BUF

# Pin location is not assigned
# Pin dat_i[12] :: I_BUF

# Pin location is not assigned
# Pin dat_i[13] :: I_BUF

# Pin location is not assigned
# Pin dat_i[14] :: I_BUF

# Pin location is not assigned
# Pin dat_i[15] :: I_BUF

# Pin location is not assigned
# Pin dat_i[2]  :: I_BUF

# Pin location is not assigned
# Pin dat_i[3]  :: I_BUF

# Pin location is not assigned
# Pin dat_i[4]  :: I_BUF

# Pin location is not assigned
# Pin dat_i[5]  :: I_BUF

# Pin location is not assigned
# Pin dat_i[6]  :: I_BUF

# Pin location is not assigned
# Pin dat_i[7]  :: I_BUF

# Pin location is not assigned
# Pin dat_i[8]  :: I_BUF

# Pin location is not assigned
# Pin dat_i[9]  :: I_BUF

# Pin location is not assigned
# Pin err_i     :: I_BUF

# Pin location is not assigned
# Pin lwe_n     :: I_BUF

# Pin location is not assigned
# Pin oe_n      :: I_BUF

# Pin location is not assigned
# Pin reset_n   :: I_BUF

# Pin location is not assigned
# Pin uwe_n     :: I_BUF

# Pin location is not assigned
# Pin adr_o[1]  :: O_BUFT

# Pin location is not assigned
# Pin adr_o[2]  :: O_BUFT

# Pin location is not assigned
# Pin adr_o[3]  :: O_BUFT

# Pin location is not assigned
# Pin adr_o[4]  :: O_BUFT

# Pin location is not assigned
# Pin adr_o[5]  :: O_BUFT

# Pin location is not assigned
# Pin adr_o[6]  :: O_BUFT

# Pin location is not assigned
# Pin adr_o[7]  :: O_BUFT

# Pin location is not assigned
# Pin adr_o[8]  :: O_BUFT

# Pin location is not assigned
# Pin adr_o[9]  :: O_BUFT

# Pin location is not assigned
# Pin berr      :: O_BUFT

# Pin location is not assigned
# Pin clk_o     :: O_BUFT

# Pin location is not assigned
# Pin cyc_o     :: O_BUFT

# Pin location is not assigned
# Pin dtack_n   :: O_BUFT

# Pin location is not assigned
# Pin rst_o     :: O_BUFT

# Pin location is not assigned
# Pin sel_o[0]  :: O_BUFT

# Pin location is not assigned
# Pin sel_o[1]  :: O_BUFT

# Pin location is not assigned
# Pin stb_o     :: O_BUFT

# Pin location is not assigned
# Pin we_o      :: O_BUFT

#############
#
# Internal Control Signals
#
#############
# Module: I_BUF
# LinkedObject: a[1]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: a[2]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: a[3]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: a[4]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: a[5]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: a[6]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: a[7]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: a[8]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: a[9]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: ack_i
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: clk
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: cs_n
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: dat_i[0]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: dat_i[1]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: dat_i[10]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: dat_i[11]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: dat_i[12]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: dat_i[13]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: dat_i[14]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: dat_i[15]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: dat_i[2]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: dat_i[3]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: dat_i[4]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: dat_i[5]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: dat_i[6]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: dat_i[7]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: dat_i[8]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: dat_i[9]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: err_i
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: lwe_n
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: oe_n
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: reset_n
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: uwe_n
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: adr_o[1]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: adr_o[2]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: adr_o[3]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: adr_o[4]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: adr_o[5]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: adr_o[6]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: adr_o[7]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: adr_o[8]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: adr_o[9]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: berr
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: clk_o
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: cyc_o
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: dtack_n
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: rst_o
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: sel_o[0]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: sel_o[1]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: stb_o
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: we_o
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

#############
#
# Each gearbox core clock
#
#############
