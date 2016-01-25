#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#include<string.h>
#define max 2
typedef struct{
         char nome[15];
         char setor[50];
         int quantidade;
         float preco;
}Produto;
void menu (){
        printf("\n1-Inserir Dados\n");
        printf("2-listar Produto por Setor\n");
        printf("3- Total de capital\n");
        printf("4-Sair do Programa\n");
}
void lerestoque(Produto vet[]){
        int i;
        for(i=0;i<max;i++){
                           printf("\n\n\tDigite o produto %d\n",i);
       printf("Escreva o nome do produto : \n");
       scanf("%s", vet[i].nome);
       printf("Escreva o setor \n");
       scanf("%s", vet[i].setor);
       printf("Escreva a quantidade \n");
       scanf("%d", &vet[i].quantidade);
       printf("Digite o preco\n");
       scanf("%f", &vet[i].preco);         }
}
int setor(Produto vet[], char setor[]){
        int i;
        int cont=0;
        for(i=0; i<max; i++){
                 if(strcmp(vet[i].setor,setor)==0){
                  cont++;
                 }
        }        
return cont;
}
int capital(Produto vet[] ){
        int i;
        int total=0;
        for(i=0; i<max; i++){
              total= vet[i].preco + total;         
        
        }
        return total;
}
int main(){
  Produto vetor[max];
  int op;  int set;
  int c;
  
  while(op != 4 ){
                menu();
                printf("\nDigite uma opcao\n");  
                scanf("%d", &op);        
                        if(op==1){
                            lerestoque(vetor);
                        }
                        if(op==2){
                                  printf("\nDigite o setor : \n");
                                  char s[50];
                                  scanf("%s",s);
                           int set= setor(vetor,s);
                           printf("\n %d Produtos do setor %s!\n",set,s);
                        }
                        if(op==3){
                            int c= capital(vetor);
                            printf("\nCapital total : %d!!\n",c);
                        }
  }
  getch();
}
