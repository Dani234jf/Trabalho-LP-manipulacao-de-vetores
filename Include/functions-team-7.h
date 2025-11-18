#ifndef FUNCTIONS_TEAM_7_H
#define FUNCTIONS_TEAM_7_H


/**
 * @brief The count of numbers to read and store in the array
 */
#define VECTOR_COUNT 14

/**
 * @brief The number of all the options in the menu
 */
#define OPERATIONS_NUMBER 6


/**
 * @brief Reads numbers and stores them in the `vector[int]`
 * @details Reads number from the user and stores them in the `vector[int]` array
 * @param vector array for storing the numbers
 * @param size length of the array (same as numbers count)
 */
void readNumbers(int vector[], int size);

/**
 * @brief Displays the menu
 * @details Displays the menu to the user, the menu contains all the options the user can make
 */
void showMenu();

/**
 * @brief Chooses function to execute based on the input
 * @details Executes the function linked to the option number that the user can choose
 */
void chooseOperation();


#endif