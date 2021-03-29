module clock_div_thirtytwo(input clk_in,
		    input rst,
		    output clk_div_32
		    );
   reg [3:0] 			     a;
   reg 				     c;
   
   // Counter counts from 0 to 15 (decimal)
   assign clk_div_32 = c;
   
   always @ (posedge clk_in) begin
      if (rst) begin
	 a <= 4'b0000;
	 c <= 0;
      end
      else if (a == 4'b1111) begin
	 c <= ~c;
	 a <= a + 1'b1;
      end else
	a <= a + 1'b1;
   end
endmodule // clock_div_thirtytwo
