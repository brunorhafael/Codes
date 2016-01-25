#include<stdio.h>
#include<conio.h>

     int buscabin (int L[],int p, int q, int x){
        
         int m;        
         m = 2/(p+q);
         if(p > q)
           return -1;
                 
         if(x == L[m]){
            x = L[m];
            return m;}                 
         if(x < L[m])
                return buscabin(L[],p,m-1,x);
         else 
                return buscabin(L[],m+1,q,x);                           
               }  
     
     int main(){
         
         int x[] = {1,2,3,45,677,86,46};
         int a = 0;
         int b = 6;
         int l = 677;
         int res = buscabin(x,a,b,l);
             printf("%d",res);
             
        getch();
        return 0;     
         
         }    
