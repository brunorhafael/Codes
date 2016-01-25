#include <stdio.h>
#include <conio.h>
void func(float *media, int *soma){
     int numero, somaper, noPrimo=0, i=0;
     float cont=0,somapri=0;
     printf("\n\t Digite um numero: ");
     scanf("%d",&numero);
     while(numero<0){
                     printf("\n\t Digite um numero positivo para iniciar o programa: ");
                     scanf("%d",&numero);
                     }
     while(numero>=0){
                     noPrimo=0;
                     somaper=0;
                     for(i=1;i<numero;i++){
                          if(numero%i==0){
                                          somaper=somaper+i;
                                          }
                          }
                     if(numero==somaper){
                                      *soma += numero;
                     }
                     for(i=2;i<numero; i++){
                                       if(numero%i==0){
                                                       noPrimo=1;
                                                       }
                     }
                     if(numero==0 || numero<0){
                                   noPrimo=1;
                                   }
                     if(noPrimo==0){
                                    somapri= somapri + numero;
                                    cont++;
                                    }
                     printf("\n\t Digite um valor negativo para sair ou positivo para continuar: ");
                     scanf("%d",&numero);
                     }
     *media= somapri/cont;
     }

int main(void){
    float media=0;
    int soma=0;
    func(&media,&soma);
    printf("\n\t A soma dos numeros perfeitos foi: %d",soma);
    printf("\n\t A media dos numeros primos foi: %f",media);
    getch();
    return 0;
    }
