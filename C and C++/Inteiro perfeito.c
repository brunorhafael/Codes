#include <stdio.h>
#include <conio.h>

int main() 
{
 int n, soma=0, cont=1;
 printf("Digite um numero para saber se é inteiro perfeito ou nao :  ");
 scanf("%d",&n);
 while (cont<n){
       soma = soma + cont;
       
       if(soma == n ){
               printf("O numero eh inteiro perfeito");
               }
               else {
                    printf("O numero nao eh inteiro perfeito");
                    }
                    cont++; 
                    }  
    
    
    
    
    
    
    
    
    
 getch();
 return 0;
      
}
