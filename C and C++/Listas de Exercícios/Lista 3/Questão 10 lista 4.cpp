#include<stdio.h>
#include<conio.h>

 float soma1 ( float n ) {
    float  cont = 2;
    float s = 0;
      
      while ( cont <= n ){
            s = s + 1/cont;
            cont++;           
            }
            s = s + 1;
      return s;
      }
      
  int main(){
      
      float x;
      float aux;
      
      printf("Digite um numero");
      scanf("%f",&x);
      
      aux = soma1 ( x );
      
      printf("O valor da soma eh : %.2f\n",aux);
      
      
      getch();
      return 0;
}
          
      
      
            
            
            
