#include <stdio.h>
#include <conio.h>

 int qpot(int a, int n){
     
     if(n > 0){
          int x = qpot(a ,(n/2));
          if(n % 2 == 0)
               return x * x;
          else 
               return x * x * a ;
     }
     else 
          return 1;              
}

int main(){

  int x,y;
  
   scanf("%d",&x);
   scanf("%d",&y);
  int aux = qpot (x,y);
    printf("%d",aux);
getch();
return 0;
}
