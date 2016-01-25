#include <stdio.h>
#include <conio.h>

int main (void) 
{
 int n, fatorial,cont=1;
 printf("Digite o valor de n para obter o seu fatorial: \n");
 scanf("%d",&n);
 fatorial=n;
 if(n==0){
          printf("O fatorial de 0 eh 1");
          }
 while(cont<n)
        {
        fatorial=fatorial*cont;
        cont++;
        } 
         printf("O fatorial de %d eh %d",n,fatorial);
        

getch();
return 0;
    
    
    
}
