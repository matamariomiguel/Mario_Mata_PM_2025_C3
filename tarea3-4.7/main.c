#include <stdio.h>
#include <stdlib.h>

/* Prueba de parametros por valor. */

int f1 (int);   /* Prototipo de funcion. El parametro es por valor
                   y de tipo entero. */

void main(void)
{
    int I, K = 4;
    for (I = 1; I <= 3; I++)
    {
        printf("\n\nValor de K antes de llamar a la funcion: %d", ++K);
        printf("\nValor d K despues de llamar a la funcion: %d", f1(K));
        /* Llamada a la funcion f1. se pasa una copia de la variable K. */
    }
}

int f1(int R)
{
    R += R;
    return (R);
}
