module i_buf_o_buft(
    input wire data_i,
    input wire ctrl_T,
    output wire data_o
);

    
    O_BUFT buft_o (.I(data_i), .T(ctrl_T), .O(data_o));


endmodule