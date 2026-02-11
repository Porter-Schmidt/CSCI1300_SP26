// The goal of this warm up is to become familiar with writing functions
// The content of this script is focused on calculating shipping costs based on the weight of the package and the destination zone
// The output of this script is the final price for a customer

// 1. Write the preprocessor directive
/**** TODO ****/
#include <iostream>

// 2. Use the standard namspace to avoid naming conflicts:
/**** TODO ****/
using namespace std;

// 3. Write a function named calculateShipping:
// Input: integer for the weight and a character ('L' for local or 'I' for international) for the detination
// Logic:
// - If local ('L'): If less than 50 lbs cost is $5; If more than 50 lbs the cost is $8
// - If international ('I'): If less than 50 lbs cost is $12; If more than 50 lbs the cost is $20
// - If destination is anything else, cost is $0
// Output: The total cost with two deimals
/**** TODO ****/
double calculateShipping(int weight, char destination) {
    double cost;

    if(destination == 'L') {
        if(weight < 50) {
            cost = 5.00;
        }
        else {
            cost = 8.00;
        }
    }
    else if(destination == 'I') {
        if(weight < 50) {
            cost = 12.00;
        }
        else {
            cost = 20.00;
        }
    }
    else {
        cost = 0.00;
    }

    return cost;
}

// **************** Stop Here **************** //
// End of class task

// 4. Write the main function:
// - Ask the user for weight and destination
// - Call calculateShipping and store the result
// - If the result is 0, print "Invalid Destination Entered"
// - Otherwise, print the final cost
/**** TODO ****/
int main() {
    double weight;
    cout << "Please enter the weight: " << endl;
    cin >> weight;

    char destination;
    cout << "Please enter the destination: " << endl;
    cin >> destination;

    double cost = calculateShipping(weight, destination);

    if(cost == 0.00) {
        cout << "Invalid Destination Entered" << endl;
    }
    else {
        cout << "The final cost is $" << cost << endl;
    }

    return 0; // Optional
}

// **************** Command Line Reminders **************** //
// We use -o so we can name the executable file and not get a.exe/a.out rewritten every time!

// Windows
// To compile your code: g++ -std=c++17 -Wall -Werror -Wpedantic FunPractice.cpp -o FunPractice.exe
// To execute your code: ./FunPractice.exe (As long as -o was used)

// Mac
// To compile your code: g++ -std=c++17 -Wall -Werror -Wpedantic FunPractice.cpp -o FunPractice.out
// To execute your code: ./FunPractice.out (As long as -o was used)