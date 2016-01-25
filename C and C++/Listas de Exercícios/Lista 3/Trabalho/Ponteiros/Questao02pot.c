#include <stdio.h>
#include <math.h>
#include <conio.h>
void volume(float r, float *v){
      *v = ((4.0/3.0)*(M_PI)*(pow(r,3)));
      }


int main(void){
    float r, v=0;
    printf("\n\t Digite o valor do raio: ");
    scanf("%f",&r);
    volume(r, &v);
    printf("\n\t O volume da esfera de raio %0.2f , eh : %0.2f ",r,v);
    getch();
    return 0;
    }
