#include <stdio.h>
#include <conio.h>

int main(void) {
 int num, fatorial, i=1;
 printf("Digite um valor para ser fatorado");
 scanf("%d",&num);
 if(num>0){
           fatorial=num;
    for(i=1; i<num; i++){
    fatorial = fatorial*i;}
          }                     
                               
printf("o fatorial de %d eh \n%d",num,fatorial);

getch();
return 0;                                  
    
}
