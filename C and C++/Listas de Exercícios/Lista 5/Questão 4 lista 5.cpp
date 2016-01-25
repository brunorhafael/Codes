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

void permutacao (int matriz[MAX_LIN][MAX_COL],int n){
     int i,j,cont,somaLinha,somaColuna;
     cont=0;
     somaLinha=0;
     somaColuna=0;
     for(i=0;i<n;i++){
                      somaLinha=0;
                      somaColuna=0;  
         for(j=0;j<n;j++){
                      somaColuna=somaColuna+matriz[j][i];
                      somaLinha=somaLinha+matriz[i][j];  
                          }
                  if ((somaLinha==1)&&(somaColuna==1)){
                             cont++;
                                                       }  
                      }
                      
     if (cont==n){
            printf("******************************\n");
            printf("A MATRIZ eh de PERMUTACAO!\n");
            printf("******************************\n");
                  }else{
                   printf("******************************\n");
                   printf("A MATRIZ NAO eh de PERMUTACAO!\n");
                   printf("******************************\n");
                   }
     
     
     }

int main (){
    
    int matrizA[MAX_LIN][MAX_COL];
    int nA;
    printf ("Informe o numero (n) de linhas e colunas matriz: ");
    scanf ("%d",&nA);
    alimentar(matrizA,nA);
        
    printf("****************************\n");
    printf("******** MATRIZ A **********\n");
    printf("****************************\n");
    exibir(matrizA,nA);
    permutacao(matrizA,nA);   
    
    getch();
}
