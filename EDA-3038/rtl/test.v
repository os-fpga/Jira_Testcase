module test (
    input  wire  en,
    input  wire  clk,
    output reg  data_o,
);

    reg data;

    always @(posedge clk or negedge clk) begin
        if(clk) data <= 1;
        else data <= 0;
    end

    always@(*) begin
        if (en) data_o = data;
        else data_o = 0;
    end
endmodule