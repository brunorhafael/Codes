//  Bruno Rhafael Fonteles de Lima
//  Stony Brook SOLAR ID: 110126067
// 	Description:  This program has the goal to validate a credit card number
//  HOMEWORK 1 - due Tuesday, February 24th no later than 5:00PM

#include <stdio.h>

#define MAX_DIGITS 15

// PROTOTYPES

int process_card ();
void print_result(int sum);


// MAIN FUNCTION

int main(){

    	
	int s = process_card();
	print_result(s);
	
return 0;

}


// FUNCTIONS

void print_result(int sum){
	// In this if statement, It tests if the whole sum of the step 2 and 3 mod 10 is equal to 0 or not. Then a message is displayed telling if the card number is valid or not.  
	if (sum % 10 == 0) {
		printf("The card is valid \n\n");
		printf("The final sum is: %d",sum);
	}
	
	else{
	 	printf("The card is not valid \n\n");
	 	printf("The final sum is: %d",sum);
	}
	
}

int process_card(){
	
	// Declaration of the variables
	char string[MAX_DIGITS];
	int num[MAX_DIGITS];
	int i;
	int sum=0;
	int count=0;
	
	// User will type the card number 	
	printf("Type the 16 digits of your credit card \n\n");
	scanf("%s",&string);
	
	// This for loop transforms the string into a array of integer
	for(i=0; i<=MAX_DIGITS; i++){
		num[i] = (string[i]) - 48;
	}
	
	// This for loop will test the if the numbers multiplied by two are grather than or equal to 10. If they do, count receives itself minus 9 Ex: 11 is  1 + 1 = 2. 11 - 9 is 2 too. STEP 2
	for(i=0; i<=MAX_DIGITS - 1; i++){
		count = num[i]*2;
		if(count >= 10){
			count = count - 9; 
		}
	// sum is the variable that keeps the sum of all numbers. 
		sum = sum + count;
		i =i+1;
		printf("Sum: %d\n\n",sum);
	}
	// This for loop process the remaining numbers. STEP 3
	for (i=1;i<=MAX_DIGITS;i++){
		
		sum = sum + num[i];
		i=i+1;
		printf("Sum: %d\n\n",sum);	
	}
	return sum;	
}

