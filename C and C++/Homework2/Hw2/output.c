#include "header.h"
#include <stdio.h>
//  Bruno Rhafael Fonteles de Lima
//  Stony Brook SOLAR ID: 110126067
// 	Description:  write a program which accepts a text file containing information about a series of student information. Your program will then store
//  	this information in an array of structs and finally output this data after it has been sorted by
//   	name.
//  HOMEWORK 2 - due Tuesday, March 10th no later than 5:00PM
// This file contains the functions implementation 

// Open the file typed by the user
int createFile(char name[20]){
	FILE *input;
	input = fopen(name,"r");
	
	// This statement will test if will have a reading error
	if(input == NULL){
	
		printf("Error Reading File");
		return 1;
		}
	// This statement sort the file that was successfully readed
	system("sort /+17 input.txt > output.txt");	
	//Close the file
	fclose(input);
}

// Function that sort the file generate in the previous function 
void printSortedFile(){
	FILE *output;
	struct Student student[50];
	int i=0;
	int j=0;
	
	// Here the output file is passed by parameter 
	output = fopen("output.txt","r");
	
	// This loop add the information about the students in the struct 
	while(fscanf(output,"%d,%d,\"%[^\"]\",\"%[^\"]\",%3s, %d,=\"%3s\"\n", &student[i].term, &student[i].student_id, student[i].lastname, student[i].firstname, student[i].subject, &student[i].catalog_number, student[i].section)!= EOF){	
			i++;
			
		}
	printf("\tCSE 230 Intermediate programming in C and C++ Homework 2\n");	
	printf("Last Name, First Name            Term       ID      Course  Section\n");
	printf("-----------------------------    ----   ---------   ------  -------\n");
	
	// This loop is used to print the formated and already sorted information about the students. 
	while(j<i){
		
		printf("%.9s, %-9.9s  \t\t %d\t%d   %s%d    %s \n", student[j].lastname, student[j].firstname, student[j].term, student[j].student_id, student[j].subject, student[j].catalog_number, student[j].section );
		j++;
	}
	// Close the output file
	fclose (output);
	
} 


