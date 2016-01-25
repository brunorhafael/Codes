#include <stdio.h>
#include <conio.h>
#include <math.h>

    float raio ( float r ) {
        
        float v;
        
        v = ( 1.33 ) * 3.14 * pow(r,3);
        printf("O volume eh : %.2f metros cubicos", v);
        
        return v;
        }
        
        
     int main () {
         
         float r;
         
         printf ("Digite o valor do raio em metros da esfera para obter o seu respectivo volume  \n ");
         scanf("%f",&r);
         
         printf("O valor do raio eh : %.1f \n", r);
         raio ( r );
         
         getch();
         return 0;
         
         }
