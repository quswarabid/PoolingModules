`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:42:42 07/02/2018 
// Design Name: 
// Module Name:    avgpoolmodule 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module avgpoolmodule(
	input Clock,
	input [31:0] Input_Value_1,
   input [31:0] Input_Value_2,
   input [31:0] Input_Value_3,
   input [31:0] Input_Value_4,
   output reg [31:0] Output_Value
   );
	
	initial begin
		Output_Value <= 0;
	end
	
	wire [31:0] Output;
	
	assign Output = Input_Value_1 + Input_Value_2 + Input_Value_3 + Input_Value_4;
	
	always @ (posedge Clock)
	begin
		Output_Value <= Output / 4;
	end
	
	/*
	reg [31:0] Output;
	initial begin
		Output <= 0;
		Output_Value <= 0;
	end
	always @ (posedge Clock)
	begin
		Output <= Input_Value_1 + Input_Value_2 + Input_Value_3 + Input_Value_4;
		Output_Value <= Output / 4;
	end
	*/
endmodule
