#include "utilitarios.h"

int insertarYCorrer( void * ptr, void *elem, size_t pos, size_t tam, size_t tipo)
{
    if (pos >= tam)
        return ERROR;

   memmove(ptr+((pos+1)*tipo), ptr+(pos*tipo), (tam-pos-1)*tipo);
   memcpy(ptr+(pos*tipo),elem,tipo);

    return TODO_OK;
}

void mostrarVector (int *vec)
{
    int i;

    for (i=0;i<TAM_VEC;i++)
        printf (" [%d] ", vec[i]);
}
