#include<stdio.h>
#include<conio.h>
#include <math.h>

  
   float EQ2G ( float C[], float *px1, float *px2) {     // C[1] = c, C[2] = b, C[3] = a
       
      float aux;
       
      float delta = ( C[1] * C[1] ) - ( 4*C[2]*C[0] );
       
       if (delta == 0){
                 aux = 1;
                 }
       if (delta < 0){
                 aux = 2;
                 }          
          else{
       
      float raiz = sqrt(delta);
       
       *px1 = (-C[1] + raiz ) / 2*C[0];
       *px2 = (-C[1] - raiz ) / 2*C[0];
        
       }
       return aux;
       
       }
       
       
   int main () {
       
       float D[] = {10,10,10};
       float x = 0;
       float y = 0;
       printf("%f",EQ2G(D,&x,&y));           
       
       getch();
       return 0; 
       
       }    
