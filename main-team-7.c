#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "./Include/functions-team-7.h"

int main()
{
    int storedNumbers[VECTOR_COUNT];

    printf("Vector manipulation program.\n");
    readNumbers(storedNumbers, VECTOR_COUNT);
    
    while(1) {
        showMenu();
        chooseOperation(storedNumbers, VECTOR_COUNT);
    }

    return 0;
}