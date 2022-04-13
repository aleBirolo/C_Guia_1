#include <stdio.h>
#include <stdlib.h>
#include "Matrix.h"
/**
MOSTRAR: 1. Diagonal principal
2. Diagonal secundaria
3. Triangular superior
3.1. Triangular superior que incluya la diagonal principal
3.2. Triangular superior con respecto a la diagonal secundaria
3.3. Triangular superior con respecto a la diagonal secundaria incluida
4. Triangular inferior
4.1 Triangular inferior que incluya la diagonal principal
5. Triángulo 1                    T1
6. Triángulo 2               T4 T2
7. Triángulo 3                    T3
8. Triángulo 4
9. Si es simétrica (devolver verdadero o falso)
9.1. Si es simétrica la diagonal principal (devolver verdadero o falso)
9.2. Si es simétrica la diagonal secundaria (devolver verdadero o falso)
9.3 Si es simétrica respecto al eje horizontal (devolver verdadero o falso)
9.4. Si es simétrica respecto al eje vertical (devolver verdadero o falso)
9.5. Si es simétrica respecto al centro (devolver verdadero o falso)
10. Trasponer sobre si misma
10.1. Trasponer sobre si misma la diagonal principal
10.2. Trasponer sobre si misma la diagonal secundaria
10.3. Trasponer sobre si misma respecto al eje horizontal
10.4. Trasponer sobre si misma respecto al eje vertical
10.5. Trasponer sobre si misma respecto al centro
11. Es identidad
12. Es escalar
13. Es diagonal
14. Producto de matrices
15. Viborita
DADO UN I, J: (i=fila, j=columna)
16. Encontrar la máxima y mínima matriz que tenga i, j como vértices
17. Encontrar la máxima y mínima matriz cuadrada que tenga i, j como vértices
18. Encontrar los vecinos
19. Máxima matriz que tenga i, j como centro
20. Máxima matriz que coincida con el centro de la matriz y el i, j sea un vértice
*/

int main()
{
    int mat1[FIL][COL];

    int matP1[COLp][FILp];
    int matP2[FILp][COLp];
    int matPRES[FIL][COL]= {{0}};
//
    loadMatrix(mat1,FIL,COL);
    printMat(mat1,FIL,COL);
//
//    printf("\nDiagonal Principal: \n");
//    diagPrincipal(mat1,FIL,COL);
//    printf("\nDiagonal Secundaria: \n");
//    DiagSecundaria(mat1,FIL,COL);
//
//
//    printf("\nTranspuesta1: \n");
//    TrasponerSobreSiMismaDiagPrincipal(mat1,FIL,COL);
//    printMat(mat1,FIL,COL);
//
//    loadMatrix(mat1,FIL,COL);
//    printf("\nTranspuesta2: \n");
//    TrasponerSobreSiMismaDiagSecundaria(mat1,FIL,COL);
//    printMat(mat1,FIL,COL);


//    loadMatrix(matP1,3,3);
//    loadMatrix(matP2,3,3);
//    loadMatrix(matP1,3,3);/// por q tengo q hacerlo 2 veces ???????????? me queda 12 en la pos 00
//
//    printMat(matP1,3,3);
//
//    printf("\n X \n");
//
//
//    printMat(matP2,3,3);
//
//    ProductoDeMatrices(matP1,matP2,matPRES,FILp,COLp,COLp,FILp);
//    printf("\n = \n");
//    printMat(matPRES,COLp,COLp);
    int x=1,y=1,res;
    printf("\n ------------------ \n");
    printf("coordenadas (%d;%d)\n",x,y);
    res=SumaVecinos(mat1,FIL,COL,x,y);
    Vecinos(mat1,FIL,COL,x,y);
    printf("\n = \n %d \n",res);

    return 0;
}
