#include <stdio.h>
#include <conio.h>

int main(void) 
{
 int quantidade=1, continuar;
 float preco, total=0;    
 printf("Se deseja continuar digite 1 senao digite 2 e logo em seguida digite o valor do preco dos produtos um de cada vez\n");
 scanf("%d",&continuar);
           while(continuar==1){
                     scanf("%f",&preco);
                     printf("Se deseja continuar digite 1 senão digite 2\n e logo em seguida digite o valor do preco dos produtos um de cada vez\n");
                     scanf("%d",&continuar);
                     quantidade=quantidade+1;
                     total=(preco*quantidade)+total;
                     }
           if(continuar==2){
                  printf("O total gasto pela empresa eh de:\n %.1f",total);   
                  }                 
                  
    
    
    getch();
    return 0;
    
    
}
