#include <stdio.h>      

void alimentar(int mat[5][5]);
void exibir(int mat[5][5]);
int maior(int mat[5][5]);

int main(){
    int matriz[5][5];
    
    alimentar(matriz);    
    exibir(matriz);
    int m = maior(matriz);
    printf("\nMAIOR: %d\n", m);
    
    getch();
    return 0;
}


void alimentar(int mat[5][5]){
    int i, j;
    for(i=0; i<5; i++){
       for(j=0; j<5; j++){
          scanf("%d", &mat[i][j]);   
        }
    }
}

void exibir(int mat[5][5]){
    int i, j;
    for(i=0; i<5; i++){
       for(j=0; j<5; j++){
          printf("%d\n",mat[i][j]);
        }
    }
}

int maior(int mat[5][5]){
    int maior=0;
    int i, j;
    for(i=0; i<5; i++){
       for(j=0; j<5; j++){
          if(mat[i][j] > maior){
              maior = mat[i][j];
          }
        }
    }
    return maior;
}
