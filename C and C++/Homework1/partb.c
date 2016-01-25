//  Bruno Rhafael Fonteles de Lima
//  Stony Brook SOLAR ID: 110126067
// 	Description:  This program has the goal  determines the frequency of each lower-case letter in the given text.
//  HOMEWORK 1 - due Tuesday, February 24th no later than 5:00PM
#include <stdio.h>
#include <string.h>

// MAIN FUNCTION

int main(){
    	
   	char str[100]; // Variable to  store the string typed by the user
	char str2[26]; // Variable to  store the lowercases letters of the Alphabet 
	int h=0;	
    int i=0;
    int j=0;
    int count[26]; 
    
	
    // User will type the text 	
	printf("Type the string here and press enter \n");
	scanf("%[^\n]s",&str);

	// Here I am filling the vector with all the lowercase letters in order  to test forward.	
	while (i < 26 ){
		str2[i] = 97 + i;
		i++;
	}
	
	// here i am filling an array of counters of each lowercase letters 
	for(h=0; h<26; h++){
		count[h] = 0;
	}
	
	// This for will sweep all the vector of the letters
	for(i=0; i < 26; i++ ){
		// This for will sweep all the vector that contains the string typed by the user and test the frequency with the another vector. The vector of int 'count' contains the frequency of each letter in the string.
		for (j = 0; j < strlen(str) ; j++){
			if( str2[i] == str[j]){
				count[i] = count[i] + 1;
			}
			
			
		}
	}
	// The output of the program
	for(i=0; i<26; i++){
		printf("The frequency of the letter  %c is %d \n",str2[i],count[i]);
	}
 	
return 0;

}
