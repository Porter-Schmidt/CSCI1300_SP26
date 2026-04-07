#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    // a 2D array (2 rows, 3 columns)
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Show it as a matrix
    // printf("As a 2D matrix:\n");
    cout << "As a 2D matrix:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            // printf("%d ", arr[i][j]);
            cout << arr[i][j] << " ";
        }
        // printf("\n");
        cout << "\n";
    }

    // Now show the same elements in the order they are stored
    printf("\nIn memory (row by row):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
    }
    printf("\n");
    
    return 0;
}