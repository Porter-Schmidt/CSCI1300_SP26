#include <iostream>

// TODO: Include which header file?
#include <vector>

using namespace std;

int main() {
    // TODO: Declare a vector of integers named 'numbers'
    vector<int> numbers;

    // TODO: Add the values 10, 20, and 30 to the vector
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    cout << "Vector Elements: ";

    // TODO: Use a for loop to print each element
    for(size_t i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }

    cout << endl;

    return 0;
}