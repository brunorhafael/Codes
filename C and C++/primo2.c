#include <stdio.h>


int main () {

    int n, fatorial,cont=1;
    
    scanf("%d",&n);
    
    while( cont <= n ){
           fatorial =  fatorial*cont;
           cont++;
           }
    
     printf("%d",fatorial);

    return 0;
} 
  
