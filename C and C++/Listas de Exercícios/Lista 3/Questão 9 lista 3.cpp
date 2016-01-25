#include <stdio.h>
#include<conio.h>

 float media ( float n ) {
        int  cont = 0;
        float media = 0;
         while ( n > 0 ) {
                media  = media + n ;
                scanf("%f",&n);
                cont++;
                }    
                
         while ( n < 0 ) {
               media = media / cont;
          return media;
          }
          }
          
          
    int main (void) {
        
        int num;  
        float med;
        
        printf( "Digite os valores :\n " );
        scanf ( "%d",&num );
        
        med =  media ( num );
        
        printf ( "O valor da media eh: %.1f",med);
        getch();
        return 0;
        }
                         
                
                           
