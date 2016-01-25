#include<stdio.h>

int main(){

	int cont1 = 2;
	int soma = 0;
	int limiteSuperior;

	printf( "Digite um limite superior: " );
	scanf( "%d", &limiteSuperior );

	while( cont1 <= limiteSuperior ){
		
		int primo = 1;
		int cont2 = 2;

		while( cont2 < cont1 ){
			
			int resto = cont1 % cont2;

			if( resto == 0 ){
				primo = 0;
				cont2 = cont1;
			} else {
				cont2++;
			}
			
		}		
				
		if( primo == 1 ){
			printf( "%d é primo \n", cont1 );
			soma = soma + cont1;
		} else {
			printf( "%d não é primo. Não soma.\n", cont1 );
		}

		cont1++;
		
	}

	printf( "--- Soma: %d --- \n", soma );

}

