#include <stdio.h>
#include "functions-team-7.h"

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
    printf("\n\n\nStatistics Calculation Menu\n");
    printf("\n_______________________________\n");
    printf("                                |\n");
    printf("1. Calculate the square root    |\n2. Calculate the average        |\n3. Values divisible by 3        |\n");
    printf("4. Sort in descending order     |\n5. Vector permutations          |\n6. Value closest to 25          |\n");
    printf("_______________________________ |\n");
}

void chooseOperation()
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
                printf("ERROR: Invalid number!");
                break;
        }

    } while (n == 0);
}