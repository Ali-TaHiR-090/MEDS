module sqrt_binary_search #(
    parameter INT_WIDTH = 8,        // Integer part bit width
    parameter FRAC_WIDTH = 8,       // Fractional part bit width
    parameter ITERATIONS = 16       // Number of iterations (precision)
)(
    input logic clk,
    input logic start,              // Start calculation
    input logic signed [INT_WIDTH+FRAC_WIDTH-1:0] x,  // Input in Q format
    output logic signed [INT_WIDTH+FRAC_WIDTH-1:0] sqrt,  // Square root result
    output logic busy,              // Calculation in progress
    output logic valid              // Result is valid
);

    // Total width for calculations
    localparam TOTAL_WIDTH = INT_WIDTH + FRAC_WIDTH;
    
    // Internal registers
    logic [TOTAL_WIDTH-1:0] x_reg;      // Registered input
    logic [TOTAL_WIDTH-1:0] low, high;  // Binary search bounds
    logic [TOTAL_WIDTH-1:0] mid;        // Midpoint
    logic [TOTAL_WIDTH-1:0] mid_sq;     // Midpoint squared
    logic [4:0] iteration;              // Current iteration count
    
    // FSM states
    typedef enum {IDLE, SEARCH, DONE} state_t;
    state_t state;
    
    // Fixed-point multiplication helper
    function [TOTAL_WIDTH*2-1:0] fp_mult(
        input [TOTAL_WIDTH-1:0] a,
        input [TOTAL_WIDTH-1:0] b
    );
        fp_mult = a * b;  // Full precision multiplication
    endfunction
    
    always_ff @(posedge clk) begin
        case (state)
            IDLE: begin
                valid <= 0;
                busy <= 0;
                if (start) begin
                    x_reg <= x;
                    low <= 0;
                    high <= x;  // sqrt(x) <= x for x >= 1
                    iteration <= 0;
                    busy <= 1;
                    state <= SEARCH;
                end
            end
            
            SEARCH: begin
                // Calculate midpoint (fixed-point average)
                mid = (low + high) >> 1;
                
                // Calculate mid^2 (with proper fixed-point scaling)
                mid_sq = fp_mult(mid, mid) >> FRAC_WIDTH;
                
                // Update search bounds
                if (mid_sq < x_reg) begin
                    low <= mid;
                end else begin
                    high <= mid;
                end
                
                // Check termination condition
                if (iteration == ITERATIONS-1) begin
                    sqrt <= mid;
                    valid <= 1;
                    busy <= 0;
                    state <= DONE;
                end else begin
                    iteration <= iteration + 1;
                end
            end
            
            DONE: begin
                valid <= 0;
                state <= IDLE;
            end
        endcase
    end
endmodule