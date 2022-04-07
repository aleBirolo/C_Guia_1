#ifndef UTILITARIOS_H_INCLUDED
#define UTILITARIOS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_VEC 10
#define TODO_OK 0
#define ERROR 1

void mostrarVector (int *vec);
int insertarYCorrer( void * ptr, void *elem, size_t pos, size_t tam, size_t tipo);

#endif // UTILITARIOS_H_INCLUDED
