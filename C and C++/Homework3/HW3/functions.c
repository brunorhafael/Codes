#include "header.h"
#include <stdio.h>
//  Bruno Rhafael Fonteles de Lima
//  Stony Brook SOLAR ID: 110126067
// 	Description:  write a program which accepts a text file containing information about a series of student information. Your program will then store
//  	this information in an array of structs and finally output this data after it has been sorted by
//   	name.
//  HOMEWORK 2 - due Tuesday, March 10th no later than 5:00PM
// This file contains the functions implementation 
// COMPILER: MinGW GCC 4.8.1


// Function to execute by command line the programs myProg1.c or myProg2.c and generate the output file "output.txt" which will be compare withthe results 
void callSystem(char NameSource[30], char NameInput[30]){
	char stringGcc [100] = "gcc -o Prog "; 
	char stringGcc1 [100] = "Prog ";
	char stringGcc2[100] = " > output.txt";
	
	system(strcat(stringGcc,NameSource));
	system(strcat(strcat(stringGcc1,NameInput),stringGcc2));
}


// Functions that creates the two file Output and Results
int generateFile(char result[30]){
	
	FILE *output, *results;
	int i;
	output = fopen("output.txt","r");
	if(output == NULL){
	
		printf("Error Reading File");
		return 1;
		}
	
	
	results = fopen(result,"r");
	if(results == NULL){
	
		printf("Error Reading File");
		return 1;
		}
	
	char string[60];
	char string2[60];
	int fail = 0;
	
	for(i=0; i<LINES; i++){
		
		//These fscanf`s compare which line of the file output.txt and compare with the results.txt. If the lines are not equal then the variable fail will be incremented which its value
		// is used to determine wheather the program is correct or not. 
		fscanf(output,"%s\n",string);
		fscanf(results,"%s\n",string2);
		
		if(strcmp(string,string2)!= 0){
			fail++;
		}
		
	}
	
	if(fail == 0){
		printf("The output of the program is correct.");
	}
	else printf("The output of the program is not correct.");
	
	fclose(output);
	fclose(results);
}



