#include<stdio.h>
#include<conio.h>


   void MultiplicaMatrizes(int) 
{

	
	for(int i = 0; i < L1; i++) {
		for(int j = 0; j < C2; j++) {
			M3[i][j] = 0;
			for(int k = 0; k < C1; k++) {
				M3[i][j] += M1[i][k] * M2[k][j];
			}
		}
	}
}

 
int main(){
    
        
 

getch();
return 0;
}
