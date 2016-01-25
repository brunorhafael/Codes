#include<stdio.h>

/* 
	1. Esqueleto de um programa em C
	2. Declaração de variáveis
		int, float
	3. Ler e escrevar da/na saída padrão
		scanf e printf
			int: %d
			float: %f
*/
int main(){

	int a;
	float b;

	a = 0;
	b = 0;
	//Isso é um comentário

	printf( "Alô Mundo!!!\n" );
	printf( "A variavel a está com valor %d \n", a );

	a = a + 10;

	printf( "A variavel a agora está com valor %d \n", a );

	scanf( "%d", &a );

	printf( "A variavel a agora está com valor %d \n", a );

	printf( "Digite um valor real qualquer: " );		
	scanf( "%f", &b );

	printf( "A variavel b está com valor %f \n", b );

	return 0;

}








