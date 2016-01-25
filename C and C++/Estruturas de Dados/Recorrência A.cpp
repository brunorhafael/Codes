#include<stdio.h>
#include<conio.h>

  int funcA(int x){
      
      if(x>0) return x*funcA((2*x)-1);
              
      if(x=0) return 1;        
      } 
  
  int main(){
   
    int res = funcA(1);
    printf("O resultado eh: %d", res);

getch();
return 0;
}
