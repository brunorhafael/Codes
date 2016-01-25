#include <stdio.h>
#include <conio.h>

int main (void)  {
    int num, maior=-999999,i;
    printf(".........Digite os numeros e para finalizar digite um valor negativo:........ \n");
    while( num>0){
      scanf("%d", &num);
      if( num>maior)
         maior=num;   
      }
    while(num<0){
      printf("\t\tO maior valor digitado eh: \t%d", maior);
      break;  
}
    
 getch();
 return 0;   
}
