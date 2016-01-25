#include <stdio.h>
#include <conio.h>

 int Swap(int L[], int p, int q){
     int x;
     x = L[p];
     L[p] = L[q];
     L[q]= x;
     }
  
  int selectionSort(int* L,int p,int q){
       
      int i=p; 
      while(i<q){
                 int j=i+1;
                 if(L[i]>L[j]){
                               Swap(L,i,j);
                               selectionSort(L,p+1,q);
                               }
                 }
                 }    
  
      /*int i=1;
      while(i<n){
           int j=i+1;
            while(j<=n){
                  if(L[i]>L[j]){
                      Swap(L,i,j);          
                                } 
                  j=j+1;                   
                        }
                 i=i+1;            
                 }
              } */

               
  
int main(){

   int X[] = {1,6,3,7,8,4,5,9};
   
   selectionSort(X,1,8); 
 
    int i=0;
    
     for(i=0;i<8;i++){
                      printf("%d\t",X[i]);
                      }

getch();
return 0;
}
