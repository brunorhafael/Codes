#include <stdio.h>
#include <conio.h>

 int Swap(int L[], int p, int q){
     int x;
     
     x = L[p];
     L[p] = L[q];
     L[q]= x;
     
     }
  
  int bubbleSort(int L[], int n){
     int t = n;                     // variavel t recebe o teto
     
     while(t>1){
              int  j=1;                // posição inicial da bolha
                while(j<t){
                           if(L[j]> L[j+1]){
                                   Swap(L,j,j+1);
                                     }
                                    j = j+1;
                                  }
                              t = t-1;                        
                               }
               }
int main(){

   int X[] = {1,6,3,7,8,4,5,9};
   
   bubbleSort(X,8); 
 
    int i=0;
    
     for(i=0;i<8;i++){
                      printf("%d\t",X[i]);
                      }

getch();
return 0;
}
