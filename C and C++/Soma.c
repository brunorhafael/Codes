#include<stdio.h>

int main(){
	
	int a, b;
	int soma;
	int opcao;
	float media;
	float aReal, bReal;

	int mediaInteira = 0;

	a = 0;
	b = 0;
	opcao = 0;
	media = 0;

	printf( "Digite o valor de a: " );
	scanf( "%d", &a );

	printf( "\nDigite o valor de b: " );
	scanf( "%d", &b );

	printf( "Digite uma opção \n" );
	printf( "\t 1 - Somar \n" );
	printf( "\t 2 - Subtrair \n " );

	scanf( "%d", &opcao );

	while( opcao < 1 || opcao > 2 ){
		printf( "Opcao invalida \n" );
		printf( "Digite uma opção \n" );
		printf( "\t 1 - Somar \n" );
	
	printf( "\t 2 - Subtrair \n " );

		scanf( "%d", &opcao );
	}

	if( opcao == 1 ){
		soma = a + b;
		printf( "\nO valor da soma é %d\n", soma );
	} 

	if( opcao == 2 ) {
		soma = a - b;
		printf( "\nO valor da subtração é %d\n", soma );
	}

	//mediaInteira = (a + b)/2;
	

	aReal = a;
	bReal = b;

	media = ( aReal + bReal )/2;

	printf( "O valor da média é %f \n", media );	


}
