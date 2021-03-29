`timescale 1ns/1ps

module testbench_305176399;
   reg [12:0] D;
   wire       S;
   wire [2:0] E;
   wire [4:0] F;

   reg [31:0] fails;
   
   FPCVT uut(.D(D), .S(S), .E(E), .F(F));
   
   task assert;
      input 	   Stest;
      input [2:0]  Etest;
      input [4:0]  Ftest;
      begin
	 #10;
	 if ((Stest == S) && (Etest == E) && (Ftest == F))
	   $display("Passed");
	 else begin
	    fails = fails + 1;
	    $display("Fail for D: %0b", D,
		     "\n\tS: %0b vs %0b", Stest, S,
		     "\n\tE: %0b vs %0b", Etest, E,
		     "\n\tF: %0b vs %0b", Ftest, F);
	 end
      end
   endtask
   
  
   initial begin
      D = 0;
      fails = 0;
      #100;

      // Basic
      #10 D = 0;
      assert('b0, 'b000, 'b00000);

      #10 D = 1;
      assert('b0, 'b000, 'b00001);

      #10 D = -1;
      assert('b1, 'b000, 'b00001);
		
      #10 D = 'b0000001101100; // 108
      assert('b0, 'b010, 'b11011);

      #10 D = 'b1111110010100; // -108
      assert('b1, 'b010, 'b11011);
      
		
		// Basic Rounding
      #10 D = 'b0000001101101; // 109, round down
      assert('b0, 'b010, 'b11011);

      #10 D = 'b1111110010011; // -109, round down
      assert('b1, 'b010, 'b11011);
      
      #10 D = 'b0000001101110; // 110, round up
      assert('b0, 'b010, 'b11100);

      #10 D = 'b1111110010010; // -110, round up
      assert('b1, 'b010, 'b11100);
      
      #10 D = 'b0000001101111; // 111, round up
      assert('b0, 'b010, 'b11100);

      #10 D = 'b1111110010001; // -111, round up
      assert('b1, 'b010, 'b11100);


      // Significand overflow
      #10 D = 'b0000011111101; // positive
      assert('b0, 'b100, 'b10000);

      #10 D = 'b1111100000011; // negative
      assert('b1, 'b100, 'b10000);


      // Exponent overflow
      #10 D = 'b0111111100000; // large positive
      assert('b0, 'b111, 'b11111);
      
      #10 D = 'b0111111111111; // most positive
      assert('b0, 'b111, 'b11111);

      #10 D = 'b1000000000001; // large negative
      assert('b1, 'b111, 'b11111);

      #10 D = 'b1000000000000; // most negative
      assert('b1, 'b111, 'b11111);

      #10 $display("Failures: %0d", fails);
      #10 $finish;
   end
endmodule // testbench_305176399
