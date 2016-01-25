#include <stdio.h>
#include <conio.h>

int main(void) {
      int num, maior,menor,i = 1; 
      printf("\t\t ''Digite os numeros'': \n");
          while( i < 5  ){
             scanf("%d",&num);
             maior = num;
             menor = num;
                                                          
              if( num < menor) {
                 menor = num;
                               }
              if ( num > maior){
                   maior = num;                 
                               }
                               i++; 
                               }   
          printf("\n\n\n\n\t O menor valor eh:\t\t %d ", menor);
          printf("\n\n\n\n\t O maior valor eh:\t\t %d ", maior);          
             
      
    
    getch();
    return 0;
}
