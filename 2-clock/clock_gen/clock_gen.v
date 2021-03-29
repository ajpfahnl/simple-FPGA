module clock_gen(
		 input clk_in,
		 input rst,
		 input clk_div_2,
		 input clk_div_4,
		 input clk_div_8,
		 input clk_div_16,
		 input clk_div_28,
		 input clk_div_5,
		 output [7:0] toggle_counter
		 );
   clock_div_two task_one(
			  .clk_in (clk_in),
			  .rst (rst),
			  .clk_div_2 (clk_div_2),
			  .clk_div_4 (clk_div_4),
			  .clk_div_8 (clk_div_8),
			  .clk_div_16 (clk_div_16)
			  );
   clock_div_twenty_eight task_two(
				   .clk_in (clk_in),
				   .rst (rst),
				   .clk_div_28 (clk_div_28)
				   );
   clock_div_5 task_three(
			  .clk_in (clk_in),
			  .rst (rst),
			  .clk_div_5 (clk_div_5)
			  );
   clock_strobe task_four(
			  .clk_in (clk_in),
			  .rst (rst),
			  .toggle_counter (toggle_counter)
			  );
endmodule; // clock_gen

module clock_div_two(
		     clk_in, 
		     rt, 
		     clk_div_2,
		     clk_div_4,
		     clk_div_8,
		     clk_div_16);
endmodule; // clock_div_two

module clock_div_twenty_eight(
			      clk_in,
			      rst,
			      clk_div_28
			      );
endmodule; // clock_div_twenty_eight

module clock_div_five(
		      clk_in,
		      rst,
		      clk_div_5);
endmodule; // clock_div_five

module clock_strobe(
		    clk_in,
		    rst,
		    toggle_counter
		    );
endmodule; // clock_strobe