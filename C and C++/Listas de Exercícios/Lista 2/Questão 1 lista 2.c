#include <stdio.h>
#include <conio.h>

int main(){
     int num;
     
     printf("\tCardapio do restaurante,escolha 1,2,3,4 que sao as opcoes do nosso cardapio: \n");
     scanf("%d",&num);
        switch(num){
           case 1:
             printf("Pao com mortadela");
             break;
           case 2:
             printf("Suco de uva");
             break;
           case 3:
             printf("Picole de chuchu");
             break;
           case 4:
             printf("Sopa de aspargos");
             break;
           default:
             printf("Opcao invalida");
             break ;
             }
             
      getch();
      return 0;

    
    }
