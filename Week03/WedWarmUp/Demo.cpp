#include<iostream>

using namespace std;

int main() {
    int floor;
    cout << "Floor: ";
    cin >> floor; // floor is elevator button!

    int actual_floor; // actual floor is the actual floor the user is on

    // if (floor > 13) { // Original
    // if (floor = 13) { // Start without flags then add them in
    // if (floor = "12") { // Start without flags then add them in
    // -o

    if (floor > 13) {
        actual_floor = floor - 1;
    }
    else {
        actual_floor = floor;
    }

    cout << "The actual floor is " << actual_floor << endl;
}


