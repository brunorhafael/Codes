#include <stdio.h>
#include <conio.h>

   int Swap(int L[], int p, int q){
     int x;
     
     x = L[p];
     L[p] = L[q];
     L[q]= x;
     
     }
  int bubbleSortInv(int* L, int n){
      int p =1;
      
      while(p<n){
            int j=n;
            while(j>p){
                       if (L[j]< L[j-1]){
                                 Swap(L,j,j-1);
                                 }
                       j =j-1;          
                       }
                 p=p+1;      
                 }
      }


int main(){
    
   int X[] = {1,6,3,7,8,4,5,9};
   
   bubbleSortInv(X,8); 
 
    int i=0;
    
     for(i=0;i<8;i++){
                      printf("%d\t",X[i]);
                      }
    
getch();
return 0;
}
