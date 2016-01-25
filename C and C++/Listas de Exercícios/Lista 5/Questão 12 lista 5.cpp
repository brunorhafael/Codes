#include<stdio.h>
#include<conio.h>
#define MAX_LIN 5
#define MAX_COL 5
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

void simetrica (int matriz[MAX_LIN][MAX_COL],int n ){
     int i,j,cont;
     cont=0;
     for (i=0;i<n;i++){
         
         for (j=0;j<n;j++){
             if(matriz[i][j]==matriz[j][i]){
                                      cont++;
                                      }
                         }
             }
             if(cont==n*n){
                         printf("********************************\n");
                         printf("A matriz eh simetrica.\n");
                         printf("********************************\n");
                         }else{
                               printf("********************************\n");
                         printf("A matriz Nao eh simetrica.\n");
                         printf("********************************\n");
                               }
     
     }

int main (){
    
    int matrizA[MAX_LIN][MAX_COL];
    int nA;
    
    printf ("Informe o numero do colunas e linhas da matriz A: ");
    scanf ("%d",&nA);
    alimentar(matrizA,nA);
        
    printf("****************************\n");
    printf("******** MATRIZ A **********\n");
    printf("****************************\n");
    exibir(matrizA,nA);
    simetrica(matrizA,nA);
    getch();
}
