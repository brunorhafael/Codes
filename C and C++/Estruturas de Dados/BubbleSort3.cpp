#include <stdio.h>
#include <conio.h>
 int Swap(int L[], int p, int q){
     int x;
     x = L[p];
     L[p] = L[q];
     L[q]= x;
     
     }
 
 int Ord3(int* L, int a, int b, int c){
     if(L[a]>L[c]) Swap(L,a,c);
     if(L[b]>L[c])  Swap(L,b,c);
     if(L[a]>L[b])  Swap(L,a,b); 
     }
  
  int bubbleSort3(int L[], int n){
     int t = n;                     
     while(t>2){
                int  j=1;              
                while(j<t-1){
                     Ord3(L,j,j+1,j+2);   
                     j = j+1;
                }
                t=t-1;
               }
              }
int main(){

      int X[] = {1,6,3,7,8,4,5,9};
   
      bubbleSort3(X,8); 
 
      int i=0;
      for(i=0;i<8;i++){
                      printf("%d\t",X[i]);
                      }
getch();
return 0;
}
