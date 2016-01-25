#include <stdio.h>
#include <conio.h>

int main(){

	int maior, menor, numeroLido,continuar;
	maior = 0;
	menor = 1000000000;	
	numeroLido = 1;
	
    printf( "Digite um numero: \n" );
    scanf( "%d", &numeroLido );
    	   
	while( numeroLido >= 0 ){
		
		
		if( numeroLido > maior ){
			maior = numeroLido;
		}

		if( numeroLido < menor && numeroLido >= 0 ){
			menor = numeroLido;
		}

		printf("Se deseja continuar digite 1 para sim e 2 para nao");
        scanf("%d",&continuar);
        if(continuar==1){
                         scanf("%d",&numeroLido);
                         }		

	else{
		printf( "O maior numero e %d \n", maior );
		printf( "O menor numero e %d \n", menor );
		break;
}
}
    getch();
	return 0;

}
