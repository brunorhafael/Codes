#include <stdio.h>
#include <conio.h>
int n;

typedef struct{
        char marca[15]; 
        int ano;
        char cor[10];
        float preco;
        } Carro;

void levetCarros ( Carro vetcarros[],int n ){
     int i;
     for ( i=0;i<n;i++ ){
         printf ( "\nMarca: " );
         scanf ( "%s",&vetcarros[i].marca );
         printf ( "Ano: " );
         scanf ( "%d",&vetcarros[i].ano );
         printf ( "Cor: " );
         scanf ( "%s",&vetcarros[i].cor );
         printf ( "Preco: " );
         scanf ( "%f",&vetcarros[i].preco );
         }
     }


Carro buscaPreco ( Carro vetcarros[], int n , float valor ){
     int i; 
     int aux = 0 ;
     Carro auxiliar[10];
     for ( i=0;i<n;i++ ){
         if ( vetcarros[i].preco == valor ){
              printf ( "\nMarca: %s\n",vetcarros[i].marca );
              printf ( "Ano: %d\n",vetcarros[i].ano );
              printf ( "Cor: %s\n",vetcarros[i].cor );
              strcpy (auxiliar[aux].marca,vetcarros[i].marca);
              auxiliar[aux].ano = vetcarros[i].ano;
              strcpy (auxiliar[aux].cor,vetcarros[i].cor);
              auxiliar[aux].preco = vetcarros[i].preco;
              aux++;
              }
         }
     return auxiliar[n];
     }

Carro buscaMarca ( Carro vetcarros[], char marca[10] , int n ){
     int i; 
     int aux = 0 ;
     Carro auxiliar[n];
     for ( i=0;i<n;i++ ){
         if ( strcmp (vetcarros[i].marca,marca) == 0 ){
              printf ( "\nMarca: %s\n",vetcarros[i].marca );
              printf ( "Ano: %d\n",vetcarros[i].ano );
              printf ( "Cor: %s\n",vetcarros[i].cor );
              strcpy (auxiliar[aux].marca,vetcarros[i].marca);
              auxiliar[aux].ano = vetcarros[i].ano;
              strcpy (auxiliar[aux].cor,vetcarros[i].cor);
              auxiliar[aux].preco = vetcarros[i].preco;
              aux++;
              }
         }
     return auxiliar[n];
     }

Carro buscaDados ( Carro vetcarros[], char marca[10] , int ano, char cor[10] , int n ){
     int i; 
     int aux = 0 ;
     Carro auxiliar[n];
     for ( i=0;i<n;i++ ){
         if ( strcmp (vetcarros[i].marca,marca) == 0 && vetcarros[i].ano == ano && strcmp (vetcarros[i].cor,cor) == 0 ){
              strcpy (auxiliar[aux].marca,vetcarros[i].marca);
              auxiliar[aux].ano = vetcarros[i].ano;
              strcpy (auxiliar[aux].cor,vetcarros[i].cor);
              auxiliar[aux].preco = vetcarros[i].preco;
              aux++;
              }
         }
     if ( aux > 0 ){
          if ( aux == 1 )printf ( "\nExiste %d carro com esses dados.\n",aux );
          if ( aux > 1 )printf ( "\nExistem %d carros com esses dados.\n",aux );
          for ( i=0 ; i< aux ;i++ ){
              printf ( "\nO preco do carro %d e %.f reais.\n",i+1,auxiliar[i].preco );
              }
          }
     return auxiliar[n];
     }

int main(){
    float preco;
    int ano;
    char cor[10];
    Carro vetcarros[n];
    Carro Buscapreco;
    Carro Buscamarca;
    Carro Buscadados;
    char marca[10];
    printf ("N: ");
    scanf ( "%d",&n );
    levetCarros ( vetcarros,n );
    printf ( "\nBusque o carro pelo Preco: " );
    scanf ( "%f",&preco );
    Buscapreco = buscaPreco ( vetcarros , n , preco );
    printf ( "\nBusque o carro pela Marca: " );
    scanf ( "%s",&marca );
    Buscamarca = buscaMarca ( vetcarros , marca , n );
    printf ( "\nBusque o carro pelos dados: \n" );
    printf ( "\tMarca: " );
    scanf ( "%s",&marca );
    printf ( "\tAno: " );
    scanf ( "%d",&ano );
    printf ( "\tCor: " );
    scanf ( "%s",&cor ); 
    Buscadados = buscaDados ( vetcarros , marca , ano , cor , n );
    getch();
    return 0;
    }
