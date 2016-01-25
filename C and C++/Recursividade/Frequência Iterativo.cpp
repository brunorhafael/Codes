#include <stdio.h>
#include <conio.h>

 void freq(int M[], int n){
     
     int cont=0,i,j;
     int F[n];
           
      for(i=0;i<n;i++){
          for(j=0;j<n;j++){
              if(M[i] == M[j]){
                      cont++;  
                      F[i] = cont;
              }
              else continue;
          }
          cont = 0;
          printf("%d", F[i]);
      }                       
 }
int main(){

       int L[] = {1,2,2,5 ,4,1};
       freq (L,6);
         
getch();
return 0;
}
