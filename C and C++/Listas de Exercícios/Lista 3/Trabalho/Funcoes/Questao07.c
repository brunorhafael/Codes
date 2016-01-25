#include <stdio.h>
#include <conio.h>
int numPerfeito(int numero){
    int i, soma=0;
    for(i=1;i<numero;i++){
                          if(numero%i==0){
                                          soma=soma+i;
                                          printf("\t + %d  ",i);
                                          }
                          }
    if(numero==soma){
                     printf(" = %d ", soma);
                     return 1;
                     }else{
                           return 0;
                           }
     }
     
int main(void){
    int numero, perfeito=0;
    printf("\n\t Digite um numero: ");
    scanf("%d",&numero);
    perfeito = numPerfeito(numero);
    if(perfeito==1){
                    printf("\n\t O numero %d eh perfeito",numero);
                    }else if(perfeito == 0){
                          printf("\n\t O numero %d nao eh perfeito",numero);
                          }
    getch();
    return 0;
    }
