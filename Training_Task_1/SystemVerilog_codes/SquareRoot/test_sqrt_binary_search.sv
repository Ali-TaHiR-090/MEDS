`timescale 1ns/1ps

module tb_sqrt_binary_search;

    logic clk;
    logic valid_in;
    logic [15:0] x;
    logic [15:0] x_sqrt;
    logic valid_out;

    // Instantiate the DUT
    sqrt_binary_search dut (
        .clk(clk),
        .valid_in(valid_in),
        .x(x),
        .x_sqrt(x_sqrt),
        .valid_out(valid_out)
    );

    // Clock generation
    initial clk = 0;
    always #5 clk = ~clk; // 100MHz clock

    // Test procedure
    initial begin
        valid_in = 0;
        x = 0;

        // Wait for a few cycles
        repeat (2) @(posedge clk);

        // Test 1: sqrt(16.0) = 4.0 (Q8.8: 16<<8 = 4096, expect 4<<8 = 1024)
        x = 16 << 8;
        valid_in = 1;
        repeat (5) @(posedge clk);
        valid_in = 0;

        wait (valid_out);
        $display("Input: %0d (Q8.8), Output sqrt: %0d (Q8.8), Expected: %0d", x, x_sqrt, 4<<8);

        // Test 2: sqrt(2.25) = 1.5 (Q8.8: 576, expect 384)
        repeat (5) @(posedge clk);
        x = 9 << 7; // 2.25 in Q8.8
        valid_in = 1;
        repeat (5) @(posedge clk);
        valid_in = 0;

        wait (valid_out);
        $display("Input: %0d (Q8.8), Output sqrt: %0d (Q8.8), Expected: %0d", x, x_sqrt, 384);

        // Test 3: sqrt(100.0) = 10.0 (Q8.8: 25600, expect 2560)
        repeat (5) @(posedge clk);
        x = 100 << 8;
        valid_in = 1;
        repeat (5) @(posedge clk);
        valid_in = 0;

        wait (valid_out);
        $display("Input: %0d (Q8.8), Output sqrt: %0d (Q8.8), Expected: %0d", x, x_sqrt, 10<<8);

        // Finish simulation
        repeat (5) @(posedge clk);
        $finish;
    end

endmodule
