#ifndef FUNCTIONS_TEAM_7_H
#define FUNCTIONS_TEAM_7_H


/**
 * @brief The count of numbers to read and store in the array
 */
#define VECTOR_COUNT 14

/**
 * @brief The number of all the options in the menu
 */
#define OPERATIONS_NUMBER 11


/**
 * @brief Waits for the user to press `enter`  
 * @details Waits until the user presses the `enter` key showing a message "continue..."
 */
void waitForUserEnter();

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
 * @brief Calculates the dot product of two vectors
 * @details Multiply the elements at matching indexes, and sum them all
 * @param vector1 array of stored numbers
 * @param size1 length of the `vector1` array
 * @param vector2 array of the new vector
 * @param size2 length of the `vector2` array
 */
void dotProduct(int vector1[], int size1, int vector2[], int size2);

/**
 * @brief Chooses function to execute based on the input
 * @details Executes the function linked to the option number that the user can choose
 * @param vector array of stored numbers
 * @param size length of the array
 */
void chooseOperation( int vector[], int size);

/**
 * @brief Calculates the square root of each element stored
 * @details Calculates the square root of each element stored on `vector[int]` and outputs a new array with the results.
 * @param vector array of stored numbers
 * @param size length of the array
 */
void calculateRoot(int vector[],int size);

#endif