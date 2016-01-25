#include <stdio.h>
#include <conio.h>


typedef struct {
        char telefone[20];
        char nome[20];
        }Dados;
        
void addContato ( Dados clientes[10],int qtdClientes ){
     int i;
     printf ( "\n------Adicionar Contato------\n\n" );
     for ( i=(qtdClientes-1);i<qtdClientes;i++ ){
         printf ( "\nNome do Cliente: " );
         scanf ( "%s",&clientes[i].nome );
         printf ( "Telefone do Cliente: " );
         scanf ( "%s",&clientes[i].telefone );
         }
     printf ( "\nCliente adicionado com sucesso.\n" );
     printf ( "\n\n-------Menu Principal-------\n\n" );
     }

void lisContatos ( Dados clientes[10], int qtdClientes ){
     int i;
     printf ( "\n------Listar Contatos------\n\n" );
     for ( i=0 ; i<qtdClientes ; i++ ){
         printf ( "\nNome: %s\n",clientes[i].nome );
         printf ( "Telefone: %s\n\n",clientes[i].telefone );
         }
     printf ( "\n-------Menu Principal-------\n\n" );
     }


int main(){
    int i;
    int acao;
    Dados clientes[10];
    int qtdClientes;
    qtdClientes = 0 ;
    int cont;
    cont = 1 ;
    while ( cont == 1 ){
          printf ( "\nAtualmente voce tem %d clientes salvos\n\n",qtdClientes );
          printf ( "O que deseja fazer?\n" );
          printf ( "\t1 - Salvar Novo Contato\n\t2 - Listar Contatos\n\t3 - Sair do Programa\n" );
          scanf ( "%d",&acao );
          if ( acao == 1 ){
               qtdClientes ++;
               addContato ( clientes , qtdClientes );
               }
          if ( acao == 2 ){
               lisContatos ( clientes , qtdClientes );
               }
          if ( acao == 3 ){
               printf ( "\n\n-------Programa Finalizado-------" );
               cont = 0;
               }
          }
    getch();
    return 0;
    
    }
