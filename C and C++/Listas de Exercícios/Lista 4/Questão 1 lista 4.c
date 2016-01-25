#include<stdio.h>
#include<conio.h>

#define MAX 100

  void vetor (int v[] , int qtdeElementos) {
       int i;
       for ( i=0;i<qtdeElementos;i++){
             printf("Digite um numero na posicao %d do vetor ",i);
             scanf("%d",&v[i]);
       }
  }
  void imprime (int v[], int opcao,int qtdeNumero){
       int i;
       if( opcao == 1 ){
           for(i=0;i<qtdeNumero;i++){
                 printf( "%d",v[i]  );                    
               }
           }
        else{
             for(i=qtdeNumero-1;i>=0;i--){
                 printf( "%d",v[i]  );                    
               }
             }   
       }
  
  
  
  
  
  
  int main(){
      int v[MAX];
      int quantidadeElementos;
      int opcao;
      
      printf("Digite a quantidade de elemetos");
      scanf("%d",&quantidadeElementos);
      
      vetor( v, quantidadeElementos );
      
      do{
      printf("Digite 1 para a ordem direta do vetor ou 2 para ordem inversa");
      scanf("%d",&opcao);
      }while(opcao != 1 && opcao != 2);
      
      imprime ( v, opcao, quantidadeElementos );
      
      getch();
      return 0;
      }
           
       
