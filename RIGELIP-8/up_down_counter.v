//-------------------------------------------------------
//  Functionality: An n-bit asynchronous reset up down counter 
//  Author:        Azfar 
//-------------------------------------------------------
`define UP_DOWN_COUNTER 64
`define LOAD_FUNCTION


module up_down_counter(
    input wire clock0,
    input wire reset,
    input wire dir, // 0 for up counting and 1 for down counting
    `ifdef LOAD_FUNCTION
        input wire load,
        input wire [`UP_DOWN_COUNTER - 1:0] counter_input,
    `endif
    output wire [`UP_DOWN_COUNTER - 1:0] counter_output
);
    reg [`UP_DOWN_COUNTER - 1:0] counter_data;
    assign counter_output = counter_data;

    always @(posedge clock0 or posedge reset) begin
        if(reset)begin
            counter_data <= {`UP_DOWN_COUNTER{1'b0}};
        end else begin
            
            `ifdef LOAD_FUNCTION
                if(load) begin
                    counter_data <= counter_input;
                end else begin
                    if(dir == 1)begin counter_data <= counter_data - 1; end
                    else if(dir == 0)begin counter_data <= counter_data + 1; end
                end
            `else 
                if(dir == 1)begin counter_data <= counter_data - 1; end
                else if(dir == 0)begin counter_data <= counter_data + 1; end
            `endif
        end
    end

endmodule
