module exp_taylor_tb #() ();

	logic signed [15:0]x, result;

	exp_taylor dut (
		.x(x),
		.result(result)
		);

	initial begin
		x = 2;
		#100;

		x = 0;
		#100;
		
		x = 4;
		#100;
		
		$finish;

	end


endmodule
