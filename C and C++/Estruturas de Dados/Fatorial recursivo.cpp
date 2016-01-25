#include <stdio.h>
#include <conio.h>

int fat (int n){
      
      if (n >1){
            return n*fat(n-1);
            }
      else 
            return 1;
      }

int main(){

int x;

scanf("%d",&x);
  int aux = fat(x);
  printf("%d",aux);

getch();
return 0;
}
