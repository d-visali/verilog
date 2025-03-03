module down_counter (
    input wire clk,       // Clock input
    input wire rst,       // Asynchronous reset
    output reg [3:0] count // 4-bit counter output
);

always @(posedge clk or posedge rst) begin
    if (rst)
        count <= 4'b1111; // Initialize counter to 15 (maximum value)
    else
        count <= count - 1; // Decrement counter on every clock cycle
end

endmodule
