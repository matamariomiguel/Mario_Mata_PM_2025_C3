#include <stdio.h>
#include <stdlib.h>

/* Lluvias.
El programa permite calcular el promedio mensual de las lluvias caídas en
tres regiones importantes del país. Determina también cuál es la región
con mayor promedio de lluvia anual. */

// Prototipo de función para determinar la región con mayor promedio
void Mayor(float, float, float);

void main(void)
{
    int I;
    float GOL, PAC, CAR, AGOL = 0, APAC = 0, ACAR = 0;

    // Bucle para ingresar los datos de lluvia de 12 meses (I = 1 a I <= 12)
    for (I = 1; I <= 12; I++)
    {
        printf("\nIngrese las lluvias del mes %d (Regiones Golfo, Pacifico y Caribe): ", I);
        // La función scanf lee los valores de lluvia para las tres regiones.
        scanf("%f %f %f", &GOL, &PAC, &CAR);

        // Acumular la suma de lluvias para cada región
        AGOL += GOL;
        APAC += PAC;
        ACAR += CAR;
    }

    // Calcular y mostrar los promedios anuales
    printf("\n\nPromedio de lluvias Region Golfo: %.2f", (AGOL / 12));
    printf("\nPromedio de lluvias Region Pacifico: %.2f", (APAC / 12));
    printf("\nPromedio de lluvias Region Caribe: %.2f \n\n", (ACAR / 12));

    // Llamar a la función Mayor con los acumulados. Paso de parámetros por valor.
    Mayor(AGOL, APAC, ACAR);
}



void Mayor(float R1, float R2, float R3)
{
    // Comparar los promedios de las tres regiones.
    // El promedio se calcula dividiendo la suma (R1, R2, R3) entre 12.

    // Condición 1: Comprobar si la Región Golfo (R1) es la mayor.
    if ((R1 > R2) && (R1 > R3))
    {
        printf("\nRegion con mayor promedio: Region Golfo. Promedio: %.2f", (R1 / 12));
    }
    // Condición 2: Si no fue Golfo, comprobar si la Región Pacifico (R2) es la mayor.
    else if (R2 > R3)
    {
        // Nota: Si llegamos aquí, R2 ya es mayor que R1 (o igual, y R3 es menor).
        // El codigo de la imagen solo comparaba R2 > R3, pero para ser la mayor en general
        // se asume que esta condicion es suficiente en el 'else if'.
        printf("\nRegion con mayor promedio: Region Pacifico. Promedio: %.2f", (R2 / 12));
    }
    // Condición 3: Si no fue ni Golfo ni Pacifico, debe ser la Región Caribe (R3).
    else
    {
        printf("\nRegion con mayor promedio: Region Caribe. Promedio: %.2f", (R3 / 12));
    }
}
