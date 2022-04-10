#include "menu.h"

int main()
{
    char ptrFunciones[10]={};
    char *f1="funcion_1";
    char *f2="funcion_2";
    char *f3="funcion_3";
    char *vecFunciones[]={f1,
                          f2,
                          f3};
/*
    printf ("\n Ingrese nombre de funcion que quiere ejecutar: ");
    gets(ptrFunciones);



    printf ("\n %s", ptrFunciones);
    funcion(vecFunciones[1]);
    */

    funcion(f1);
    return 0;
}
