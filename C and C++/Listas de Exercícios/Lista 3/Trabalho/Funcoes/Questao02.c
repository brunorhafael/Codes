#include <stdio.h>
#include <math.h>
#include <conio.h>
float volume(float r){
      float v = ((4.0/3.0)*(M_PI)*(pow(r,3)));
      return v;
      }


int main(void){
    float r, v=0;
    printf("\n\t Digite o valor do raio: ");
    scanf("%f",&r);
    v = volume(r);
    printf("\n\t O volume da esfera de raio %0.2f , eh : %0.2f ",r,v);
    getch();
    return 0;
    }
