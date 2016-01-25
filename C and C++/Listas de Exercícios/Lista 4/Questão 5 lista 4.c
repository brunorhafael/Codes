#include <stdio.h>
#include <conio.h>

 int vetor ( int v[], int tamanho, int *maior, int *menor ) {
     
     int i=0;
     int media;
     int aux = 0;
    *maior = 0;
    *menor = 100000;
     for ( i = 0; i < tamanho; i++ ){
          scanf("%d",&v[i]);
          aux = aux + v[i];
          if ( v[i] > *maior ){
               *maior = v[i];
               }
          if ( v[i] < *menor ){
               *menor = v[i];     
          }
          }
          
     media = aux/tamanho;
     return media;
     }
     
    int main (){
        
        int x,tam,maior = 0, menor = 0;
        
        printf("Digite o tamanho do seu vetor");
        scanf("%d",&tam);
        
        int v[tam];
        
        x = vetor ( v, tam, &maior,&menor );
        printf("A media e: %d",x);
        printf("\n");
        printf("O maior eh :  %d     O menor eh:  %d ",maior, menor);
        
        
        getch();
        return 0;
        }      
                   
