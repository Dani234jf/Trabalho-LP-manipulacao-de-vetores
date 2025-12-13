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
 * @param calculatedMatrix array to store the matrix
 * @param calculatedMatrixInitialized 1 if is initialized or 0 if not
 */
void chooseOperation( int vector[], int size, int calculatedMatrix[][VECTOR_COUNT], int *calculatedMatrixInitialized);

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
 * @brief Shows a help menu with descriptions for each option.
 * @details The help menu provides brief descriptions for all operations
 * and allows the user to press `0` to exit back to the main menu.
 */
void showHelpMenu();

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
 * @param vector2 array of new stored numbers
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

/**
 * @brief Outputs the `matrix` to the screen
 * @details Outputs the `matrix` in the terminal, line by line
 * @param matrix `(14x14)`
 */
void showIntMatrix(int matrix[][VECTOR_COUNT]);

/**
 * @brief Calculates the matrix product between `vector1` (14x1) and `vector2`(1x14)
 * @details Multiply the `vector1` (14x1) and `vector2` (1x14) and outputs a new (14x14) matrix
 * @param vector1 array of stored numbers
 * @param size1 length of the `vector1` array
 * @param vector2 array of new stored numbers
 * @param size2 length of the `vector2` array
 * @param matrix matrix to store the result
 */
void matrixProduct(int vector1[], int size1, int vector2[], int size2, int matrix[][VECTOR_COUNT]);

/**
 * @brief Swaps two rows of the matrix
 * @details Swaps two rows of the matrix, the `row1` with the `row2`
 * @param matrix `(14x14)`
 * @param row1 index of the first row to swap
 * @param row2 index of the second row to swap
 */
void swapMatrixLines(float matrix[][VECTOR_COUNT], int row1, int row2);

/**
 * @brief Converts the `matrix` of integers to floats
 * @details Converts each element of the `matrix` to the `matrixFloat`
 * @param matrix `(14x14)`
 * @param matrixFloat `(14x14)`
 */
void convertMatrixToFloat(int matrixInt[][VECTOR_COUNT], float matrixFloat[][VECTOR_COUNT]);

/**
 * @brief Calculates the determinant of the `matrix` recursively.
 * @details Calculates the determinant of the `matrix` using recursive elimination, finds pivots to create zero's
 * @param matrix `(14x14)`
 * @param row first row of the `matrix`, `0`
 * @param column first column of the `matrix`, `0`
 * @return Determinant of the `matrix`
 */
double determinantMatrix14(float matrix[VECTOR_COUNT][VECTOR_COUNT], int row, int column);

#endif