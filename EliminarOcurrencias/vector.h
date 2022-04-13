#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 10

void mostrarVector (int *vec, int ce);
void intercambio (int *p1, int *p2);
int eliminarOcurrencias (int *vec, int *ce, int car);

#endif // VECTOR_H_INCLUDED
