#include <stdio.h>
#include <math.h>
#include "functions-team-7.h"

void waitForUserEnter() {
    char temp;
    printf("\n\ncontinue...");
    scanf("%c",&temp);
    while(getchar() != '\n');    
}

void readNumbers(int vector[], int count)
{
    int i;

    for (i = 0; i < count; i++)
    {
        int number, valid;

        do
        {
            printf("Enter a number %d (betwen 3 and 31) : ", i + 1);
            valid = scanf("%d", &number);

            while (getchar() != '\n');

            if (!valid || number < 3 || number > 31)
            {
                printf("Invalid input! Try again. \n");
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
    printf(" ]");
}

void dotProduct(int vector1[], int size1, int vector2[], int size2) {
    int result = 1;
    for ( int i = 0; i < size1; i++ ) {
        result += (vector1[i] * vector2[i]);
    }
    printf("Dot Product: %d", result);
}

void chooseOperation( int vector[], int size )
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
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                int numbers[VECTOR_COUNT];
                readNumbers(numbers, VECTOR_COUNT);
                dotProduct(vector, size, numbers, VECTOR_COUNT);
                break;
            case 9:
                break;
            case 10:
                break;
            default:
                printf("ERROR: Invalid number!");
                continue;
        }
        waitForUserEnter();
    } while (n == 0);
}