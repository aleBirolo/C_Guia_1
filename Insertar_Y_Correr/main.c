#include "utilitarios.h"

int main()
{
    int vec[TAM_VEC]={0,1,2,3,4,5,6,7,8,9},
        *ptrVec,
        elem,
        pos;

    elem=99;
    pos=9;
    ptrVec=vec;
    printf ("%x", vec);
    printf ("\n Antes:\n");
    mostrarVector(vec);

    if (insertarYCorrer(ptrVec,&elem, pos, TAM_VEC, sizeof(int)) == TODO_OK)
    {
       printf ("\n Despues:\n");
        mostrarVector(vec);
    }
    else
        printf("\n Ups. Error");


    return 0;
}
