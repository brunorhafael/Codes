#include<stdio.h

int main(){

	int n;
	int contador = 1;
	int divisoresPares = 0;
	int divisoreImpares = 0;

	printf( "Digite o numero para verificar seus divisores pares: " );	
	scanf( "%d", &n );

	while( contador <= n ){
		
		if( n % contador == 0 ){

			if( contador % 2 == 0){
				divisoresPares++;	
			} else {
				divisoresImpares++;
			}

		}

		contador++;
	}

	printf( "Divisores pares: %d \n", divisoresPares );
	printf( "Divisores ímpares: %d \n", divisoresImpares );
}





