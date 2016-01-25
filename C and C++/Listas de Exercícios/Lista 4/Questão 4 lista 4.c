#include <stdio.h>
#include <conio.h>

 int main () {
      
   int n , a=0, b=0,dif=0;
   int i =0;
      printf("Digite o tamanho do seu vetor e logo em seguida os valores");         
      scanf("%d",&n);
      
      int v[n];
      
      for ( i = 0 ; i < n ; i++ ){
          scanf("%d",&v[i]);
      }

      for( i =0; i < n ; i++ ) {
           int x = v[i] - v[i+1];
           if ( x > dif ) {
                dif = x;
                a = i;
                b = i+1;
                  } 
                 }
       
      printf("diferenca: %d  I: %d, I+1: %d",dif, a,b);
           
      getch();
      return 0;
      }     
           
           
              /*calc = v[i] - v[i+1];
              maior = calc;
              v[j] = maior;
              j++;
              cont++;
              } 
         while (v[i] < v[i+1]){
               calc = v[i+1] - v[i];
               maior = calc;
               v[j] = maior;
               j++;
               cont++;
               }
               }
         for ( i=0;i<cont;i++){
             printf("%d",v[i]);
             }      
      */
               
          
           
