#include<stdio.h>
#include <conio.h>

int main(){

	int contador;
	int numMax;
	int fatorial = 1;

	numMax = contador = 1;

	printf( "Digite o numero maximo de vezes: " );
	scanf( "%d", &numMax );
		  			
	while( contador <= numMax ){
		printf( "Contador=%d \n", contador );
		fatorial = fatorial * contador;
		contador = contador + 1;
	}

	printf( "Fatorial de %d eh %d\n", numMax, fatorial );
	
    getch();
	return 0;

}

