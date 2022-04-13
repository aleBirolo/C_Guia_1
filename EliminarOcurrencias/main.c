#include "vector.h"

#define LOTE1 {4,2,4,4,4,6,4,8,9,1}
#define LOTE2 {}
#define LOTE3 {4,4,4,4,4,1,2,3,5,6}
#define LOTE4 {1,2,3,5,6,7,8,9,1,2}
#define LOTE5 {4,1,2,3,5,6,7,8,9,1}
#define LOTE6 {1,2,3,5,6,7,8,9,1,4}
#define LOTE7 {4,4,4,4,4,4,4,4,4,4}

int main()
{
    int vec[TAM]=LOTE5,
        cantElem=TAM;

    printf("\n Vector al inicio:\n");
    mostrarVector(vec, cantElem);
    printf("\n");

    printf("\n Eliminar ocurrencias de '4': ");
    printf("\n Cantidad de ocurrencias eliminadas: %d\n", eliminarOcurrencias(vec,&cantElem,4) );

    printf("\n Vector despues de eliminar ocurrencias:\n");
    mostrarVector(vec, cantElem);

    printf("\n\n");
    return 0;
}
