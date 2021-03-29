module odd_div_testbench;
   reg clk_in;
   reg rst;
   wire odd_pos;
   wire odd_neg;
   wire odd_or;

   odd_div uut(.clk_in(clk_in), .rst(rst), 
	       .odd_pos(odd_pos), .odd_neg(odd_neg),
	       .odd_or(odd_or));
   
   // 100 MHz clock (100 MHz = 1/10ns)
   always #5 clk_in = ~clk_in;

   initial begin
      // initialize
      clk_in = 1;
      rst = 1;
      #100 rst = 0;

      #1000 $finish;
   end
endmodule // odd_div_testbench
