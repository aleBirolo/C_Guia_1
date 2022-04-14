#include "Vectores.h"

void printVec (int *vec, unsigned ce)// size_t == unsigned
{
    int i;
    for (i=0; i<ce; i++)
        printf("|%d| ",*(vec++));
}

int insertarEnOrden (int *vec, unsigned tam,int *ce, int dato)
{
    int pos=0,i,ant,act, lleno=0;
//    if (isInOrder(int *vec)== 0) // ordenado de forma ascendente
//        return -1;// no esta ordenado

    if (*ce==tam) /// en vez de no poner borrar el ultimo y poner
        //return -2;// esta lleno
        lleno=1;
    while (pos < tam && *vec < dato)
    {
        pos++;
        vec++;
    }
    ant = dato;
    pos--;
    vec--;
    for (i=pos; i <= tam-lleno ; i++)
    {
        act=*vec;
        *vec=ant;
        vec++;
        ant=act;
    }
    if(*ce<tam)
        (*ce)++;
    return pos;
}
int insertarEnPos (int *vec, unsigned tam,int *ce, int pos,int dato)
{
    if(*ce < pos)
        return -1; // pos invalida
    *(vec+pos)=dato;
    return 0;
}
int insertarEnPosYCorrer (int *vec, unsigned tam,int *ce, int pos,int dato)
/// poner en la posicion dada y correr todo lo demas usar vector paralelo q tenga el mis posociones libres
{
    int i,ant,act, lleno=0;

    if (pos > *ce || pos < 0)
        return -1;/// posicion invalida

    if (*ce==tam) /// en vez de no poner borrar el ultimo y poner
        lleno=1;

    vec+=pos;
    ant = dato;
    for (i=0; i <= tam-lleno ; i++)
    {
        act=*vec;
        *vec=ant;
        vec++;
        ant=act;
    }
    if(*ce<tam)
        (*ce)++;
    return pos;
}


int elimDatoOLD (int *vec,int *ce,int dato)
{
    int i,ant,act, pos=-1;
    while (pos <= *ce && *(vec+pos) != dato)
    {
        pos++;
    }
    if (pos > *ce || pos < 0)
        return -1;/// No se encontro dato
    vec+=((*ce)-1);
    ant=*vec;
    for (i=pos; i <*ce ; i++)
    {
        //printf("**%d**",ant);
        act=*vec;
        *vec=ant;
        vec--;
        ant=act;
    }
    if(*ce>0)
        (*ce)--;
    //printf("**%d**",*ce);
    return pos;
}
int elimDato (int *vec,int *ce,int dato)
{
    int i, pos=0;
    while (pos <= *ce && *(vec+pos) != dato)
        pos++;

    if (pos > *ce)
        return -1;/// No se encontro dato

    vec+=pos;

    for (i=pos; i <*ce ; i++,vec++)
        *(vec)=*(vec+1);

    if(*ce>0)
        (*ce)--;

    return pos;
}
int elimDatoTodasRep (int *vec,int *ce,int dato)
{
    int i,pos=-1;
    for (i=0; i <*ce ; i++,vec++)
        while(*vec==dato)
            pos=elimDato(vec,ce,dato);
    return pos;
}
int elimDatoTodasRep_V2 (int *vec,int *ce,int dato)
{
    int i, elim=0, aux ;
    int *pIni=vec, *pFin=vec;
    for (i=0; i<*ce ; i++ , pIni++, pFin++)
    {
        while(*pFin==dato)
        {
            pFin++;
            elim++;
            (*ce) = MAXIMO((*ce)--,0);
        }
        *pIni=*pFin;
    }
    return elim;
}

