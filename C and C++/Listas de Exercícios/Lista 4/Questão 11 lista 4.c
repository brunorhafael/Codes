#include <stdio.h>
#include <conio.h>

 void inverter ( int vetor[], int n ) {    
     int i;
     for ( i = 0; i < n; i++){
         scanf("%d",&vetor[i]);
     }
     
     for (i=n-1;i>=0;i--)
        printf("%d  ",vetor[i]);
        
}

         int main(void){
           int v[5];// = {1,2,3,4,5,6,7,8,9,10};
            inverter(v, 5);
            
            getch();
            return 0;
         }
