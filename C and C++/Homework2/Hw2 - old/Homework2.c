//  Bruno Rhafael Fonteles de Lima
//  Stony Brook SOLAR ID: 110126067
// 	Description:  write a program which accepts a text file containing information about a series of student information. Your program will then store
//  	this information in an array of structs and finally output this data after it has been sorted by
//   	name.
//  HOMEWORK 2 - due Tuesday, March 10th no later than 5:00PM

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


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


int main (){

	FILE *input, *output;
	struct Student student[50];
	char filename[20];
	int i=0;
	int j=0;
	
	printf("Type the name of the File: \n");
	scanf("%s",filename);
	
	input = fopen(filename,"r");
	
	
	if(input == NULL)
		printf("Error Reading File");
	
	system("sort /+17 input.txt > output.txt");	
	
	fclose(input);
	
	output = fopen("output.txt","r");
	
	while(fscanf(output,"%d,%d,\"%[^\"]\",\"%[^\"]\",%3s, %d,=\"%3s\"\n", &student[i].term, &student[i].student_id, student[i].lastname, student[i].firstname, student[i].subject, &student[i].catalog_number, student[i].section)!= EOF){	
			i++;
			
		}
		
	printf("Last Name, First Name            Term     ID        Course  Section\n");
	printf("-----------------------------    ----   ---------   ------  -------\n");
	
	while(j<i){
		
		printf("%s, %s\t\t%d   %d    %s%d    %s \n", student[j].lastname, student[j].firstname, student[j].term, student[j].student_id, student[j].subject, student[j].catalog_number, student[j].section );
		j++;
	}
	
	
	fclose (output);
			
	
	return 0;
}

