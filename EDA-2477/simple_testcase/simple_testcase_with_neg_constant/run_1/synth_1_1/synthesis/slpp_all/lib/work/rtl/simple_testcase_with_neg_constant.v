
module simple_testcase_with_neg_constant(
    input wire clk,
    input wire rst,
    input wire signed [7:0] in_value,
    output reg signed [7:0] out_value
);

always @(posedge clk or negedge rst) begin
    if (!rst) begin
        out_value <= 0;
    end else begin
        // Multiply by -2'sd1 to negate the value
        out_value <= in_value * (-2'sd1);
    end
end

endmodule

