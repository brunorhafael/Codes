#include<stdio.h>

int main(){
	int cont1 = 0;
	int n = 20;
		
	while( cont1 < n ) {
		
		int cont2 = 0;

		while( cont2 <= cont1 ){
			printf( "%d - ", cont2 );
			cont2++;
		}

		printf( "\n" );
		cont1++;		
	}

}
