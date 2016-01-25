#include <stdio.h>
#include <conio.h>

int main(){
       int x, n,i,contador=0,numeroMultiplicacoes;
       float pow=1;
       printf("Digite o valor de x : ");
       scanf("%d",&x);
       printf("Agora digite o valor de n : ");
       scanf("%d",&n); 
       if(n>0){
               numeroMultiplicacoes=n;}
       else {
              numeroMultiplicacoes=(-1)*n;}
       while (x<0){
             printf("Voce digitou o valor de x negativo. Digite novamente o valor de x e obtenha a solucao...\n");
             scanf("%d",&x);  
             }
       while( contador<numeroMultiplicacoes) {
              if(n<0){pow=pow*1.0f/x;}
              else {pow=pow*x;}
              printf("Contador = %d \n ", contador);
              contador = contador + 1;
              printf(" - Pow eh : %.1f\n", pow);
               }
               
               
       
       
       
       
       
       
       
       
       getch();
       return 0;
       
       
       
       }
       
