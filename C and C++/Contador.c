#include<stdio.h>
#include <conio.h>

int main(){

	int contador;
	int numMax;
	int soma = 0;

	numMax = contador = 0;

	printf( "Digite o numero maximo de vezes: " );
	scanf( "%d", &numMax );
		  			
	while( contador <= numMax ){
		printf( "Contador=%d \n", contador );
		soma = soma + contador;
		contador = contador + 1;
	}

	printf( "Somatorio de %d eh %d\n", numMax, soma );
	
    getch();
	return 0;

}







