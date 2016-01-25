#include<stdio.h>

int main(){

	float celsius, farenheit;
	
	printf( "Digite o valor da temperatura em celsius: \n" );
	scanf( "%f", &celsius );

	while( celsius < 0 ){
		printf( "Temperatura negativa. Digite um valor positivo. \n" );
		scanf( "%f", &celsius );
	}

	printf( "Voce digitou celsius=%.2f \n", celsius);

	farenheit = 1.8*celsius + 32;
	printf( "O valor da temperatura em farenheit eh %.2f \n", farenheit );
	

    system("PAUSE");
	return 0;
	
}
