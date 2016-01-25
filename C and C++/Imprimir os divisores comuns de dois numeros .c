#include <stdio.h>
#include <conio.h>





int main()
{ 
 int n,x,y,qtdDiv=0, contador=0;
 printf( "Digite o valor de n" );
 scanf("%d",&n);
 printf( "Digite o valor de x" );
 scanf("%d",&x);
 printf( "Digite o valor de y" );
 scanf("%d",&y);
 while(contador<=x && contador<=y && qtdDiv<n) {
               contador++;
               int restox = x % contador;
               int restoy = y % contador;
               
               if( restox == 0 && restoy == 0) {
                   qtdDiv++;
                   printf("\n %d divide %d e %d", contador,x,y);
                   }
                   }
 
 
 
 
 
 
                
    getch();
    return 0;
    
}
