#include "ejercicio_06.h"

double modulo (double n1)
{
    return (n1 >= 0) ? n1 : -n1;
}

double potencia (double n, int p)
{
    if (p==0)
        return 1;
    return n * potencia(n, p-1);
}

double factorial (int n)
{
    if (n==0)
        return 1;
   // if (n>=INVALID_NRO_FACT)
     //   return 0;

    return n* factorial(n-1);
}

double combinatorio (int n1, int n2)
{
    return factorial(n1)/ ( factorial(n2)*factorial(n1-n2) );
}

double seno (double n, double tol)
{
    double pot,
           fac,
           term,
           resul=n;
    int signo=1,
        i=3;

    term=n;

    while (modulo(term)>= tol)
    {
        pot=potencia(n, i);
        //if (pot==ERROR+1)
          //  return ERROR_POTENCIA;

        fac=factorial(i);
       // if (fac==ERROR+1)
         //   return ERROR_FACTORIAL;

        signo*=-1;

        term=(double) pot/fac;
        term*=signo;
        resul+=term;
        i+=2;
    }

    return resul;
}
