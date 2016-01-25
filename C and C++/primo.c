#include<stdio.h>

/*
	1. Ler um número N informado pelo usuário e calcular se  
	esse número é primo ou não.
	
		-Percorrer todos os números i inteiros entre 2 e (N-1).
		-Quando encontrar um número i que divide N, o programa
		 para. N não é primo.
		-Se não encontrar nenhum número i que divide N, esse
		 número N é primo.

		Dica: O operador de resto no C é o %.
			mod = %
	
	2. Informar a soma de todos os números primos entre 1 e N.

*/


int main(){


	int N, contador;

	// 1 = Verdadeiro
	// 0 = Falso
	int primo = 1;

	contador = 2;

	printf( "Informe o numero a ser verificado: " );
	scanf( "%d", &N );

	while( contador < N ){
		
		int resto = ( N % contador );
		
		if( resto == 0 ){
			contador = N;

			//0 = Falso
			primo = 0;
		} 

		contador++;
	}

	if( primo == 1 ){
		printf( "eh primo" );
	} else { // primo == 0
		printf( "nao eh primo" );
	}

}
