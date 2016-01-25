//  Bruno Rhafael Fonteles de Lima
//  Stony Brook SOLAR ID: 110126067
// 	Description:  write a program which accepts a text file containing information about a series of student information. Your program will then store
//  	this information in an array of structs and finally output this data after it has been sorted by
//   	name.
//  HOMEWORK 2 - due Tuesday, March 10th no later than 5:00PM


#include <stdio.h>
#include "output.c"  // Code that contains the implementation of the functions used in this program. 


// MAIN FUNCTION
int main (){
	
	char filename[20];
	
	printf("Type the name of the File: \n");
	scanf("%s",filename);
	
	// Calls the function that will open the file which the name was typed by the user and contains the data to be sorted.
	createFile(filename);
	// Calls the function that sort the file generate in the previous function. 
	printSortedFile();
	
			
	return 0;
}


