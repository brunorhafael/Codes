#include<stdio.h>
#include<conio.h>
#define MAX_LIN 3
#define MAX_COL 3
void alimentar( int matriz[MAX_LIN][MAX_COL], int n ){
     int i,j;
     printf("********************************\n");
     printf("****** ALIMENTAR A MATRIZ ******\n");
     printf("********************************\n");
     for (i=0;i<n;i++){
         for (j=0;j<n;j++){
             printf ("[%d][%d]: ",i,j);
             scanf("%d",&matriz[i][j]);
             }
             printf ("\n");
         }     
     }
     
void exibir( int matriz[MAX_LIN][MAX_COL],int n ){
     int i,j;

     for (i=0;i<n;i++){
         printf("\t");
         for (j=0;j<n;j++){
             printf("%d ",matriz[i][j]);
             }
             printf ("\n");
         }
     
     }

int  somaSecundaria (int matriz[MAX_LIN][MAX_COL],int n ){
     int i,j,soma;
     soma=0;
     for (i=0;i<n;i++){
         for (j=0;j<n;j++){
             if((i+j)==(n-1)){
                soma=soma+matriz[i][j];
                          }
                     }
             }
    return soma;
}

int main (){
    
    int matrizA[MAX_LIN][MAX_COL];
    int nA,somaDiagonal;
    
    printf ("Informe o numero do colunas e linhas da matriz A: ");
    scanf ("%d",&nA);
    alimentar(matrizA,nA);
        
    printf("****************************\n");
    printf("******** MATRIZ A **********\n");
    printf("****************************\n");
    exibir(matrizA,nA);
    somaDiagonal=somaSecundaria(matrizA,nA);
    printf("************************************************\n");
    printf ("A soma da diagonal secundaria da matriz eh: %d.\n",somaDiagonal);
    printf("************************************************\n");
    getch();
}
