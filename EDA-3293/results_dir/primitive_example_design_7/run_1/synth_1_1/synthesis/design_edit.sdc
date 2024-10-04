#############
#
# Fabric clock assignment
#
#############
# This clock need to route to fabric slot #0
# set_clock_pin -device_clock clk[0] -design_clock clk (Physical port name, clock module: CLK_BUF $clkbuf$primitive_example_design_7.$ibuf_clk)
# set_clock_pin -device_clock clk[0] -design_clock $clk_buf_$ibuf_clk (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[0] -design_clock $clk_buf_$ibuf_clk

# This clock need to route to fabric slot #1
# This is fabric clock buffer
# set_clock_pin -device_clock clk[1] -design_clock FABRIC_CLKBUF#0 (Physical port name, clock module: FCLK_BUF $clkbuf$primitive_example_design_7.$abc$3571$auto_3156)
# set_clock_pin -device_clock clk[1] -design_clock $fclk_buf_$abc$3571$auto_3156 (Original clock primitive out-net to fabric)
set_clock_pin   -device_clock clk[1] -design_clock $fclk_buf_$abc$3571$auto_3156

# For fabric clock buffer output
# set_clock_out -device_clock clk[0] -design_clock $abc$3571$auto_3156
set_clock_out   -device_clock clk[0] -design_clock $abc$3571$auto_3156

#############
#
# Each pin mode and location assignment
#
#############
# Pin location is not assigned
# Pin a[0]         :: I_BUF

# Pin location is not assigned
# Pin a[1]         :: I_BUF

# Pin location is not assigned
# Pin a[10]        :: I_BUF

# Pin location is not assigned
# Pin a[11]        :: I_BUF

# Pin location is not assigned
# Pin a[12]        :: I_BUF

# Pin location is not assigned
# Pin a[13]        :: I_BUF

# Pin location is not assigned
# Pin a[14]        :: I_BUF

# Pin location is not assigned
# Pin a[15]        :: I_BUF

# Pin location is not assigned
# Pin a[16]        :: I_BUF

# Pin location is not assigned
# Pin a[17]        :: I_BUF

# Pin location is not assigned
# Pin a[18]        :: I_BUF

# Pin location is not assigned
# Pin a[19]        :: I_BUF

# Pin location is not assigned
# Pin a[2]         :: I_BUF

# Pin location is not assigned
# Pin a[20]        :: I_BUF

# Pin location is not assigned
# Pin a[21]        :: I_BUF

# Pin location is not assigned
# Pin a[22]        :: I_BUF

# Pin location is not assigned
# Pin a[23]        :: I_BUF

# Pin location is not assigned
# Pin a[24]        :: I_BUF

# Pin location is not assigned
# Pin a[25]        :: I_BUF

# Pin location is not assigned
# Pin a[26]        :: I_BUF

# Pin location is not assigned
# Pin a[27]        :: I_BUF

# Pin location is not assigned
# Pin a[28]        :: I_BUF

# Pin location is not assigned
# Pin a[29]        :: I_BUF

# Pin location is not assigned
# Pin a[3]         :: I_BUF

# Pin location is not assigned
# Pin a[30]        :: I_BUF

# Pin location is not assigned
# Pin a[31]        :: I_BUF

# Pin location is not assigned
# Pin a[4]         :: I_BUF

# Pin location is not assigned
# Pin a[5]         :: I_BUF

# Pin location is not assigned
# Pin a[6]         :: I_BUF

# Pin location is not assigned
# Pin a[7]         :: I_BUF

# Pin location is not assigned
# Pin a[8]         :: I_BUF

# Pin location is not assigned
# Pin a[9]         :: I_BUF

# Pin location is not assigned
# Pin addr[0]      :: I_BUF

# Pin location is not assigned
# Pin addr[1]      :: I_BUF

# Pin location is not assigned
# Pin addr[2]      :: I_BUF

# Pin location is not assigned
# Pin addr[3]      :: I_BUF

# Pin location is not assigned
# Pin addr[4]      :: I_BUF

# Pin location is not assigned
# Pin addr[5]      :: I_BUF

# Pin location is not assigned
# Pin addr[6]      :: I_BUF

# Pin location is not assigned
# Pin addr[7]      :: I_BUF

# Pin location is not assigned
# Pin addr[8]      :: I_BUF

# Pin location is not assigned
# Pin addr[9]      :: I_BUF

# Pin location is not assigned
# Pin b[0]         :: I_BUF

# Pin location is not assigned
# Pin b[1]         :: I_BUF

# Pin location is not assigned
# Pin b[10]        :: I_BUF

# Pin location is not assigned
# Pin b[11]        :: I_BUF

# Pin location is not assigned
# Pin b[12]        :: I_BUF

# Pin location is not assigned
# Pin b[13]        :: I_BUF

# Pin location is not assigned
# Pin b[14]        :: I_BUF

# Pin location is not assigned
# Pin b[15]        :: I_BUF

# Pin location is not assigned
# Pin b[16]        :: I_BUF

# Pin location is not assigned
# Pin b[17]        :: I_BUF

# Pin location is not assigned
# Pin b[18]        :: I_BUF

# Pin location is not assigned
# Pin b[19]        :: I_BUF

# Pin location is not assigned
# Pin b[2]         :: I_BUF

# Pin location is not assigned
# Pin b[20]        :: I_BUF

# Pin location is not assigned
# Pin b[21]        :: I_BUF

# Pin location is not assigned
# Pin b[22]        :: I_BUF

# Pin location is not assigned
# Pin b[23]        :: I_BUF

# Pin location is not assigned
# Pin b[24]        :: I_BUF

# Pin location is not assigned
# Pin b[25]        :: I_BUF

# Pin location is not assigned
# Pin b[26]        :: I_BUF

# Pin location is not assigned
# Pin b[27]        :: I_BUF

# Pin location is not assigned
# Pin b[28]        :: I_BUF

# Pin location is not assigned
# Pin b[29]        :: I_BUF

# Pin location is not assigned
# Pin b[3]         :: I_BUF

# Pin location is not assigned
# Pin b[30]        :: I_BUF

# Pin location is not assigned
# Pin b[31]        :: I_BUF

# Pin location is not assigned
# Pin b[4]         :: I_BUF

# Pin location is not assigned
# Pin b[5]         :: I_BUF

# Pin location is not assigned
# Pin b[6]         :: I_BUF

# Pin location is not assigned
# Pin b[7]         :: I_BUF

# Pin location is not assigned
# Pin b[8]         :: I_BUF

# Pin location is not assigned
# Pin b[9]         :: I_BUF

# Pin location is not assigned
# Pin clear        :: I_BUF

# Pin location is not assigned
# Pin clk          :: I_BUF |-> CLK_BUF

# Pin location is not assigned
# Pin haddr[0]     :: I_BUF

# Pin location is not assigned
# Pin haddr[1]     :: I_BUF

# Pin location is not assigned
# Pin haddr[10]    :: I_BUF

# Pin location is not assigned
# Pin haddr[11]    :: I_BUF

# Pin location is not assigned
# Pin haddr[12]    :: I_BUF

# Pin location is not assigned
# Pin haddr[13]    :: I_BUF

# Pin location is not assigned
# Pin haddr[14]    :: I_BUF

# Pin location is not assigned
# Pin haddr[15]    :: I_BUF

# Pin location is not assigned
# Pin haddr[16]    :: I_BUF

# Pin location is not assigned
# Pin haddr[17]    :: I_BUF

# Pin location is not assigned
# Pin haddr[18]    :: I_BUF

# Pin location is not assigned
# Pin haddr[19]    :: I_BUF

# Pin location is not assigned
# Pin haddr[2]     :: I_BUF

# Pin location is not assigned
# Pin haddr[20]    :: I_BUF

# Pin location is not assigned
# Pin haddr[21]    :: I_BUF

# Pin location is not assigned
# Pin haddr[22]    :: I_BUF

# Pin location is not assigned
# Pin haddr[23]    :: I_BUF

# Pin location is not assigned
# Pin haddr[24]    :: I_BUF

# Pin location is not assigned
# Pin haddr[25]    :: I_BUF

# Pin location is not assigned
# Pin haddr[26]    :: I_BUF

# Pin location is not assigned
# Pin haddr[27]    :: I_BUF

# Pin location is not assigned
# Pin haddr[28]    :: I_BUF

# Pin location is not assigned
# Pin haddr[29]    :: I_BUF

# Pin location is not assigned
# Pin haddr[3]     :: I_BUF

# Pin location is not assigned
# Pin haddr[30]    :: I_BUF

# Pin location is not assigned
# Pin haddr[31]    :: I_BUF

# Pin location is not assigned
# Pin haddr[4]     :: I_BUF

# Pin location is not assigned
# Pin haddr[5]     :: I_BUF

# Pin location is not assigned
# Pin haddr[6]     :: I_BUF

# Pin location is not assigned
# Pin haddr[7]     :: I_BUF

# Pin location is not assigned
# Pin haddr[8]     :: I_BUF

# Pin location is not assigned
# Pin haddr[9]     :: I_BUF

# Pin location is not assigned
# Pin hw           :: I_BUF

# Pin location is not assigned
# Pin ibuf10_en    :: I_BUF

# Pin location is not assigned
# Pin ibuf11_en    :: I_BUF

# Pin location is not assigned
# Pin ibuf12_en    :: I_BUF

# Pin location is not assigned
# Pin ibuf13_en    :: I_BUF

# Pin location is not assigned
# Pin ibuf14_en    :: I_BUF

# Pin location is not assigned
# Pin ibuf2_en     :: I_BUF

# Pin location is not assigned
# Pin ibuf3_en     :: I_BUF

# Pin location is not assigned
# Pin ibuf4_en     :: I_BUF

# Pin location is not assigned
# Pin ibuf5_en     :: I_BUF

# Pin location is not assigned
# Pin ibuf6_en     :: I_BUF

# Pin location is not assigned
# Pin ibuf7_en     :: I_BUF

# Pin location is not assigned
# Pin ibuf8_en     :: I_BUF

# Pin location is not assigned
# Pin ibuf9_en     :: I_BUF

# Pin location is not assigned
# Pin read_write   :: I_BUF

# Pin location is not assigned
# Pin reset        :: I_BUF

# Pin location is not assigned
# Pin data_out[0]  :: O_BUFT

# Pin location is not assigned
# Pin data_out[1]  :: O_BUFT

# Pin location is not assigned
# Pin data_out[10] :: O_BUFT

# Pin location is not assigned
# Pin data_out[11] :: O_BUFT

# Pin location is not assigned
# Pin data_out[12] :: O_BUFT

# Pin location is not assigned
# Pin data_out[13] :: O_BUFT

# Pin location is not assigned
# Pin data_out[14] :: O_BUFT

# Pin location is not assigned
# Pin data_out[15] :: O_BUFT

# Pin location is not assigned
# Pin data_out[16] :: O_BUFT

# Pin location is not assigned
# Pin data_out[17] :: O_BUFT

# Pin location is not assigned
# Pin data_out[18] :: O_BUFT

# Pin location is not assigned
# Pin data_out[19] :: O_BUFT

# Pin location is not assigned
# Pin data_out[2]  :: O_BUFT

# Pin location is not assigned
# Pin data_out[20] :: O_BUFT

# Pin location is not assigned
# Pin data_out[21] :: O_BUFT

# Pin location is not assigned
# Pin data_out[22] :: O_BUFT

# Pin location is not assigned
# Pin data_out[23] :: O_BUFT

# Pin location is not assigned
# Pin data_out[24] :: O_BUFT

# Pin location is not assigned
# Pin data_out[25] :: O_BUFT

# Pin location is not assigned
# Pin data_out[26] :: O_BUFT

# Pin location is not assigned
# Pin data_out[27] :: O_BUFT

# Pin location is not assigned
# Pin data_out[28] :: O_BUFT

# Pin location is not assigned
# Pin data_out[29] :: O_BUFT

# Pin location is not assigned
# Pin data_out[3]  :: O_BUFT

# Pin location is not assigned
# Pin data_out[30] :: O_BUFT

# Pin location is not assigned
# Pin data_out[31] :: O_BUFT

# Pin location is not assigned
# Pin data_out[4]  :: O_BUFT

# Pin location is not assigned
# Pin data_out[5]  :: O_BUFT

# Pin location is not assigned
# Pin data_out[6]  :: O_BUFT

# Pin location is not assigned
# Pin data_out[7]  :: O_BUFT

# Pin location is not assigned
# Pin data_out[8]  :: O_BUFT

# Pin location is not assigned
# Pin data_out[9]  :: O_BUFT

# Pin location is not assigned
# Pin size[0]      :: I_BUF

# Pin location is not assigned
# Pin prot[3]      :: I_BUF

# Pin location is not assigned
# Pin trans[0]     :: I_BUF

# Pin location is not assigned
# Pin trans[1]     :: I_BUF

# Pin location is not assigned
# Pin trans[2]     :: I_BUF

# Pin location is not assigned
# Pin size[1]      :: I_BUF

# Pin location is not assigned
# Pin size[2]      :: I_BUF

# Pin location is not assigned
# Pin burst[0]     :: I_BUF

# Pin location is not assigned
# Pin burst[1]     :: I_BUF

# Pin location is not assigned
# Pin burst[2]     :: I_BUF

# Pin location is not assigned
# Pin prot[0]      :: I_BUF

# Pin location is not assigned
# Pin prot[1]      :: I_BUF

# Pin location is not assigned
# Pin prot[2]      :: I_BUF

# Pin location is not assigned
# Pin hresp        :: O_BUFT

# Pin location is not assigned
# Pin ready        :: O_BUFT

#############
#
# Internal Control Signals
#
#############
# Module: I_BUF
# LinkedObject: a[0]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: a[1]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: a[10]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: a[11]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: a[12]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: a[13]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: a[14]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: a[15]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: a[16]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: a[17]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: a[18]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: a[19]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: a[2]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: a[20]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: a[21]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: a[22]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: a[23]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: a[24]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: a[25]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: a[26]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: a[27]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: a[28]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: a[29]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: a[3]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: a[30]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: a[31]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: a[4]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: a[5]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: a[6]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: a[7]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: a[8]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: a[9]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: addr[0]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: addr[1]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: addr[2]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: addr[3]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: addr[4]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: addr[5]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: addr[6]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: addr[7]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: addr[8]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: addr[9]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: b[0]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: b[1]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: b[10]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: b[11]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: b[12]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: b[13]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: b[14]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: b[15]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: b[16]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: b[17]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: b[18]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: b[19]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: b[2]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: b[20]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: b[21]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: b[22]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: b[23]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: b[24]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: b[25]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: b[26]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: b[27]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: b[28]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: b[29]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: b[3]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: b[30]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: b[31]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: b[4]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: b[5]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: b[6]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: b[7]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: b[8]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: b[9]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: clear
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: clk
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: haddr[0]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: haddr[1]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: haddr[10]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: haddr[11]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: haddr[12]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: haddr[13]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: haddr[14]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: haddr[15]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: haddr[16]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: haddr[17]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: haddr[18]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: haddr[19]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: haddr[2]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: haddr[20]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: haddr[21]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: haddr[22]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: haddr[23]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: haddr[24]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: haddr[25]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: haddr[26]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: haddr[27]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: haddr[28]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: haddr[29]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: haddr[3]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: haddr[30]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: haddr[31]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: haddr[4]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: haddr[5]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: haddr[6]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: haddr[7]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: haddr[8]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: haddr[9]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: hw
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: ibuf10_en
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: ibuf11_en
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: ibuf12_en
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: ibuf13_en
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: ibuf14_en
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: ibuf2_en
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: ibuf3_en
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: ibuf4_en
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: ibuf5_en
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: ibuf6_en
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: ibuf7_en
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: ibuf8_en
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: ibuf9_en
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: read_write
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: reset
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: O_BUFT
# LinkedObject: data_out[0]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip: Location is not assigned

# Module: O_BUFT
# LinkedObject: data_out[1]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip: Location is not assigned

# Module: O_BUFT
# LinkedObject: data_out[10]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip: Location is not assigned

# Module: O_BUFT
# LinkedObject: data_out[11]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip: Location is not assigned

# Module: O_BUFT
# LinkedObject: data_out[12]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip: Location is not assigned

# Module: O_BUFT
# LinkedObject: data_out[13]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip: Location is not assigned

# Module: O_BUFT
# LinkedObject: data_out[14]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip: Location is not assigned

# Module: O_BUFT
# LinkedObject: data_out[15]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip: Location is not assigned

# Module: O_BUFT
# LinkedObject: data_out[16]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip: Location is not assigned

# Module: O_BUFT
# LinkedObject: data_out[17]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip: Location is not assigned

# Module: O_BUFT
# LinkedObject: data_out[18]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip: Location is not assigned

# Module: O_BUFT
# LinkedObject: data_out[19]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip: Location is not assigned

# Module: O_BUFT
# LinkedObject: data_out[2]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip: Location is not assigned

# Module: O_BUFT
# LinkedObject: data_out[20]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip: Location is not assigned

# Module: O_BUFT
# LinkedObject: data_out[21]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip: Location is not assigned

# Module: O_BUFT
# LinkedObject: data_out[22]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip: Location is not assigned

# Module: O_BUFT
# LinkedObject: data_out[23]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip: Location is not assigned

# Module: O_BUFT
# LinkedObject: data_out[24]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip: Location is not assigned

# Module: O_BUFT
# LinkedObject: data_out[25]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip: Location is not assigned

# Module: O_BUFT
# LinkedObject: data_out[26]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip: Location is not assigned

# Module: O_BUFT
# LinkedObject: data_out[27]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip: Location is not assigned

# Module: O_BUFT
# LinkedObject: data_out[28]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip: Location is not assigned

# Module: O_BUFT
# LinkedObject: data_out[29]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip: Location is not assigned

# Module: O_BUFT
# LinkedObject: data_out[3]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip: Location is not assigned

# Module: O_BUFT
# LinkedObject: data_out[30]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip: Location is not assigned

# Module: O_BUFT
# LinkedObject: data_out[31]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip: Location is not assigned

# Module: O_BUFT
# LinkedObject: data_out[4]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip: Location is not assigned

# Module: O_BUFT
# LinkedObject: data_out[5]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip: Location is not assigned

# Module: O_BUFT
# LinkedObject: data_out[6]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip: Location is not assigned

# Module: O_BUFT
# LinkedObject: data_out[7]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip: Location is not assigned

# Module: O_BUFT
# LinkedObject: data_out[8]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip: Location is not assigned

# Module: O_BUFT
# LinkedObject: data_out[9]
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: size[0]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: prot[3]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: trans[0]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: trans[1]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: trans[2]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: size[1]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: size[2]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: burst[0]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: burst[1]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: burst[2]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: prot[0]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: prot[1]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: I_BUF
# LinkedObject: prot[2]
# Location: 
# Port: EN
# Signal: in:f2g_in_en_{A|B}
# Skip: Location is not assigned

# Module: O_BUFT
# LinkedObject: hresp
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip: Location is not assigned

# Module: O_BUFT
# LinkedObject: ready
# Location: 
# Port: T
# Signal: in:f2g_tx_oe_{A|B}
# Skip: Location is not assigned

#############
#
# Each gearbox core clock
#
#############
