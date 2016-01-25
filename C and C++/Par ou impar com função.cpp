# include <stdio.h>
# include <conio.h>

 int par ( int n ) {
     if (  n % 2 == 0 ) {
           printf ( "O numero %d eh par", n ); 
           return n;
           }
     else {
          printf("O numero digitado eh impar");
          return 0;}
          }
          
          
          int main () {
              
              int num;
              
              printf ("Digite um numero");
              scanf  ("%d",&num);
              
              num = par ( num ) ;
              
              getch ();
              return 0;
              }
                
