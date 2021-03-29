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
   reg 			      INVALID_SEL_DETECT;
   reg 			      CODE1_STORED;
   reg 			      CODE2_STORED;			      

   parameter IDLE = 4'd0;
   parameter RELOADING = 4'd1;
   parameter CODE1 = 4'd2;
   parameter CODE2 = 4'd3;
   parameter TRANSACT = 4'd4;
   parameter VENDING = 4'd5;
   parameter RESETTING = 4'd6;

   reg [2:0] 		      TIMER;
   reg 			      TIMEOUT;
   reg [3:0] 		      timer_state;			      
 
   reg [4:0] 		      index;
   reg 			      decremented;
   reg [8:0] 		      tmp; 
   
   // update state
   always@ (posedge CLK) begin
      if (RESET) begin
	 current_state = RESETTING;
	 TIMER = 0;
	 TIMEOUT = 0;
      end else begin
	 TIMER = TIMER + 3'b1;
	 if (next_state != current_state) begin
	    TIMER = 0;
	    TIMEOUT = 0;
	 end else if (TIMER == 3'd5) begin
	    TIMEOUT = 1;
	 end
	 current_state = next_state;
      end
   end

   // decide next state
   always @(*) begin
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
	  next_state = RELOADING;
	  if (!RELOAD)
	    next_state = IDLE;
       end
       CODE1: begin
	  if (CODE1_STORED) begin
	     next_state = CODE2;
	  end
	  else if (!KEY_PRESS && TIMEOUT)
	    next_state = IDLE;
	  else
	    next_state = CODE1;
       end
       CODE2: begin
	  if (CODE2_STORED) begin
	     next_state = TRANSACT;
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
	  if (DOOR_OPEN) begin
	     next_state = VENDING;
	  end else if (DOOR_CYCLED) begin
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
   end

   // comb decisions
   always @(*) begin
      VEND = 0;
      INVALID_SEL = 0;
      FAILED_TRAN = 0;
      COST = 0;
      DOOR_CYCLED = 0;
      case (current_state)
	CODE1: begin
	   if (!KEY_PRESS && TIMEOUT)
	     INVALID_SEL = 1'b1;
	end
	CODE2: begin
	   if (!KEY_PRESS && TIMEOUT)
	     INVALID_SEL = 1'b1;
	end
	TRANSACT: begin
	   if (INVALID_SEL_DETECT)
	     INVALID_SEL = 1'b1;
	   else if (!VALID_TRAN && TIMEOUT)
	     FAILED_TRAN = 1'b1;
	   else begin
	      COST = find_cost(num1, num2);
	   end
	end
	VENDING: begin
	   VEND = 1'b1;
	   if (!DOOR_OPEN && TIMEOUT)
	     VEND = 0;
	   COST = find_cost(num1, num2);
	end
      endcase // case (current_state)
      if (DOOR_OPENED && (DOOR_OPEN == 0))
	DOOR_CYCLED = 1'b1;
   end
   
   // seq decisions
   reg [4:0] 		      i;
   always @(posedge CLK) begin
      case (current_state)
	RESETTING: begin
	   for(i=0; i<=5'd19; i=i+5'b1) begin
	      counters[i] = 0;
	   end
	end
	IDLE: begin
	   DOOR_OPENED = 0;
	   decremented = 0;
	   INVALID_SEL_DETECT = 0;
	   CODE1_STORED = 0;
	   CODE2_STORED = 0;
	end
	RELOADING: begin
	   for(i=0; i<=5'd19; i=i+5'b1) begin
	      counters[i] = 4'd10;   
	   end
	end
	CODE1: begin
	   if (KEY_PRESS) begin
	      num1 = ITEM_CODE;
 	      if ((num1 != 4'd0) && (num1 != 4'd1)) begin
		 INVALID_SEL_DETECT = 1'b1;
	      end
	      CODE1_STORED = 1'b1;
	   end
	end
	CODE2: begin
	   if (KEY_PRESS) begin
	      num2 = ITEM_CODE;
	      tmp = num1*10;
	      index = num2 + tmp[4:0];
	      if (num2 > 4'd9) begin
		 INVALID_SEL_DETECT = 1'b1;
	      end else if (counters[index] == 0) begin
		 INVALID_SEL_DETECT = 1'b1;
	      end
	      CODE2_STORED = 1'b1;
	   end
	end
	VENDING: begin
	   if (!decremented) begin
	      counters[index] = counters[index] - 1'b1;
	      decremented = 1'b1;
	   end
	   if (DOOR_OPEN == 1'b1)
	     DOOR_OPENED = 1'b1;
	end
      endcase // case (current_state)
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
