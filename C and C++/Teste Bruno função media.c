#include <stdio.h>
#include <conio.h>

float media ( float a, float b, float c ){
      float m = (a + b + c)/3;
      return m ;
      }
      
      int main () {
          int x, y, z; 
          float m;
          printf("Digite o valor de x , y e z respectivamente");
          scanf("%d   %d   %d",&x,&y,&z);
          
          m = media ( x, y, z);
          
          printf ("A media eh: %f", m);
          

          getch();
          return 0;
          
          }
