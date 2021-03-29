module parking_meter(input add1,
		     input add2,
		     input add3,
		     input add4,
		     input rst1,
		     input rst2,
		     input clk,
		     input rst,
		     output reg [6:0] led_seg,
		     output a1, 
		     output a2,
		     output a3,
		     output a4,
		     output [3:0] val1,
		     output [3:0] val2,
		     output [3:0] val3,
		     output [3:0] val4
		     );
   reg [3:0] 			      a;

   parameter INITIAL = 2'd0;
   parameter ONE = 2'd1;
   parameter TWO = 2'd2;

   reg [1:0] 			      current_state;
   reg [1:0] 			      next_state;

   reg [13:0] 			      counter;

   // resets and state transition
   always@ (posedge clk) begin
      if (rst)
	current_state <= INITIAL;
      else if (rst1 || rst2)
	current_state <= ONE;
      else
	current_state <= next_state;
   end

   // next_state
   always @(*) begin
      case (current_state)
	INITIAL: begin
	   if (add4) begin
	      next_state = ONE;
	   end else if (add1 || add2 || add3) begin
	      next_state = TWO;
	   end else begin
	      next_state = INITIAL; end
	end
	ONE: begin
	   if (counter <= 14'd180) begin
	      next_state = TWO;
	   end else
	     next_state = ONE;
	end
	TWO: begin
	   if (counter > 14'd180) begin
	      next_state = ONE;
	   end else if (counter == 0) begin
	      next_state = INITIAL;
           end else begin
	      next_state = TWO;
	   end
	end
	default:
	  next_state = INITIAL;
      endcase // case (current_state)
   end

   reg [14:0] sec1;
   
   // counter
   always @(posedge clk) begin
      if (add1) begin
	 counter = ((counter + 14'd60) > 14'd9999) ? 14'd9999 : (counter + 14'd60);
	 sec1 = 0;
      end else if (add2) begin
	 counter = ((counter + 14'd120) > 14'd9999) ? 14'd9999 : (counter + 14'd120);
	 sec1 = 0;
      end else if (add3) begin
	 counter = ((counter + 14'd180) > 14'd9999) ? 14'd9999 : (counter + 14'd180);
	 sec1 = 0;
      end else if (add4) begin
	 counter = ((counter + 14'd300) > 14'd9999) ? 14'd9999 : (counter + 14'd300);
	 sec1 = 0;
      end else if (rst) begin
	 counter = 0;
	 sec1 = 0;
      end else if (rst1) begin
	 counter = 14'd16;
	 sec1 = 0;
      end else if (rst2) begin
	 counter = 14'd150;
	 sec1 = 0;
      end else begin
	 if ((counter != 0) && (sec1 == 14'd99)) begin
	    counter = counter - 14'd1;
	    sec1 = 0;
	 end else if (!rst) begin
	    counter = counter;
	    sec1 = sec1 + 14'd1;
	 end else begin
	    counter = 0;
	    sec1 = 0;
	 end
      end
   end

   // BCD output
   assign val1 = counter % 10;
   assign val2 = (counter/10) % 10;
   assign val3 = (counter/100) % 10;
   assign val4 = (counter/1000) % 10;

   // Display outputs
   reg [6:0] cath1;
   reg [6:0] cath2;
   reg [6:0] cath3;
   reg [6:0] cath4;

   // -- Cathodes
   always @(*) begin
      cath1 = find_cath(val1);
      cath2 = find_cath(val2);
      cath3 = find_cath(val3);
      cath4 = find_cath(val4);
   end

   function [6:0] find_cath (input [3:0] val);
      begin
	 find_cath = 7'b0000001;
	 case (val)
	   0: find_cath = 7'b0000001;
	   1: find_cath = 7'b1001111;
           2: find_cath = 7'b0010010;
           3: find_cath = 7'b0000110;
           4: find_cath = 7'b1001100;
           5: find_cath = 7'b0100100;
           6: find_cath = 7'b0100000;
           7: find_cath = 7'b0001111;
           8: find_cath = 7'b0000000;
           9: find_cath = 7'b0001100;
	 endcase // case (val)
      end
   endfunction // find_cath

   // -- Anodes and Scanning Display
   reg [3:0] anodes;
   reg [1:0] digI;
   reg [14:0] fast_cycle;
   reg [14:0] slow_cycle;

   assign a1 = anodes[0];
   assign a2 = anodes[1];
   assign a3 = anodes[2];
   assign a4 = anodes[3];
      
   always @(posedge clk) begin
      if (rst) begin
	 digI <= 0;
	 anodes <= 4'b1111;
	 led_seg <= 7'b0000001;
	 slow_cycle <= 0;
	 fast_cycle <= 0;
      end else begin
	 // timer and digit increments
	 if (rst1 || rst2 || add1 || add2 || add3 || add4) begin
	    slow_cycle <= 0;
	    fast_cycle <= 0;
	 end
	 else begin
	    if (slow_cycle == 15'd199)
	      slow_cycle <= 0;
	    else
	      slow_cycle <= slow_cycle + 1'b1;
	    if (fast_cycle == 15'd99)
	      fast_cycle <= 0;
	    else
	      fast_cycle <= fast_cycle + 1'b1;
	    digI <= digI + 1'b1;
	 end

	 // default states (no display)
	 anodes <= 4'b1111;
	 led_seg <= 7'b1111111;

	 // conditions for displaying
	 case (current_state)
	   TWO: begin
	      if (slow_cycle < 100) begin
		 case (digI)
		   0: begin
		      anodes <= 4'b1110;
		      led_seg <= cath4;
		   end
		   1: begin
		      anodes <= 4'b1101;
		      led_seg <= cath3;
		   end
		   2: begin
		      anodes <= 4'b1011;
		      led_seg <= cath2;
		   end
		   3: begin
		      anodes <= 4'b0111;
		      led_seg <= cath1;
		   end
		 endcase // case (digI)
	      end
	   end
	   default: begin
	      if (fast_cycle < 50) begin
		 case (digI)
		   0: begin
		      anodes <= 4'b1110;
		      led_seg <= cath4;
		   end
		   1: begin
		      anodes <= 4'b1101;
		      led_seg <= cath3;
		   end
		   2: begin
		      anodes <= 4'b1011;
		      led_seg <= cath2;
		   end
		   3: begin
		      anodes <= 4'b0111;
		      led_seg <= cath1;
		   end
		 endcase // case (digI)
	      end
	   end
	 endcase // case (current_state)
      end
   end
endmodule // parking_meter