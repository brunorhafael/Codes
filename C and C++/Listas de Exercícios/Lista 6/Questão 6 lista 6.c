#include<stdio.h>
#include<conio.h>
#include<string.h>

typedef struct 
{
        char nome[50];
        float renda;
        char ano[20];
        char possui[5];
} Dados;

int main (){
    
    Dados x;
    
    printf("Digite o nome do cliente: \n");
    scanf(" %[^\n]",x.nome);
    
    printf("Digite a renda mensal do cliente \n");
    scanf("%f",&x.renda);
    
    printf("Digite o ano de nascimento do cliente \n");
    scanf(" %[^\n]", x.ano);
    
    printf("O cliente possui carro? \n");
    scanf(" %[^\n]", x.possui);
    
    
    printf("\tO nome do cliente e: %s \n", x.nome);
    printf("\tA renda mensal do cliente e: %f \n", x.renda);
    printf("\tAno de nascimento: %s \n",x.nome);
    printf("\tO cliente possui carro?  \n\t %s", x.possui);
    
    
 
    getch();
    return 0;


}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
        
    
