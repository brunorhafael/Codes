#include <stdio.h>

float sqrtSI ( float y) {
          y = y + 2; 
          
          printf("%f",y);
          return 0.0;
          } 


int main () {
    
    float a,b;
    a = 16;
    b = 10;
    
    b = sqrtSI ( b );
    printf("%f %f",a,b);
    

   return 0; 
    
}
