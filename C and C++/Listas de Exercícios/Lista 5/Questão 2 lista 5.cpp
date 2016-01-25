#include<stdio.h>
#include<conio.h>

void alimentar( int matriz[5][5] ){
     int i,j;
     printf("********************************\n");
     printf("****** ALIMENTAR A MATRIZ ******\n");
     printf("********************************\n");
     for (i=0;i<5;i++){
         for (j=0;j<5;j++){
             printf ("[%d][%d]: ",i,j);
             scanf("%d",&matriz[i][j]);
             }
             printf ("\n");
         }     
     }
void exibir( int matriz[5][5] ){
     int i,j;
     printf("****************************\n");
     printf("******** MATRIZ ************\n");
     printf("****************************\n");
     for (i=0;i<5;i++){
         printf("\t");
         for (j=0;j<5;j++){
             printf("%d ",matriz[i][j]);
             }
             printf ("\n");
         }
     
     }


void maior_por_linha( int matriz[5][5], int vetor[5] ){
     int i,j,maiorLinha;
     for(i=0;i<5;i++){
                      maiorLinha=matriz[i][0];
                      for(j=0;j<5;j++){
                                       if(matriz[i][j]>maiorLinha){
                                       maiorLinha=matriz[i][j];
                                                                  }
                                       }
                      vetor[i]=maiorLinha;
                      printf ("Maior Elemento na LINHA [%d]: %d.\n",i,vetor[i]);
                      }
     }

void prod_mat_vet(int A[5][5], int v[5],int m, int n){
     int i,j,k,valor;
     int matAux[5][5];
     
     for(i=0;i<m;i++){
         for(j=0;j<n;j++){
              valor=0;
              for(k=0;k<n;k++){
                   valor=valor+(A[i][k])*(v[j]);
                   matAux[i][j]=valor;
                               }       
                          }
                      }
    printf("\n\n");
    printf("**********************************\n");
    printf("******** MATRIZ PRODUTO **********\n");
    printf("**********************************\n");
     exibir(matAux);
     

}

int main (){
    
    int matrizA[5][5];
    int vetorA[5];
    int maiorElemento,mA,nA;
    
    alimentar(matrizA);
    exibir(matrizA);
    maior_por_linha(matrizA,vetorA);
    printf ("Informe o numero do linhas matriz A: ");
    scanf ("%d",&mA);
    printf ("Informe o numero do colunas MATRIZ A e o VETOR A: ");
    scanf ("%d",&nA);
    prod_mat_vet(matrizA,vetorA,mA,nA);
    
    getch();
}
