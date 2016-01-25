#include <stdio.h>
#include <conio.h>

int main ()
{
   int n, x=1, sn;
   printf("Digite o valor de n" );
   scanf("%d",&n);
   
   while( n > 0 ){
   
     sn = sn + x/n  ;
     x++;
     n--;
     printf("%d \n",sn);
                    }
    printf("O resultado da expressao e de %d \n",sn);                  
    
    
    
    
    
 getch();
 return 0;   
    
}
