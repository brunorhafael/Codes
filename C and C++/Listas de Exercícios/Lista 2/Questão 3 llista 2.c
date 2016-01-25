#include <stdio.h>
#include <conio.h>

int main ()
{
  int a,b,c,menor;
  printf("Digite o valor de a\n");
  scanf("%d",&a);
  printf("Digite o valor de b\n");
  scanf("%d",&b);
  printf("Digite o valor de c\n");
  scanf("%d",&c); 
    if(a<b && a<c) {
         menor = a;
         }
    if(b<a && b<c) {
         menor = b;
         }
    if(c<a && c<b) {
         menor = c;
         }    
       printf("O menor numero digitado eh: %d",menor);                       
    

    
   getch();
   return 0;
    
}
