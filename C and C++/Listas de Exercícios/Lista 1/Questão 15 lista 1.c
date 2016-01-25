#include <stdio.h>
#include <conio.h>

int main(void){
     int num;
     printf("Digite algum numero para saber se ela eh par ou impar");
     scanf("%d",&num);
     if(num>0) {
          if(num % 2 == 0) {
             printf(" O numero digitado eh par");}
          if(num % 2 == 1) {
             printf("O numero digitado eh impar");}       
             }
             
     if(num<0){
             printf("Por favor digite um valor positivo");
             scanf("%d",&num);
             if(num % 2 == 0) {
             printf(" O numero digitado eh par");}
          if(num % 2 == 1) {
             printf("O numero digitado eh impar");}
             }
                       
    getch();
    return 0;
}
