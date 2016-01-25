#include <stdio.h>
#include <conio.h>

    int main () 
{
    int quantidade=0, i=0;
    float preco=0, precototal=0;
    printf("Digite o preco");
    scanf("&f", &preco);
    for( i=0; i<45; i++) {
         scanf("%f", &preco);
         precototal += preco;
         }
         float  valorfinal = precototal * 45;
         printf("O valor total gasto eh %.1f R$", valorfinal);
         
         getch();
         return 0 ;
    
      
}
