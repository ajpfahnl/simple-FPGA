`timescale 1ms/100us
module testbench_305176399;
   reg add1, add2, add3, add4, rst1, rst2, clk, rst;
   wire [6:0] led_seg;
   wire       a1, a2, a3, a4;
   wire [3:0] val1, val2, val3, val4;
   
   parking_meter uut(.add1(add1),
		     .add2(add2),
		     .add3(add3),
		     .add4(add4),
		     .rst1(rst1),
		     .rst2(rst2),
		     .clk(clk),
		     .rst(rst),
		     .led_seg(led_seg),
		     .a1(a1),
		     .a2(a2),
		     .a3(a3),
		     .a4(a4),
		     .val1(val1),
		     .val2(val2),
		     .val3(val3),
		     .val4(val4)
		     );

   // 100 Hz clock (10 ms cycle)
   always #5 clk = ~clk;

   task global_reset(); 
      begin
	 add1=0; add2=0; add3=0; add4=0;
	 rst1=0; rst2=0;
	 clk=0;
	 rst=1;
	 #100;
	 rst=0;
	 #1000;
      end
   endtask

   // sim
   initial begin
      global_reset();
      add1 = 1;
      #10 add1 = 0;
      #65000;
      
      global_reset();
      add2 = 1;
      #10 add2 = 0;
      #120000;

      global_reset();
      add3 = 1;
      #10 add3 = 0;
      #120000;

      global_reset();
      add4 = 1;
      #10 add4 = 0;
      #130000;

      global_reset();
      add4 = 1;
      #10 add4 = 0;
      #3990;
      rst1 = 1;
      #10 rst1 = 0;
      #3990;
      rst2 = 1;
      #10 rst2 = 0;
      #3990;

      global_reset();
      add4=1;
      #1000 add4=0;
      #1000;
      
      
      $finish;
   end
   
endmodule // testbench_305176399
