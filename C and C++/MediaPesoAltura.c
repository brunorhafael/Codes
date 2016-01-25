#include<stdio.h>
	
/*
	Escreva um programa que lê vários pesos e várias alturas e 		calcula média dos pesos e a média das alturas.

	Peso e média devem ser do tipo float.

	O programa deve parar quando o usuário digitar um peso
	negativo.
*/
int main(){

	float mediaPeso, mediaAltura, pesoLido, alturaLida;
	mediaPeso = mediaAltura = pesoLido = alturaLida = 0;

	int contador = 0;

	while( pesoLido >= 0 ){

		printf( "Digite um peso \n" );
		scanf( "%f", &pesoLido );	

		mediaPeso = mediaPeso + pesoLido;
		

		contador = contador + 1;

		printf( "Digite uma altura \n" );
		scanf( "%f", &alturaLida );	

		mediaAltura = mediaAltura + alturaLida;


	}

	mediaPeso = mediaPeso / contador;
	mediaAltura = mediaAltura / contador;
		

}
