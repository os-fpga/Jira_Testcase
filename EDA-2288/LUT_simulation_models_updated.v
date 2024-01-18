
/////////////////////////case approach////////////////////////////////
// module LUT4 #(parameter INIT_VALUE = 16'h0000) (A, Y);
//     input wire [3:0] A;
//     output wire Y;

//     reg Y_reg;

//     always @* begin
//         case (A)
//             4'h0: Y_reg = INIT_VALUE[0];
//             4'h1: Y_reg = INIT_VALUE[1];
//             4'h2: Y_reg = INIT_VALUE[2];
//             4'h3: Y_reg = INIT_VALUE[3];
//             4'h4: Y_reg = INIT_VALUE[4];
//             4'h5: Y_reg = INIT_VALUE[5];
//             4'h6: Y_reg = INIT_VALUE[6];
//             4'h7: Y_reg = INIT_VALUE[7];
//             4'h8: Y_reg = INIT_VALUE[8];
//             4'h9: Y_reg = INIT_VALUE[9];
//             4'ha: Y_reg = INIT_VALUE[10];
//             4'hb: Y_reg = INIT_VALUE[11];
//             4'hc: Y_reg = INIT_VALUE[12];
//             4'hd: Y_reg = INIT_VALUE[13];
//             4'he: Y_reg = INIT_VALUE[14];
//             4'hf: Y_reg = INIT_VALUE[15];
//             default: Y_reg = 1'b0; // Default value, change if needed
//         endcase
//     end

//     assign Y = Y_reg;

// endmodule

/////////////////////////if-else approach////////////////////////////////
module LUT4 #(parameter INIT_VALUE = 16'h0000) (input wire [3:0] A, output wire Y);
    reg Y_reg;

    always_comb begin
        if (A < 16)
            Y_reg = INIT_VALUE[A];
        else
            Y_reg = 1'b0; // Default value for any unspecified input
    end

    assign Y = Y_reg;
endmodule

module LUT1 #(parameter INIT_VALUE = 2'h0) (input wire A, output wire Y);
    reg Y_reg;

    always_comb begin
        if (A < 2)
            Y_reg = INIT_VALUE[A];
        else
            Y_reg = 1'b0; // Default value for any unspecified input
    end

    assign Y = Y_reg;
endmodule


