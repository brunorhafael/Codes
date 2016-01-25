#include<stdio.h>
#include<conio.h>
#define MAX_LIN 5
#define MAX_COL 5
void alimentar( int matriz[MAX_LIN][MAX_COL], int linhas, int colunas ){
     int i,j;
     printf("********************************\n");
     printf("****** ALIMENTAR A MATRIZ ******\n");
     printf("********************************\n");
     for (i=0;i<linhas;i++){
         for (j=0;j<colunas;j++){
             printf ("[%d][%d]: ",i,j);
             scanf("%d",&matriz[i][j]);
             }
             printf ("\n");
         }     
     }
void exibir( int matriz[MAX_LIN][MAX_COL],int linhas, int colunas ){
     int i,j;

     for (i=0;i<linhas;i++){
         printf("\t");
         for (j=0;j<colunas;j++){
             printf("%d ",matriz[i][j]);
             }
             printf ("\n");
         }
     
     }

void somaLinha(int matriz[MAX_LIN][MAX_COL], int linhas, int colunas, int vetor[]){
     int i,j,sColuna,sLinha;
               
      for (i=0;i<linhas;i++){
         sLinha=0;
         for (j=0;j<colunas;j++){
             sLinha=sLinha+matriz[i][j];
             vetor[i]=sLinha;
             }
         }
             
}

void inicializarVetor(int vetor[],int n){
     int i;
     for (i=0;i<n;i++){
         vetor[i]=0;
         }
}

void imprimirVetor(int vetor[],int n){
     int i;
     printf("****************************\n");
     printf("Soma da linhas da Matriz\n");
     printf("****************************\n\n");
     for (i=0;i<n;i++){
         printf("Linha[%d]: %d\n",i,vetor[i]); 
                 }
     printf("****************************\n\n");
}
     
int main (){
    
    int matrizA[MAX_LIN][MAX_COL];
    int vetA[MAX_COL];
    int nL,nC;
    printf ("Informe o numero linhas da matriz: ");
    scanf ("%d",&nL);
    printf ("Informe o numero colunas da matriz: ");
    scanf ("%d",&nC);
    alimentar(matrizA,nL,nC);
        
    printf("****************************\n");
    printf("******** MATRIZ A **********\n");
    printf("****************************\n");
    exibir(matrizA,nL,nC);
    inicializarVetor(vetA,nL);
    
    somaLinha(matrizA,nL,nC,vetA);
    
    imprimirVetor(vetA,nL);
    
    getch();
}
