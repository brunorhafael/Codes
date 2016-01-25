#include <stdio.h>
#include <conio.h>

int main()
{
     int n, i, res, x=1;
     printf("Digite um numero para obter como resposta se ele eh triangular ou nao: ");
     scanf("%d",&n);
     for(i=1;i<n;i++){
                       res= x * (x+1) * (x+2);
                       
                       if(n==res)
                       {
                       printf("O numero eh triangular");                  
                       break;            
                       }
                       else      
                       {          
                       x++;
                       }

                      
                       }
     if( n != res ){
         printf("O numero nao e triangular");
         }                  
                       
   

    
 getch();
 return 0;   
    
}
