`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:21:20 07/02/2018 
// Design Name: 
// Module Name:    maxpoolmodule 
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
module maxpoolmodule(
	input Clock,
	input [31:0] data_1,
	input [31:0] data_2,
	input [31:0] data_3,
	input [31:0] data_4,
	output reg [31:0] data_5
	);
	
	reg [31:0] intermediate_1;
	reg [31:0] intermediate_2;
	
	initial begin
		intermediate_1 <= 0;
		intermediate_2 <= 0;
		data_5 <= 0;
	end
	
	always @ (*)
	begin
		if (data_1 >= data_2)
		begin
			intermediate_1 = data_1;
		end
		else if (data_2 >= data_1)
		begin
			intermediate_1 = data_2;
		end
		if (data_3 >= data_4)
		begin
			intermediate_1 = data_3;
		end
		else if (data_4 >= data_3)
		begin
			intermediate_1 = data_4;
		end
	end	
	
	always @ (posedge Clock)
	begin
		/*
		if (data_1 >= data_2)
		begin
			intermediate_1 <= data_1;
		end
		else if (data_2 >= data_1)
		begin
			intermediate_1 <= data_2;
		end
		
		if (data_3 >= data_4)
		begin
			intermediate_1 <= data_3;
		end
		else if (data_4 >= data_3)
		begin
			intermediate_1 <= data_4;
		end
		*/
		
		if (intermediate_1 >= intermediate_2)
		begin
			data_5 <= intermediate_1;
		end
		if (intermediate_2 >= intermediate_1)
		begin
			data_5 <= intermediate_2;
		end
		
		
		
	end


endmodule
