#include <stdio.h>
#include <conio.h>


 
 int Swap(int L[], int p, int q){
     int x;
     x = L[p];
     L[p] = L[q];
     L[q]= x;
     }

 int Part(int* L, int p, int q){
     int i=p;
     int j=p-1;
     
     while(i<q){
                if(L[i]<L[q]){
                           j=j+1;
                           Swap(L,i,j);       
                              }
                i=i+1;
                }
     Swap(L,j+1,q);
     return j+1;
     }

 int QuickSort(int* L, int p, int q){
     
        if(p<q){
             int r = Part(L,p,q);
             QuickSort(L,p,r-1);
             QuickSort(L,r+1,q);
     }
    }

int main(){
    
       int X[] = {1,6,3,7,8,4,5,9};
   
   QuickSort(X,0,8); 
 
    int i=0;
    
     for(i=0;i<8;i++){
                      printf("%d\t",X[i]);
                      }
    
getch();
return 0;
}
