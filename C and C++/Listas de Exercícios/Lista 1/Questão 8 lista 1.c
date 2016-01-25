#include <stdio.h>
#include <conio.h>

int main(void) {
      int numero, maiornumero=-999999;
      printf("\t\t ''Digite os 20 numeros que deseja'': \n\n\n");
      scanf("%d", &numero);
      while( numero<20) {
             scanf("%d",&numero);  
             } 
      if( numero > maiornumero) {
          maiornumero=numero;
          printf("\n\n\n\n\t O maior valor eh:%d \n",maiornumero);       
          }   
      
    
    getch();
    return 0;
    
}
