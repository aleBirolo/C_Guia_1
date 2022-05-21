#include <stdio.h>
#include <stdlib.h>
#include "utilies.h"
#define MAXn 100000
int main()
{
    if (loteDePrueba()!=0)
        return 1;

    FILE *pfMov= fopen("movimientos.txt","rt");
    if (!pfMov)
    {
        perror("2");
        return 2;
    }
    FILE *pfMax= fopen("MayoresN.bin","w+b");
    if (!pfMax)
    {
        fclose(pfMov);
        perror("3");
        return 3;
    }
    FILE *pfMin = fopen("MenoresN.bin","w+b");
    if (!pfMin)
    {
        fclose(pfMov);
        fclose(pfMax);
        perror("4");
        return 4;
    }

    tMovimiento mov, ultMov, auxLectura;
    float total=0;
    tCola cola;
    crearCola(&cola);

//    fscanf(pfMov,"%d/%d/%d\t%d:%d:%d\t%d/%[^\t\n]\t(%c)\t%f",
//           &mov.fecha.a,&mov.fecha.m,&mov.fecha.d,&mov.hora.h,&mov.hora.m,&mov.hora.s,
//           &mov.cuenta,mov.cuentaSucursal,&mov.movimiento,&mov.monto);
//    while (!feof(pfMov))/// no usar feof, usar la condicion del fscanf
    while (fscanf(pfMov,"%d/%d/%d\t%d:%d:%d\t%d/%[^\t\n]\t(%c)\t%f",
                    &mov.fecha.a,&mov.fecha.m,&mov.fecha.d,&mov.hora.h,&mov.hora.m,&mov.hora.s,
                    &mov.cuenta,mov.cuentaSucursal,&mov.movimiento,&mov.monto) != EOF)
    {
        if (colaVacia(&cola)) /// para el primer caso
        {
            ponerEnCola(&cola,&mov,sizeof(tMovimiento));
        }

        else
        {
            verPrimero(&cola,&ultMov,sizeof(tMovimiento));
            printf ("%d ? %d\n",ultMov.cuenta,mov.cuenta);
            if (cmpCuenta(&ultMov,&mov)==0)
            {
                ponerEnCola(&cola,&mov,sizeof(tMovimiento));
                printf ("%d == %d\n",ultMov.cuenta,mov.cuenta);
            }
            else
            {
                sacarDeColaYPonerEnarchivos(pfMax,pfMin,&cola,sizeof(tMovimiento),MAXn);
                ponerEnCola(&cola,&mov,sizeof(tMovimiento));
            }
        }
//        fscanf(pfMov,"%d/%d/%d\t%d:%d:%d\t%d/%[^\t\n]\t(%c)\t%f",
//               &mov.fecha.a,&mov.fecha.m,&mov.fecha.d,&mov.hora.h,&mov.hora.m,&mov.hora.s,
//               &mov.cuenta,mov.cuentaSucursal,&mov.movimiento,&mov.monto);
    }
    /// para ultimos datos (ultimos movimiento ultima cuenta)
    sacarDeColaYPonerEnarchivos(pfMax,pfMin,&cola,sizeof(tMovimiento),MAXn);

    fclose(pfMov);

    /// INI printeo de archivos binarios
    rewind(pfMin);
    rewind(pfMax);

    printf("\n-------------MENORES A %d----------------\n",MAXn);

    fread(&auxLectura,sizeof(tMovimiento),1,pfMin);
    while (!feof(pfMin))
    {
        printf("%d/%d/%d\t%d:%d:%d\t%d/%s\t(%c)\t%12.2f\n",
               auxLectura.fecha.a,auxLectura.fecha.m,auxLectura.fecha.d,auxLectura.hora.h,auxLectura.hora.m,auxLectura.hora.s,
               auxLectura.cuenta,auxLectura.cuentaSucursal,auxLectura.movimiento,auxLectura.monto);

        fread(&auxLectura,sizeof(tMovimiento),1,pfMin);
    }

    printf("\n-------------MAYORES A %d----------------\n",MAXn);

    fread(&auxLectura,sizeof(tMovimiento),1,pfMax);
    while (!feof(pfMax))
    {
        printf("%d/%d/%d\t%d:%d:%d\t%d/%s\t(%c)\t%12.2f\n",
               auxLectura.fecha.a,auxLectura.fecha.m,auxLectura.fecha.d,auxLectura.hora.h,auxLectura.hora.m,auxLectura.hora.s,
               auxLectura.cuenta,auxLectura.cuentaSucursal,auxLectura.movimiento,auxLectura.monto);

        fread(&auxLectura,sizeof(tMovimiento),1,pfMax);
    }
    /// FIN printeo de archivos binarios
    fclose(pfMin);
    fclose(pfMax);


    return 0;
}

