#include <stdio.h>
#include "functions-team-7.h"

// Funçao que le os numeros inteiros de 3 a 31
void lernumeros(int vetor[], int tamanho)
{
    int i;

    for (i = 0; i < tamanho; i++)
    {
        int numero, valido;

        do
        {
            printf("Digite o numero %d (entre 3 e 31) : ", i + 1);
            valido = scanf("%d", &numero);

            while (getchar() != '\n')
                ;

            if (!valido || numero < 3 || numero > 31)
            {
                printf("Entrada invalida! Tente novamente. \n");
                valido = 0;
            }

        } while (!valido);

        vetor[i] = numero;
    }
}
