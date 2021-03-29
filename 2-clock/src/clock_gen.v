module clock_gen(input clk_in,
		 input rst,
		 output clk_div_2,
		 output clk_div_4,
		 output clk_div_8,
		 output clk_div_16,
		 output clk_div_28,
		 output clk_div_5,
		 output [7:0] toggle_counter
		 );
   clock_div_two task_one(.clk_in (clk_in),
			  .rst (rst),
			  .clk_div_2 (clk_div_2),
			  .clk_div_4 (clk_div_4),
			  .clk_div_8 (clk_div_8),
			  .clk_div_16 (clk_div_16)
			  );
   clock_div_twenty_eight task_two(.clk_in (clk_in),
				   .rst (rst),
				   .clk_div_28 (clk_div_28)
				   );

   clock_div_five task_three(.clk_in (clk_in),
			  .rst (rst),
			  .clk_div_5 (clk_div_5)
			  );

   clock_strobe task_four(.clk_in (clk_in),
			  .rst (rst),
			  .toggle_counter (toggle_counter)
			  );
   
endmodule // clock_gen

module clock_div_two(input clk_in, 
		     input rst, 
		     output clk_div_2,
		     output clk_div_4,
		     output clk_div_8,
		     output clk_div_16);
   reg [3:0] 		    a;
   
   assign clk_div_2 = a[0];
   assign clk_div_4 = a[1];
   assign clk_div_8 = a[2];
   assign clk_div_16 = a[3];
   
   always @ (posedge clk_in) begin
      if (rst)
	a <= 4'b0000;
      else
	a <= a + 1'b1;
   end
endmodule // clock_div_two

module clock_div_twenty_eight(input clk_in,
			      input rst,
			      output clk_div_28
			      );
   reg [3:0] 			     a;
   reg 				     c;
   
   // Counter counts from 0 to 13 (decimal)
   assign clk_div_28 = c;
   
   always @ (posedge clk_in) begin
      if (rst) begin
	 a <= 4'b0000;
	 c <= 0;
      end
      else if (a == 4'b1101) begin
	 c <= ~c;
	 a <= 4'b0000;
      end else
	a <= a + 1'b1;
   end
endmodule // clock_div_twenty_eight

module clock_div_five(input clk_in,
		      input rst,
		      output clk_div_5);
   reg [2:0] 		     a;
   wire 		     pos;
   reg 			     neg;

   // 50% duty cycle divide-by-5 clock
   always @ (posedge clk_in) begin
      if (rst)
	a <= 0;
      else if (a == 3'd4)
	a <= 0;
      else
	a <= a + 1'b1;
   end

   assign pos = a[1];

   always @ (negedge clk_in) begin
      neg <= pos;
   end

   assign clk_div_5 = pos | neg;
endmodule // clock_div_five

module clock_strobe(input clk_in,
		    input rst,
		    output [7:0] toggle_counter
		    );
   reg [7:0] 			 tc;
   reg [1:0] 			 a;
   
   always @ (posedge clk_in) begin
      if (rst) begin
	 a <= 0;
	 tc <= 0;
      end else if (a == 2'b11) begin
	 a <= 0;
	 tc <= tc - 8'd5;
      end else begin
	 a <= a + 2'b1;
	 tc <= tc + 8'd2;
      end
   end

   assign toggle_counter = tc;
   
endmodule // clock_strobe