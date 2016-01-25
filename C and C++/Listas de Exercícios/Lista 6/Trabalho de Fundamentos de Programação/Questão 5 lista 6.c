#include <stdio.h>
#include <conio.h>
int tam;


typedef struct{
        char nome[81];
        char matricula[8];
        char turma;
        float p1;
        float p2;
        float p3;
        } Aluno;

void leDados ( int n , Aluno turmas[tam] ){
     int i;
     for ( i=0 ; i < n ; i++ ){
         printf ( "\nNome: " ); 
         scanf ( "%s",&turmas[i].nome );
         printf ( "Matricula: " );
         scanf ( "%s",&turmas[i].matricula );
         printf ( "Turma: " );
         scanf ( "%s",&turmas[i].turma );
         }
     
     }

void leNotas ( int n , Aluno turmas[tam] ){
     int i;
     for ( i=0 ; i < n ; i++ ){
         printf ( "\nNotas do %s\n",turmas[i].nome );
         scanf ( "%f",&turmas[i].p1 );
         scanf ( "%f",&turmas[i].p2 );
         scanf ( "%f",&turmas[i].p3 );
         }
     
     }

void mediaTurma ( int n , Aluno turmas[tam],char turma ){
     int i;
     for ( i=0 ; i < n ; i++ ){
         if ( turmas[i].turma == turma ){
              printf ( "\nNome: %s\n",turmas[i].nome ); 
              printf ( "Media: %.2f\n\n",(turmas[i].p1+turmas[i].p2+turmas[i].p3)/3 );
              }
         }
     }

int main(){
    scanf ( "%d",&tam );
    Aluno aluno[tam];
    char turma;
    leDados ( tam,aluno );
    leNotas ( tam,aluno );
    printf ( "\nMedia da Turma: " );
    scanf ( "%s",&turma );
    mediaTurma ( tam,aluno,turma );
    getch();
    return 0;
    
    }
