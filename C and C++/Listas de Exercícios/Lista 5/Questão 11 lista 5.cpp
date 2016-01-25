#include<stdio.h>
#include<conio.h>
#define MAX_LIN 5
#define MAX_COL 5
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

void multiplicar(int matriz[MAX_LIN][MAX_COL],int m,int n, int numero){
     int i,j;
     for (i=0;i<m;i++){
         for (j=0;j<n;j++){
             matriz[i][j]=matriz[i][j]*numero;
             }
         }
     
     }

int main (){
    
    int matrizA[MAX_LIN][MAX_COL];
    int mA,nA,num;
    printf ("Informe o numero do linhas matriz A: ");
    scanf ("%d",&mA);
    printf ("Informe o numero do colunas matriz A: ");
    scanf ("%d",&nA);
    alimentar(matrizA,mA,nA);
        
    printf("****************************\n");
    printf("******** MATRIZ A **********\n");
    printf("****************************\n");
    exibir(matrizA,mA,nA);
    printf ("Informe o numero a ser multiplicado pela matriz A: ");
    scanf ("%d",&num);
    printf("\n\n");
    multiplicar(matrizA,mA,nA,num);
    printf("***********************************\n");
    printf("******** (MATRIZ A * %d) **********\n",num);
    printf("***********************************\n");
    exibir(matrizA,mA,nA);
    
    getch();
}
