`timescale 1ns/1ns

module testbench_305176399;
   reg CLK;
   reg RESET;
   reg RELOAD;
   reg CARD_IN;
   reg [3:0] ITEM_CODE;
   reg 	     KEY_PRESS;
   reg 	     VALID_TRAN;
   reg 	     DOOR_OPEN;
   wire      VEND;
   wire      INVALID_SEL;
   wire [2:0] COST;
   wire       FAILED_TRAN;

   integer test_num;

   integer i;
   
   vending_machine uut(.CLK(CLK),
		       .RESET(RESET),
		       .RELOAD(RELOAD),
		       .CARD_IN(CARD_IN),
		       .ITEM_CODE(ITEM_CODE),
		       .KEY_PRESS(KEY_PRESS),
		       .VALID_TRAN(VALID_TRAN),
		       .DOOR_OPEN(DOOR_OPEN),
		       .VEND(VEND),
		       .INVALID_SEL(INVALID_SEL),
		       .COST(COST),
		       .FAILED_TRAN(FAILED_TRAN),
		       );

   task reset_in();
      begin
	 CARD_IN = 0;
	 ITEM_CODE = 0;
	 KEY_PRESS = 0;
	 VALID_TRAN = 0;
	 RELOAD = 0;
	 DOOR_OPEN = 0;
      end
   endtask // reset_in

   task reset_n_load();
      begin
	 RESET = 1; reset_in(); #10 RESET = 0; #10 RELOAD = 1; #10 RELOAD = 0;
      end
   endtask

   task vend_cycle(input [3:0] code1, code2);
      begin
	 #10 CARD_IN=1;
	 #10 ITEM_CODE = code1; KEY_PRESS = 1;
	 #10 KEY_PRESS = 0;
	 #10 ITEM_CODE = code2; KEY_PRESS = 1;
	 #10 KEY_PRESS = 0; 
	 #10 VALID_TRAN = 1; CARD_IN = 0;
	 #10 DOOR_OPEN = 1;
	 #10 DOOR_OPEN = 0;
	 #10;
	 
      end
   endtask // good_vend_cycle
      
   // 100 MHz clock
   always #5 CLK = ~CLK;

   // print outputs going high
   always begin
      #5 if (INVALID_SEL)
	$display("\t INVALID_SEL");
      if (FAILED_TRAN)
	$display("\t FAILED_TRAN");
      //if (VEND)
	// $display("\t VEND");
      #5;
   end

   // simulation
   initial begin
      test_num=0;
      CLK = 1;
      RESET = 1;
      #5 reset_in();
      #90 RESET = 0;

      #10 $display(">> TEST: no reload -> INVALID_SEL"); test_num=1;
      CARD_IN = 1;
      #10 ITEM_CODE = 4'd1; KEY_PRESS = 1;
      #10 KEY_PRESS = 0;
      #10 ITEM_CODE = 4'd2; KEY_PRESS = 1;
      #10 KEY_PRESS = 0;
      #10;
      
      #10 $display(">> TEST: valid run"); test_num=2;
      reset_n_load();
      #10 RESET = 0;
      #10 RELOAD = 1;
      #10 RELOAD = 0;
      vend_cycle(1, 2);

      #10 $display(">> TEST: full to empty slot"); test_num=3;
      reset_n_load();
      for (i=0; i<=11; i=i+1) begin
	 vend_cycle(1, 2);
	 $display("FINISHED VALID CYCLE: %d", i);
      end
      i=0;

      #10 $display(">> TEST: invalid selection number");test_num=4;
      reset_n_load();    
      vend_cycle(2,0);

      #10 $display(">> TEST: key press timeout");test_num=5;
      reset_n_load();
      #10 CARD_IN=1;
      #10 ITEM_CODE = 1; CARD_IN=0;
      #60 $display("\t reset to IDLE: first number timeout");
      #10 CARD_IN=1;
      #10 KEY_PRESS=1; CARD_IN=0;
      #10 KEY_PRESS=0;
      #10 ITEM_CODE=2;
      #60 $display("\t reset to IDLE: second number timeout");

      #10 $display(">> TEST: door timeout");test_num=6;
      reset_n_load();
      #10 CARD_IN=1;
      #10 ITEM_CODE = 1; KEY_PRESS = 1;
      #10 KEY_PRESS = 0;
      #10 ITEM_CODE = 8; KEY_PRESS = 1;
      #10 KEY_PRESS = 0; 
      #10 VALID_TRAN = 1; CARD_IN = 0;
      #80;

      #10 $display(">> TEST: door open for a long time (remain in VENDING state)");test_num=7;
      reset_n_load();
      #10 CARD_IN=1;
      #10 ITEM_CODE = 1; KEY_PRESS = 1;
      #10 KEY_PRESS = 0;
      #10 ITEM_CODE = 8; KEY_PRESS = 1;
      #10 KEY_PRESS = 0; 
      #10 VALID_TRAN = 1; CARD_IN = 0;
      #10 DOOR_OPEN = 1;
      #80;

      #10 $display(">> TEST: Failed transaction"); test_num=8;
      reset_n_load();
      #10 CARD_IN=1;
      #10 ITEM_CODE = 1; KEY_PRESS = 1;
      #10 KEY_PRESS = 0;
      #10 ITEM_CODE = 8; KEY_PRESS = 1;
      #10 KEY_PRESS = 0; CARD_IN=0;
      #80;
      
      $finish;
      
      
   end
      
endmodule // testbench_305176399
