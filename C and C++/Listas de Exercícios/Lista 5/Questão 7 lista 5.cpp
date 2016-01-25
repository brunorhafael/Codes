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

void somaZero(int matriz[MAX_LIN][MAX_COL],int n ){
     int i,j,sColuna,sLinha,sPrincipal,sSecundaria;
     sColuna=sLinha=sPrincipal=sSecundaria=0;
          
      for (i=0;i<n;i++){
         sColuna=0;
         sLinha=0;
         for (j=0;j<n;j++){
             sLinha=sLinha+matriz[i][j];
             sColuna=sColuna+matriz[j][i];
             if(i==j){
                      sPrincipal=sPrincipal+matriz[i][j];
                      }
             if((i+j)==(n-1)){
                      sSecundaria=sSecundaria+matriz[i][j];
                      }
                                              
             }
             if (sColuna==0){
                             printf("******************************\n");
                             printf("A coluna[%d] tem soma=0;\n",i);
                             printf("******************************\n");
                             }
             if (sLinha==0){
                            printf("******************************\n");
                            printf("A linha[%d] tem soma=0;\n",i);
                            printf("******************************\n");
                            }
      }
             if (sPrincipal==0){
                             printf("******************************\n");
                             printf("A Diagonal Principal tem soma=0;\n");
                             printf("******************************\n");
                             }
             if (sSecundaria==0){
                             printf("******************************\n");
                             printf("A Diagonal Secundaria tem soma=0;\n");
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
    
    somaZero(matrizA,nA);
    
    getch();
}
