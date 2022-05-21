#include "colaDinamica.h"

void crearCola(tCola *pc)
{
    pc->pri=NULL;
    pc->ult=NULL;
}
int ponerEnCola(tCola *pc,const void *pd, const unsigned tam)
{
    tNodo *aux = (tNodo*) malloc (sizeof(tNodo));
    if (aux==NULL)
    {
        return 0;/// cola llena
    }
    aux->dato = malloc(tam);
    if (aux->dato==NULL)
    {
        free(aux);
        return 0;/// cola llena
    }

    memcpy(aux->dato,pd,tam);
    aux->tamDato = tam;
    aux->sig = NULL;

    if(pc->ult) /// si hay un ultimo
    {
        pc->ult->sig = aux; ///el siguente ese sera el nuevo
    }

    else
         pc->pri=aux; /// para primer elemento

    pc->ult=aux;

    return 0;/// todo ok
}
int sacarDeCola(tCola *pc,void *pd, unsigned tam)
{
    tNodo *elim = pc->pri;
    if( pc->pri==NULL)
        return 1;/// cola vacia

    memcpy(pd,elim->dato,MINIMO(elim->tamDato,tam));

    pc->pri=elim->sig;

    if (pc->pri==NULL)
        pc->ult=NULL; /// no es necesario pero no esta de mas ponerlo

    free(elim->dato);
    free(elim);

    return 0;/// todo ok
}
int colaVacia(tCola *pc)
{
    return pc->pri==NULL;
}
int colaLlena(tCola *pc);
int verPrimero(tCola *pc,void *pd, const unsigned tam)
{
    if(pc->pri==NULL)
        return 1;/// cola vacia

    memcpy(pd,pc->pri->dato,MINIMO(pc->pri->tamDato,tam));

    return 0;/// todo ok
}
