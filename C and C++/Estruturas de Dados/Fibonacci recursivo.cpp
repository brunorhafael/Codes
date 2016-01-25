#include <stdio.h>
#include <conio.h>


  int fibo(int n){
      
      if (n<3)
       return 1;
      else 
       return fibo(n-1) + fibo (n-2);
               
      }

int main(){

    int x;
    scanf("%d",&x);
    
    int aux = fibo(x);
    printf("%d",aux);

getch();
return 0;

}
