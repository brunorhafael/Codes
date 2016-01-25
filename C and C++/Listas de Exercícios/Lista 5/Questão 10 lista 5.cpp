#include<stdio.h>
#include<conio.h>
#define MAX_LIN 3
#define MAX_COL 3
void alimentar( int matriz[MAX_LIN][MAX_COL], int m, int n ){
     int i,j;
     printf("********************************\n");
     printf("****** ALIMENTAR A MATRIZ ******\n");
     printf("********************************\n");
     for (i=0;i<m;i++){
         for (j=0;j<n;j++){
             printf ("[%d][%d]: ",i,j);
             scanf("%d",&matriz[i][j]);
             }
             printf ("\n");
         }     
     }
void exibir( int matriz[MAX_LIN][MAX_COL],int m, int n ){
     int i,j;

     for (i=0;i<m;i++){
         printf("\t");
         for (j=0;j<n;j++){
             printf("%d ",matriz[i][j]);
             }
             printf ("\n");
         }
     
     }

void testeMatriz (int matriz[MAX_LIN][MAX_COL],int m, int n ){
     int i,j,multiplo;
     if (m<2||n<2){
                   printf("***********************************************\n");
                   printf ("A Matriz possui menos de duas colunas ou linhas.\n");
                   printf("************************************************\n");
                   }else{
                   for(i=0;i<m-1;i++){
                       for(j=0;j<2;j++){                        
                            if(matriz[i][j]%matriz[i][j+1]==0){
                                 printf(" %d eh divisivel por %d.\n",matriz[i][j],matriz[i][j+1]);             
                                        }
                            if (matriz[j][i]%matriz[j+1][i]==0){
                                printf(" %d eh divisivel por %d.\n",matriz[j][i],matriz[j][i+1]);
                                   }
                                      }
                         }
     }
}



int main (){
    
    int matrizA[MAX_LIN][MAX_COL];
    int mA,nA;
    printf ("Informe o numero do linhas matriz A: ");
    scanf ("%d",&mA);
    printf ("Informe o numero do colunas matriz A: ");
    scanf ("%d",&nA);
    alimentar(matrizA,mA,nA);
        
    printf("****************************\n");
    printf("******** MATRIZ A **********\n");
    printf("****************************\n");
    exibir(matrizA,mA,nA);
    
    testeMatriz(matrizA,mA,nA);    
    
    getch();
}
