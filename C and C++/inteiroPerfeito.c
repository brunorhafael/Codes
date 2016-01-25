#include<stdio.h>

int main(){
	
	int n, soma, contador = 1;
	soma = 0;

	printf( "Digite o número a ser verificado: " );
	scanf( "%d", &n );

	while( contador < n ){
		
		if( n % contador == 0 ){
			soma = soma + contador;
		}
				
		contador++;
	}

	if( soma == n ){
		printf( "O número %d é inteiro perfeito \n", n );
	} else {
		printf( "O número %d não é inteiro perfeito", n );
	}








	
}
