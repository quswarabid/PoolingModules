`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:31:28 07/02/2018
// Design Name:   maxpoolmodule
// Module Name:   C:/Users/Quswar Abid/Documents/Xilinx/MaxPool/maxpoolmoduletest.v
// Project Name:  MaxPool
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: maxpoolmodule
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module maxpoolmoduletest;

	// Inputs
	reg Clock;
	reg [31:0] data_1;
	reg [31:0] data_2;
	reg [31:0] data_3;
	reg [31:0] data_4;

	// Outputs
	wire [31:0] data_5;

	// Instantiate the Unit Under Test (UUT)
	maxpoolmodule uut (
		.Clock(Clock), 
		.data_1(data_1), 
		.data_2(data_2), 
		.data_3(data_3), 
		.data_4(data_4), 
		.data_5(data_5)
	);

	initial begin
		// Initialize Inputs
		Clock = 0;
		data_1 = 0;
		data_2 = 0;
		data_3 = 0;
		data_4 = 0;
		
		// Wait 100 ns for global reset to finish
		#100;
      
		// Add stimulus here
		data_1 = 1;
		data_2 = 2;
		data_3 = 3;
		data_4 = 4;
		#100;
		
		data_1 = 5;
		data_2 = 6;
		data_3 = 7;
		data_4 = 8;
		#100;
		
		data_1 = 9;
		data_2 = 10;
		data_3 = 11;
		data_4 = 12;
		#100;
		
	end
	
	always begin
		Clock=~Clock;
		#50;
	end
	
endmodule

