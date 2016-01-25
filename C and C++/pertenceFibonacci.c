#include<stdio.h>

int main(){
	
	int t1, t2, ts;
	int n;
	int contador = 2;
	int pertence = 0;

	t1 = 0;
	t2 = 1;

	printf( "Digite o número para verificar se ele pertence à série: " );
	scanf( "%d", &n );

	printf( "Série de Fibonacci: 0 1 " );

	while( ts <= n ){
		
		ts = t2 + t1;
		printf( "%d ", ts );

		t1 = t2;
		t2 = ts;

		if( ts == n ){
			pertence = 1;
		}

	}

	printf( "\n" );

	if( pertence == 1 || n == 0 ){
		printf( "O número %d pertence à serie de fibonacci \n", n );
	} else {
		printf( "O número %d não pertence à serie de fibonacci \n", n );
	}

}


