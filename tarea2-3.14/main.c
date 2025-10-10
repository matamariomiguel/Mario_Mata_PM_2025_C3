#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int VOT;
    int C1 = 0, C2 = 0, C3 = 0, C4 = 0, C5 = 0, NU = 0, SVO;
    float PO1 = 0.0f, PO2 = 0.0f, PO3 = 0.0f, PO4 = 0.0f, PO5 = 0.0f, PON = 0.0f;

    printf("Ingrese el primer voto (1-5). 0 para terminar: ");
    if (scanf("%d", &VOT) != 1) {
        fprintf(stderr, "Entrada invalida.\n");
        return 1;
    }

    while (VOT != 0)
    {
        switch (VOT)
        {
            case 1: C1++; break;
            case 2: C2++; break;
            case 3: C3++; break;
            case 4: C4++; break;
            case 5: C5++; break;
            default: NU++; break; /* cualquier valor distinto de 1..5 se cuenta como nulo */
        }

        printf("Ingrese el siguiente voto (1-5). 0 para terminar: ");
        if (scanf("%d", &VOT) != 1) {
            fprintf(stderr, "Entrada invalida.\n");
            return 1;
        }
    }

    SVO = C1 + C2 + C3 + C4 + C5 + NU;

    if (SVO == 0) {
        printf("\nNo se registraron votos.\n");
        return 0;
    }

    PO1 = ((float)C1 / SVO) * 100.0f;
    PO2 = ((float)C2 / SVO) * 100.0f;
    PO3 = ((float)C3 / SVO) * 100.0f;
    PO4 = ((float)C4 / SVO) * 100.0f;
    PO5 = ((float)C5 / SVO) * 100.0f;
    PON = ((float)NU / SVO) * 100.0f;

    printf("\nTotal de votos: %d\n", SVO);
    printf("Candidato 1: %d votos -- Porcentaje: %5.2f%%\n", C1, PO1);
    printf("Candidato 2: %d votos -- Porcentaje: %5.2f%%\n", C2, PO2);
    printf("Candidato 3: %d votos -- Porcentaje: %5.2f%%\n", C3, PO3);
    printf("Candidato 4: %d votos -- Porcentaje: %5.2f%%\n", C4, PO4);
    printf("Candidato 5: %d votos -- Porcentaje: %5.2f%%\n", C5, PO5);
    printf("Nulos:       %d votos -- Porcentaje: %5.2f%%\n", NU, PON);

    return 0;
}
