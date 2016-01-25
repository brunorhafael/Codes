#include <stdio.h>
#include <conio.h>
#define MAX 100

//Luis Siqueira de Andrade Junior - 0338975
//1º Semestre - Sistemas de Informação

typedef struct{
        char nome[MAX];
        int renda;
        int ano;
        int carro; // 1 - sim , 0 - nao
        }Cliente;

int contaMedia ( Cliente cliente[MAX] , float media ){
    int i , cont;
    cont = 0;
    for ( i=0;i<MAX;i++ ){
        if ( cliente[i].renda > media ){
             cont++;
             }
        }
    return cont;
    }


int main(){
    Cliente cliente[MAX];
    float media=0;
    int comCarro , idade,acimaMedia;
    comCarro=0;
    idade=0;
    int i;
    for ( i=0; i<MAX ; i++ ){
        printf ( "Cliente %d: \n",i+1 );
        printf ( "Nome: " );
        scanf ( "%s",&cliente[i].nome );
        printf ( "Renda: " );
        scanf ( "%d",&cliente[i].renda );
        printf ( "Ano de Nascimento: " );
        scanf ( "%d",&cliente[i].ano );
        printf ( "Carro: " );
        scanf ( "%d",&cliente[i].carro );
        media = media + cliente[i].renda;
        if ( cliente[i].carro == 1 ) comCarro++;
        if ( cliente[i].ano >= 1960 && cliente[i].ano < 1980 ) idade++; 
        }
    media = media/MAX;
    acimaMedia = contaMedia ( cliente , media );
    printf ( "\nAcima da Media: %d\n",acimaMedia ) ;
    printf ( "Com Carro: %d\n",comCarro );
    printf ( "Ano entre 1960 e 1980: %d\n",idade ); 

    
    getch();
    return 0;
    }
