#include<stdio.h>
#include<conio.h>

  float primo ( int n ) {
         int i = 2;
         float flag = 0;
         
         for( i=2;i<n;i++){
              if( n%i == 0 ) {
                  flag = 1;
                  return 0;
                  }
              else {
                 flag = 0;  
                 return 1;
                 }
                 } 
                 } 
  int main(){
      
       float x,verificar;
        
        printf("Digite um numero\n");
        printf("Se o valor for 0 o numero nao eh primo se for 1 o numero eh primo\n");
        
        scanf("%f",&x);
        
        verificar = primo ( x );
        
        printf("%.1f",verificar);
        
        getch();
        return 0;
        }               
