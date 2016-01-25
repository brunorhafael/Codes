#include <stdio.h>
#include <conio.h>

float raio ( float raio ) {
         float pi = 3.14; 
         float v = ( 4.0 / 3.0 ) * pi * raio * raio * raio ;
         
         return v;
         }
         
  void imprimeEsfera ( float r, float v) {
      
      printf ( "Esfera - Raio: %f - Volume: %f ",r,v);
      }
      
 int main () {
     
     float r;
     
     printf( "Digite um Raio: \n ");
     scanf("%f",&r);
     
     float volume = raio ( r );
     imprimeEsfera  ( r,volume);
     
     getch();
     return 0;
     }     
           
