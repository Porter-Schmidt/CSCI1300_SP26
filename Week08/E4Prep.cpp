/*
Write a function named matrixProduct that calculates the product 
of all elements in a 2D array of integers.

Requirements
* Function name: matrixProduct
* Parameter 1: A 2D integer array where the second dimension is 
always of size 3
* Parameter 2: An integer representing the size of the first 
dimension (number of rows)
* Returns: The product of all numbers in the 2D array

Example 1:
    int arrayName[1][3] = {{2, 3, 5}};
    matrixProduct(arrayName, 1); // Returns 30 (2 * 3 * 5)

Example 2:
    int arrayName[2][3] = {{1, 2, 1}, {4, 5, 2}}
    matrixProduct(arrayName, 2); // Returns 80 (1 * 2 * 1 * 4 * 5 * 2)

*/

#include <iostream>
using namespace std;

//TODO Write the function here

int main() {
// Example 1:
    int arrayName[1][3] = {{2, 3, 5}};
    int sum = matrixProduct(arrayName, 1); // Returns 30 (2 * 3 * 5)
    cout << "The sum for the first array is: " << sum << endl;

// Example 2:
    int arrayName2[2][3] = {{1, 2, 1}, {4, 5, 2}};
    int sum2 = matrixProduct(arrayName2, 2); // Returns 80 (1 * 2 * 1 * 4 * 5 * 2)
    cout << "The sum for the second array is: " << sum2 << endl;
}