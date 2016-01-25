#include<stdio.h>

int main(){
	
	int t1, t2, ts;
	int n;
	int contador = 2;

	t1 = 0;
	t2 = 1;

	printf( "Digite o numero de termos da serie: " );
	scanf( "%d", &n );

	printf( "Serie de Fibonacci: 0 1 " );

	while( contador < n ){
		
		ts = t2 + t1;
		printf( "%d ", ts );

		t1 = t2;
		t2 = ts;

		contador++;

	}

	printf( "\n" );

    system("pause");

}





