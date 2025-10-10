#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* pares e impares.
El programa, al recibir como datos N numeros enteros, calcula cuantos
de ellos son pares y cuantos son impares, con la ayuda de na funcion. */

void parimp(int, int *, int *);    /* Prototipo de funcion. */

void main(void)
{
    int I, N, NUM, PAR = 0, IMP = 0;
    printf("Ingresa el numero de datos: ");
    scanf("%d", &N);
    for (I =1; I <= N; I++)
    {
        printf("Ingresa el numero %d:", I);
        scanf("%d", &NUM);
        parimp(NUM, &PAR, &IMP);
        /* Llamada a la funcion. paso de parametros por valor y por referencia. */
    }
    printf("nNumero de pares: %d", PAR);
    printf("nNumero de impares: %d", IMP);
}

void parimp (int NUM, int *P, int *I)
/* La funcion incrementa el parametro *P o *I, segun sea el numero par o impar. */
{
    int RES;
    RES = pow(-1, NUM);
    if (RES > 0)
        *P += 1;
    else
        if (RES < 0)
        *I += 1;
}
