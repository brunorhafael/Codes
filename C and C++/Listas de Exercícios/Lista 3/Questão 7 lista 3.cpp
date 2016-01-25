#include <stdio.h> 
#include <conio.h>

  int numeroPerfeito ( int n ) {
      int contador = 1;
      int soma = 0;
      while ( contador < n ){
             if ( n % contador == 0 ){
                  soma = soma + contador;
                  }
             contador ++;
             }
             if ( soma == n ){
                  printf( "O numero eh perfeito" );
                  }
            else {
                printf ( "O numero nao eh perfeito");
                 }
                                      }
                                          
                        
  int main () {
       
       int n;
       
       printf ( "Digite um numero" );
       scanf ( "%d",&n );
       
       numeroPerfeito ( n );
       
       getch();
       return 0;
}                                                   
                 
                             
                   
      
