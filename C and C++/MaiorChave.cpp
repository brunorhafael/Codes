#include <stdio.h>
#include <conio.h>

   int MaiorChave(int* L, int p,int q){
          
          int maior;
          
          int r = (p+q)/2;
          int r1 = r/2;
          
          
          if(p=q){
                  return L[p];
                  }
          if(maior == L[r]){
                   return L[r];
                   }
            else if (maior == L[r1])
                 return L[r1];
                 else { 
                     int x = MaiorChave(L,p,r);
                     int y = MaiorChave(L,r+1,r1);
                     int z= MaiorChave(L,r1+1,q);
                     
                     if() 
                 }
                  
       }
int main(){
    
    int X[] = {1,2,3,4,5,6,67,7,8,9,6,5,4};
    int i = 0;
    int f = 12;

    int res = MaiorChave(X,i,f);    
    printf("%d",res);
    
getch();
return 0;
}
