#include <stdio.h>
#include <conio.h>

int main ()
{
  int a,b,c,maior;
  printf("Digite o valor de a\n");
  scanf("%d",&a);
  printf("Digite o valor de b\n");
  scanf("%d",&b);
  printf("Digite o valor de c\n");
  scanf("%d",&c); 
    if(a>b && a>c){ 
         maior = a;
         }
    if(b>a && b>c){ 
         maior = b;
         }
    if(c>a && c>b){ 
         maior = c;
         }
       
       printf("O maior numero digitado eh: %d",maior);                       
    

    
   getch();
   return 0;
    
}
