#include <stdio.h>
#include <conio.h>

  int idade ( int n ) {
       
       if ( n >= 5 && n <= 7 ) {
            printf ( "Categoria 1");
             }
       if ( n >= 8 && n <= 10 ) {
            printf ( "Categoria 2");
             }
       if ( n >= 11 && n <= 13 ) {
            printf ( "Categoria 3");
             }       
       if ( n >= 14 && n <= 17 ) {
            printf ( "Categoria 4");
             }
       if ( n >= 18) {
            printf ( "Categoria 5");
             }
                   }
              
  int main(void) {
      
         int n;
         
         printf("Digite a idade");
         scanf("%d",&n);
         
         idade ( n );
         
         
         getch();
         return 0;
         
         }                 
