#include <stdio.h>
#include <conio.h>

int main()
{
 int anterior,atual,n,contador=2;
 anterior=0;
 atual=1;
 
 printf(" Escreva o numero de termos na serie. N>=3)");
 scanf("%d",&n);
 
 while( n<3) {
        printf("N invalido. Voce digitou %d... Digite novamente",n);
        scanf("%d",&n);
             }
             
             
       printf("Serie fibonacci eh: 0 1 ");      
while ( contador < n ) {
      int sucessor = anterior + atual;
      printf("%d ",sucessor);
      anterior = atual;
      atual = sucessor;
      
      contador++;             
      }
 
    getch();
    return 0;
    
    
}
