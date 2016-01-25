#include<stdio.h>
#include<conio.h>
#define MAX_LIN 50
#define MAX_COL 50

void trianPascal(int matriz[MAX_LIN][MAX_COL],int n, int c, int l){
     for(l=1;l<=n;l++){
                      for(c=2;c<=l;c++){
                     if (c==0||l==c){
                                     matriz[l][c]=1;
                                     }else{
                                           matriz[l][c]=matriz[l-1][c]+matriz[l-1][c-1];
                                           }                   
                     
                      }
     }
}

void imprimetriangulo (int matriz[MAX_LIN][MAX_COL],int n, int c, int l){
      for(l=1;l<=n;l++){
                        for(c=2;c<=l;c++){
                                        printf("%d ",matriz[l][c]);  
                                          }
                                          
      printf("\n");
      }
}


int main (){
    int num,linhas,colunas;
    int matrizA[MAX_LIN][MAX_COL];
    linhas=0;
    colunas=0;
    printf("*************************************\n");
    printf("***** TRIANGULO DE PASCAL ***********\n");
    printf("*************************************\n\n");
    printf("Informe o numero de LINHAS: ");
    scanf("%d",&num);
    trianPascal(matrizA,num,linhas,colunas);
    imprimetriangulo(matrizA,num,linhas,colunas);
getch();    
}

