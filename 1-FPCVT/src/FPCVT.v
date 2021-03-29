module twos2SignMag(input [12:0] D,
		    output reg S,
		    output reg [12:0] mag);
   always @* begin
      S = D[12];
      mag = D;
      if (S) begin
	 mag = ~mag + 1'b1;
	 // check if most negative number (which overflows
	 // into sign bit)
	 // convert to a very large number
	 if (mag[12])
	   mag = mag | 13'h1FFF;
      end
   end
endmodule // twos2SignMag

module basicLin2FP(input [12:0] mag,
		   output reg [2:0] E,
		   output reg [4:0] F,
		   output reg R);
   reg [12:0] 		      tmp;
   
   // Use priority encoder to count leading zeroes
   // from 1 to greater than 8
   // Shift right by the count to get the significand
   always @* begin
      if (mag[11])
	E = 7;
      else if (mag[10])
	E = 6;
      else if (mag[9])
	E = 5;
      else if (mag[8])
	E = 4;
      else if (mag[7])
	E = 3;
      else if (mag[6])
	E = 2;
      else if (mag[5])
	E = 1;
      else
	E = 0;

      // store bit after the significand if possible
      // and right shift to create significand
      R = 0;
      if (E > 0) begin
	 tmp = mag >> (E-1);
	 R = tmp[0];
	 tmp = mag >> E;
	 F = tmp[4:0];
      end else begin
	 R = 0;
	 F = mag[4:0];
      end
   end
endmodule // basicLin2FP

module rounder(input [2:0] Ein,
	       input [4:0] Fin,
	       input R,
	       output reg [2:0] E,
	       output reg [4:0] F);
   
   
   always @* begin
      F = Fin;
      E = Ein;
      // round if R is set
      if (R) begin
	 F = F + 1'b1;
	 // if overflow, add one to exponent and
	 // shift significand right (also tack
	 // on 1 to the MSB since we lost the
	 // overflow bit)
	 if (Fin >= F) begin
	    E = E + 1'b1;
	    F = F >> 1;
	    F[4] = 1;
	    // if exponent overflow, use largest
	    // possible floating point representation
	    if (Ein >= E) begin
	       E = 'b111;
	       F = 'b11111;
	    end
	 end
      end
   end
endmodule // rounder

module FPCVT(input [12:0] D, 
	     output wire S, 
	     output wire [2:0] E, 
	     output wire [4:0] F);

   wire [12:0] 		      b1mag;
   wire [2:0] 		      b2E;
   wire [4:0] 		      b2F;
   wire 		      b2R;
 		      
   twos2SignMag block1(.D(D), .S(S), .mag(b1mag));
   basicLin2FP block2(.mag(b1mag), .E(b2E), .F(b2F), .R(b2R));
   rounder block3(.Ein(b2E), .Fin(b2F), .R(b2R), .E(E), .F(F));  
   
endmodule // FPCVT
