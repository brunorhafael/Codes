#include<stdio.h>
#include<conio.h>


  
  int somaMatrizes( int* A[], int* B[], int n){
     
      int i;
      int j;
      int C[3][3];      
      for (i=1;i<n;i++){
          for (j=1;j<n;j++){
              C[i][j] = A[i][j] + B[i][j];
              printf("%d", C[i][j]);
              }
          }
      
      } 
   
 
int main(){
        
      int X[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
      int Y[3][3] = {{8,7,6},{5,4,3},{1,6,4}};
      
      somaMatrizes(&X[3],&Y[3],9);
getch();
return 0;
}
