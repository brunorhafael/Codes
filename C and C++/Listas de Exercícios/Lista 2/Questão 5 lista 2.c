#include <stdio.h>
#include <conio.h>

  int main ()
{
     int x,n,cont=0;
     float pow=1;  
     printf("Digite o valor de X : \n");
     scanf("%d",&x);
     printf("Agora digite o valor de n: \n");
     scanf("%d",&n);
              while(cont<n){
                       cont++;
                       pow = pow*x;
            }
            
                printf("O valor de %d elevado a %d eh %f",x,n,pow);
            
 getch();
 return 0;   
    
}
