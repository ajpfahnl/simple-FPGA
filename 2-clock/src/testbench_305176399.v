`timescale 1ns/1ps

module testbench_305176398;
   reg clk_in;
   reg rst;
   
   wire clk_div_2;
   wire clk_div_4;
   wire clk_div_8;
   wire clk_div_16;
   wire clk_div_28;
   wire clk_div_5;
   wire [7:0] toggle_counter;
   
   clock_gen uut(.clk_in(clk_in),
		 .rst(rst),
		 .clk_div_2(clk_div_2),
		 .clk_div_4(clk_div_4),
		 .clk_div_8(clk_div_8),
		 .clk_div_16(clk_div_16),
		 .clk_div_28(clk_div_28),
		 .clk_div_5(clk_div_5),
		 .toggle_counter(toggle_counter)
		 );
   
   // 100 MHz clock (100 MHz = 1/10ns)
   always #5 clk_in = ~clk_in;

   initial begin
      // initialize
      clk_in = 1;
      rst = 1;
      #100 rst = 0;

      #1000 $finish;
   end
   
   
endmodule // testbench_305176398
