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

// Mostrar o menu ao utilizador
void mostarMenu()
{
    printf("\nMenu Calculo de estatisticas\n");
    printf("----------------------------\n");
    printf("1. Calculo da raiz quadrada\n2. Calculo da media\n3. Valores divisiveis por 3\n4. Ordernar de forma descendente\n");
    printf("5. Permutacoes do vetor\n6. Valor mais proximo de 25\n");
    printf("----------------------------\n");
}

// Executar a funcao escolhida pelo numero da opcao escolhida
void escolherOperacao()
{
    int n = 0;
    do {
        printf("\nDigite o numero da opcao (ex: 2): ");
        int valido = scanf("%d",&n);

        if(!valido || n < 1 || n > NUMERO_DE_OPERACOES)
        {
            while (getchar() != '\n');
            n = 0;
            printf("Entrada invalida! Tente novamente.\n");
            continue;
        }
        
        switch (n)
        {            
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            default:
                printf("Erro: valor invalido");
                break;
        }

    } while (n == 0);
}