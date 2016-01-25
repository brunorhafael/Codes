#include <stdio.h>


int main () {

    int n , cont,soma=0,i=0;
    
    scanf("%d",&cont);
    
    for (i=0;i<cont;i++){
          scanf("%d",&n);
          soma = soma + n;
               }
    printf("%d",soma);
    return 0;
} 
