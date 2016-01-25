#include <stdio.h>
#include <conio.h>

 float area ( float b , float a ) {
             
             float area = b * a ;
             printf( "O valor da area e: %.1f\n ",area );
             return area;
             }
             
 int main () {
     
       float b,a;  
       printf( "Digite o valor da base : \n ");
       scanf ( "%f",&b);
       printf( "Digite o valor da altura : \n");
       scanf ( "%f",&a);
       printf( "O valor da altura e da base e respectivamente: %.1f , %.1f \n",a,b);
       area ( b,a );   
       
       getch ();
       return 0;
       }      
