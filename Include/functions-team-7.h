#ifndef FUNCTIONS_TEAM_7_H
#define FUNCTIONS_TEAM_7_H

/**
 * @brief The count of numbers to read and store in the array.
 */
#define VECTOR_COUNT 14

/**
 * @brief The number of all the options in the menu.
 */
#define OPERATIONS_NUMBER 11

/**
 * @brief Waits for the user to press `Enter`.
 * @details Waits until the user presses the `Enter` key showing a message "continue...".
 */
void waitForUserEnter();

/**
 * @brief Reads user-input values and stores them in the vector.
 *
 * @details This function asks the user to insert a set of integer values,
 * ensuring they fall within the allowed range (between 3 and 31).
 * All values are validated before being stored in the vector.
 *
 * @param vector Array where the values will be stored.
 * @param size Total number of values to store.
 */
void readNumbers(int vector[], int size);

/**
 * @brief Chooses function to execute based on the input.
 * @details Executes the function linked to the option number that the user can choose.
 * @param vector array of stored numbers
 * @param size length of the array
 */
void chooseOperation( int vector[], int size);

/**
 * @brief Calculates and displays the square root of each vector element.
 *
 * @details Uses the sqrt() function from math.h to compute the square root
 * of each value in the vector. Results are displayed with two decimal places.
 * The original vector is not modified.
 *
 * @param vector array of stored numbers
 * @param size length of the array
 */
void calculateRoot(int vector[],int size);

/**
 * @brief Calculates and displays the average of all values in the vector.
 *
 * @details Sums all vector elements and divides by the number of elements to obtain
 * the average. Displays the resulting value. Does not modify the vector.
 *
 * @param vector array of stored numbers
 * @param size length of the array
 */
void calculateAverage(int vector[], int size);

/**
 * @brief Displays all elements of the vector that are divisible by three.
 *
 * @details Iterates through the vector and identifies values whose remainder
 * when divided by 3 is zero. Only those values are printed.
 *
 * @param vector array of stored numbers
 * @param size length of the array
 */
void divisibleByThree(int vector[], int size);

/**
 * @brief Sorts the vector in descending order and displays the result.
 *
 * @details This function creates a copy of the original vector and uses qsort()
 * with a custom comparison function to sort the elements in descending order.
 * The original vector remains unchanged.
 *
 * @param vector array of stored numbers
 * @param size length of the array
 */
void sortDescending(int vector[], int size);

/**
 * @brief Generates and displays 14x14 matrix permutations based on the vector.
 *
 * @details The function creates random permutations of 14x14 matrices using values
 * from the provided vector. Each permutation is generated using a shuffle
 * algorithm based on rand() and srand().
 *
 * @param vector array of stored numbers
 * @param size length of the array
 */
void generateMatrixPermutations(int vector[], int size);

/**
 * @brief Finds and displays the vector value closest to 25.
 *
 * @details Scans all values in the vector and determines which one is closest to 25,
 * based on absolute difference. If two values are equally close, the first
 * encountered is chosen. The result is displayed.
 *
 * @param vector array of stored numbers
 * @param size length of the array
 */
void closestTo25(int vector[], int size);

/**
 * @brief Displays the menu with all the options the user can select.
 * @details Displays the menu to the user, the menu contains all the options the user can select.
 */
void showMenu();

/**
 * @brief Calculates the dot product of two vectors.
 * @details Multiply the elements at matching indexes, and sum them all.
 * @param vector1 array of stored numbers
 * @param size1 length of the `vector1` array
 * @param vector2 array of stored numbers
 * @param size2 length of the `vector2` array
 */
void dotProduct(int vector1[], int size1, int vector2[], int size2);

/**
 * @brief Outputs a new array with the composite numbers.
 * @details Outputs a new array from the values of the `vector` that are composite numbers.
 * @param vector array of stored numbers
 * @param size length of the array
 */
void compositeNumbers(int vector[], int size);

#endif