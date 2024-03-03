//

// ----- Verilog module for QL_BRAM -----
module QL_BRAM(global_resetn,
               SCAN_EN_i,
               SCAN_MODE_i,
               WEN_A1_i,
               WEN_B1_i,
               BE_A1_i,
               BE_B1_i,
               REN_A1_i,
               REN_B1_i,
               ADDR_A1_i,
               ADDR_B1_i,
               WDATA_A1_i,
               WDATA_B1_i,
               FLUSH1_i,
               WEN_A2_i,
               WEN_B2_i,
               BE_A2_i,
               BE_B2_i,
               REN_A2_i,
               REN_B2_i,
               ADDR_A2_i,
               ADDR_B2_i,
               WDATA_A2_i,
               WDATA_B2_i,
               FLUSH2_i,
               RAM_ID_i,
               PL_INIT_i,
               PL_ENA_i,
               PL_REN_i,
               PL_WEN_i,
               PL_ADDR_i,
               PL_DATA_i,
               SCAN_i,
               CLK_A1_i,
               CLK_B1_i,
               CLK_A2_i,
               CLK_B2_i,
               PL_CLK_i,
               mode,
               RDATA_A1_o,
               RDATA_B1_o,
               RDATA_A2_o,
               RDATA_B2_o,
               PL_INIT_o,
               PL_ENA_o,
               PL_REN_o,
               PL_CLK_o,
               PL_WEN_o,
               PL_ADDR_o,
               PL_DATA_o,
               SCAN_o);
//----- GLOBAL PORTS -----
input [0:0] global_resetn;
//----- GLOBAL PORTS -----
input [0:0] SCAN_EN_i;
//----- GLOBAL PORTS -----
input [0:0] SCAN_MODE_i;
//----- INPUT PORTS -----
input [0:0] WEN_A1_i;
//----- INPUT PORTS -----
input [0:0] WEN_B1_i;
//----- INPUT PORTS -----
input [0:1] BE_A1_i;
//----- INPUT PORTS -----
input [0:1] BE_B1_i;
//----- INPUT PORTS -----
input [0:0] REN_A1_i;
//----- INPUT PORTS -----
input [0:0] REN_B1_i;
//----- INPUT PORTS -----
input [0:14] ADDR_A1_i;
//----- INPUT PORTS -----
input [0:14] ADDR_B1_i;
//----- INPUT PORTS -----
input [0:17] WDATA_A1_i;
//----- INPUT PORTS -----
input [0:17] WDATA_B1_i;
//----- INPUT PORTS -----
input [0:0] FLUSH1_i;
//----- INPUT PORTS -----
input [0:0] WEN_A2_i;
//----- INPUT PORTS -----
input [0:0] WEN_B2_i;
//----- INPUT PORTS -----
input [0:1] BE_A2_i;
//----- INPUT PORTS -----
input [0:1] BE_B2_i;
//----- INPUT PORTS -----
input [0:0] REN_A2_i;
//----- INPUT PORTS -----
input [0:0] REN_B2_i;
//----- INPUT PORTS -----
input [0:13] ADDR_A2_i;
//----- INPUT PORTS -----
input [0:13] ADDR_B2_i;
//----- INPUT PORTS -----
input [0:17] WDATA_A2_i;
//----- INPUT PORTS -----
input [0:17] WDATA_B2_i;
//----- INPUT PORTS -----
input [0:0] FLUSH2_i;
//----- INPUT PORTS -----
input [0:19] RAM_ID_i;
//----- INPUT PORTS -----
input [0:0] PL_INIT_i;
//----- INPUT PORTS -----
input [0:0] PL_ENA_i;
//----- INPUT PORTS -----
input [0:0] PL_REN_i;
//----- INPUT PORTS -----
input [0:1] PL_WEN_i;
//----- INPUT PORTS -----
input [0:31] PL_ADDR_i;
//----- INPUT PORTS -----
input [0:35] PL_DATA_i;
//----- INPUT PORTS -----
input [0:5] SCAN_i;
//----- INPUT PORTS -----
input [0:0] CLK_A1_i;
//----- INPUT PORTS -----
input [0:0] CLK_B1_i;
//----- INPUT PORTS -----
input [0:0] CLK_A2_i;
//----- INPUT PORTS -----
input [0:0] CLK_B2_i;
//----- INPUT PORTS -----
input [0:0] PL_CLK_i;
//----- INPUT PORTS -----
input [0:83] mode;
//----- OUTPUT PORTS -----
output [0:17] RDATA_A1_o;
//----- OUTPUT PORTS -----
output [0:17] RDATA_B1_o;
//----- OUTPUT PORTS -----
output [0:17] RDATA_A2_o;
//----- OUTPUT PORTS -----
output [0:17] RDATA_B2_o;
//----- OUTPUT PORTS -----
output [0:0] PL_INIT_o;
//----- OUTPUT PORTS -----
output [0:0] PL_ENA_o;
//----- OUTPUT PORTS -----
output [0:0] PL_REN_o;
//----- OUTPUT PORTS -----
output [0:0] PL_CLK_o;
//----- OUTPUT PORTS -----
output [0:1] PL_WEN_o;
//----- OUTPUT PORTS -----
output [0:31] PL_ADDR_o;
//----- OUTPUT PORTS -----
output [0:35] PL_DATA_o;
//----- OUTPUT PORTS -----
output [0:5] SCAN_o;

//----- BEGIN wire-connection ports -----
//----- END wire-connection ports -----


//----- BEGIN Registered ports -----
//----- END Registered ports -----

// ----- Internal logic should start here -----


// ----- Internal logic should end here -----
endmodule

module QL_DSP(global_resetn,
              scan_en,
              scan_mode,
              a_i,
              acc_fir_i,
              b_i,
              reset,
              feedback,
              load_acc,
              unsigned_a,
              unsigned_b,
              saturate_enable,
              shift_right,
              round,
              subtract,
              scan_i,
              clock,
              mode,
              z_o,
              dly_b_o,
              scan_o);
//----- GLOBAL PORTS -----
input [0:0] global_resetn;
//----- GLOBAL PORTS -----
input [0:0] scan_en;
//----- GLOBAL PORTS -----
input [0:0] scan_mode;
//----- INPUT PORTS -----
input [0:19] a_i;
//----- INPUT PORTS -----
input [0:5] acc_fir_i;
//----- INPUT PORTS -----
input [0:17] b_i;
//----- INPUT PORTS -----
input [0:0] reset;
//----- INPUT PORTS -----
input [0:2] feedback;
//----- INPUT PORTS -----
input [0:0] load_acc;
//----- INPUT PORTS -----
input [0:0] unsigned_a;
//----- INPUT PORTS -----
input [0:0] unsigned_b;
//----- INPUT PORTS -----
input [0:0] saturate_enable;
//----- INPUT PORTS -----
input [0:5] shift_right;
//----- INPUT PORTS -----
input [0:0] round;
//----- INPUT PORTS -----
input [0:0] subtract;
//----- INPUT PORTS -----
input [0:2] scan_i;
//----- INPUT PORTS -----
input [0:0] clock;
//----- INPUT PORTS -----
input [0:84] mode;
//----- OUTPUT PORTS -----
output [0:37] z_o;
//----- OUTPUT PORTS -----
output [0:17] dly_b_o;
//----- OUTPUT PORTS -----
output [0:2] scan_o;

//----- BEGIN wire-connection ports -----
//----- END wire-connection ports -----


//----- BEGIN Registered ports -----
//----- END Registered ports -----

// ----- Internal logic should start here -----


// ----- Internal logic should end here -----
endmodule
   
module QL_IOFF(global_resetn,
               SE,
               D,
               SI,
               CK,
               MODE_SEL,
               SO,
               Q);
//----- GLOBAL PORTS -----
input [0:0] global_resetn;
//----- GLOBAL PORTS -----
input [0:0] SE;
//----- INPUT PORTS -----
input [0:0] D;
//----- INPUT PORTS -----
input [0:0] SI;
//----- INPUT PORTS -----
input [0:0] CK;
//----- INPUT PORTS -----
input [0:0] MODE_SEL;
//----- OUTPUT PORTS -----
output [0:0] SO;
//----- OUTPUT PORTS -----
output [0:0] Q;

//----- BEGIN wire-connection ports -----
//----- END wire-connection ports -----


//----- BEGIN Registered ports -----
//----- END Registered ports -----

// ----- Internal logic should start here -----


// ----- Internal logic should end here -----
endmodule   

module QL_XOR_MUX2_dti (
  P,
  G,
  CI,
  SUMOUT,
  CO
);
input P;
input G;
input CI;
output SUMOUT;
output CO;

  dti_16f_7p5t_90c_xor2optax1  XOR2 (
      .A(CI),
      .B(P),
      .Z(SUMOUT)
      );
  dti_16f_7p5t_90c_mux21optax1 MUX2(
      .D0(G),
      .D1(CI),
      .S(P),
      .Z(CO)
      );

endmodule


module dti_lvt_16f_7p5t_90c_ckmux21x2(D0,
                                      D1,
                                      S,
                                      Z);
//----- INPUT PORTS -----
input [0:0] D0;
//----- INPUT PORTS -----
input [0:0] D1;
//----- INPUT PORTS -----
input [0:0] S;
//----- OUTPUT PORTS -----
output [0:0] Z;

//----- BEGIN wire-connection ports -----
//----- END wire-connection ports -----


//----- BEGIN Registered ports -----
//----- END Registered ports -----

// ----- Internal logic should start here -----


// ----- Internal logic should end here -----
endmodule


`celldefine
module dti_lvt_16f_7p5t_90c_ckxor2x4 (Z, A, B);
output Z;
input  A, B;

`ifdef NEGDEL
  `ifdef RECREM
  dti_lvt_ckxor2 xdti_lvt_16f_7p5t_90c_ckxor2 (Z, A, B);
  `else
    dti_lvt_ckxor2 xdti_lvt_16f_7p5t_90c_ckxor2 (Z, A, B);
  `endif
`else
  dti_lvt_ckxor2 xdti_lvt_16f_7p5t_90c_ckxor2 (Z, A, B);
`endif

specify 

endspecify 

endmodule
`endcelldefine



module dti_lvt_ckxor2 (Z, A, B);
output Z;
input  A, B;

  xor (Z, A, B);

endmodule
