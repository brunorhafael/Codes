#include <stdio.h>
#include <conio.h>


  int vsoma(int M[], int p, int q){
      
      if(p>q){
              return 0;
              }
      else 
           return M[p] + vsoma(M,p+1,q);        
      
      }
  
int main(){

     int x[] = {1,2,3,4};
     
     int aux = vsoma(x,0,3);
     
     printf("%d", aux);
     

getch();
return 0;

}
