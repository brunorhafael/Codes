#include <stdio.h>
#include <conio.h>

int main (void) 
{
 int totalhoras, calc=1, i=1;                  // par igular a 5 vezes, coloquei calc igual a 1//
 printf("Digite o total de horas que vc trabalhou durante os 30 dias: \n ");
 scanf("%d", &totalhoras);
 for(i=1; i<30; i++) {
          scanf("%d", &totalhoras);
          calc += totalhoras;
          }
          printf("O valor total de horas trabalhadas nos 5 dias foram :%d \n", calc);
          
          
   getch();
   return 0;
            
    
    
    
    
    
    
    
    
    
    
    
    
    
}
