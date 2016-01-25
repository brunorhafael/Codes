#include <stdio.h>
#include <conio.h>

int main (void) 
{
int x,i;
char continuar = 1;    
float lsala,csala,totalarea=0,ressala;

//while(continuar == 1){
                 printf("Digite a quantidade de compartimentos!\n");
                 scanf("%d",&x);
                 for(i=0;i<x;i++){
                 
                 printf("Digite o valor da largura do %d Compartimento:\n",i+1);
                 scanf("%f",&lsala);
                 printf("Agora digite o valor do comprimento do Compartimento:\n");
                 scanf("%f",&csala);
                 totalarea = totalarea + lsala*csala;
                 
                 //printf("Deseja continuar digitando areas dos Compartimentos? 1 - Sim e 2 - Nao\n");
                 //scanf("%d",&continuar);
                 }
                 
                 printf("A area total da Residencia eh:\n %.2f",totalarea);

getch();
return 0;
}                    

