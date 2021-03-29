`timescale 1ns/1ns

module pulse_testbench;
   reg clk_in;
   reg rst;
   wire clk_div_100;
   wire clk_div_200;

   pulse uut(.clk_in(clk_in), .rst(rst),
	     .clk_div_100(clk_div_100), .clk_div_200(clk_div_200));
   
   // 100 MHz clock (100 MHz = 1/10ns)
   always #5 clk_in = ~clk_in;

   initial begin
      // initialize
      clk_in = 1;
      rst = 1;
      #100 rst = 0;

      #4100 $finish;
   end
endmodule // pulse_testbench
