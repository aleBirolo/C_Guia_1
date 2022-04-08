#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define TAM 50 //declaro el TAM mas grande para que las mat mas pequeñas tambien funcione
#define MAYOR(X,Y) ((X)>(Y)? (X):(Y))
#define MENOR(X,Y) ((X)<(Y)? (X):(Y))
#define INTERCAMBIAR(X,Y) {int aux=(X) ; (X) = (Y) ; (Y) = aux ;}

/**
    int a=1,b=33;
    printf("a=%d, b=%d\n",a,b);
    INTERCAMBIAR(a,b);
    printf("a=%d, b=%d\n",a,b);
*/

/**
    i=j diagonal principal
    i>j debajo diagonal
    i+j = orden - 1
    i+j < orden - 1 izq diagonal secundaria
*/

void mostrar_mat (int [][TAM],int,int);

void debajo_diag_ppal (int [][TAM],int);
void triangulo_superior (int [][TAM],int);
void triangulo_izquierda (int [][TAM],int);
void triangulo_derecha (int [][TAM],int);
void triangulo_abajo (int [][TAM],int);

int traza_mat (int [][TAM],int);
int traza_mat_sec (int [][TAM],int);

int es_simetrica(int [][TAM],int);

void transponer_cuad (int [][TAM],int);
void transponer (int [][TAM],int,int);

int prod_mat (int [][TAM],int,int,int [][TAM],int,int);

void transponer_cuad_desde_centro(int [][TAM],int);/// como si fuera un giro de 180

/*********** INTERCAMBIAR CUADRANTES *******************************/

void intercambiar_cuadrantes_C1_C2(int [][TAM],int);
void intercambiar_cuadrantes_C1_C3(int [][TAM],int);
void intercambiar_cuadrantes_C1_C4(int [][TAM],int);
void intercambiar_cuadrantes_C2_C3(int [][TAM],int);
void intercambiar_cuadrantes_C2_C4(int [][TAM],int);
void intercambiar_cuadrantes_C3_C4(int [][TAM],int);

/*********** RELOJES DE ARENA *******************************/


/**************************************************************/

/**************************************************************/
void rotacion_eje_inferior(int m [][TAM],int f,int c);


#endif // MATRIX_H_INCLUDED
