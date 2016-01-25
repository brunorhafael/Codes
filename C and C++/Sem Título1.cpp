#include <stdio.h>
#include <conio.h>

int main() {
    
    int somaPares, produtoPrimos, n;
    n = 0;
    
    
    while ( n >=0 ) {
          printf("Digite um numero ");
          scanf("%d",&n);
          
           if( n > 0 ) {
                   if ( n % 2 == 0 ) {
                        somaPares += n;
                        }
                   int primo = 1;
                   int contador = 2; 
                   while ( contador < n ){
                         if ( n % contador == 0 ) {
                              primo = 0;
                              contador = n;
                              }      
                            contador++;
                         if ( primo == 1 ) {
                              produtoPrimos *= n;
                              } 
                              }
                              }    
    
    getch();
    return 0;
    
}
