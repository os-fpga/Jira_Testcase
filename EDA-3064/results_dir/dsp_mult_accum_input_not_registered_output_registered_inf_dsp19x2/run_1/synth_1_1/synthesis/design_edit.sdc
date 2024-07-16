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
# Pin A1[0]    :: I_BUF

# Pin location is not assigned
# Pin A1[1]    :: I_BUF

# Pin location is not assigned
# Pin A1[2]    :: I_BUF

# Pin location is not assigned
# Pin A1[3]    :: I_BUF

# Pin location is not assigned
# Pin A1[4]    :: I_BUF

# Pin location is not assigned
# Pin A1[5]    :: I_BUF

# Pin location is not assigned
# Pin A1[6]    :: I_BUF

# Pin location is not assigned
# Pin A1[7]    :: I_BUF

# Pin location is not assigned
# Pin A1[8]    :: I_BUF

# Pin location is not assigned
# Pin A1[9]    :: I_BUF

# Pin location is not assigned
# Pin A2[0]    :: I_BUF

# Pin location is not assigned
# Pin A2[1]    :: I_BUF

# Pin location is not assigned
# Pin A2[2]    :: I_BUF

# Pin location is not assigned
# Pin A2[3]    :: I_BUF

# Pin location is not assigned
# Pin A2[4]    :: I_BUF

# Pin location is not assigned
# Pin A2[5]    :: I_BUF

# Pin location is not assigned
# Pin A2[6]    :: I_BUF

# Pin location is not assigned
# Pin A2[7]    :: I_BUF

# Pin location is not assigned
# Pin A2[8]    :: I_BUF

# Pin location is not assigned
# Pin A2[9]    :: I_BUF

# Pin location is not assigned
# Pin B1[0]    :: I_BUF

# Pin location is not assigned
# Pin B1[1]    :: I_BUF

# Pin location is not assigned
# Pin B1[2]    :: I_BUF

# Pin location is not assigned
# Pin B1[3]    :: I_BUF

# Pin location is not assigned
# Pin B1[4]    :: I_BUF

# Pin location is not assigned
# Pin B1[5]    :: I_BUF

# Pin location is not assigned
# Pin B1[6]    :: I_BUF

# Pin location is not assigned
# Pin B1[7]    :: I_BUF

# Pin location is not assigned
# Pin B1[8]    :: I_BUF

# Pin location is not assigned
# Pin B2[0]    :: I_BUF

# Pin location is not assigned
# Pin B2[1]    :: I_BUF

# Pin location is not assigned
# Pin B2[2]    :: I_BUF

# Pin location is not assigned
# Pin B2[3]    :: I_BUF

# Pin location is not assigned
# Pin B2[4]    :: I_BUF

# Pin location is not assigned
# Pin B2[5]    :: I_BUF

# Pin location is not assigned
# Pin B2[6]    :: I_BUF

# Pin location is not assigned
# Pin B2[7]    :: I_BUF

# Pin location is not assigned
# Pin B2[8]    :: I_BUF

# Pin location is not assigned
# Pin clk      :: I_BUF |-> CLK_BUF

# Pin location is not assigned
# Pin reset    :: I_BUF

# Pin location is not assigned
# Pin subtract :: I_BUF

# Pin location is not assigned
# Pin P[0]     :: O_BUF

# Pin location is not assigned
# Pin P[1]     :: O_BUF

# Pin location is not assigned
# Pin P[10]    :: O_BUF

# Pin location is not assigned
# Pin P[11]    :: O_BUF

# Pin location is not assigned
# Pin P[12]    :: O_BUF

# Pin location is not assigned
# Pin P[13]    :: O_BUF

# Pin location is not assigned
# Pin P[14]    :: O_BUF

# Pin location is not assigned
# Pin P[15]    :: O_BUF

# Pin location is not assigned
# Pin P[16]    :: O_BUF

# Pin location is not assigned
# Pin P[17]    :: O_BUF

# Pin location is not assigned
# Pin P[18]    :: O_BUF

# Pin location is not assigned
# Pin P[19]    :: O_BUF

# Pin location is not assigned
# Pin P[2]     :: O_BUF

# Pin location is not assigned
# Pin P[20]    :: O_BUF

# Pin location is not assigned
# Pin P[21]    :: O_BUF

# Pin location is not assigned
# Pin P[22]    :: O_BUF

# Pin location is not assigned
# Pin P[23]    :: O_BUF

# Pin location is not assigned
# Pin P[24]    :: O_BUF

# Pin location is not assigned
# Pin P[25]    :: O_BUF

# Pin location is not assigned
# Pin P[26]    :: O_BUF

# Pin location is not assigned
# Pin P[27]    :: O_BUF

# Pin location is not assigned
# Pin P[28]    :: O_BUF

# Pin location is not assigned
# Pin P[29]    :: O_BUF

# Pin location is not assigned
# Pin P[3]     :: O_BUF

# Pin location is not assigned
# Pin P[30]    :: O_BUF

# Pin location is not assigned
# Pin P[31]    :: O_BUF

# Pin location is not assigned
# Pin P[32]    :: O_BUF

# Pin location is not assigned
# Pin P[33]    :: O_BUF

# Pin location is not assigned
# Pin P[34]    :: O_BUF

# Pin location is not assigned
# Pin P[35]    :: O_BUF

# Pin location is not assigned
# Pin P[36]    :: O_BUF

# Pin location is not assigned
# Pin P[37]    :: O_BUF

# Pin location is not assigned
# Pin P[4]     :: O_BUF

# Pin location is not assigned
# Pin P[5]     :: O_BUF

# Pin location is not assigned
# Pin P[6]     :: O_BUF

# Pin location is not assigned
# Pin P[7]     :: O_BUF

# Pin location is not assigned
# Pin P[8]     :: O_BUF

# Pin location is not assigned
# Pin P[9]     :: O_BUF

#############
#
# Internal Control Signals
#
#############
# Module: I_BUF
# LinkedObject: A1[0]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: A1[1]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: A1[2]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: A1[3]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: A1[4]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: A1[5]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: A1[6]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: A1[7]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: A1[8]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: A1[9]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: A2[0]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: A2[1]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: A2[2]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: A2[3]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: A2[4]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: A2[5]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: A2[6]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: A2[7]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: A2[8]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: A2[9]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: B1[0]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: B1[1]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: B1[2]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: B1[3]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: B1[4]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: B1[5]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: B1[6]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: B1[7]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: B1[8]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: B2[0]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: B2[1]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: B2[2]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: B2[3]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: B2[4]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: B2[5]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: B2[6]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: B2[7]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: B2[8]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: clk
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: reset
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

# Module: I_BUF
# LinkedObject: subtract
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Location  does not have any mode to begin with

