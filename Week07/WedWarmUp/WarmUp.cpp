#include <iostream>
using namespace std;

int main() {
    int capacity = 5;
    int numbers[capacity] = {10, 20, 30};

    // The remaining elements are assigned to 0
    cout << numbers[3] << endl; // 0 

    numbers[3] = numbers[0] + 5;

    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}

