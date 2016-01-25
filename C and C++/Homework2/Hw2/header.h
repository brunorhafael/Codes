#ifndef HEADER_FILE
#define HEADER_FILE
//  Bruno Rhafael Fonteles de Lima
//  Stony Brook SOLAR ID: 110126067
// 	Description:  write a program which accepts a text file containing information about a series of student information. Your program will then store
//  	this information in an array of structs and finally output this data after it has been sorted by
//   	name.
//  HOMEWORK 2 - due Tuesday, March 10th no later than 5:00PM
// Header that contains the declaration of the struct and the functions prototypes 
struct Student
{
	int term;
	int student_id;	
	char lastname[20];
	char firstname[20];
	char subject[3];
	int catalog_number;
	char section[3];	
	
};

int createFile(char name[20]);
void printSortedFile();


#endif
