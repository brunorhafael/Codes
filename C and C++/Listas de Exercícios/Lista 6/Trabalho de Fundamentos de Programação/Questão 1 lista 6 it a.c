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
        } Carro;

int main(){
     int i;
     Carro frota[MAX];
     return 0;

     }
