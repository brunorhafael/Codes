#include <stdio.h>
#include <conio.h>



typedef struct {
        float x;
        float y;
        } Ponto;

typedef struct {
        Ponto vie;
        Ponto vsd;
        } Retangulo;
        
int plano( Ponto vie , Ponto vsd , Ponto p ){
    if ( p.x <= vsd.x && p.x >= vie.x && p.y <= vsd.y && p.y >= vie.y ){
         return 1;
         }else {
               return 0;
               }
    }

int main(){
    Ponto p;
    Retangulo r;
    scanf ("%f",&p.x);
    scanf ("%f",&p.y);
    scanf ("%f",&r.vie.x);
    scanf ("%f",&r.vie.y);
    scanf ("%f",&r.vsd.x);
    scanf ("%f",&r.vsd.y);
    while ( r.vsd.x <= r.vie.x ){
          printf ("Digite o x do vertice superior direito novamente: ");
          scanf ("%f",&r.vsd.x);
          }
    while ( r.vsd.y <= r.vie.y ){
          printf ("Digite o y do vertice superior direito novamente: ");
          scanf ("%f",&r.vsd.y);
          }
    int pertence;
    pertence = plano( r.vie , r.vsd , p );
    printf ( "%d" , pertence );
    getch();
    return 0;
    }
