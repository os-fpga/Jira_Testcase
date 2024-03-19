module diff_buf (
    input   wire in_P,
    input   wire in_N,
    output  wire out_P,
    output  wire out_N
);
    wire interconnect;

    I_BUF_DS DATA_INPUT_BUFFER (.I_P(in_P), .I_N(in_N), .EN(1), .O(interconnect));
    O_BUF_DS DATA_OUT_BUFFER (.I(interconnect), .O_P(out_P), .O_N(out_N));
    
endmodule