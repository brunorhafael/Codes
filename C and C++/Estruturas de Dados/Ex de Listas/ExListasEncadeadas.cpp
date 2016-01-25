#include <stdio.h>
#include <conio.h>
#include <malloc.h>

  typedef struct {
    Nodo* raiz;
    int n,m,r;
  }ListE;
   
   typedef struct nodo {
         
        int chave;   
        struct nodo *prox;     
           }Nodo;

    ListE Criar(int r){
        ListE x 
        x->r = r;
        x->raiz = 0;
        x->n = 0; 
        return x; 
         }

    Nodo* CriarNodo(int x){
         
         Nodo* q = (Nodo*)malloc(sizeof(Nodo)) ;
         q->chave = x;
         q->prox = 0;
         return q;
         } 


int main(){
getch();
return 0;
}
