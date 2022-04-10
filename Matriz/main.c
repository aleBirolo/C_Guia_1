#include "matriz.h"

int main()
{
    int mat1[FIL][COL]={{1,2,3},
                        {4,5,6},
                        {7,8,9}};

    int mat2[FIL2][COL2]={{10,11},
                          {12,13},
                          {14,15}};

    int mat3[FIL][COL2]={};


    printf ("\n Matriz 1:\n");
    mostrar(mat1, FIL, COL);

    printf ("\n Matriz 2:\n");
    mostrar(mat2, FIL2, COL2);

    printf ("\n Matriz 3:\n");
    mostrar(mat3, FIL, COL2);

    Producto_de_matrices(mat1, FIL, COL,
                         mat2, FIL2, COL2,
                         mat3, FIL, COL2);

    printf ("\n Matriz 3:\n");
    mostrar(mat3, FIL, COL2);
    return 0;
}
