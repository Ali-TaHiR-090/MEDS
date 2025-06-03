module exp_taylor #(
    parameter INT_WIDTH = 8,        // Integer part bit width
    parameter FRAC_WIDTH = 8,       // Fractional part bit width
    parameter TERMS = 8             // Number of Taylor series terms
)(
    input logic signed [INT_WIDTH+FRAC_WIDTH-1:0] x,  // Fixed-point input (Q format)
    output logic signed [INT_WIDTH+FRAC_WIDTH-1:0] result  // Fixed-point output
);

    // Total width for fixed-point calculations
    localparam TOTAL_WIDTH = INT_WIDTH + FRAC_WIDTH;
    
    // Internal registers for calculations
    logic signed [TOTAL_WIDTH-1:0] term [0:TERMS-1];
    logic signed [TOTAL_WIDTH-1:0] factorial [0:TERMS-1];
    logic signed [TOTAL_WIDTH-1:0] x_power [0:TERMS-1];
    logic signed [TOTAL_WIDTH-1:0] sum;
    
    // Factorial values pre-calculated (fixed-point representation)
    // Note: Factorials grow quickly, so we need to scale them appropriately
    always_comb begin
        factorial[0] = 1 << FRAC_WIDTH;  // 1.0 in fixed-point
        factorial[1] = 1 << FRAC_WIDTH;   // 1.0
        factorial[2] = 2 << FRAC_WIDTH;   // 2.0
        factorial[3] = 6 << FRAC_WIDTH;   // 6.0
        factorial[4] = 24 << FRAC_WIDTH;  // 24.0
        factorial[5] = 120 << FRAC_WIDTH; // 120.0
        // Add more if using more terms
    end
    
    // Calculate x^n terms
    always_comb begin
        x_power[0] = 1 << FRAC_WIDTH;  // x^0 = 1.0
        x_power[1] = x;                // x^1 = x
        for (int i = 2; i < TERMS; i++) begin
            // Fixed-point multiplication: x_power[i] = x_power[i-1] * x / (1 << FRAC_WIDTH)
            x_power[i] = (x_power[i-1] * x) >>> FRAC_WIDTH;
        end
    end
    
    // Calculate each term in the series: x^n / n!
    always_comb begin
        for (int i = 0; i < TERMS; i++) begin
            // Fixed-point division: term = x_power / factorial
            // For hardware, we might use a reciprocal lookup table for factorial
            term[i] = (x_power[i] << FRAC_WIDTH) / factorial[i];
        end
    end
    
    // Sum all terms
    always_comb begin
        sum = term[0];
        for (int i = 1; i < TERMS; i++) begin
            sum = sum + term[i];
        end
        result = sum;
    end

endmodule
