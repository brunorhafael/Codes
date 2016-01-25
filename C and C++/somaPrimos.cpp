#include <stdio.h>
#include <conio.h>
    // 1. Ler um número N informado pelo usuario e calcular se esse numero é primo ou não.
    //   -Percorrer todos os numeros i inteiros entre 2 e (N-1).
    //   -Quando encontrar um numero i que divide N, o programa para. N não é primo
    //   -Se não encontrar nenhum i que divide N, esse número é primo.
    // 2. Informar a soma de todos os números primos entre 1 e N.

 main() 
 {
 int n,contador,resto,numeroDivisoes,cont2,soma,teste2;
 cont2=2;
 teste2=0;
 soma=0;
 numeroDivisoes=0;
 contador=2;
 printf("Digite o numero para saber se o mesmo eh primo ou nao: \n");
 scanf("%d",&n);
 
 while(contador<=n){
                  
                  while(cont2<contador){
                                        resto=contador % cont2 ;
                         if(resto==0){
                                      teste2=1;                              
                                  cont2=contador;
                                  }     cont2++;       

                                        }

                                        if(teste2==0){
                                                      
                soma=soma+contador;
                printf("\n numeros primos = %d",cont2);                                                                     
                                                   
                                                                }
              cont2=2;
              teste2=0;
                                                               
                  contador++;
                  
                  }
                  printf("Soma = %d",soma);
getch();
return 0;       
 }
