#include <stdio.h>
#include <conio.h>
#define MAX 100


typedef struct{
        char nomeDono [MAX];
        struct {
               char ruaeNum [MAX];
               char bairro [MAX];
               char CEP [MAX];
               char cidade [MAX];
               char telefone [MAX];
               } Endereco;
        char Modelo[MAX];
        int Ano;
        int Km;
        char Fabricante[MAX];
        char cor[MAX];
        int numPortas;
        int GasOuAlc;
        float Preco;
        char Chapa [MAX];
        char letPlaca[3];
        int numPlaca;
        } Carro;

void ordenaFrota ( Carro frota[MAX ] ){
     int i;
     Carro aux;
     for ( i=0; i < MAX ; i++ ){
         if ( frota[i].numPlaca > frota[i+1].numPlaca ) {
              aux = frota[i];
              frota[i]=frota[i+1];
              frota[i+1]=aux;
              }
         }
     }

int main(){
     int i;
     Carro frota[MAX];
     for ( i=0 ; i < MAX ; i++ ) {
         frota[i].Ano = 0;
         strcpy (frota[i].Chapa,"nenhuma");
         strcpy (frota[i].cor,"preta");
         strcpy (frota[i].Fabricante,"alguma");
         frota[i].GasOuAlc = 0;
         frota[i].Km = 0;
         strcpy (frota[i].Modelo,"algum");
         strcpy (frota[i].nomeDono,"dono");
         frota[i].numPortas = 4;
         frota[i].Preco = 10000;
         strcpy (frota[i].Endereco.bairro,"bairro");
         strcpy (frota[i].Endereco.CEP,"60000000");
         strcpy (frota[i].Endereco.cidade,"cidade");
         strcpy (frota[i].Endereco.ruaeNum,"nome da rua e numero");
         strcpy (frota[i].Endereco.telefone,"88888888");         
         strcpy (frota[i].letPlaca,"AAA");
         frota[i].numPlaca = 0000;
         }
     ordenaFrota ( frota );
    getch();
    return 0;
    
    }
