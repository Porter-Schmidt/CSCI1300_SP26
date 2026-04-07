#include <iostream>
using namespace std;

int main() {
    const int SIZE = 6;
    int numbers[SIZE] = {3, 8, 12, 5, 9, 1};

    // TODO: print numbers in original order​
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << endl;
    }
    cout << endl;
    // TODO: print numbers in reverse order​
    for (int i = SIZE - 1; i >= 0; i--) {
        cout << numbers[i] << endl;
    }
    return 0;
}



