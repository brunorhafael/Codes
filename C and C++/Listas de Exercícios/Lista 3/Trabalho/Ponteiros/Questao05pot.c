#include <stdio.h>
#include <conio.h>
void primo(int numero, int *vPrimo){
    int i;
    for(i=2;i<numero; i++){
            if(numero%i==0){
                         *vPrimo=0;
                         i=numero;
                         }
            }
    if(numero==0 || numero==1){
                  *vPrimo=0;
                  }
    
    }

int main(void){
    int numero, vPrimo=1;
    printf("\n\t Digite um numero: ");
    scanf("%d",&numero);
    while(numero<0){
               printf("\n\t Digite um numero inteiro e positivo: ");
               scanf("%d",&numero);
               }
    primo(numero,&vPrimo);
    if(vPrimo==1){
                 printf("\n\t O numero : %d eh primo",numero);
                 }else if(vPrimo==0){
                       printf("\n\t O numero %d nao eh primo",numero);
                       }
    getch();
    return 0;
    }
