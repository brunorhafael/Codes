#include<stdio.h>

/*
	Faça um algoritmo que lê um número no formato decimal
	e transforma para o formato binário.
*/

int main(){

	int decimal = 0;
	int binario = 0;
	int potencia10 = 1;

	printf( "Digite o número em decimal: " );
	scanf( "%d", &decimal );	
	printf( "Decimal: %d \n", decimal );	

	while( decimal > 0 ){
		
		int resto = decimal % 2;

		binario = binario + resto*potencia10;
		binario = (binario*10) + resto;

		decimal = decimal / 2;
		potencia10 *= 10;

	}

	printf( "Binário: %d \n", binario );	
	
	
	return 0;
}








