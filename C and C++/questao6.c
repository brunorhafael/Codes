#include<stdio.h>

int main(){

	int n;	

	scanf( "%d", &n );

	float contadorNumerador = 1;
	float contadorDenominador = n;

	float somaTermos = 0;
	
	while( contadorNumerador <= n ){
	      float termo=contadorNumerador/contadorDenominador;
	       somaTermos = somaTermos + termo;

		contadorNumerador++;
		contadorDenominador--;

	}

}
