#include <stdio.h>
#include <conio.h>

int ordenar (int * vetor, int n){
    int i,j;
    for(i=n-1; i>= 0; i--){
          for(j=0; j<i; j++){
               if(vetor[j] > vetor[j+1]){
                    int x = vetor[j];
                    vetor[j] = vetor[j+1];
                    vetor[j+1] = x;
               }    
          }         
    }
    return vetor[0];
}

int main(void){
    int n=10;
    int v[10]={3,5,1,8,3,5,78,64,45,900};
    
    int x = ordenar(v,n);
    
    int i;
    for(i=0; i<n;i++)
        printf("%d\n",v[i]);
    printf("\nMenor: %d\n",x);
    getch();
    return 0;
}
