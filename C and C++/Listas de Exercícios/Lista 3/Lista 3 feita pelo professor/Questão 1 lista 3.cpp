#include <stdio.h>
#include <conio.h>

 void imprime ( int x){
      printf( "********************\n" );
      printf( "*****Alo mundo %d******\n",x );
      printf( "********************\n" );
      
      }
       
 int main (){
     
     int valor;
     printf ( "Imprimindo na main" );
     scanf("%d",&valor);
     imprime (valor);
     
    
     
     getch();
     return 0;
}
