module clock_div_thirtytwo_testbench;
   reg clk_in;
   reg rst;

   wire clk_div_32;
   clock_div_thirtytwo uut(.clk_in(clk_in), .rst(rst), .clk_div_32(clk_div_32));
   
   // 100 MHz clock (100 MHz = 1/10ns)
   always #5 clk_in = ~clk_in;

   initial begin
      // initialize
      clk_in = 1;
      rst = 1;
      #100 rst = 0;

      #1000 $finish;
   end
   
endmodule // testbench_verify