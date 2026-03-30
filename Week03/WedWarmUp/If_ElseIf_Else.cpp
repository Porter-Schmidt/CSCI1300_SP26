#include <iostream>

using namespace std;

int main() {
    // Collect User Input #1
    int age;

    cout << "Enter your age: ";
    cin >> age;

    // Collect User Input #2
    string username;

    cout << "Enter your username: ";
    cin >> username;

    // Compare Integers
    if (age >= 18) {
        cout << "You are an adult." << endl;
    }
    else if (age >= 13) {
        cout << "You are a teenager" << endl;
    }
    else {
        cout << "You are not an adult." << endl;
    }

    // Substring example
    string firstThree = username.substr(0, 3);
    cout << "The first three letters of your username is: " << firstThree << endl;

    return 0;
}

