#ifndef MATRIZ_H_INCLUDED
#define MATRIZ_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define FIL 3
#define COL 3

#define FIL2 3
#define COL2 2

typedef enum
{
    verdadero=1,
    falso=0
}booleano;

void mostrar(int *mat, int fil, int col);

void mostrarVector (int *vec, int ce);

void mostrarMatriz (int mat[][COL], int fil, int col);

void mostrar_DP (int mat[][COL], int fil, int col);
void mostrar_DS (int mat[][COL], int fil, int col);
void mostrar_Tri_sup (int mat[][COL], int fil, int col);
void mostrar_Tri_sup_que_inc_DP (int mat[][COL], int fil, int col);
void mostrar_Tri_sup_con_resp_a_DS (int mat[][COL], int fil, int col);
void mostrar_Tri_sup_con_resp_a_DS_inc_DS (int mat[][COL], int fil, int col);
void mostrar_Tri_inf (int mat[][COL], int fil, int col);
void mostrar_Tri_inf_que_inc_a_DP (int mat[][COL], int fil, int col);
void mostrar_Triangulo_1 (int mat[][COL], int fil, int col);
void mostrar_Triangulo_2 (int mat[][COL], int fil, int col);
void mostrar_Triangulo_3 (int mat[][COL], int fil, int col);
void mostrar_Triangulo_4 (int mat[][COL], int fil, int col);

booleano es_simetrica (int mat[][COL], int fil, int col);
booleano es_simetrica_la_DP (int mat[][COL], int fil, int col);
booleano es_simetrica_la_DS (int mat[][COL], int fil, int col);
booleano es_simetrica_resp_al_eje_hor (int mat[][COL], int fil, int col);
booleano es_simetrica_resP_al_eje_ver (int mat[][COL], int fil, int col);
booleano es_simetrica_resp_al_cen (int mat[][COL], int fil, int col);
booleano trasponer_sobre_si_misma (int mat[][COL], int fil, int col);
booleano trasponer_sobre_si_misma_la_DP (int mat[][COL], int fil, int col);
booleano trasponer_sobre_si_misma_la_DS (int mat[][COL], int fil, int col);
booleano trasponer_sobre_si_misma_resp_al_eje_hor (int mat[][COL], int fil, int col);
booleano trasponer_sobre_si_misma_resp_al_eje_ver (int mat[][COL], int fil, int col);
booleano trasponer_sobre_si_misma_resp_al_cen (int mat[][COL], int fil, int col);
booleano es_identidad (int mat[][COL], int fil, int col);
booleano es_escalar (int mat[][COL], int fil, int col);
booleano es_diagonal (int mat[][COL], int fil, int col);

int *Producto_de_matrices (int mat1[][COL], int fil, int col,
                           int mat2[][COL2], int fil2, int col2,
                           int mat3[][COL2], int fil3, int col3);


/*
Viborita
Encontrar_la_máxima_y_mínima_matriz_que_tenga_i,_j_como_vértices
Encontrar_la_máxima_y_mínima_matriz_cuadrada_que_tenga_i,_j_como_vértices
Encontrar_los_vecinos
Máxima_matriz_que_tenga_i,_j_como_centro
Máxima_matriz_que_coincida_con_el_centro_de_la_matriz_y_el_i,_j_sea_un_vértice
*/


#endif // MATRIZ_H_INCLUDED
