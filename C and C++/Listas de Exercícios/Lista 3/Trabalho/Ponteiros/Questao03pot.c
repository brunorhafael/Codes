#include <stdio.h>
#include <conio.h>
void area(float base, float altura, float *vArea){
      *vArea = base * altura;
      }

int main(void){
    float base, altura, vArea=0;
    printf("\n\t Digite o valor da base: ");
    scanf("%f",&base);
    printf("\n\t Digite o valor da altura: ");
    scanf("%f",&altura);
    area(base,altura,&vArea);
    printf("\n\t O retangulo com valor de base: %0.2f, valor de altura: %0.2f , tem area: %0.2f",base,altura,vArea);
    getch();
    return 0;
    }
