#include <stdio.h>
#include <conio.h>
int insertionSort(int* L, int n){
      int i=2;
      
      while(i<=n){
           int x = L[i];
           int j = i-1;
           while(j>=1 && L[j]>x){
                 L[j+1] = L[j];
                  j=j-1;    
                      } 
                 L[j+1]=x;
                 i=i+1;           
                  }
               } 
int main(){

   int X[] = {3,6,1,7,8,4,5,9};
   
    insertionSort(X,8); 
 
    int i=0;
    for(i=0;i<8;i++){
        printf("%d\t",X[i]);
       }

getch();
return 0;
}
