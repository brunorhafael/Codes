#include <stdio.h>
#include <conio.h>

#define NUM_MAX  10

 typedef struct {
        char nome[81];
        char matricula[8];
        char turma[7];
        float p1;
        float p2;
        float p3; 
} Aluno;


int main(){
    
    Aluno c;
    int acessar;
    
    printf("\t\t\n*******Bem vindo ao sistema de cadastro de alunos!************\n");
    printf("\t\nPara acessar o sistema digite 1 se nao digite qualquer outro valor");
    scanf("%d",&acessar);
    while ( acessar == 1 ){
          
         printf("Agora digite o nome do aluno\n");
   	     scanf( " %[^\n]", c.nome);
             
   	     printf("Digite o numero da matricula\n");
   	     scanf(" %[^\n]", c.matricula);
   	     
   	     printf("Digite a turma do aluno\n");
         scanf(" %[^\n]",c.turma);
         
         printf("Digite a nota 1: \n");
         scanf("%f", &c.p1);
         
         printf("Digite a nota 2: \n");
         scanf("%f",&c.p2);
         
         printf("Digite a nota 3: \n");
         scanf("%f",&c.p3);         
         
         
         
         float media = (c.p1 + c.p2 + c.p3)/3;
         
         printf("A media de %s e %.2f :\n", c.nome,media);
         
         printf("\tSe deseja continuar digite 1");
         scanf("%d",&acessar);
         
         }
         


getch();
return 0;

}
