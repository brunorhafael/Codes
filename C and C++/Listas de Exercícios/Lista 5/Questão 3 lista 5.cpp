#include<stdio.h>
#include<conio.h>
#define MAX_LIN 5
#define MAX_COL 5
void alimentar( int matriz[MAX_LIN][MAX_COL], int m, int n ){
     int i,j;
    
     printf("****** ALIMENTAR A MATRIZ ******\n");
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
void prod_mat(int mat1[MAX_LIN][MAX_COL], int mat2[MAX_LIN][MAX_COL], int mat3[MAX_LIN][MAX_COL], int m, int n, int p){
     int i,j,k,valor;
     if (n!=p){
               printf ("Nao eh possivel calcular o produto das matrizes.");
                       }else{
     for(i=0;i<m;i++){
         for(j=0;j<p;j++){
              valor=0;
              for(k=0;k<n;k++){
                   valor=valor+(mat1[i][k])*(mat2[k][j]);
                   matr3[i][j]=valor;
                               }       
                          }
                      }
    printf("\n\n");
    printf("******** MATRIZ 3 (Matriz 1 X Matriz 3) **********\n");
     exibir(mat3,m,p);
     }

}



int main (){
    
    int matriz1[MAX_LIN][MAX_COL];
    int matriz2[MAX_LIN][MAX_COL];
    int matriz3[MAX_LIN][MAX_COL];   
    int n1,n2,n3;
    printf ("Informe o numero do linhas matriz 1: ");
    scanf ("%d",&n1);
    printf ("Informe o numero do colunas matriz 1: ");
    scanf ("%d",&n2);
    alimentar(matriz1,n1,n2);
        
    printf("******** MATRIZ 1 **********\n");
    exibir(matriz1,n1,n2);
    printf ("Informe o numero do linhas matriz 2: ");
    scanf ("%d",&n1);
    printf ("Informe o numero do colunas matriz 2: ");
    scanf ("%d",&n2);
    alimentar(matriz2,n1,n2);
    printf("******** MATRIZ 2 **********\n");
    exibir(matriz2,n1,n2);
    prod_mat(matriz1, matriz2, matriz3, n1, n2, n3);    
    printf("\n\n");
    
    
  }
