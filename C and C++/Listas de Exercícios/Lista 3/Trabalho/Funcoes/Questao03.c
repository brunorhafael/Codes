#include <stdio.h>
#include <conio.h>
float area(float base, float altura){
      float area = base * altura;
      return area;
      }

int main(void){
    float base, altura, varea=0;
    printf("\n\t Digite o valor da base: ");
    scanf("%f",&base);
    printf("\n\t Digite o valor da altura: ");
    scanf("%f",&altura);
    varea = area(base,altura);
    printf("\n\t O retangulo com valor de base: %0.2f, valor de altura: %0.2f , tem area: %0.2f",base,altura,varea);
    getch();
    return 0;
    }
