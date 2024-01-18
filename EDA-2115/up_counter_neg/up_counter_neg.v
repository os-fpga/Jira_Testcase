//-------------------------------------------------------
//  Functionality: An n-bit synchronous reset up counter negative edge triggered 
//  Author:        Azfar 
//-------------------------------------------------------
`define LOAD_FUNCTION
`define COUNTER_WIDTH 64


module up_counter_neg(
    input wire clock0,
    input wire reset,
    `ifdef LOAD_FUNCTION
        input wire load,
        input wire [`COUNTER_WIDTH - 1:0] counter_input,
    `endif
    output wire [`COUNTER_WIDTH - 1:0] counter_output
);
    reg [`COUNTER_WIDTH - 1:0] counter_data;
    assign counter_output = counter_data;

    always @(negedge clock0) begin
        if(reset)begin
            counter_data <= {`COUNTER_WIDTH{1'b0}};
        end else begin
            
            `ifdef LOAD_FUNCTION
                if(load) begin
                    counter_data <= counter_input;
                end else begin
                    counter_data <= counter_data + 1;
                end
            `else 
                counter_data <= counter_data + 1;
            `endif
        end
    end

endmodule
