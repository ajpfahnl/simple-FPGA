module pulse(input clk_in,
	     input rst,
	     output clk_div_100,
	     output clk_div_200
	     );
   reg [7:0] 	    a;
   reg 		    r200;

   always @ (posedge clk_in) begin
      if (rst) begin
	 a <= 8'd29;
      end else if (a == 8'd128) begin
	 a <= 8'd29;
      end else
	a <= a + 1;
   end

   assign clk_div_100 = a[7];

   always @ (posedge clk_in) begin
      if (rst)
	r200 <= 0;
      else if (clk_div_100)
	r200 <= ~clk_div_200;
   end

   assign clk_div_200 = r200;
   
endmodule // pulse