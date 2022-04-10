#include "matriz.h"

void mostrarVector (int *vec, int ce)
{
    int i;
    for ( i=0;i<ce;i++)
        printf(" %d ", *(vec++));
    printf("\n");
}

void mostrarMatriz(int mat[][COL], int fil, int col)
{
    int i;

    for ( i=0; i< fil; i++)
        mostrarVector(mat[i], col);
}

void mostrar(int *mat, int fil, int col)
{
    int i,
        j;

    for (i=0; i<fil;i++)
    {
        for (j=0;j<col;j++)
            printf (" %d ", *(mat++));
        printf("\n");
    }
}

void mostrar_DP (int mat[][COL], int fil, int col)
{

}

void mostrar_DS (int mat[][COL], int fil, int col)
{

}

void mostrar_Tri_sup (int mat[][COL], int fil, int col)
{
    int i, j;

    for (i=1; i<fil; i++)
       for (j= col-1; i+j>=col ; j--)
            printf("%*c%d\n",(fil-i+j)*3,' ',mat[i][j]);
}

void mostrar_Tri_sup_que_inc_DP (int mat[][COL], int fil, int col)
{

}

void mostrar_Tri_sup_con_resp_a_DS (int mat[][COL], int fil, int col)
{

}

void mostrar_Tri_sup_con_resp_a_DS_inc_DS (int mat[][COL], int fil, int col)
{

}

void mostrar_Tri_inf (int mat[][COL], int fil, int col)
{

}

void mostrar_Tri_inf_que_inc_a_DP (int mat[][COL], int fil, int col)
{

}

void mostrar_Triangulo_1 (int mat[][COL], int fil, int col)
{

}

void mostrar_Triangulo_2 (int mat[][COL], int fil, int col)
{

}

void mostrar_Triangulo_3 (int mat[][COL], int fil, int col)
{

}

void mostrar_Triangulo_4 (int mat[][COL], int fil, int col)
{

}

booleano es_simetrica (int mat[][COL], int fil, int col)
{
    return verdadero;
}

booleano es_simetrica_la_DP (int mat[][COL], int fil, int col)
{
    return verdadero;
}

booleano es_simetrica_la_DS (int mat[][COL], int fil, int col)
{
    return verdadero;
}

booleano es_simetrica_resp_al_eje_hor (int mat[][COL], int fil, int col)
{
    return verdadero;
}

booleano es_simetrica_resP_al_eje_ver (int mat[][COL], int fil, int col)
{
    return verdadero;
}

booleano es_simetrica_resp_al_cen (int mat[][COL], int fil, int col)
{
    return verdadero;
}

booleano trasponer_sobre_si_misma (int mat[][COL], int fil, int col)
{
    return verdadero;
}

booleano trasponer_sobre_si_misma_la_DP (int mat[][COL], int fil, int col)
{
    return verdadero;
}

booleano trasponer_sobre_si_misma_la_DS (int mat[][COL], int fil, int col)
{
    return verdadero;
}

booleano trasponer_sobre_si_misma_resp_al_eje_hor (int mat[][COL], int fil, int col)
{
    return verdadero;
}

booleano trasponer_sobre_si_misma_resp_al_eje_ver (int mat[][COL], int fil, int col)
{
    return verdadero;
}

booleano trasponer_sobre_si_misma_resp_al_cen (int mat[][COL], int fil, int col)
{
    return verdadero;
}

booleano es_identidad (int mat[][COL], int fil, int col)
{
    return verdadero;
}

booleano es_escalar (int mat[][COL], int fil, int col)
{
    return verdadero;
}

booleano es_diagonal (int mat[][COL], int fil, int col)
{
    return verdadero;
}

int *Producto_de_matrices (int mat1[][COL], int fil, int col,
                           int mat2[][COL2], int fil2, int col2,
                           int mat3[][COL2], int fil3, int col3)
{

    int i,
        j,
        k;


    for (i=0; i<fil ; i++)
        for (j=0; j<col ; j++)
            for (mat3[i][j]=0, k=0; k<fil ; k++)
                mat3[i][j]+= mat1[i][k] * mat2[k][j];

    return NULL;
}
