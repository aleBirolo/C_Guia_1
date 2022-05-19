#ifndef COLADINAMICA_H_INCLUDED
#define COLADINAMICA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MINIMO(A,B) ((A)<(B)?(A):(B))
typedef struct sNodo
{
    void *dato;
    unsigned tamDato;
    struct sNodo *sig;
}tNodo;

typedef struct
{
    tNodo *pri;
    tNodo *ult;
}tCola;

void crearCola(tCola *pc);
int ponerEnCola(tCola *pc,const void *pd, const unsigned tam);
int sacarDeCola(tCola *pc,void *pd, unsigned tam);
int colaVacia(tCola *pc);
int colaLlena(tCola *pc);
int verPrimero(tCola *pc,void *pd, const unsigned tam);





#endif // COLADINAMICA_H_INCLUDED
