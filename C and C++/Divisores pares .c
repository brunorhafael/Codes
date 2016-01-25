#include <stdio.h>
#include <conio.h>

int main ()
{
    
 int n, cont=2, calc2, calc,cont2=0;
 printf("Digite o valor de n");
 scanf("%d",&n);
 if( n<=0){
     printf("Valor invalido, por favor digite um numero maior que 0");
     scanf("%d",&n);
     }   
 while(cont<n){
               calc = n%cont;
               calc2 = cont%2;
               if ( calc == 0 && calc2 == 0 ){
                    printf("  %d ",cont);
                    cont2++;
                    } 
               
               cont++;
               }
               printf("\n A quantidade de divisores pares eh de : %d ", cont2);
               
    
 getch();
 return 0;   
    
}
