//---- Default Nettype ----
`default_nettype wire
module ql_dsp_dti #(
      parameter NBITS_ACC = 64,
      parameter NBITS_A = 20,
      parameter NBITS_B = 18,
      parameter NBITS_Z = 38
    )(
      // global configuration control
      input                        greset_i, // Global Reset
      // dynamic operational control to/from fabris
      // 50 inputs with extra inputs for fir filter feedback
      input logic                  reset_i, // local reset from fabric
      input logic                  clock_i,

      input logic [2:0]            feedback_i,
      input logic                  load_acc_i,
      input logic                  unsigned_a_i,
      input logic                  unsigned_b_i,
      input logic [NBITS_A-1:0]    a_i,

      input logic [5:0]   acc_fir_i,
      input logic [NBITS_B-1:0]    b_i,
      // 56 outputs
      output logic [NBITS_Z-1:0]   z_o,
      output logic [NBITS_B-1:0]   dly_b_o,

      // static operation mode control  from cfg 13 -- 109 for coefs
      input logic                  f_mode_i, // fractured mode -- from cfg
      input logic [2:0]            output_select_i, 
      input logic                  saturate_enable_i, 
      input logic [5:0]            shift_right_i, 
      input logic                  round_i,
      input logic                  subtract_i,
      input logic                  register_inputs_i,
      input logic [NBITS_A-1:0] coef_0_i,
      input logic [NBITS_A-1:0] coef_1_i,
      input logic [NBITS_A-1:0] coef_2_i,
      input logic [NBITS_A-1:0] coef_3_i,
      
      // Scan mode signals

      input logic [2:0]            scan_i,
      input logic                  scan_mode_i,
      input logic                  scan_en_i, 
//vincent      output logic [3:0]         scan_o
      output logic [2:0]           scan_o
    ) ;

   logic                           s_reset;
   logic [1:0]                     scanout;
   


   logic [NBITS_Z-1:0] dsp0_z;
   logic [(NBITS_Z/2)-1:0] dspf0_z;
   logic [(NBITS_Z/2)-1:0] dspf1_z;

   logic [NBITS_B-1:0]     dsp0_dly_b;
   logic [(NBITS_B/2)-1:0] dspf0_dly_b;
   logic [(NBITS_B/2)-1:0] dspf1_dly_b;

   assign s_reset = scan_mode_i ? greset_i : (greset_i | reset_i);

   logic [NBITS_A-1:0]   dsp0_a;
   logic [NBITS_B-1:0]   dsp0_b;

   logic [(NBITS_A/2)-1:0]   dspf0_a, dspf1_a;
   logic [(NBITS_B/2)-1:0]   dspf0_b, dspf1_b;


   assign dsp0_a = f_mode_i ? {NBITS_A{{1'b0}}} : a_i;
   assign dsp0_b = f_mode_i ? {NBITS_B{{1'b0}}} : b_i;
   assign {dspf1_a,dspf0_a} = f_mode_i ? a_i : {NBITS_A{{1'b0}}} ;
   assign {dspf1_b,dspf0_b} = f_mode_i ? b_i : {NBITS_B{{1'b0}}} ;
   
   assign z_o = f_mode_i ? {dspf1_z,dspf0_z} : dsp0_z ;
   assign dly_b_o = f_mode_i ? {dspf1_dly_b, dspf0_dly_b} : dsp0_dly_b;
   
   dsp_type1_bw #(
                  .NBITS_A(NBITS_A),
                  .NBITS_B(NBITS_B),
                  .NBITS_ACC(NBITS_ACC),
                  .NBITS_Z(NBITS_Z)
                  )
   dsp0 (
         .s_reset(s_reset), // this should be s_reset but then DFT fails
         .clock_i(clock_i),
         .output_select_i(output_select_i),
         .saturate_enable_i(saturate_enable_i),
         .shift_right_i(shift_right_i),
         .round_i(round_i),
         .load_acc_i(load_acc_i),
         .feedback_i(feedback_i),
         .unsigned_a_i(unsigned_a_i),
         .unsigned_b_i(unsigned_b_i),
         .subtract_i(subtract_i),
         .register_inputs_i(register_inputs_i),
         .coef_0_i(coef_0_i),
         .coef_1_i(coef_1_i),
         .coef_2_i(coef_2_i),
         .coef_3_i(coef_3_i),
         .a_i(dsp0_a),
         .b_i(dsp0_b),
         .acc_fir_i(acc_fir_i),
         .z_o(dsp0_z),
         .dly_b_o(dsp0_dly_b),
         .scan_i(scan_i[0]),
         .scan_mode_i(scan_mode_i),
         .scan_en_i(scan_en_i),
         .scan_o(scan_o[0])
    ) ;

   dsp_type1_bw  #(
                   .NBITS_A(NBITS_A/2),
                   .NBITS_B(NBITS_B/2),
                   .NBITS_ACC(NBITS_ACC/2),
                   .NBITS_Z(NBITS_Z/2)
                   ) 
   dspf0 (
         .s_reset(s_reset), // this should be s_reset but then DFT fails
          .clock_i(clock_i),
          .output_select_i(output_select_i),
          .saturate_enable_i(saturate_enable_i),
          .shift_right_i(shift_right_i),
          .round_i(round_i),
          .load_acc_i(load_acc_i),
          .feedback_i(feedback_i),
          .unsigned_a_i(unsigned_a_i),
          .unsigned_b_i(unsigned_b_i),
          .subtract_i(subtract_i),
          .register_inputs_i(register_inputs_i),
          .coef_0_i(coef_0_i[(NBITS_A/2)-1:0]),
          .coef_1_i(coef_1_i[(NBITS_A/2)-1:0]),
          .coef_2_i(coef_2_i[(NBITS_A/2)-1:0]),
          .coef_3_i(coef_3_i[(NBITS_A/2)-1:0]),
          .a_i(dspf0_a),
          .b_i(dspf0_b),
          .acc_fir_i(acc_fir_i),
          .z_o(dspf0_z),
          .dly_b_o(dspf0_dly_b),
          .scan_i(scan_i[1]),
          .scan_mode_i(scan_mode_i),
          .scan_en_i(scan_en_i),
          .scan_o(scan_o[1])
          ) ;
   
   dsp_type1_bw #(
                  .NBITS_A(NBITS_A/2),
                  .NBITS_B(NBITS_B/2),
                  .NBITS_ACC(NBITS_ACC/2),
                  .NBITS_Z(NBITS_Z/2)
    ) dspf1 (
         .s_reset(s_reset), // this should be s_reset but then DFT fails
             .clock_i(clock_i),
             .output_select_i(output_select_i),
             .saturate_enable_i(saturate_enable_i),
             .shift_right_i(shift_right_i),
             .round_i(round_i),
             .load_acc_i(load_acc_i),
             .feedback_i(feedback_i),
             .unsigned_a_i(unsigned_a_i),
             .unsigned_b_i(unsigned_b_i),
             .subtract_i(subtract_i),
             .register_inputs_i(register_inputs_i),
             .coef_0_i(coef_0_i[NBITS_A-1:NBITS_A/2]),
             .coef_1_i(coef_1_i[NBITS_A-1:NBITS_A/2]),
             .coef_2_i(coef_2_i[NBITS_A-1:NBITS_A/2]),
             .coef_3_i(coef_3_i[NBITS_A-1:NBITS_A/2]),
             .a_i(dspf1_a),
             .b_i(dspf1_b),
             .acc_fir_i(acc_fir_i),
             .z_o(dspf1_z),
             .dly_b_o(dspf1_dly_b),
             .scan_i(scan_i[2]),
             .scan_mode_i(scan_mode_i),
             .scan_en_i(scan_en_i),
             .scan_o(scan_o[2])
             ) ;

endmodule // dsp
`default_nettype none

