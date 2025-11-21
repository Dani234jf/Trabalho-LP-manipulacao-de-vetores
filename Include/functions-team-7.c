#include <stdio.h>
#include <stdlib.h> // qsort, rand, srand, malloc, free
#include <math.h>   // sqrt
#include <time.h>   // time
#include "functions-team-7.h"

void readNumbers(int vector[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int number, valid;
        do
        {
            printf("Enter a number %d (between 3 and 31): ", i + 1);
            valid = scanf("%d", &number);
            while (getchar() != '\n')
                ;

            if (!valid || number < 3 || number > 31)
            {
                printf("Invalid input! Try again.\n");
                valid = 0;
            }
        } while (!valid);

        vector[i] = number;
    }
}

void showMenu()
{
    printf("\n\n\nStatistics Calculation Menu\n");
    printf("\n_______________________________\n");
    printf("                                |\n");
    printf("1. Calculate the square root    |\n2. Calculate the average        |\n3. Values divisible by 3        |\n");
    printf("4. Sort in descending order     |\n5. Vector permutations          |\n6. Value closest to 25          |\n");
    printf("_______________________________ |\n");
}

void calculateSquareRoot(int vector[], int size)
{
    printf("\nSquare roots of the elements:\n");
    for (int i = 0; i < size; i++)
        printf("%.2f ", sqrt(vector[i]));
    printf("\n");
}

void calculateAverage(int vector[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += vector[i];
    double avg = (double)sum / size;
    printf("\nAverage: %.2f\n", avg);
}

void divisibleByThree(int vector[], int size)
{
    printf("\nValues divisible by 3:\n");
    int found = 0;
    for (int i = 0; i < size; i++)
    {
        if (vector[i] % 3 == 0)
        {
            printf("%d ", vector[i]);
            found = 1;
        }
    }
    if (!found)
        printf("None");
    printf("\n");
}

int compareDesc(const void *a, const void *b)
{
    return (*(int *)b - *(int *)a);
}

void sortDescending(int vector[], int size)
{
    int copy[VECTOR_COUNT];
    for (int i = 0; i < size; i++)
        copy[i] = vector[i];

    qsort(copy, size, sizeof(int), compareDesc);

    printf("\nVector sorted in descending order:\n");
    for (int i = 0; i < size; i++)
        printf("%d ", copy[i]);
    printf("\n");
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void shuffle(int array[], int size)
{
    for (int i = size - 1; i > 0; i--)
    {
        int j = rand() % (i + 1);
        swap(&array[i], &array[j]);
    }
}

void generateMatrixPermutations(int vector[], int size)
{
    srand(time(NULL));

    int matrix[VECTOR_COUNT][VECTOR_COUNT];

    for (int j = 0; j < size; j++)
        matrix[0][j] = vector[j];

    for (int i = 1; i < VECTOR_COUNT; i++)
    {
        for (int j = 0; j < size; j++)
            matrix[i][j] = vector[j];

        shuffle(matrix[i], size);
    }

    printf("\n14x14 Matrix (original + permutations):\n");
    for (int i = 0; i < VECTOR_COUNT; i++)
    {
        for (int j = 0; j < VECTOR_COUNT; j++)
            printf("%2d ", matrix[i][j]);
        printf("\n");
    }
}

void closestTo25(int vector[], int size)
{
    int closest = vector[0];
    int diff = abs(vector[0] - 25);

    for (int i = 1; i < size; i++)
    {
        int d = abs(vector[i] - 25);
        if (d < diff)
        {
            diff = d;
            closest = vector[i];
        }
    }

    printf("\nValue closest to 25: %d\n", closest);
}

void chooseOperation(int vector[])
{
    int n;
    printf("\nEnter the option number (1-%d): ", OPERATIONS_NUMBER);
    if (scanf("%d", &n) != 1)
    {
        printf("Invalid input! Try again.\n");
        while (getchar() != '\n')
            ;
        return;
    }
    while (getchar() != '\n')
        ;

    switch (n)
    {
    case 1:
        calculateSquareRoot(vector, VECTOR_COUNT);
        break;
    case 2:
        calculateAverage(vector, VECTOR_COUNT);
        break;
    case 3:
        divisibleByThree(vector, VECTOR_COUNT);
        break;
    case 4:
        sortDescending(vector, VECTOR_COUNT);
        break;
    case 5:
        generateMatrixPermutations(vector, VECTOR_COUNT);
        break;
    case 6:
        closestTo25(vector, VECTOR_COUNT);
        break;
    default:
        printf("Invalid option! Choose 1-%d.\n", OPERATIONS_NUMBER);
        break;
    }
}
