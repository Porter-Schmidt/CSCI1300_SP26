// Preprocessor directive - Allows us to work with C++ files
#include <iostream>

// Discuss what happens if I don't have this line included
using namespace std;

int main() {
    // Collect User Input #1
    int age;

    cout << "Enter your age: ";
    cin >> age;                                 // TODO

    // Collect User Input #2
    string username;

    cout << "Enter your username: ";
    cin >> username;                            // TODO

    cout << "Your username is: " << username << endl;

    // Compare Integers
    if (age >= 18) {                            // TODO
        cout << "You are an adult." << endl;
    }
    else {
        cout << "You are not an adult." << endl;
    }

    // Substring example
    // username = Jalynn
    string firstThree = username.substr(0, 3);  // TODO
    // firstThree = Jal
    cout << "The first three letters of your username is: " << firstThree << endl;
    // The first three letters of your username is: Jal

    return 0;
}

