#include <stdio.h>
#include <conio.h>

 int vetor ( int v[], int tamanho ) {
       int i;
       int cont = 0;
       
       for( i = 0; i < tamanho; i++ ) {
              
              scanf("%d",&v[i]);
              
              if ( v[i] < 0 ) {
                   cont++;}
                   }
            return cont;  
            }    
            
            
 int main() {
     
     int tamanho;
     
     printf("Digite o tamanho do seu vetor");
     scanf("%d",&tamanho);
     
     int vet[tamanho];
     
     int x = vetor ( vet,tamanho);
     
     printf("A quatidade de numero negativos eh: %d",x);
     
     getch();
     return 0;
     } 
     
     
     
                
        
