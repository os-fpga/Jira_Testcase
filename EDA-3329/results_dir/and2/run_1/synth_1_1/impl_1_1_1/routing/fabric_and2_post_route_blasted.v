`timescale 1ns/1ps
module fabric_and2 (
    input \$clk_buf_$ibuf_clock0 ,
    input \$ibuf_a ,
    input \$ibuf_b ,
    input \$ibuf_id[0] ,
    input \$ibuf_id[1] ,
    input \$ibuf_id[2] ,
    output \$f2g_tx_out_$obuf_c ,
    output \$auto_1716 ,
    output \$auto_1717 ,
    output \$auto_1718 ,
    output \$auto_1719 ,
    output \$auto_1720 ,
    output \$auto_1721 ,
    output \$auto_1722 
);

    //Wires
    wire \$clk_buf_$ibuf_clock0_output_0_0 ;
    wire \$ibuf_a_output_0_0 ;
    wire \$ibuf_b_output_0_0 ;
    wire \$ibuf_id[0]_output_0_0 ;
    wire \$ibuf_id[1]_output_0_0 ;
    wire \$ibuf_id[2]_output_0_0 ;
    wire \lut_$auto_1716_output_0_0 ;
    wire \lut_$auto_1717_output_0_0 ;
    wire \lut_$auto_1718_output_0_0 ;
    wire \lut_$auto_1719_output_0_0 ;
    wire \lut_$auto_1720_output_0_0 ;
    wire \lut_$auto_1721_output_0_0 ;
    wire \lut_$auto_1722_output_0_0 ;
    wire \lut_$f2g_tx_out_$obuf_c_output_0_0 ;
    wire \lut_$true_output_0_0 ;
    wire \lut_$abc$1018$abc$970$li0_li0_output_0_0 ;
    wire \dffre_c_sub_out_reg[3]_output_0_0 ;
    wire \dffre_c_sub_out_reg[2]_output_0_0 ;
    wire \dffre_c_sub_out_reg[1]_output_0_0 ;
    wire \dffre_c_sub_out_reg[0]_output_0_0 ;
    wire \lut_$abc$1686$new_new_n25___output_0_0 ;
    wire \dffre_c_sub_out_reg[6]_output_0_0 ;
    wire \dffre_c_sub_out_reg[7]_output_0_0 ;
    wire \dffre_c_sub_out_reg[4]_output_0_0 ;
    wire \dffre_c_sub_out_reg[5]_output_0_0 ;
    wire \lut_$abc$1686$new_new_n26___output_0_0 ;
    wire \lut_$abc$1018$abc$970$li7_li7_output_0_0 ;
    wire \lut_$abc$1018$abc$970$li6_li6_output_0_0 ;
    wire \lut_$abc$1018$abc$970$li5_li5_output_0_0 ;
    wire \lut_$abc$1018$abc$970$li4_li4_output_0_0 ;
    wire \lut_$abc$1018$abc$970$li3_li3_output_0_0 ;
    wire \lut_$abc$1018$abc$970$li2_li2_output_0_0 ;
    wire \lut_$abc$1018$abc$970$li1_li1_output_0_0 ;
    wire \dffre_c_sub_out_reg[2]_clock_0_0 ;
    wire \dffre_c_sub_out_reg[1]_clock_0_0 ;
    wire \dffre_c_sub_out_reg[6]_clock_0_0 ;
    wire \dffre_c_sub_out_reg[7]_clock_0_0 ;
    wire \dffre_c_sub_out_reg[4]_clock_0_0 ;
    wire \dffre_c_sub_out_reg[5]_clock_0_0 ;
    wire \dffre_c_sub_out_reg[3]_clock_0_0 ;
    wire \dffre_c_sub_out_reg[0]_clock_0_0 ;
    wire \lut_$abc$1018$abc$970$li2_li2_input_0_3 ;
    wire \lut_$abc$1018$abc$970$li1_li1_input_0_3 ;
    wire \lut_$abc$1018$abc$970$li6_li6_input_0_2 ;
    wire \lut_$abc$1018$abc$970$li7_li7_input_0_2 ;
    wire \lut_$abc$1018$abc$970$li4_li4_input_0_4 ;
    wire \lut_$abc$1018$abc$970$li5_li5_input_0_4 ;
    wire \lut_$abc$1018$abc$970$li3_li3_input_0_3 ;
    wire \lut_$abc$1018$abc$970$li0_li0_input_0_3 ;
    wire \lut_$abc$1018$abc$970$li2_li2_input_0_0 ;
    wire \lut_$abc$1018$abc$970$li1_li1_input_0_0 ;
    wire \lut_$abc$1018$abc$970$li6_li6_input_0_4 ;
    wire \lut_$abc$1018$abc$970$li7_li7_input_0_4 ;
    wire \lut_$abc$1018$abc$970$li4_li4_input_0_2 ;
    wire \lut_$abc$1018$abc$970$li5_li5_input_0_2 ;
    wire \lut_$abc$1018$abc$970$li3_li3_input_0_0 ;
    wire \lut_$abc$1018$abc$970$li0_li0_input_0_0 ;
    wire \lut_$abc$1018$abc$970$li2_li2_input_0_4 ;
    wire \lut_$abc$1018$abc$970$li1_li1_input_0_4 ;
    wire \lut_$abc$1018$abc$970$li6_li6_input_0_3 ;
    wire \lut_$abc$1018$abc$970$li7_li7_input_0_3 ;
    wire \lut_$abc$1018$abc$970$li4_li4_input_0_3 ;
    wire \lut_$abc$1018$abc$970$li5_li5_input_0_3 ;
    wire \lut_$abc$1686$new_new_n26___input_0_4 ;
    wire \lut_$abc$1686$new_new_n25___input_0_2 ;
    wire \lut_$abc$1018$abc$970$li3_li3_input_0_2 ;
    wire \lut_$abc$1018$abc$970$li0_li0_input_0_2 ;
    wire \lut_$abc$1018$abc$970$li2_li2_input_0_2 ;
    wire \lut_$abc$1018$abc$970$li1_li1_input_0_2 ;
    wire \lut_$abc$1018$abc$970$li6_li6_input_0_0 ;
    wire \lut_$abc$1018$abc$970$li7_li7_input_0_0 ;
    wire \lut_$abc$1018$abc$970$li4_li4_input_0_0 ;
    wire \lut_$abc$1018$abc$970$li5_li5_input_0_0 ;
    wire \lut_$abc$1686$new_new_n26___input_0_0 ;
    wire \lut_$abc$1686$new_new_n25___input_0_4 ;
    wire \lut_$abc$1018$abc$970$li3_li3_input_0_4 ;
    wire \lut_$abc$1018$abc$970$li0_li0_input_0_4 ;
    wire \lut_$abc$1018$abc$970$li2_li2_input_0_1 ;
    wire \lut_$abc$1018$abc$970$li1_li1_input_0_1 ;
    wire \lut_$f2g_tx_out_$obuf_c_input_0_1 ;
    wire \lut_$abc$1018$abc$970$li6_li6_input_0_1 ;
    wire \lut_$abc$1018$abc$970$li7_li7_input_0_1 ;
    wire \lut_$abc$1018$abc$970$li4_li4_input_0_1 ;
    wire \lut_$abc$1018$abc$970$li5_li5_input_0_1 ;
    wire \lut_$abc$1018$abc$970$li3_li3_input_0_1 ;
    wire \lut_$abc$1018$abc$970$li0_li0_input_0_1 ;
    wire \$auto_1716_input_0_0 ;
    wire \$auto_1717_input_0_0 ;
    wire \$auto_1718_input_0_0 ;
    wire \$auto_1719_input_0_0 ;
    wire \$auto_1720_input_0_0 ;
    wire \$auto_1721_input_0_0 ;
    wire \$auto_1722_input_0_0 ;
    wire \$f2g_tx_out_$obuf_c_input_0_0 ;
    wire \dffre_c_sub_out_reg[2]_input_1_0 ;
    wire \dffre_c_sub_out_reg[2]_input_2_0 ;
    wire \dffre_c_sub_out_reg[1]_input_1_0 ;
    wire \dffre_c_sub_out_reg[1]_input_2_0 ;
    wire \dffre_c_sub_out_reg[6]_input_1_0 ;
    wire \dffre_c_sub_out_reg[6]_input_2_0 ;
    wire \dffre_c_sub_out_reg[7]_input_1_0 ;
    wire \dffre_c_sub_out_reg[7]_input_2_0 ;
    wire \dffre_c_sub_out_reg[4]_input_1_0 ;
    wire \dffre_c_sub_out_reg[4]_input_2_0 ;
    wire \dffre_c_sub_out_reg[5]_input_1_0 ;
    wire \dffre_c_sub_out_reg[5]_input_2_0 ;
    wire \lut_$auto_1721_input_0_1 ;
    wire \lut_$auto_1720_input_0_1 ;
    wire \dffre_c_sub_out_reg[3]_input_1_0 ;
    wire \dffre_c_sub_out_reg[3]_input_2_0 ;
    wire \dffre_c_sub_out_reg[0]_input_1_0 ;
    wire \dffre_c_sub_out_reg[0]_input_2_0 ;
    wire \lut_$auto_1719_input_0_3 ;
    wire \lut_$auto_1718_input_0_3 ;
    wire \lut_$auto_1716_input_0_1 ;
    wire \lut_$auto_1717_input_0_3 ;
    wire \lut_$auto_1722_input_0_3 ;
    wire \dffre_c_sub_out_reg[0]_input_0_0 ;
    wire \lut_$abc$1686$new_new_n25___input_0_5 ;
    wire \lut_$abc$1686$new_new_n25___input_0_1 ;
    wire \lut_$abc$1686$new_new_n25___input_0_0 ;
    wire \lut_$abc$1686$new_new_n25___input_0_3 ;
    wire \lut_$f2g_tx_out_$obuf_c_input_0_2 ;
    wire \lut_$abc$1686$new_new_n26___input_0_3 ;
    wire \lut_$abc$1686$new_new_n26___input_0_1 ;
    wire \lut_$abc$1686$new_new_n26___input_0_5 ;
    wire \lut_$abc$1686$new_new_n26___input_0_2 ;
    wire \lut_$f2g_tx_out_$obuf_c_input_0_4 ;
    wire \dffre_c_sub_out_reg[7]_input_0_0 ;
    wire \dffre_c_sub_out_reg[6]_input_0_0 ;
    wire \dffre_c_sub_out_reg[5]_input_0_0 ;
    wire \dffre_c_sub_out_reg[4]_input_0_0 ;
    wire \dffre_c_sub_out_reg[3]_input_0_0 ;
    wire \dffre_c_sub_out_reg[2]_input_0_0 ;
    wire \dffre_c_sub_out_reg[1]_input_0_0 ;

    //IO assignments
    assign \$f2g_tx_out_$obuf_c  = \$f2g_tx_out_$obuf_c_input_0_0 ;
    assign \$auto_1716  = \$auto_1716_input_0_0 ;
    assign \$auto_1717  = \$auto_1717_input_0_0 ;
    assign \$auto_1718  = \$auto_1718_input_0_0 ;
    assign \$auto_1719  = \$auto_1719_input_0_0 ;
    assign \$auto_1720  = \$auto_1720_input_0_0 ;
    assign \$auto_1721  = \$auto_1721_input_0_0 ;
    assign \$auto_1722  = \$auto_1722_input_0_0 ;
    assign \$clk_buf_$ibuf_clock0_output_0_0  = \$clk_buf_$ibuf_clock0 ;
    assign \$ibuf_a_output_0_0  = \$ibuf_a ;
    assign \$ibuf_b_output_0_0  = \$ibuf_b ;
    assign \$ibuf_id[0]_output_0_0  = \$ibuf_id[0] ;
    assign \$ibuf_id[1]_output_0_0  = \$ibuf_id[1] ;
    assign \$ibuf_id[2]_output_0_0  = \$ibuf_id[2] ;

    //Interconnect
    fpga_interconnect \routing_segment_$clk_buf_$ibuf_clock0_output_0_0_to_dffre_c_sub_out_reg[2]_clock_0_0  (
        .datain(\$clk_buf_$ibuf_clock0_output_0_0 ),
        .dataout(\dffre_c_sub_out_reg[2]_clock_0_0 )
    );

    fpga_interconnect \routing_segment_$clk_buf_$ibuf_clock0_output_0_0_to_dffre_c_sub_out_reg[1]_clock_0_0  (
        .datain(\$clk_buf_$ibuf_clock0_output_0_0 ),
        .dataout(\dffre_c_sub_out_reg[1]_clock_0_0 )
    );

    fpga_interconnect \routing_segment_$clk_buf_$ibuf_clock0_output_0_0_to_dffre_c_sub_out_reg[6]_clock_0_0  (
        .datain(\$clk_buf_$ibuf_clock0_output_0_0 ),
        .dataout(\dffre_c_sub_out_reg[6]_clock_0_0 )
    );

    fpga_interconnect \routing_segment_$clk_buf_$ibuf_clock0_output_0_0_to_dffre_c_sub_out_reg[7]_clock_0_0  (
        .datain(\$clk_buf_$ibuf_clock0_output_0_0 ),
        .dataout(\dffre_c_sub_out_reg[7]_clock_0_0 )
    );

    fpga_interconnect \routing_segment_$clk_buf_$ibuf_clock0_output_0_0_to_dffre_c_sub_out_reg[4]_clock_0_0  (
        .datain(\$clk_buf_$ibuf_clock0_output_0_0 ),
        .dataout(\dffre_c_sub_out_reg[4]_clock_0_0 )
    );

    fpga_interconnect \routing_segment_$clk_buf_$ibuf_clock0_output_0_0_to_dffre_c_sub_out_reg[5]_clock_0_0  (
        .datain(\$clk_buf_$ibuf_clock0_output_0_0 ),
        .dataout(\dffre_c_sub_out_reg[5]_clock_0_0 )
    );

    fpga_interconnect \routing_segment_$clk_buf_$ibuf_clock0_output_0_0_to_dffre_c_sub_out_reg[3]_clock_0_0  (
        .datain(\$clk_buf_$ibuf_clock0_output_0_0 ),
        .dataout(\dffre_c_sub_out_reg[3]_clock_0_0 )
    );

    fpga_interconnect \routing_segment_$clk_buf_$ibuf_clock0_output_0_0_to_dffre_c_sub_out_reg[0]_clock_0_0  (
        .datain(\$clk_buf_$ibuf_clock0_output_0_0 ),
        .dataout(\dffre_c_sub_out_reg[0]_clock_0_0 )
    );

    fpga_interconnect \routing_segment_$ibuf_a_output_0_0_to_lut_$abc$1018$abc$970$li2_li2_input_0_3  (
        .datain(\$ibuf_a_output_0_0 ),
        .dataout(\lut_$abc$1018$abc$970$li2_li2_input_0_3 )
    );

    fpga_interconnect \routing_segment_$ibuf_a_output_0_0_to_lut_$abc$1018$abc$970$li1_li1_input_0_3  (
        .datain(\$ibuf_a_output_0_0 ),
        .dataout(\lut_$abc$1018$abc$970$li1_li1_input_0_3 )
    );

    fpga_interconnect \routing_segment_$ibuf_a_output_0_0_to_lut_$abc$1018$abc$970$li6_li6_input_0_2  (
        .datain(\$ibuf_a_output_0_0 ),
        .dataout(\lut_$abc$1018$abc$970$li6_li6_input_0_2 )
    );

    fpga_interconnect \routing_segment_$ibuf_a_output_0_0_to_lut_$abc$1018$abc$970$li7_li7_input_0_2  (
        .datain(\$ibuf_a_output_0_0 ),
        .dataout(\lut_$abc$1018$abc$970$li7_li7_input_0_2 )
    );

    fpga_interconnect \routing_segment_$ibuf_a_output_0_0_to_lut_$abc$1018$abc$970$li4_li4_input_0_4  (
        .datain(\$ibuf_a_output_0_0 ),
        .dataout(\lut_$abc$1018$abc$970$li4_li4_input_0_4 )
    );

    fpga_interconnect \routing_segment_$ibuf_a_output_0_0_to_lut_$abc$1018$abc$970$li5_li5_input_0_4  (
        .datain(\$ibuf_a_output_0_0 ),
        .dataout(\lut_$abc$1018$abc$970$li5_li5_input_0_4 )
    );

    fpga_interconnect \routing_segment_$ibuf_a_output_0_0_to_lut_$abc$1018$abc$970$li3_li3_input_0_3  (
        .datain(\$ibuf_a_output_0_0 ),
        .dataout(\lut_$abc$1018$abc$970$li3_li3_input_0_3 )
    );

    fpga_interconnect \routing_segment_$ibuf_a_output_0_0_to_lut_$abc$1018$abc$970$li0_li0_input_0_3  (
        .datain(\$ibuf_a_output_0_0 ),
        .dataout(\lut_$abc$1018$abc$970$li0_li0_input_0_3 )
    );

    fpga_interconnect \routing_segment_$ibuf_b_output_0_0_to_lut_$abc$1018$abc$970$li2_li2_input_0_0  (
        .datain(\$ibuf_b_output_0_0 ),
        .dataout(\lut_$abc$1018$abc$970$li2_li2_input_0_0 )
    );

    fpga_interconnect \routing_segment_$ibuf_b_output_0_0_to_lut_$abc$1018$abc$970$li1_li1_input_0_0  (
        .datain(\$ibuf_b_output_0_0 ),
        .dataout(\lut_$abc$1018$abc$970$li1_li1_input_0_0 )
    );

    fpga_interconnect \routing_segment_$ibuf_b_output_0_0_to_lut_$abc$1018$abc$970$li6_li6_input_0_4  (
        .datain(\$ibuf_b_output_0_0 ),
        .dataout(\lut_$abc$1018$abc$970$li6_li6_input_0_4 )
    );

    fpga_interconnect \routing_segment_$ibuf_b_output_0_0_to_lut_$abc$1018$abc$970$li7_li7_input_0_4  (
        .datain(\$ibuf_b_output_0_0 ),
        .dataout(\lut_$abc$1018$abc$970$li7_li7_input_0_4 )
    );

    fpga_interconnect \routing_segment_$ibuf_b_output_0_0_to_lut_$abc$1018$abc$970$li4_li4_input_0_2  (
        .datain(\$ibuf_b_output_0_0 ),
        .dataout(\lut_$abc$1018$abc$970$li4_li4_input_0_2 )
    );

    fpga_interconnect \routing_segment_$ibuf_b_output_0_0_to_lut_$abc$1018$abc$970$li5_li5_input_0_2  (
        .datain(\$ibuf_b_output_0_0 ),
        .dataout(\lut_$abc$1018$abc$970$li5_li5_input_0_2 )
    );

    fpga_interconnect \routing_segment_$ibuf_b_output_0_0_to_lut_$abc$1018$abc$970$li3_li3_input_0_0  (
        .datain(\$ibuf_b_output_0_0 ),
        .dataout(\lut_$abc$1018$abc$970$li3_li3_input_0_0 )
    );

    fpga_interconnect \routing_segment_$ibuf_b_output_0_0_to_lut_$abc$1018$abc$970$li0_li0_input_0_0  (
        .datain(\$ibuf_b_output_0_0 ),
        .dataout(\lut_$abc$1018$abc$970$li0_li0_input_0_0 )
    );

    fpga_interconnect \routing_segment_$ibuf_id[0]_output_0_0_to_lut_$abc$1018$abc$970$li2_li2_input_0_4  (
        .datain(\$ibuf_id[0]_output_0_0 ),
        .dataout(\lut_$abc$1018$abc$970$li2_li2_input_0_4 )
    );

    fpga_interconnect \routing_segment_$ibuf_id[0]_output_0_0_to_lut_$abc$1018$abc$970$li1_li1_input_0_4  (
        .datain(\$ibuf_id[0]_output_0_0 ),
        .dataout(\lut_$abc$1018$abc$970$li1_li1_input_0_4 )
    );

    fpga_interconnect \routing_segment_$ibuf_id[0]_output_0_0_to_lut_$abc$1018$abc$970$li6_li6_input_0_3  (
        .datain(\$ibuf_id[0]_output_0_0 ),
        .dataout(\lut_$abc$1018$abc$970$li6_li6_input_0_3 )
    );

    fpga_interconnect \routing_segment_$ibuf_id[0]_output_0_0_to_lut_$abc$1018$abc$970$li7_li7_input_0_3  (
        .datain(\$ibuf_id[0]_output_0_0 ),
        .dataout(\lut_$abc$1018$abc$970$li7_li7_input_0_3 )
    );

    fpga_interconnect \routing_segment_$ibuf_id[0]_output_0_0_to_lut_$abc$1018$abc$970$li4_li4_input_0_3  (
        .datain(\$ibuf_id[0]_output_0_0 ),
        .dataout(\lut_$abc$1018$abc$970$li4_li4_input_0_3 )
    );

    fpga_interconnect \routing_segment_$ibuf_id[0]_output_0_0_to_lut_$abc$1018$abc$970$li5_li5_input_0_3  (
        .datain(\$ibuf_id[0]_output_0_0 ),
        .dataout(\lut_$abc$1018$abc$970$li5_li5_input_0_3 )
    );

    fpga_interconnect \routing_segment_$ibuf_id[0]_output_0_0_to_lut_$abc$1686$new_new_n26___input_0_4  (
        .datain(\$ibuf_id[0]_output_0_0 ),
        .dataout(\lut_$abc$1686$new_new_n26___input_0_4 )
    );

    fpga_interconnect \routing_segment_$ibuf_id[0]_output_0_0_to_lut_$abc$1686$new_new_n25___input_0_2  (
        .datain(\$ibuf_id[0]_output_0_0 ),
        .dataout(\lut_$abc$1686$new_new_n25___input_0_2 )
    );

    fpga_interconnect \routing_segment_$ibuf_id[0]_output_0_0_to_lut_$abc$1018$abc$970$li3_li3_input_0_2  (
        .datain(\$ibuf_id[0]_output_0_0 ),
        .dataout(\lut_$abc$1018$abc$970$li3_li3_input_0_2 )
    );

    fpga_interconnect \routing_segment_$ibuf_id[0]_output_0_0_to_lut_$abc$1018$abc$970$li0_li0_input_0_2  (
        .datain(\$ibuf_id[0]_output_0_0 ),
        .dataout(\lut_$abc$1018$abc$970$li0_li0_input_0_2 )
    );

    fpga_interconnect \routing_segment_$ibuf_id[1]_output_0_0_to_lut_$abc$1018$abc$970$li2_li2_input_0_2  (
        .datain(\$ibuf_id[1]_output_0_0 ),
        .dataout(\lut_$abc$1018$abc$970$li2_li2_input_0_2 )
    );

    fpga_interconnect \routing_segment_$ibuf_id[1]_output_0_0_to_lut_$abc$1018$abc$970$li1_li1_input_0_2  (
        .datain(\$ibuf_id[1]_output_0_0 ),
        .dataout(\lut_$abc$1018$abc$970$li1_li1_input_0_2 )
    );

    fpga_interconnect \routing_segment_$ibuf_id[1]_output_0_0_to_lut_$abc$1018$abc$970$li6_li6_input_0_0  (
        .datain(\$ibuf_id[1]_output_0_0 ),
        .dataout(\lut_$abc$1018$abc$970$li6_li6_input_0_0 )
    );

    fpga_interconnect \routing_segment_$ibuf_id[1]_output_0_0_to_lut_$abc$1018$abc$970$li7_li7_input_0_0  (
        .datain(\$ibuf_id[1]_output_0_0 ),
        .dataout(\lut_$abc$1018$abc$970$li7_li7_input_0_0 )
    );

    fpga_interconnect \routing_segment_$ibuf_id[1]_output_0_0_to_lut_$abc$1018$abc$970$li4_li4_input_0_0  (
        .datain(\$ibuf_id[1]_output_0_0 ),
        .dataout(\lut_$abc$1018$abc$970$li4_li4_input_0_0 )
    );

    fpga_interconnect \routing_segment_$ibuf_id[1]_output_0_0_to_lut_$abc$1018$abc$970$li5_li5_input_0_0  (
        .datain(\$ibuf_id[1]_output_0_0 ),
        .dataout(\lut_$abc$1018$abc$970$li5_li5_input_0_0 )
    );

    fpga_interconnect \routing_segment_$ibuf_id[1]_output_0_0_to_lut_$abc$1686$new_new_n26___input_0_0  (
        .datain(\$ibuf_id[1]_output_0_0 ),
        .dataout(\lut_$abc$1686$new_new_n26___input_0_0 )
    );

    fpga_interconnect \routing_segment_$ibuf_id[1]_output_0_0_to_lut_$abc$1686$new_new_n25___input_0_4  (
        .datain(\$ibuf_id[1]_output_0_0 ),
        .dataout(\lut_$abc$1686$new_new_n25___input_0_4 )
    );

    fpga_interconnect \routing_segment_$ibuf_id[1]_output_0_0_to_lut_$abc$1018$abc$970$li3_li3_input_0_4  (
        .datain(\$ibuf_id[1]_output_0_0 ),
        .dataout(\lut_$abc$1018$abc$970$li3_li3_input_0_4 )
    );

    fpga_interconnect \routing_segment_$ibuf_id[1]_output_0_0_to_lut_$abc$1018$abc$970$li0_li0_input_0_4  (
        .datain(\$ibuf_id[1]_output_0_0 ),
        .dataout(\lut_$abc$1018$abc$970$li0_li0_input_0_4 )
    );

    fpga_interconnect \routing_segment_$ibuf_id[2]_output_0_0_to_lut_$abc$1018$abc$970$li2_li2_input_0_1  (
        .datain(\$ibuf_id[2]_output_0_0 ),
        .dataout(\lut_$abc$1018$abc$970$li2_li2_input_0_1 )
    );

    fpga_interconnect \routing_segment_$ibuf_id[2]_output_0_0_to_lut_$abc$1018$abc$970$li1_li1_input_0_1  (
        .datain(\$ibuf_id[2]_output_0_0 ),
        .dataout(\lut_$abc$1018$abc$970$li1_li1_input_0_1 )
    );

    fpga_interconnect \routing_segment_$ibuf_id[2]_output_0_0_to_lut_$f2g_tx_out_$obuf_c_input_0_1  (
        .datain(\$ibuf_id[2]_output_0_0 ),
        .dataout(\lut_$f2g_tx_out_$obuf_c_input_0_1 )
    );

    fpga_interconnect \routing_segment_$ibuf_id[2]_output_0_0_to_lut_$abc$1018$abc$970$li6_li6_input_0_1  (
        .datain(\$ibuf_id[2]_output_0_0 ),
        .dataout(\lut_$abc$1018$abc$970$li6_li6_input_0_1 )
    );

    fpga_interconnect \routing_segment_$ibuf_id[2]_output_0_0_to_lut_$abc$1018$abc$970$li7_li7_input_0_1  (
        .datain(\$ibuf_id[2]_output_0_0 ),
        .dataout(\lut_$abc$1018$abc$970$li7_li7_input_0_1 )
    );

    fpga_interconnect \routing_segment_$ibuf_id[2]_output_0_0_to_lut_$abc$1018$abc$970$li4_li4_input_0_1  (
        .datain(\$ibuf_id[2]_output_0_0 ),
        .dataout(\lut_$abc$1018$abc$970$li4_li4_input_0_1 )
    );

    fpga_interconnect \routing_segment_$ibuf_id[2]_output_0_0_to_lut_$abc$1018$abc$970$li5_li5_input_0_1  (
        .datain(\$ibuf_id[2]_output_0_0 ),
        .dataout(\lut_$abc$1018$abc$970$li5_li5_input_0_1 )
    );

    fpga_interconnect \routing_segment_$ibuf_id[2]_output_0_0_to_lut_$abc$1018$abc$970$li3_li3_input_0_1  (
        .datain(\$ibuf_id[2]_output_0_0 ),
        .dataout(\lut_$abc$1018$abc$970$li3_li3_input_0_1 )
    );

    fpga_interconnect \routing_segment_$ibuf_id[2]_output_0_0_to_lut_$abc$1018$abc$970$li0_li0_input_0_1  (
        .datain(\$ibuf_id[2]_output_0_0 ),
        .dataout(\lut_$abc$1018$abc$970$li0_li0_input_0_1 )
    );

    fpga_interconnect \routing_segment_lut_$auto_1716_output_0_0_to_$auto_1716_input_0_0  (
        .datain(\lut_$auto_1716_output_0_0 ),
        .dataout(\$auto_1716_input_0_0 )
    );

    fpga_interconnect \routing_segment_lut_$auto_1717_output_0_0_to_$auto_1717_input_0_0  (
        .datain(\lut_$auto_1717_output_0_0 ),
        .dataout(\$auto_1717_input_0_0 )
    );

    fpga_interconnect \routing_segment_lut_$auto_1718_output_0_0_to_$auto_1718_input_0_0  (
        .datain(\lut_$auto_1718_output_0_0 ),
        .dataout(\$auto_1718_input_0_0 )
    );

    fpga_interconnect \routing_segment_lut_$auto_1719_output_0_0_to_$auto_1719_input_0_0  (
        .datain(\lut_$auto_1719_output_0_0 ),
        .dataout(\$auto_1719_input_0_0 )
    );

    fpga_interconnect \routing_segment_lut_$auto_1720_output_0_0_to_$auto_1720_input_0_0  (
        .datain(\lut_$auto_1720_output_0_0 ),
        .dataout(\$auto_1720_input_0_0 )
    );

    fpga_interconnect \routing_segment_lut_$auto_1721_output_0_0_to_$auto_1721_input_0_0  (
        .datain(\lut_$auto_1721_output_0_0 ),
        .dataout(\$auto_1721_input_0_0 )
    );

    fpga_interconnect \routing_segment_lut_$auto_1722_output_0_0_to_$auto_1722_input_0_0  (
        .datain(\lut_$auto_1722_output_0_0 ),
        .dataout(\$auto_1722_input_0_0 )
    );

    fpga_interconnect \routing_segment_lut_$f2g_tx_out_$obuf_c_output_0_0_to_$f2g_tx_out_$obuf_c_input_0_0  (
        .datain(\lut_$f2g_tx_out_$obuf_c_output_0_0 ),
        .dataout(\$f2g_tx_out_$obuf_c_input_0_0 )
    );

    fpga_interconnect \routing_segment_lut_$true_output_0_0_to_dffre_c_sub_out_reg[2]_input_1_0  (
        .datain(\lut_$true_output_0_0 ),
        .dataout(\dffre_c_sub_out_reg[2]_input_1_0 )
    );

    fpga_interconnect \routing_segment_lut_$true_output_0_0_to_dffre_c_sub_out_reg[2]_input_2_0  (
        .datain(\lut_$true_output_0_0 ),
        .dataout(\dffre_c_sub_out_reg[2]_input_2_0 )
    );

    fpga_interconnect \routing_segment_lut_$true_output_0_0_to_dffre_c_sub_out_reg[1]_input_1_0  (
        .datain(\lut_$true_output_0_0 ),
        .dataout(\dffre_c_sub_out_reg[1]_input_1_0 )
    );

    fpga_interconnect \routing_segment_lut_$true_output_0_0_to_dffre_c_sub_out_reg[1]_input_2_0  (
        .datain(\lut_$true_output_0_0 ),
        .dataout(\dffre_c_sub_out_reg[1]_input_2_0 )
    );

    fpga_interconnect \routing_segment_lut_$true_output_0_0_to_dffre_c_sub_out_reg[6]_input_1_0  (
        .datain(\lut_$true_output_0_0 ),
        .dataout(\dffre_c_sub_out_reg[6]_input_1_0 )
    );

    fpga_interconnect \routing_segment_lut_$true_output_0_0_to_dffre_c_sub_out_reg[6]_input_2_0  (
        .datain(\lut_$true_output_0_0 ),
        .dataout(\dffre_c_sub_out_reg[6]_input_2_0 )
    );

    fpga_interconnect \routing_segment_lut_$true_output_0_0_to_dffre_c_sub_out_reg[7]_input_1_0  (
        .datain(\lut_$true_output_0_0 ),
        .dataout(\dffre_c_sub_out_reg[7]_input_1_0 )
    );

    fpga_interconnect \routing_segment_lut_$true_output_0_0_to_dffre_c_sub_out_reg[7]_input_2_0  (
        .datain(\lut_$true_output_0_0 ),
        .dataout(\dffre_c_sub_out_reg[7]_input_2_0 )
    );

    fpga_interconnect \routing_segment_lut_$true_output_0_0_to_dffre_c_sub_out_reg[4]_input_1_0  (
        .datain(\lut_$true_output_0_0 ),
        .dataout(\dffre_c_sub_out_reg[4]_input_1_0 )
    );

    fpga_interconnect \routing_segment_lut_$true_output_0_0_to_dffre_c_sub_out_reg[4]_input_2_0  (
        .datain(\lut_$true_output_0_0 ),
        .dataout(\dffre_c_sub_out_reg[4]_input_2_0 )
    );

    fpga_interconnect \routing_segment_lut_$true_output_0_0_to_dffre_c_sub_out_reg[5]_input_1_0  (
        .datain(\lut_$true_output_0_0 ),
        .dataout(\dffre_c_sub_out_reg[5]_input_1_0 )
    );

    fpga_interconnect \routing_segment_lut_$true_output_0_0_to_dffre_c_sub_out_reg[5]_input_2_0  (
        .datain(\lut_$true_output_0_0 ),
        .dataout(\dffre_c_sub_out_reg[5]_input_2_0 )
    );

    fpga_interconnect \routing_segment_lut_$true_output_0_0_to_lut_$auto_1721_input_0_1  (
        .datain(\lut_$true_output_0_0 ),
        .dataout(\lut_$auto_1721_input_0_1 )
    );

    fpga_interconnect \routing_segment_lut_$true_output_0_0_to_lut_$auto_1720_input_0_1  (
        .datain(\lut_$true_output_0_0 ),
        .dataout(\lut_$auto_1720_input_0_1 )
    );

    fpga_interconnect \routing_segment_lut_$true_output_0_0_to_dffre_c_sub_out_reg[3]_input_1_0  (
        .datain(\lut_$true_output_0_0 ),
        .dataout(\dffre_c_sub_out_reg[3]_input_1_0 )
    );

    fpga_interconnect \routing_segment_lut_$true_output_0_0_to_dffre_c_sub_out_reg[3]_input_2_0  (
        .datain(\lut_$true_output_0_0 ),
        .dataout(\dffre_c_sub_out_reg[3]_input_2_0 )
    );

    fpga_interconnect \routing_segment_lut_$true_output_0_0_to_dffre_c_sub_out_reg[0]_input_1_0  (
        .datain(\lut_$true_output_0_0 ),
        .dataout(\dffre_c_sub_out_reg[0]_input_1_0 )
    );

    fpga_interconnect \routing_segment_lut_$true_output_0_0_to_dffre_c_sub_out_reg[0]_input_2_0  (
        .datain(\lut_$true_output_0_0 ),
        .dataout(\dffre_c_sub_out_reg[0]_input_2_0 )
    );

    fpga_interconnect \routing_segment_lut_$true_output_0_0_to_lut_$auto_1719_input_0_3  (
        .datain(\lut_$true_output_0_0 ),
        .dataout(\lut_$auto_1719_input_0_3 )
    );

    fpga_interconnect \routing_segment_lut_$true_output_0_0_to_lut_$auto_1718_input_0_3  (
        .datain(\lut_$true_output_0_0 ),
        .dataout(\lut_$auto_1718_input_0_3 )
    );

    fpga_interconnect \routing_segment_lut_$true_output_0_0_to_lut_$auto_1716_input_0_1  (
        .datain(\lut_$true_output_0_0 ),
        .dataout(\lut_$auto_1716_input_0_1 )
    );

    fpga_interconnect \routing_segment_lut_$true_output_0_0_to_lut_$auto_1717_input_0_3  (
        .datain(\lut_$true_output_0_0 ),
        .dataout(\lut_$auto_1717_input_0_3 )
    );

    fpga_interconnect \routing_segment_lut_$true_output_0_0_to_lut_$auto_1722_input_0_3  (
        .datain(\lut_$true_output_0_0 ),
        .dataout(\lut_$auto_1722_input_0_3 )
    );

    fpga_interconnect \routing_segment_lut_$abc$1018$abc$970$li0_li0_output_0_0_to_dffre_c_sub_out_reg[0]_input_0_0  (
        .datain(\lut_$abc$1018$abc$970$li0_li0_output_0_0 ),
        .dataout(\dffre_c_sub_out_reg[0]_input_0_0 )
    );

    fpga_interconnect \routing_segment_dffre_c_sub_out_reg[3]_output_0_0_to_lut_$abc$1686$new_new_n25___input_0_5  (
        .datain(\dffre_c_sub_out_reg[3]_output_0_0 ),
        .dataout(\lut_$abc$1686$new_new_n25___input_0_5 )
    );

    fpga_interconnect \routing_segment_dffre_c_sub_out_reg[2]_output_0_0_to_lut_$abc$1686$new_new_n25___input_0_1  (
        .datain(\dffre_c_sub_out_reg[2]_output_0_0 ),
        .dataout(\lut_$abc$1686$new_new_n25___input_0_1 )
    );

    fpga_interconnect \routing_segment_dffre_c_sub_out_reg[1]_output_0_0_to_lut_$abc$1686$new_new_n25___input_0_0  (
        .datain(\dffre_c_sub_out_reg[1]_output_0_0 ),
        .dataout(\lut_$abc$1686$new_new_n25___input_0_0 )
    );

    fpga_interconnect \routing_segment_dffre_c_sub_out_reg[0]_output_0_0_to_lut_$abc$1686$new_new_n25___input_0_3  (
        .datain(\dffre_c_sub_out_reg[0]_output_0_0 ),
        .dataout(\lut_$abc$1686$new_new_n25___input_0_3 )
    );

    fpga_interconnect \routing_segment_lut_$abc$1686$new_new_n25___output_0_0_to_lut_$f2g_tx_out_$obuf_c_input_0_2  (
        .datain(\lut_$abc$1686$new_new_n25___output_0_0 ),
        .dataout(\lut_$f2g_tx_out_$obuf_c_input_0_2 )
    );

    fpga_interconnect \routing_segment_dffre_c_sub_out_reg[6]_output_0_0_to_lut_$abc$1686$new_new_n26___input_0_3  (
        .datain(\dffre_c_sub_out_reg[6]_output_0_0 ),
        .dataout(\lut_$abc$1686$new_new_n26___input_0_3 )
    );

    fpga_interconnect \routing_segment_dffre_c_sub_out_reg[7]_output_0_0_to_lut_$abc$1686$new_new_n26___input_0_1  (
        .datain(\dffre_c_sub_out_reg[7]_output_0_0 ),
        .dataout(\lut_$abc$1686$new_new_n26___input_0_1 )
    );

    fpga_interconnect \routing_segment_dffre_c_sub_out_reg[4]_output_0_0_to_lut_$abc$1686$new_new_n26___input_0_5  (
        .datain(\dffre_c_sub_out_reg[4]_output_0_0 ),
        .dataout(\lut_$abc$1686$new_new_n26___input_0_5 )
    );

    fpga_interconnect \routing_segment_dffre_c_sub_out_reg[5]_output_0_0_to_lut_$abc$1686$new_new_n26___input_0_2  (
        .datain(\dffre_c_sub_out_reg[5]_output_0_0 ),
        .dataout(\lut_$abc$1686$new_new_n26___input_0_2 )
    );

    fpga_interconnect \routing_segment_lut_$abc$1686$new_new_n26___output_0_0_to_lut_$f2g_tx_out_$obuf_c_input_0_4  (
        .datain(\lut_$abc$1686$new_new_n26___output_0_0 ),
        .dataout(\lut_$f2g_tx_out_$obuf_c_input_0_4 )
    );

    fpga_interconnect \routing_segment_lut_$abc$1018$abc$970$li7_li7_output_0_0_to_dffre_c_sub_out_reg[7]_input_0_0  (
        .datain(\lut_$abc$1018$abc$970$li7_li7_output_0_0 ),
        .dataout(\dffre_c_sub_out_reg[7]_input_0_0 )
    );

    fpga_interconnect \routing_segment_lut_$abc$1018$abc$970$li6_li6_output_0_0_to_dffre_c_sub_out_reg[6]_input_0_0  (
        .datain(\lut_$abc$1018$abc$970$li6_li6_output_0_0 ),
        .dataout(\dffre_c_sub_out_reg[6]_input_0_0 )
    );

    fpga_interconnect \routing_segment_lut_$abc$1018$abc$970$li5_li5_output_0_0_to_dffre_c_sub_out_reg[5]_input_0_0  (
        .datain(\lut_$abc$1018$abc$970$li5_li5_output_0_0 ),
        .dataout(\dffre_c_sub_out_reg[5]_input_0_0 )
    );

    fpga_interconnect \routing_segment_lut_$abc$1018$abc$970$li4_li4_output_0_0_to_dffre_c_sub_out_reg[4]_input_0_0  (
        .datain(\lut_$abc$1018$abc$970$li4_li4_output_0_0 ),
        .dataout(\dffre_c_sub_out_reg[4]_input_0_0 )
    );

    fpga_interconnect \routing_segment_lut_$abc$1018$abc$970$li3_li3_output_0_0_to_dffre_c_sub_out_reg[3]_input_0_0  (
        .datain(\lut_$abc$1018$abc$970$li3_li3_output_0_0 ),
        .dataout(\dffre_c_sub_out_reg[3]_input_0_0 )
    );

    fpga_interconnect \routing_segment_lut_$abc$1018$abc$970$li2_li2_output_0_0_to_dffre_c_sub_out_reg[2]_input_0_0  (
        .datain(\lut_$abc$1018$abc$970$li2_li2_output_0_0 ),
        .dataout(\dffre_c_sub_out_reg[2]_input_0_0 )
    );

    fpga_interconnect \routing_segment_lut_$abc$1018$abc$970$li1_li1_output_0_0_to_dffre_c_sub_out_reg[1]_input_0_0  (
        .datain(\lut_$abc$1018$abc$970$li1_li1_output_0_0 ),
        .dataout(\dffre_c_sub_out_reg[1]_input_0_0 )
    );

    
    //Cell instances
    LUT_K5 #(
        .K(5),
        .LUT_MASK(32'b00000000000000000010000000000000)
    ) \lut_$abc$1018$abc$970$li2_li2  (
        .in4(\lut_$abc$1018$abc$970$li2_li2_input_0_4 ),
        .in3(\lut_$abc$1018$abc$970$li2_li2_input_0_3 ),
        .in2(\lut_$abc$1018$abc$970$li2_li2_input_0_2 ),
        .in1(\lut_$abc$1018$abc$970$li2_li2_input_0_1 ),
        .in0(\lut_$abc$1018$abc$970$li2_li2_input_0_0 ),
        .out(\lut_$abc$1018$abc$970$li2_li2_output_0_0 )
    );

    DFFRE #(
    ) \dffre_c_sub_out_reg[2]  (
        .D(\dffre_c_sub_out_reg[2]_input_0_0 ),
        .R(\dffre_c_sub_out_reg[2]_input_1_0 ),
        .E(\dffre_c_sub_out_reg[2]_input_2_0 ),
        .C(\dffre_c_sub_out_reg[2]_clock_0_0 ),
        .Q(\dffre_c_sub_out_reg[2]_output_0_0 )
    );

    LUT_K5 #(
        .K(5),
        .LUT_MASK(32'b00000010000000000000000000000000)
    ) \lut_$abc$1018$abc$970$li1_li1  (
        .in4(\lut_$abc$1018$abc$970$li1_li1_input_0_4 ),
        .in3(\lut_$abc$1018$abc$970$li1_li1_input_0_3 ),
        .in2(\lut_$abc$1018$abc$970$li1_li1_input_0_2 ),
        .in1(\lut_$abc$1018$abc$970$li1_li1_input_0_1 ),
        .in0(\lut_$abc$1018$abc$970$li1_li1_input_0_0 ),
        .out(\lut_$abc$1018$abc$970$li1_li1_output_0_0 )
    );

    DFFRE #(
    ) \dffre_c_sub_out_reg[1]  (
        .D(\dffre_c_sub_out_reg[1]_input_0_0 ),
        .R(\dffre_c_sub_out_reg[1]_input_1_0 ),
        .E(\dffre_c_sub_out_reg[1]_input_2_0 ),
        .C(\dffre_c_sub_out_reg[1]_clock_0_0 ),
        .Q(\dffre_c_sub_out_reg[1]_output_0_0 )
    );

    LUT_K5 #(
        .K(5),
        .LUT_MASK(32'b00000000000000010000000001000101)
    ) \lut_$f2g_tx_out_$obuf_c  (
        .in4(\lut_$f2g_tx_out_$obuf_c_input_0_4 ),
        .in3(1'b0),
        .in2(\lut_$f2g_tx_out_$obuf_c_input_0_2 ),
        .in1(\lut_$f2g_tx_out_$obuf_c_input_0_1 ),
        .in0(1'b0),
        .out(\lut_$f2g_tx_out_$obuf_c_output_0_0 )
    );

    LUT_K5 #(
        .K(5),
        .LUT_MASK(32'b00000000000000000000000000000001)
    ) \lut_$true  (
        .in4(1'b0),
        .in3(1'b0),
        .in2(1'b0),
        .in1(1'b0),
        .in0(1'b0),
        .out(\lut_$true_output_0_0 )
    );

    LUT_K5 #(
        .K(5),
        .LUT_MASK(32'b00000000100000000000000000000000)
    ) \lut_$abc$1018$abc$970$li6_li6  (
        .in4(\lut_$abc$1018$abc$970$li6_li6_input_0_4 ),
        .in3(\lut_$abc$1018$abc$970$li6_li6_input_0_3 ),
        .in2(\lut_$abc$1018$abc$970$li6_li6_input_0_2 ),
        .in1(\lut_$abc$1018$abc$970$li6_li6_input_0_1 ),
        .in0(\lut_$abc$1018$abc$970$li6_li6_input_0_0 ),
        .out(\lut_$abc$1018$abc$970$li6_li6_output_0_0 )
    );

    DFFRE #(
    ) \dffre_c_sub_out_reg[6]  (
        .D(\dffre_c_sub_out_reg[6]_input_0_0 ),
        .R(\dffre_c_sub_out_reg[6]_input_1_0 ),
        .E(\dffre_c_sub_out_reg[6]_input_2_0 ),
        .C(\dffre_c_sub_out_reg[6]_clock_0_0 ),
        .Q(\dffre_c_sub_out_reg[6]_output_0_0 )
    );

    LUT_K5 #(
        .K(5),
        .LUT_MASK(32'b10000000000000000000000000000000)
    ) \lut_$abc$1018$abc$970$li7_li7  (
        .in4(\lut_$abc$1018$abc$970$li7_li7_input_0_4 ),
        .in3(\lut_$abc$1018$abc$970$li7_li7_input_0_3 ),
        .in2(\lut_$abc$1018$abc$970$li7_li7_input_0_2 ),
        .in1(\lut_$abc$1018$abc$970$li7_li7_input_0_1 ),
        .in0(\lut_$abc$1018$abc$970$li7_li7_input_0_0 ),
        .out(\lut_$abc$1018$abc$970$li7_li7_output_0_0 )
    );

    DFFRE #(
    ) \dffre_c_sub_out_reg[7]  (
        .D(\dffre_c_sub_out_reg[7]_input_0_0 ),
        .R(\dffre_c_sub_out_reg[7]_input_1_0 ),
        .E(\dffre_c_sub_out_reg[7]_input_2_0 ),
        .C(\dffre_c_sub_out_reg[7]_clock_0_0 ),
        .Q(\dffre_c_sub_out_reg[7]_output_0_0 )
    );

    LUT_K5 #(
        .K(5),
        .LUT_MASK(32'b00000000010000000000000000000000)
    ) \lut_$abc$1018$abc$970$li4_li4  (
        .in4(\lut_$abc$1018$abc$970$li4_li4_input_0_4 ),
        .in3(\lut_$abc$1018$abc$970$li4_li4_input_0_3 ),
        .in2(\lut_$abc$1018$abc$970$li4_li4_input_0_2 ),
        .in1(\lut_$abc$1018$abc$970$li4_li4_input_0_1 ),
        .in0(\lut_$abc$1018$abc$970$li4_li4_input_0_0 ),
        .out(\lut_$abc$1018$abc$970$li4_li4_output_0_0 )
    );

    DFFRE #(
    ) \dffre_c_sub_out_reg[4]  (
        .D(\dffre_c_sub_out_reg[4]_input_0_0 ),
        .R(\dffre_c_sub_out_reg[4]_input_1_0 ),
        .E(\dffre_c_sub_out_reg[4]_input_2_0 ),
        .C(\dffre_c_sub_out_reg[4]_clock_0_0 ),
        .Q(\dffre_c_sub_out_reg[4]_output_0_0 )
    );

    LUT_K5 #(
        .K(5),
        .LUT_MASK(32'b01000000000000000000000000000000)
    ) \lut_$abc$1018$abc$970$li5_li5  (
        .in4(\lut_$abc$1018$abc$970$li5_li5_input_0_4 ),
        .in3(\lut_$abc$1018$abc$970$li5_li5_input_0_3 ),
        .in2(\lut_$abc$1018$abc$970$li5_li5_input_0_2 ),
        .in1(\lut_$abc$1018$abc$970$li5_li5_input_0_1 ),
        .in0(\lut_$abc$1018$abc$970$li5_li5_input_0_0 ),
        .out(\lut_$abc$1018$abc$970$li5_li5_output_0_0 )
    );

    DFFRE #(
    ) \dffre_c_sub_out_reg[5]  (
        .D(\dffre_c_sub_out_reg[5]_input_0_0 ),
        .R(\dffre_c_sub_out_reg[5]_input_1_0 ),
        .E(\dffre_c_sub_out_reg[5]_input_2_0 ),
        .C(\dffre_c_sub_out_reg[5]_clock_0_0 ),
        .Q(\dffre_c_sub_out_reg[5]_output_0_0 )
    );

    LUT_K5 #(
        .K(5),
        .LUT_MASK(32'b00000000000000000000000000000100)
    ) \lut_$auto_1721  (
        .in4(1'b0),
        .in3(1'b0),
        .in2(1'b0),
        .in1(\lut_$auto_1721_input_0_1 ),
        .in0(1'b0),
        .out(\lut_$auto_1721_output_0_0 )
    );

    LUT_K5 #(
        .K(5),
        .LUT_MASK(32'b00000000000000000000000000000100)
    ) \lut_$auto_1720  (
        .in4(1'b0),
        .in3(1'b0),
        .in2(1'b0),
        .in1(\lut_$auto_1720_input_0_1 ),
        .in0(1'b0),
        .out(\lut_$auto_1720_output_0_0 )
    );

    LUT_K6 #(
        .K(6),
        .LUT_MASK(64'b0010011100100111000000001010101000100111001001110101010111111111)
    ) \lut_$abc$1686$new_new_n26__  (
        .in5(\lut_$abc$1686$new_new_n26___input_0_5 ),
        .in4(\lut_$abc$1686$new_new_n26___input_0_4 ),
        .in3(\lut_$abc$1686$new_new_n26___input_0_3 ),
        .in2(\lut_$abc$1686$new_new_n26___input_0_2 ),
        .in1(\lut_$abc$1686$new_new_n26___input_0_1 ),
        .in0(\lut_$abc$1686$new_new_n26___input_0_0 ),
        .out(\lut_$abc$1686$new_new_n26___output_0_0 )
    );

    LUT_K6 #(
        .K(6),
        .LUT_MASK(64'b0000001100000011010100000101111111110011111100110101000001011111)
    ) \lut_$abc$1686$new_new_n25__  (
        .in5(\lut_$abc$1686$new_new_n25___input_0_5 ),
        .in4(\lut_$abc$1686$new_new_n25___input_0_4 ),
        .in3(\lut_$abc$1686$new_new_n25___input_0_3 ),
        .in2(\lut_$abc$1686$new_new_n25___input_0_2 ),
        .in1(\lut_$abc$1686$new_new_n25___input_0_1 ),
        .in0(\lut_$abc$1686$new_new_n25___input_0_0 ),
        .out(\lut_$abc$1686$new_new_n25___output_0_0 )
    );

    LUT_K5 #(
        .K(5),
        .LUT_MASK(32'b00100000000000000000000000000000)
    ) \lut_$abc$1018$abc$970$li3_li3  (
        .in4(\lut_$abc$1018$abc$970$li3_li3_input_0_4 ),
        .in3(\lut_$abc$1018$abc$970$li3_li3_input_0_3 ),
        .in2(\lut_$abc$1018$abc$970$li3_li3_input_0_2 ),
        .in1(\lut_$abc$1018$abc$970$li3_li3_input_0_1 ),
        .in0(\lut_$abc$1018$abc$970$li3_li3_input_0_0 ),
        .out(\lut_$abc$1018$abc$970$li3_li3_output_0_0 )
    );

    DFFRE #(
    ) \dffre_c_sub_out_reg[3]  (
        .D(\dffre_c_sub_out_reg[3]_input_0_0 ),
        .R(\dffre_c_sub_out_reg[3]_input_1_0 ),
        .E(\dffre_c_sub_out_reg[3]_input_2_0 ),
        .C(\dffre_c_sub_out_reg[3]_clock_0_0 ),
        .Q(\dffre_c_sub_out_reg[3]_output_0_0 )
    );

    LUT_K5 #(
        .K(5),
        .LUT_MASK(32'b00000000000000000000001000000000)
    ) \lut_$abc$1018$abc$970$li0_li0  (
        .in4(\lut_$abc$1018$abc$970$li0_li0_input_0_4 ),
        .in3(\lut_$abc$1018$abc$970$li0_li0_input_0_3 ),
        .in2(\lut_$abc$1018$abc$970$li0_li0_input_0_2 ),
        .in1(\lut_$abc$1018$abc$970$li0_li0_input_0_1 ),
        .in0(\lut_$abc$1018$abc$970$li0_li0_input_0_0 ),
        .out(\lut_$abc$1018$abc$970$li0_li0_output_0_0 )
    );

    DFFRE #(
    ) \dffre_c_sub_out_reg[0]  (
        .D(\dffre_c_sub_out_reg[0]_input_0_0 ),
        .R(\dffre_c_sub_out_reg[0]_input_1_0 ),
        .E(\dffre_c_sub_out_reg[0]_input_2_0 ),
        .C(\dffre_c_sub_out_reg[0]_clock_0_0 ),
        .Q(\dffre_c_sub_out_reg[0]_output_0_0 )
    );

    LUT_K5 #(
        .K(5),
        .LUT_MASK(32'b00000000000000000000000100000000)
    ) \lut_$auto_1719  (
        .in4(1'b0),
        .in3(\lut_$auto_1719_input_0_3 ),
        .in2(1'b0),
        .in1(1'b0),
        .in0(1'b0),
        .out(\lut_$auto_1719_output_0_0 )
    );

    LUT_K5 #(
        .K(5),
        .LUT_MASK(32'b00000000000000000000000100000000)
    ) \lut_$auto_1718  (
        .in4(1'b0),
        .in3(\lut_$auto_1718_input_0_3 ),
        .in2(1'b0),
        .in1(1'b0),
        .in0(1'b0),
        .out(\lut_$auto_1718_output_0_0 )
    );

    LUT_K5 #(
        .K(5),
        .LUT_MASK(32'b00000000000000000000000000000100)
    ) \lut_$auto_1716  (
        .in4(1'b0),
        .in3(1'b0),
        .in2(1'b0),
        .in1(\lut_$auto_1716_input_0_1 ),
        .in0(1'b0),
        .out(\lut_$auto_1716_output_0_0 )
    );

    LUT_K5 #(
        .K(5),
        .LUT_MASK(32'b00000000000000000000000100000000)
    ) \lut_$auto_1717  (
        .in4(1'b0),
        .in3(\lut_$auto_1717_input_0_3 ),
        .in2(1'b0),
        .in1(1'b0),
        .in0(1'b0),
        .out(\lut_$auto_1717_output_0_0 )
    );

    LUT_K5 #(
        .K(5),
        .LUT_MASK(32'b00000000000000000000000100000000)
    ) \lut_$auto_1722  (
        .in4(1'b0),
        .in3(\lut_$auto_1722_input_0_3 ),
        .in2(1'b0),
        .in1(1'b0),
        .in0(1'b0),
        .out(\lut_$auto_1722_output_0_0 )
    );


endmodule
