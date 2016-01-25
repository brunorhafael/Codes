#include <stdio.h>
#include <conio.h>

  int Busca3(int* L, int n, int x){
      
      int pri = n/3;
      int seg = n/3 + pri;
      
          if(n==0) 
          return 0;
      
     else if(x == L[pri])  return L[pri];
      
     else if(x == L[seg])  return L[seg];
      
     else if(x < L[pri]) return Busca3(L,pri,x);
     
     else if(x>L[pri] && x <L[seg]) return Busca3(&L[pri+1],seg,x);
      
     else if(x > L[seg]){
           int res = Busca3(&L[seg+1], n-seg-1,x);
           if(res<0) return -1;
           else return seg+1+res;
                     }
                    }

int main(){
    
    int i;
    int L[] = {1,2,3,4,5,6,7};
    
    printf("%d",Busca3(L,7,));
    
getch();
return 0;
}
