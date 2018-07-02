`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:43:13 07/02/2018
// Design Name:   avgpoolmodule
// Module Name:   C:/Users/Quswar Abid/Documents/Xilinx/AvgPool/avgpoolmoduletest.v
// Project Name:  AvgPool
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: avgpoolmodule
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module avgpoolmoduletest;

	// Inputs
	reg Clock;
	reg [31:0] Input_Value_1;
	reg [31:0] Input_Value_2;
	reg [31:0] Input_Value_3;
	reg [31:0] Input_Value_4;

	// Outputs
	wire [31:0] Output_Value;

	// Instantiate the Unit Under Test (UUT)
	avgpoolmodule uut (
		.Clock(Clock),
		.Input_Value_1(Input_Value_1), 
		.Input_Value_2(Input_Value_2), 
		.Input_Value_3(Input_Value_3), 
		.Input_Value_4(Input_Value_4), 
		.Output_Value(Output_Value)
	);

	initial begin
		// Initialize Inputs
		Clock = 0;
		Input_Value_1 = 0;
		Input_Value_2 = 0;
		Input_Value_3 = 0;
		Input_Value_4 = 0;

		// Wait 100 ns for global reset to finish
		#100;
      
		// Add stimulus here
		Input_Value_1 = 1;
		Input_Value_2 = 2;
		Input_Value_3 = 3;
		Input_Value_4 = 4;
		#100;
		Input_Value_1 = 5;
		Input_Value_2 = 6;
		Input_Value_3 = 7;
		Input_Value_4 = 8;
		#100;
		Input_Value_1 = 9;
		Input_Value_2 = 10;
		Input_Value_3 = 11;
		Input_Value_4 = 12;
		#100;
		Input_Value_1 = 014;
		Input_Value_2 = 015;
		Input_Value_3 = 016;
		Input_Value_4 = 017;
		#100;
		Input_Value_1 = 018;
		Input_Value_2 = 019;
		Input_Value_3 = 020;
		Input_Value_4 = 021;
		#100;
		Input_Value_1 = 022;
		Input_Value_2 = 023;
		Input_Value_3 = 024;
		Input_Value_4 = 025;
		#100;

	end
	
	always begin
	Clock = ~Clock;
	#50;
	end

endmodule

