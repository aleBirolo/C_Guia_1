#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED
#define MINIMO(A,B) ((A)<(B)?(A):(B))
#define MAXIMO(A,B) ((A)>(B)?(A):(B))
#define FIL 10
#define COL 10
#define FILp 3
#define COLp 3

void loadMatrix (int mat [][COL], unsigned f, unsigned c);
void printMat (int mat [][COL], unsigned f, unsigned c);

void diagPrincipal(int mat [][COL], unsigned f, unsigned c);
void DiagSecundaria(int mat [][COL], unsigned f, unsigned c);

void TrasponerSobreSiMismaDiagPrincipal(int mat [][COL], unsigned f, unsigned c);
void TrasponerSobreSiMismaDiagSecundaria(int mat [][COL], unsigned f, unsigned c);

int ProductoDeMatrices (int mat1 [][COL],int mat2 [][COL],int matRes [][COL], unsigned f1, unsigned c1,unsigned f2, unsigned c2);

void Vecinos (int mat [][COL], unsigned f, unsigned c, int x, int y);
int SumaVecinos (int mat [][COL], unsigned f, unsigned c, int x, int y);

#endif // MATRIX_H_INCLUDED
