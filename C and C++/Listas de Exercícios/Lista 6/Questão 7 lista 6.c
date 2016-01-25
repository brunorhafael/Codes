#include<stdio.h>
#include<conio.h>
#include <string.h>


typedef struct 
{
        char nome[50];
        float renda;
        int ano;
        char possui[4];     
} Dados;

int main (){
    
    Dados x;
    int continuar;
    float media = 800;
    int cont_media = 0;
    int cont_carro = 0;
    int cont_ano = 0;
    char g[3] = "sim";    
    
    printf("Para entrar no Sistema digite 1\n");
    scanf("%d",&continuar);
    
    while( continuar == 1 )
{
    
    printf("Digite o nome do cliente: \n");
    scanf(" %[^\n]",&x.nome);
     
    printf("Digite a renda mensal do cliente \n");
    scanf("%f",&x.renda);
       if( x.renda > media ){
        cont_media++;
        }
 
    printf("Digite o ano de nascimento do cliente \n");
    scanf("%d", &x.ano);
       if( x.ano > 1960 && x.ano < 1980 ){ 
           cont_ano++;
           }
           
     
    printf("O cliente possui carro? \n");
    
    scanf(" %[^\n]", &x.possui);
       if(strcmp(x.possui,g)){
           cont_carro++;
       }   
    
     
    printf("\t  O nome do cliente e: %s  \n", x.nome);
    printf("\t  A renda mensal do cliente e: %.2f \n", x.renda);
    printf("\t  Ano de nascimento: %d    \n", x.ano);
    printf("\t  O cliente possui carro? %s\n\n", x.possui);
    
    printf("\t  Deseja continuar? Digite 1\n");
    scanf("%d",&continuar);
    system("cls");
    
}
    
    printf(" A quantidade de clientes que possuem a renda mensal acima da media eh: %d\n", cont_media);
    printf(" A quantidade de clientes que possuem a data de nascimento no intervalo preestabelecido eh: %d\n", cont_ano);
    printf(" A quantidade de clientes possuem carro eh: %d\n", cont_carro);
    
    

 
    getch();
    return 0;
}
