#include <stdio.h>
#include <conio.h>
int primo(int numero){
    int i;
    for(i=2;i<numero; i++){
            if(numero%i==0){
                         return 0;
                         }
            }
    if(numero==0){
                  return 0;
                  }
    return 1; 
    }

int main(void){
    int numero, vPrimo=0;
    printf("\n\t Digite um numero: ");
    scanf("%d",&numero);
    while(numero<0){
               printf("\n\t Digite um numero inteiro e positivo: ");
               scanf("%d",&numero);
               }
    vPrimo = primo(numero);
    if(vPrimo==1){
                 printf("\n\t O numero : %d eh primo",numero);
                 }else if(vPrimo==0){
                       printf("\n\t O numero %d nao eh primo",numero);
                       }
    getch();
    return 0;
    }
