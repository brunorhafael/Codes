#include <stdio.h>
#include <conio.h>
#define MAX 50

//Luis Siqueira de Andrade Junior - 0338975
//1º Semestre - Sistemas de Informação

typedef struct{
        char nome[MAX];
        int renda;
        int ano;
        int carro; // 1 - sim , 0 - nao
        }Cliente;

int main(){
    Cliente cliente;
    printf ( "Nome: " );
    scanf ( "%s",&cliente.nome );
    printf ( "Renda: " );
    scanf ( "%d",&cliente.renda );
    printf ( "Ano de Nascimento: " );
    scanf ( "%d",&cliente.ano );
    printf ( "Carro: " );
    scanf ( "%d",&cliente.carro );
    printf ( "\nNome: %s",cliente.nome );
    printf ( "\nRenda: %d",cliente.renda );
    printf ( "\nAno: %d",cliente.ano );
    printf ( "\nCarro: %d",cliente.carro );
    
    getch();
    return 0;
    }
