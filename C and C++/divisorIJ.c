#include<stdio.h>

/*
	Dados n>0 e dois números inteiros positivos i e j 		diferentes de 0, imprimir em ordem crescente os n 		primeiros naturais que são divisores de i e
	de j simultaneamente
*/

int main(){

	int i, j, n;
	int contador, contadorDivisores;

	printf( "Digite i, j e n :" );
	scanf( "%d %d %d", &i, &j, &n );

	contador = 0;
	contadorDivisores = 0;

	while( contadorDivisores < n &&
	       contador <= i &&
	       contador <= j ){

		contador++;

		int restoI = i % contador;
		int restoJ = j % contador;

		if( restoI == 0 && restoJ == 0 ){
			contadorDivisores++;
			printf( "\n %d divide %d e %d", contador, i, j );
		}



	}

}









