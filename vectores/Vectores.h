#ifndef VECTORES_H_INCLUDED
#define VECTORES_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

#define MAXIMO(A,B) ((A)>(B)?(A):(B))

void printVec (int *vec, unsigned ce);// size_t == unsigned
int insertarEnOrden (int *vec, unsigned tam,int *ce, int dato);
int insertarEnPos (int *vec, unsigned tam,int *ce, int pos,int dato);
int insertarEnPosYCorrer (int *vec, unsigned tam,int *ce, int pos,int dato);

int elimDato (int *vec,int *ce,int dato);
int elimDatoTodasRep (int *vec,int *ce,int dato);
int elimDatoTodasRep_V2 (int *vec,int *ce,int dato);

#endif // VECTORES_H_INCLUDED
