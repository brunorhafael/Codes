#include<stdio.h>

int main(){

	int n;	

	scanf( "%d", &n );

	float contador = 1;
	float somaTermos = 0;
	
	while( contador <= n ){
	      float termo=contador/(n - contador + 1);
              somaTermos = somaTermos + termo;

		contador++;

	}

}
