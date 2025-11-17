#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "./Include/functions-team-7.h"

int main()
{
    int vetor[TAMANHO_VETOR];

    printf("Programa de manipulacao de vetores.\n");
    lerNumeros(vetor, TAMANHO_VETOR);

    mostarMenu();
    escolherOperacao();

    return 0;
}