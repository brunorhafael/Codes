#ifndef PILHA_H
#define PILHA_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct pilha{
        int* data;
        int tamanho,altura,tb;
}Pilha;

typedef int BOOL;

typedef struct fila{
   int* data;
   int tamanho,ini,fim;
}Fila;

typedef struct elem{
        int id;
        int chave;
}Elem;



#define TRUE 1
#define FALSE 0


//MÉTODOS DA ESTRUTURA FILA
Fila Create_Fila(int n);
BOOL IsEmpty_Fila(Fila* q);
BOOL IsFull_Fila(Fila* q);
int begin(Fila* q);
BOOL Enfileirar(Fila* q,int x);
BOOL Desenfileirar(Fila* q);
void Destroi(Fila* q);

//MÉTODOS DA ESTRUTURA PILHA
Pilha Create(int m,int tb);
void Destroy(Pilha* s);
BOOL Push(Pilha* p1,void* p);
BOOL Pop(Pilha* s);
void Top(Pilha* s,void* p);
BOOL IsEmpty(Pilha* s);
BOOL IsFull(Pilha* s);
int Height(Pilha* s);

//MÉTODOS POSFIXAR E AVALIAR
int avaliar_expressao(char* pf,char* s);
Pilha Ler_Expressao(const char* E,Fila* q);
int verifica(char ch,int x,int y);
void Posfixar(char* E,char* s);
int prioridade(char c);

#endif
