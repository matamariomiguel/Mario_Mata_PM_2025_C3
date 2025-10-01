#include <stdio.h>
#include <stdlib.h>

/* cubo-3.
El programa calcula el cubo de los 10 primeros numeros nuturales con la
ayuda de una funcion y utilizando parametros por volar. */

int cubo(int);         /* prototipo de funcion. El parametro es de
tipo entero. */

void main(void)
{
    int I;
    for (I = 1; I <= 10; I++)
        printf("\nEl cubo de I es:%d", cubo(I));
    /* Llamada a la funcion cubo. El paso del parametro es por valor. */
}

int cubo(int K)   /* K es un parametro por valor de tipo entero. */
/* La funcion calcula el cubo del parametro K. */
{
    return (K*K*K);
}
