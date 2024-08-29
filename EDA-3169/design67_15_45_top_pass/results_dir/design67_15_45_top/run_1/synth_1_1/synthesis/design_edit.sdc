#############
#
# Fabric clock assignment
#
#############
# This clock need to route to fabric slot #0
# set_clock_pin -device_clock clk[0] -design_clock clk (Physical port name, clock module: CLK_BUF $clkbuf$design67_15_45_top.$ibuf_clk)
# set_clock_pin -device_clock clk[0] -design_clock $clk_buf_$ibuf_clk (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[0] -design_clock $clk_buf_$ibuf_clk

#############
#
# Each pin mode and location assignment
#
#############
# Pin location is not assigned
# Pin clk     :: I_BUF |-> CLK_BUF

# Pin location is not assigned
# Pin in[0]   :: I_BUF

# Pin location is not assigned
# Pin in[1]   :: I_BUF

# Pin location is not assigned
# Pin in[10]  :: I_BUF

# Pin location is not assigned
# Pin in[11]  :: I_BUF

# Pin location is not assigned
# Pin in[12]  :: I_BUF

# Pin location is not assigned
# Pin in[13]  :: I_BUF

# Pin location is not assigned
# Pin in[14]  :: I_BUF

# Pin location is not assigned
# Pin in[15]  :: I_BUF

# Pin location is not assigned
# Pin in[16]  :: I_BUF

# Pin location is not assigned
# Pin in[17]  :: I_BUF

# Pin location is not assigned
# Pin in[18]  :: I_BUF

# Pin location is not assigned
# Pin in[19]  :: I_BUF

# Pin location is not assigned
# Pin in[2]   :: I_BUF

# Pin location is not assigned
# Pin in[20]  :: I_BUF

# Pin location is not assigned
# Pin in[21]  :: I_BUF

# Pin location is not assigned
# Pin in[22]  :: I_BUF

# Pin location is not assigned
# Pin in[23]  :: I_BUF

# Pin location is not assigned
# Pin in[24]  :: I_BUF

# Pin location is not assigned
# Pin in[25]  :: I_BUF

# Pin location is not assigned
# Pin in[26]  :: I_BUF

# Pin location is not assigned
# Pin in[27]  :: I_BUF

# Pin location is not assigned
# Pin in[28]  :: I_BUF

# Pin location is not assigned
# Pin in[29]  :: I_BUF

# Pin location is not assigned
# Pin in[3]   :: I_BUF

# Pin location is not assigned
# Pin in[30]  :: I_BUF

# Pin location is not assigned
# Pin in[31]  :: I_BUF

# Pin location is not assigned
# Pin in[4]   :: I_BUF

# Pin location is not assigned
# Pin in[5]   :: I_BUF

# Pin location is not assigned
# Pin in[6]   :: I_BUF

# Pin location is not assigned
# Pin in[7]   :: I_BUF

# Pin location is not assigned
# Pin in[8]   :: I_BUF

# Pin location is not assigned
# Pin in[9]   :: I_BUF

# Pin location is not assigned
# Pin rst     :: I_BUF

# Pin location is not assigned
# Pin out[0]  :: O_BUFT

# Pin location is not assigned
# Pin out[1]  :: O_BUFT

# Pin location is not assigned
# Pin out[10] :: O_BUFT

# Pin location is not assigned
# Pin out[11] :: O_BUFT

# Pin location is not assigned
# Pin out[12] :: O_BUFT

# Pin location is not assigned
# Pin out[13] :: O_BUFT

# Pin location is not assigned
# Pin out[14] :: O_BUFT

# Pin location is not assigned
# Pin out[15] :: O_BUFT

# Pin location is not assigned
# Pin out[16] :: O_BUFT

# Pin location is not assigned
# Pin out[17] :: O_BUFT

# Pin location is not assigned
# Pin out[18] :: O_BUFT

# Pin location is not assigned
# Pin out[19] :: O_BUFT

# Pin location is not assigned
# Pin out[2]  :: O_BUFT

# Pin location is not assigned
# Pin out[20] :: O_BUFT

# Pin location is not assigned
# Pin out[21] :: O_BUFT

# Pin location is not assigned
# Pin out[22] :: O_BUFT

# Pin location is not assigned
# Pin out[23] :: O_BUFT

# Pin location is not assigned
# Pin out[24] :: O_BUFT

# Pin location is not assigned
# Pin out[25] :: O_BUFT

# Pin location is not assigned
# Pin out[26] :: O_BUFT

# Pin location is not assigned
# Pin out[27] :: O_BUFT

# Pin location is not assigned
# Pin out[28] :: O_BUFT

# Pin location is not assigned
# Pin out[29] :: O_BUFT

# Pin location is not assigned
# Pin out[3]  :: O_BUFT

# Pin location is not assigned
# Pin out[30] :: O_BUFT

# Pin location is not assigned
# Pin out[31] :: O_BUFT

# Pin location is not assigned
# Pin out[4]  :: O_BUFT

# Pin location is not assigned
# Pin out[5]  :: O_BUFT

# Pin location is not assigned
# Pin out[6]  :: O_BUFT

# Pin location is not assigned
# Pin out[7]  :: O_BUFT

# Pin location is not assigned
# Pin out[8]  :: O_BUFT

# Pin location is not assigned
# Pin out[9]  :: O_BUFT

#############
#
# Internal Control Signals
#
#############
# Module: I_BUF
# LinkedObject: clk
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: in[0]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: in[1]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: in[10]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: in[11]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: in[12]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: in[13]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: in[14]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: in[15]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: in[16]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: in[17]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: in[18]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: in[19]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: in[2]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: in[20]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: in[21]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: in[22]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: in[23]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: in[24]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: in[25]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: in[26]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: in[27]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: in[28]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: in[29]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: in[3]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: in[30]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: in[31]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: in[4]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: in[5]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: in[6]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: in[7]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: in[8]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: in[9]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: rst
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: out[0]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: out[1]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: out[10]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: out[11]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: out[12]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: out[13]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: out[14]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: out[15]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: out[16]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: out[17]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: out[18]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: out[19]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: out[2]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: out[20]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: out[21]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: out[22]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: out[23]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: out[24]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: out[25]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: out[26]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: out[27]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: out[28]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: out[29]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: out[3]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: out[30]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: out[31]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: out[4]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: out[5]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: out[6]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: out[7]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: out[8]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

# Module: O_BUFT
# LinkedObject: out[9]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip reason: Location  does not have any mode to begin with

#############
#
# Each gearbox core clock
#
#############
