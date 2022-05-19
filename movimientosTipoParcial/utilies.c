#include "utilies.h"


int loteDePrueba()
{
    FILE *pf= fopen("movimientos.txt","wt");
    if (!pf)
    {
        perror("1");
        return 1;
    }

    tMovimiento vec [] =
                    {
                    { {2020,5,18},{2,10,30}, 1234,"suc1",'D',10000.01},
                    { {2020,5,18},{3,10,30}, 1234,"suc2",'D',100000.01},
                    { {2020,5,18},{4,10,30}, 1234,"suc4",'E',199999.01},
                    { {2020,5,18},{5,10,30}, 9000,"suc3",'E',21.01},
                    { {2020,5,18},{6,10,30}, 9001,"suc4",'E',5000000.01},
                    { {2020,5,18},{7,10,30}, 9050,"suc1",'D',40.01}
                    };

    int i;
    for (i=0;i<sizeof(vec)/sizeof(tMovimiento);i++)
    {
        fprintf(pf,"%d/%d/%d\t%d:%d:%d\t%d/%s\t(%c)\t%12.2f\n",
                (vec+i)->fecha.a,(vec+i)->fecha.m,(vec+i)->fecha.d,(vec+i)->hora.h,(vec+i)->hora.m,(vec+i)->hora.s,
                (vec+i)->cuenta,(vec+i)->cuentaSucursal,(vec+i)->movimiento,(vec+i)->monto);
    }

    fclose(pf);
    return 0;
}

int cmpCuenta (void *d1, void*d2)
{
    tMovimiento a1= *(tMovimiento*)d1;
    tMovimiento a2= *(tMovimiento*)d2;

    return a1.cuenta - a2.cuenta ;
}
void sacarDeColaYPonerEnarchivos(FILE *pfMax, FILE *pfMin,tCola *cola, unsigned tam,float maxi)
{
    float total=0;
    tMovimiento auxLectura;
    while (!colaVacia(cola))
    {
        sacarDeCola(cola,&auxLectura,tam);
        total += auxLectura.monto;
    }
    auxLectura.monto = total;
    auxLectura.movimiento='T';/// para aclarar es total
    printf("*%f*\n",auxLectura.monto);

    if (total >= maxi)
    {
        fwrite(&auxLectura,tam,1,pfMax);
    }
    else
    {
        fwrite(&auxLectura,tam,1,pfMin);
    }
}
