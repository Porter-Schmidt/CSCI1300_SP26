#include <iostream>
using namespace std;

// TODO: Rewrite the while loop below as a for loop
// The logic should remain the same

void whileFunc() {
    for (int i = 10; i > 0; i--) {
        cout << "Count: " << i << endl;
    }
}

// Optional: Create the main function and call whileFunc()
// You can test to see if your code works by adding cout statements

int main() {
    whileFunc();
    return 0;
}