#include "vector.h"

void intercambio (int *p1, int *p2)
{
    int aux;

    aux=*p1;
    *p1=*p2;
    *p2=aux;
}

void mostrarVector (int *vec, int ce)
{
    int i;

    for (i=0; i<ce; i++, vec++)
        printf (" |%d|", *vec);
}

int eliminarOcurrencias (int *vec, int *ce, int car)
{
    int *ptrReem=vec,
        i,
        contOcu;

    contOcu=0;

    for (i=0 ; i<(*ce); i++, vec++)
    {
        if ( *vec == car )
            contOcu++;
        else
        {
            intercambio(ptrReem, vec);
            ptrReem++;
        }
    }

    *ce-=contOcu;

    return contOcu;
}
