#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "functions-team-7.h"

void waitForUserEnter() {
    char temp;
    printf("\n\ncontinue...");
    scanf("%c",&temp);
    while(getchar() != '\n');    
}

void readNumbers(int vector[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int number, valid;
        do
        {
            printf("Enter a number %d (between 3 and 31): ", i + 1);
            valid = scanf("%d", &number);
            while (getchar() != '\n');

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
    printf("\n\n\nStatistics Calculation Menu:");
    printf("\n_______________________________\n");
    printf("                                |\n");
    printf("1. Calculate the square root    |\n2. Calculate the average        |\n3. Values divisible by 3        |\n");
    printf("4. Sort in descending order     |\n5. Vector permutations          |\n6. Value closest to 25          |\n");
    printf("7. Help                         |\n8. Calculate the Dot product    |\n9. Composite numbers            |\n10. Product of two vectors      |\n");
    printf("11. Calculate the determinant   |\n");
    printf("_______________________________ |\n");
}

void calculateRoot(int vector[],int size)
{
    printf("\n[ ");
    for(int i= 0; i < size; i++)
    {
        printf("%.3lf",sqrt((double)vector[i]));
        if ( i != size - 1 )
        {
            printf(", ");
        }
    }
    printf(" ]\n");
}

void dotProduct(int vector1[], int size1, int vector2[], int size2) {
    int result = 0;
    for ( int i = 0; i < size1; i++ ) {
        result += (vector1[i] * vector2[i]);
    }
    printf("\nDot Product: %d\n", result);
}

void compositeNumbers(int vector[], int size) {    
    int isFirst = 1;

    for ( int i = 0; i < size; i++ ) {
        for ( int c = 2; c < vector[i]; c++ ) {
            if ( vector[i] % c == 0 ) {
                if (isFirst) {
                    isFirst = 0;
                    printf("\n[ ");
                }
                else {
                    printf(", ");
                }

                printf("%d", vector[i]);
                break;
            }
        }
    }
    if (!isFirst) {
        printf(" ]\n");
    }
    else {
        printf("\nNone\n");
    }
}

void calculateAverage(int vector[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += vector[i];
    }
    double avg = (double)sum / size;
    printf("\nAverage: %.2f\n", avg);
}

void divisibleByThree(int vector[], int size)
{
    int found = 0;
    for (int i = 0; i < size; i++)
    {
        if (vector[i] % 3 == 0)
        {
            if (!found) 
            {
                printf("\n[ ");
            }
            else 
            {
                printf(", ");
            }
            printf("%d ", vector[i]);
            found = 1;
        }
    }
    if (!found)
    {
        printf("\nNone\n");
    }
    else 
    {
        printf(" ]\n");
    }
}

int compareDesc(const void *a, const void *b)
{
    return (*(int *)b - *(int *)a);
}

void sortDescending(int vector[], int size)
{
    int copy[VECTOR_COUNT];
    for (int i = 0; i < size; i++)
    {
        copy[i] = vector[i];
    }
    qsort(copy, size, sizeof(int), compareDesc);

    printf("\nVector sorted in descending order:\n");
    printf("[ ");
    for (int i = 0; i < size; i++)
    {
        printf("%d", copy[i]);
        if ( i != size - 1 )
        {
            printf(", ");
        }
    }
    printf(" ]\n");
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
    {
        matrix[0][j] = vector[j];
    }

    for (int i = 1; i < VECTOR_COUNT; i++)
    {
        for (int j = 0; j < size; j++)
        {
            matrix[i][j] = vector[j];
        }
        shuffle(matrix[i], size);
    }

    printf("\n14x14 Matrix (original + permutations):\n");
    for (int i = 0; i < VECTOR_COUNT; i++)
    {
        for (int j = 0; j < VECTOR_COUNT; j++)
        {
            printf("%2d ", matrix[i][j]);
        }
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

void showIntMatrix(int matrix[][VECTOR_COUNT]) {
    printf("\n");
    for ( int i = 0; i < VECTOR_COUNT; i++ ) {
        for ( int j = 0; j < VECTOR_COUNT; j++ ) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void matrixProduct(int vector1[], int size1, int vector2[], int size2, int matrix[][VECTOR_COUNT]) {
    for ( int i = 0; i < VECTOR_COUNT; i++ ) {
        for ( int j = 0; j < VECTOR_COUNT; j++ ) {
            matrix[i][j] = vector1[i] * vector2[j];
        }
    }
}

void swapMatrixLines(float matrix[][VECTOR_COUNT], int row1, int row2) {
    float tempRow1[VECTOR_COUNT];
    for ( int j = 0; j < VECTOR_COUNT; j++ ) {
        tempRow1[j] = matrix[row1][j];
        matrix[row1][j] = matrix[row2][j];
    }
    for ( int j = 0; j < VECTOR_COUNT; j++ ) {
        matrix[row2][j] = tempRow1[j];
    }
}

void convertMatrixToFloat(int matrixInt[][VECTOR_COUNT], float matrixFloat[][VECTOR_COUNT]) {
    for (int i = 0; i < VECTOR_COUNT; i++) {
        for ( int j = 0; j < VECTOR_COUNT; j++ ) {
            matrixFloat[i][j] = (float)matrixInt[i][j];
        }
    }
}

double determinantMatrix14(float matrix[VECTOR_COUNT][VECTOR_COUNT], int row, int column) {
    float newMatrix[VECTOR_COUNT][VECTOR_COUNT];
    for ( int i = 0; i < VECTOR_COUNT; i++ ) {
        for ( int j = 0; j < VECTOR_COUNT; j++ ) {
            newMatrix[i][j] = (float)matrix[i][j];
        }
    }

    if ( VECTOR_COUNT - row == 1 && VECTOR_COUNT - column == 1 ) {
        return matrix[row][column];
    }

    // Find the first row starting from 'row' that has a non-zero element in the current column
    int bestRow = -1;
    for ( int i = row; i < VECTOR_COUNT; i++ ) {
        if ( matrix[i][column] != 0 ) {
            bestRow = i;
            break;
        }
    }
    if (bestRow == -1) { return 0.0f; }
    
    // Swap the current row with the row that has a non-zero pivot, if needed
    int swapLines = 0;
    if ( bestRow != row ) {
        swapMatrixLines(newMatrix, row, bestRow);
        swapLines = 1;
    }

    // Eliminate all elements below the pivot
    for ( int i = row; i < VECTOR_COUNT; i++ ) {
        if ( i == row ) {
            continue;
        }
        float factor = (float)newMatrix[i][column] / newMatrix[row][column];
        for ( int j = column; j < VECTOR_COUNT; j++ ) {
            newMatrix[i][j] = newMatrix[i][j] - newMatrix[row][j] * factor;
        }
    }
    return determinantMatrix14(newMatrix,row+1,column+1) * (double)newMatrix[row][column] * (swapLines ? -1 : 1);
}

void chooseOperation( int vector[], int size, int matrix[][VECTOR_COUNT], int *matrixInitialized )
{
    int n = 0;
    do {
        printf("\nEnter the option number (e.g: 2): ");
        int valid = scanf("%d",&n);

        if(!valid || n < 1 || n > OPERATIONS_NUMBER)
        {
            while (getchar() != '\n');
            n = 0;
            printf("Invalid input! Try again. \n");
            continue;
        }
        
        switch (n)
        {            
            case 1:
                calculateRoot(vector, size);
                break;
            case 2:
                calculateAverage(vector, size);
                break;
            case 3:
                divisibleByThree(vector, size);
                break;
            case 4:
                sortDescending(vector, size);
                break;
            case 5:
                generateMatrixPermutations(vector, size);
                break;
            case 6:
                closestTo25(vector, size);
                break;
            case 7:
                break;
            case 8:
                int numbers[VECTOR_COUNT];
                readNumbers(numbers, VECTOR_COUNT);
                dotProduct(vector, size, numbers, VECTOR_COUNT);
                break;
            case 9:
                compositeNumbers(vector,size);
                break;
            case 10:
                readNumbers(numbers, VECTOR_COUNT);
                matrixProduct(vector,size, numbers, VECTOR_COUNT, matrix);
                *matrixInitialized = 1;
                showIntMatrix(matrix);
                break;
            case 11:
                if (!(*matrixInitialized)) {
                    printf("The matrix is not initialized, choose the option 10 to initialize it");
                    break;
                }
                float matrixFloat[VECTOR_COUNT][VECTOR_COUNT];
                convertMatrixToFloat(matrix, matrixFloat);
                printf("Determinant: %.1lf",determinantMatrix14(matrixFloat, 0,0));
                break;
            default:
                printf("ERROR: Invalid number!");
                continue;
        }
        waitForUserEnter();
    } while (n == 0);
}