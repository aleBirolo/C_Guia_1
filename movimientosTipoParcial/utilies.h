#ifndef UTILIES_H_INCLUDED
#define UTILIES_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "colaDinamica.h"

typedef struct
{
    int d,m,a;
}tFecha;

typedef struct
{
    int h,m,s;
}tHora;

typedef struct
{
    tFecha fecha;
    tHora hora;
    int cuenta;
    char cuentaSucursal[50];
    char movimiento;
    float monto;
}tMovimiento;



int loteDePrueba();

int cmpCuenta (void *d1, void*d2);
void sacarDeColaYPonerEnarchivos(FILE *pfMax, FILE *pfMin,tCola *cola, unsigned tam,float maxi);

#endif // UTILIES_H_INCLUDED
