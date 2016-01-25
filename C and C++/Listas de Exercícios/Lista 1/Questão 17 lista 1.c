#include <stdio.h>
#include <conio.h>

int main() 
{
    float largura, comprimento , areatotal;
    int continuar=1;
    while( continuar == 1 ) 
    { 
           printf("Digite o valor da largura do compartimento");
           scanf("%f",&largura);
           printf("Digite o valor do comprimento do compartimento");
           scanf("%f",&comprimento);
           
           areatotal =  areatotal + ( comprimento * largura );
           
           printf("Se deseja continuar a verificacao dos compartimentos digite 1 para Sim e 2 para nao");
           scanf("%d",&continuar);
    } 

        printf("O valor da area total eh : %f",areatotal);

   
    getch();
    return 0;
}
