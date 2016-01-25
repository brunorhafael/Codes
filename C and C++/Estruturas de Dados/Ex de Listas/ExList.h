#ifndef LISTA H
#define LISTA H

#include <malloc.h>
#include <stdio.h>

#define MAX 100

  typedef struct{
       int M[MAX];
       int m,n,r;
       }ListSeq;  
 
  typedef int BOOL
  #define TRUE 1
  #define FALSE 0 


  Listseq Criar(Listseq m, int r);
  BOOL Inserir(int* L , int x);
  int Remover(int* L ,int x);
  int Buscar(int* L ,int x);
  
  #endif           
 
