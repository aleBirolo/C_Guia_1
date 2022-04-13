#include "Matrix.h"

void printMat (int mat [][COL], unsigned f, unsigned c)
{
    int i,j;
    for(i=0; i<f; i++)
    {
        for(j=0; j<c; j++)
            printf ("|%*d|",mat[i][j]%10<0?0:2, mat[i][j]);
            //printf ("|%d|", mat[i][j]);
        printf ("\n");
    }
}

void loadMatrix (int mat [][COL], unsigned f, unsigned c)
{
    int i,j;
    for(i=0; i<f; i++)
        for(j=0; j<c; j++)
        {
            //printf("%d*10 + %d = %d\n",i,j,(i*10)+j);
            mat[i][j]=(i*10)+j;
            //printf ("|%d|\n", mat[i][j]);
        }
}

void diagPrincipal(int mat [][COL], unsigned f, unsigned c)
{
    int i,raz=MINIMO(f,c);
    for(i=0; i<raz; i++)
        printf ("%*c|%d|\n",i*3,' ', mat[i][i]);
}

void DiagSecundaria(int mat [][COL], unsigned f, unsigned c)
{
    int i,raz=MINIMO(f,c);
    for(i=0; i<raz; i++)
        printf ("%*c|%*d|\n",(c-1-i)*4,' ',mat[i][c-1-i]%10<0?0:2, mat[i][c-1-i]);
}

void TrasponerSobreSiMismaDiagPrincipal (int mat [][COL], unsigned f, unsigned c)
{
    int i,j,aux;
    for(i=0; i<f; i++)
    {
        for(j=0; j<i; j++)
        {
            aux=mat[i][j];
            mat[i][j]=mat[j][i];
            mat[j][i]=aux;
        }
    }
}

void TrasponerSobreSiMismaDiagSecundaria(int mat [][COL], unsigned f, unsigned c)
{
    int i,j,aux;
    for(i=0; i<f; i++)
    {
        for(j=c-1; j>i; j--)
        {
            aux=mat[i][j];
            mat[i][j]=mat[j][i];
            mat[j][i]=aux;
        }
    }
}

int ProductoDeMatrices (int mat1 [][COL],int mat2 [][COL],int matRes [][COL], unsigned f1, unsigned c1,unsigned f2, unsigned c2)
{
    int i,j,i2,j2;
    if (c1!=f2)
        return 1;/// no se puede hacer el producto

    for(i=0 ; i<f1; i++)
        for(j=0,i2=0,matRes [i][j] = 0; j<c1; j++,i2++)///matRes [i][j] = 0 por si tiene basura
            for (j2=0;j2<c2;j2++)
                matRes [i][j] += (mat1 [i][j2] *  mat2 [j2][i2]);
}

void Vecinos (int mat [][COL], unsigned f, unsigned c, int  x, int y)
/// x es de derecha a izq por filas e y es para arriba abajo en columnas
{
    int i,j;
    for(i=MAXIMO(0,x-1); i<=MINIMO(f-1,x+1); i++)
    {
        for(j=MAXIMO(0,y-1); j<=MINIMO(c-1,y+1); j++)
        {
            if (i==x && j==y)
                printf ("|  |");
            else
                printf ("|%*d|",mat[i][j]%10<0?0:2, mat[i][j]);
        }
        printf ("\n");
    }
}
int SumaVecinos (int mat [][COL], unsigned f, unsigned c, int x, int y)
{
    int i,j,res=0;
    for(i=MAXIMO(0,x-1); i<=MINIMO(f-1,x+1); i++)
        for(j=MAXIMO(0,y-1); j<=MINIMO(c-1,y+1); j++)
            res+=(i==x && j==y)?0: mat[i][j];

    return res;
}
