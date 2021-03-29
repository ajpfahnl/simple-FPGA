module odd_div(input clk_in,
	       input rst,
	       output odd_pos,
	       output odd_neg,
	       output odd_or);

   reg [1:0] 	      a;
   wire 	      pos;
   reg 		      neg;	      
   
   always @ (posedge clk_in) begin
      if (rst)
	a <= 0;
      else if (a == 2'd2)
	a <= 0;
      else
	a <= a + 1;
   end

   assign pos = a[1];

   always @ (negedge clk_in) begin
      neg <= pos;
   end
   assign odd_pos = pos;
   assign odd_neg = neg;
   assign odd_or = pos | neg;
endmodule // odd_div
