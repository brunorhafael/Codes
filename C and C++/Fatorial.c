#include<stdio.h>
#include <conio.h>

int main(){

	int contador=0;
	int num;
	int fatorial=1;

     num = 0;

	printf( "Digite o numero para obter o fatorial:\n" );
	scanf( "%d", &num );
		  			
	while( contador < num ){
		printf( "Fatorial=%d \n", contador );
		contador = contador + 1;
		fatorial = fatorial * contador;
	}



	printf( "Fatorial de %d eh %d\n", num, fatorial );
    getch(); 
	return 0;

}







