#ifndef FILA_H
#define FILA_H

#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct{
        void* data;
        int m,tb;
        int i,f,n;
}Fila;

typedef struct ponto{
        int x;
        int y;
}Ponto;

typedef int BOOL;
#define FALSE 0
#define TRUE 1

Fila create(int m, int tb);
BOOL enqueue(Fila* q, void* b);
BOOL dequeue(Fila *q, void* b);
BOOL isempty(Fila *q);
BOOL isfull(Fila *q);
int len(Fila *q);
void destroy(Fila *q);
void preencher(char mat[50][50],int i,int j);

#endif
