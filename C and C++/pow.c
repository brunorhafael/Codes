#include<stdio.h>

int main(){
	
	int x, n, numeroMultiplicacoes;
	int contador = 0;
	float pow;

	pow = 1;

	printf( "Digite o valor de x e n: " );
	scanf( "%d %d", &x, &n );
	
	while( x < 0 ){
		printf( "Voce digitou um X negativo. Digite novamente\n" );	
		scanf( "%d", &x );
	}

	if( n > 0 ) {
		numeroMultiplicacoes = n;
	} else {
		numeroMultiplicacoes = (-1)*n;
	}

	while( contador < numeroMultiplicacoes ){

		if( n < 0 ){
			pow = pow * (1.0/x);
		} else {
			pow = pow * x;
		}

		printf( "Contador=%d", contador );
		contador = contador + 1;
		printf( " - Pow=%f\n", pow );
	}

	printf( "Pow=%f\n", pow );
		
}
