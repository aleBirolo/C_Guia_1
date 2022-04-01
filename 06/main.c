
#include "ejercicio_06.h"
int main()
{
    double num;
    double tol;
    double resultado;

    printf("\n %s\n", MSJ_6);

    printf("\n Ingrese un numero: ");
    scanf("%lf",&num);

    printf("\n Ingrese la tolerancia (0.00000001 para 2): ");
    scanf("%lf",&tol);

    resultado=seno(num, tol);
 /**
    if (resultado <= ERROR)
    {
        if (resultado==ERROR_POTENCIA)
            printf("\n Error de potencia\n");
        else
            if(resultado==ERROR_FACTORIAL)
                printf("\n Error de factorial\n");
    }
    else*/
        printf("\n El seno(%.10lf) con una tolerancia de %.10lf es: %.10lf",
               num, tol, resultado);

    return 0;
}
