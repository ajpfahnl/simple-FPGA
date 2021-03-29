module vending_machine(input CLK,
		       input RESET,
		       input RELOAD,
		       input CARD_IN,
		       input [3:0] ITEM_CODE,
		       input KEY_PRESS,
		       input VALID_TRAN,
		       input DOOR_OPEN,
		       output reg VEND,
		       output reg INVALID_SEL,
		       output reg [2:0] COST,
		       output reg FAILED_TRAN
		       );
   reg [3:0] 		      current_state;
   reg [3:0] 		      next_state;

   reg [3:0] 		      counters [19:0];
   reg [3:0] 		      num1;
   reg [3:0] 		      num2; 		      
   reg 			      DOOR_CYCLED;
   reg 			      DOOR_OPENED; 			      

   parameter IDLE = 4'd0;
   parameter RELOADING = 4'd1;
   parameter CODE1 = 4'd2;
   parameter CODE2 = 4'd3;
   parameter TRANSACT = 4'd4;
   parameter VENDING = 4'd5;
   parameter RESETTING = 4'd6;

   reg [2:0] 		      TIMER;
   reg 			      TIMEOUT;
 
   reg [4:0] 		      index;
   reg 			      decremented;
   reg [8:0] 		      tmp; 
   
   // update state
   always@ (posedge CLK) begin
      if (RESET)
	current_state <= RESETTING;
      else
	current_state <= next_state;
   end

   // decide next state
   always @(*)
     case(current_state)
       RESETTING: begin
	  if (RESET)
	    next_state = RESET;
	  else
	    next_state = IDLE;
       end
       IDLE: begin
	  if (RELOAD) begin
	     next_state = RELOADING;
	  end
	  else if (CARD_IN)
	    next_state = CODE1;
	  else
	    next_state = IDLE;
       end
       RELOADING: begin
	  next_state = IDLE;
       end
       CODE1: begin
	  if (KEY_PRESS) begin
	     next_state = CODE2;
	  end
	  else if (!KEY_PRESS && TIMEOUT)
	    next_state = IDLE;
	  else
	    next_state = CODE1;
       end
       CODE2: begin
	  if (KEY_PRESS) begin
	     next_state = TRANSACT;;
	  end
	  else if (!KEY_PRESS && TIMEOUT)
	    next_state = IDLE;
	  else
	    next_state = CODE2;
       end
       TRANSACT: begin
	  if (INVALID_SEL || (!VALID_TRAN && TIMEOUT))
	    next_state = IDLE;
	  else if (VALID_TRAN) begin
	     next_state = VENDING;
	  end else
	    next_state = TRANSACT;
       end
       VENDING: begin
	  if (DOOR_CYCLED) begin
	     next_state = IDLE;
	  end else if (TIMEOUT)
	    next_state = IDLE;
	  else
	    next_state = VENDING;
       end
       default: begin
	  next_state = IDLE;
       end
     endcase // case (current_state)

   
   // sequential logic
   always @(posedge CLK) begin
      case (current_state)
	RESETTING: begin
	   for(i=0; i<=5'd19; i=i+5'b1) begin
	      counters[i] <= 0;
	   end
	   COST <= 0;
	end
	IDLE: begin
	   decremented <= 0;
	end
	RELOADING: begin
	   for(i=0; i<=5'd19; i=i+5'b1) begin
	      counters[i] <= 4'd10;   
	   end
	end
	TRANSACT: begin
	   if (!INVALID_SEL)
	     COST <= find_cost(num1, num2);
	end
	VENDING: begin
	   if (!decremented) begin
	      counters[index] <= counters[index] - 1'b1;
	      decremented <= 1'b1;
	   end
	end
   end
   
   // decide outputs
   reg [4:0] 		      i;
   always @(*) begin
      VEND = 0;
      INVALID_SEL = 0;
      FAILED_TRAN = 0;
      DOOR_CYCLED = 0;
      DOOR_OPENED = 0;
            
      tmp = num1*10;
      index = num2 + tmp[4:0];
      
      case (current_state)
	RESETTING: begin
	   INVALID_SEL = 0;
	   FAILED_TRAN = 0;

	end
	IDLE: begin
	   INVALID_SEL = 0;
	   FAILED_TRAN = 0;
	   DOOR_CYCLED = 0;
	   DOOR_OPENED = 0;
	end
	CODE1: begin
	   num1 = ITEM_CODE;
 	   if ((num1 != 4'd0) && (num1 != 4'd1)) begin
	      INVALID_SEL = 1'b1;
	   end
	end
	CODE2: begin
	   num2 = ITEM_CODE;
	   if (num2 > 4'd9) begin
	      INVALID_SEL = 1'b1;
	   end else if (counters[index] == 0) begin
	      INVALID_SEL = 1'b1;
	   end
	end
	TRANSACT: begin
	   if (!VALID_TRAN && TIMEOUT)
	     FAILED_TRAN = 1'b1;
	end
	VENDING: begin
	   VEND = 1;
	   if (DOOR_OPEN == 1'b1)
	     DOOR_OPENED = 1'b1;
	   else if (DOOR_OPENED && (DOOR_OPEN == 0))
	     DOOR_CYCLED = 1'b1;
	end
      endcase // case (current_state)
   end
   
   // timer
   always@ (posedge CLK) begin
      if (next_state != current_state) begin
	TIMER = 0;
	TIMEOUT = 0;
      end else if (TIMER == 3'd4)
	TIMEOUT = 1;
      else
	TIMER = TIMER + 3'b1;
   end

   function [2:0] find_cost (input [3:0] num1, num2);
      begin
	 if (num1 == 4'd0) begin
	    if ((num2 >= 4'd0) && (num2 <= 4'd3))
	      find_cost = 3'd1;
	    else if ((num2 >= 4'd4) && (num2 <= 4'd7))
	      find_cost = 3'd2;
	    else
	      find_cost = 3'd3;
	 end
	 else begin // num1 == 1
	    if ((num2 >= 4'd0) && (num2 <= 4'd1))
	      find_cost = 3'd3;
	    else if ((num2 >= 4'd2) && (num2 <= 4'd5))
	      find_cost = 3'd4;
	    else if ((num2 >= 4'd6) && (num2 <= 4'd7))
	      find_cost = 3'd5;
	    else
	      find_cost = 3'd6;
	 end
      end
   endfunction // find_cost
endmodule // vending_machine
