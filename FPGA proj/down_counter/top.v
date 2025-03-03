module top(
    input wire clk,        // 125 MHz PYNQ-Z2 clock
    input wire rst,        // Reset button
    output wire [3:0] count // 4-bit output to LEDs
);

    reg slow_clk;
    reg [23:0] counter; // 24-bit counter for clock division

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            counter <= 24'b0;
            slow_clk <= 1'b0; // Reset slow clock
        end else begin
            counter <= counter + 1;
            slow_clk <= counter[23]; // Update slow clock
        end
    end

    down_counter u1 (
        .clk(slow_clk),
        .rst(rst),
        .count(count)
    );

endmodule
