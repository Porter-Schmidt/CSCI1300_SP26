#include <iostream>
using namespace std;

int main() {
    int SIZE = 6;
    int numbers[SIZE] = {3, 8, 12, 5, 9, 1};

    // Print numbers in original order
    cout << "Original order: ";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Print numbers in reverse order
    cout << "Reverse order: ";
    for (int i = SIZE - 1; i >= 0; i--) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}



