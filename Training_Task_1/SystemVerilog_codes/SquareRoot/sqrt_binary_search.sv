module sqrt_binary_search (
    input  logic        clk,
    input  logic        valid_in,
    input  logic [15:0] x,
    output logic [15:0] x_sqrt,
    output logic        valid_out
);

    typedef enum logic [1:0] {IDLE, PROCESSING, DONE} state_t;
    state_t c_state = IDLE, n_state = IDLE;
    localparam ITERATIONS = 16;

    logic 		   [15:0] low, high, mid;
    logic 		   [15:0] x_reg;
    logic unsigned [4:0]  iterations;

    always_ff @(posedge clk) begin
        c_state <= n_state;
        case (c_state)
            IDLE: begin
                valid_out <= 0;
                iterations <= 0;
                if (valid_in) begin
                    x_reg <= x;
                    high <= x;
                    low <= 0;
                    mid <= x >> 1;
                    n_state <= PROCESSING;
                end else begin
                    n_state <= IDLE;
                    x_reg <= 0;
                end
            end

            PROCESSING: begin
                iterations <= iterations + 1;
                if (iterations > ITERATIONS || ((mid * mid) >> 8) == x_reg) begin
                    n_state <= DONE;
                end else begin
                    n_state <= PROCESSING;
                    if (((mid * mid) >> 8) < x_reg) begin
                        low <= mid;
                    end else begin 
                        high <= mid;
                    end
                    mid <= (high + low) >> 1;
                end
            end    

            DONE: begin 
                valid_out <= 1;
                x_sqrt <= mid;
                n_state <= IDLE;
            end
        endcase
    end

endmodule

