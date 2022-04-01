#ifndef EJERCICIO_06_H_INCLUDED
#define EJERCICIO_06_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define TOL 0.0000001
#define ERROR_FACTORIAL -10
#define ERROR_POTENCIA  -11
#define ERROR_DIV_ZERO  -12

#define INVALID_NRO_FACT 18
#define CANT__NROS_PRIMOS_MAX 1000//104730

#define MSJ_6 "Desarrollar una funcion que obtenga el seno de X con tolerancia TOL"

double modulo (double n1);
double potencia (double n, int p);
double factorial (int n);
double combinatorio (int n1, int n2);
double seno (double n, double tol);


#endif // EJERCICIO_06_H_INCLUDED
