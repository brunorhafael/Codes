#include <stdio.h>
#include <conio.h>
    // 1. Ler um n�mero N informado pelo usuario e calcular se esse numero � primo ou n�o.
    //   -Percorrer todos os numeros i inteiros entre 2 e (N-1).
    //   -Quando encontrar um numero i que divide N, o programa para. N n�o � primo
    //   -Se n�o encontrar nenhum i que divide N, esse n�mero � primo.
    // 2. Informar a soma de todos os n�meros primos entre 1 e N.

 main() 
 {
 int n,contador,resto,numeroDivisoes;
 numeroDivisoes=0;
 contador=2;
 printf("Digite o numero para saber se o mesmo eh primo ou nao: \n");
 scanf("%d",&n);
 

 while(contador<n){
                   resto=n%contador;
                   
                   if(resto==0){
                                
                                contador=n;             
                   }
                   else{
                                numeroDivisoes++; 
                   }
                   contador++;
                   
                   }
                   if(numeroDivisoes== (n-2)){
                                            printf("\n eh primo");
                                            }
                                            else{
                                            printf("\nO numero nao eh primo");                                                 
                                                 }
                                                 
                                                 
getch();
return 0;       
 }


