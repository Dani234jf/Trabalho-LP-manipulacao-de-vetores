#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "./Include/functions-team-7.h"

int main()
{
    int storedNumbers[VECTOR_COUNT];
    int calculatedMatrix[VECTOR_COUNT][VECTOR_COUNT];
    int calculatedMatrixInitialized = 0;

    printf("Vector manipulation program.\n");
    readNumbers(storedNumbers, VECTOR_COUNT);

    while (1)
    {
        showMenu();
        chooseOperation(storedNumbers, VECTOR_COUNT, calculatedMatrix, &calculatedMatrixInitialized);
    }

    return 0;
}