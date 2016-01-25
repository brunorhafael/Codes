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

void quadradoMagico(int matriz[MAX_LIN][MAX_COL],int n ){
     int i,j,sColuna,sLinha,sPrincipal,sSecundaria;
     sColuna=0;
     sLinha=0;
     sPrincipal=0;
     sSecundaria=0;
     
      for (i=0;i<n;i++){
         sColuna=0;
         sLinha=0;
         for (j=0;j<n;j++){
             sColuna=sColuna+matriz[j][i];
             sLinha=sLinha+matriz[i][j];
                   
                                  if(i==j){
                                           sPrincipal=sPrincipal+matriz[i][j];
                                           }
                                  if((i+j)==(n-1)){
                                               sSecundaria=sSecundaria+matriz[i][j];
                                               }
             }

         }
    if((sColuna==sLinha)&&(sLinha==sPrincipal)&&(sPrincipal==sSecundaria)){
                      printf("*********************************\n");
                      printf("A Matriz eh um QUADRADO MAGICO.\n");  
                      printf("*********************************\n");     
                                                                              }
                      else{
                      printf("*********************************\n");
                      printf("A Matriz NAO eh um QUADRADO MAGICO.\n");  
                      printf("*********************************\n");     
                           
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
    
    quadradoMagico(matrizA,nA);
    
    getch();
}
