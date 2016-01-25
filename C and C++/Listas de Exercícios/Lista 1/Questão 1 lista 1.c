#include <stdio.h>
#include <conio.h>

int main ()  
{
     int peso, calc=0, i;  
     i= 0;
     printf("Entre com o peso da caixa para que se obtenha o valor total do peso\n");  
     for( i=0;i<25;i++ ) {
          scanf("%d",&peso);
          calc += peso;
          }
          printf("Peso total: %d", calc);
              
          getch();
          return 0;    
}    
