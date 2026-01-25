// Start by implementing the general format
#include<iostream>
using namespace std;

// Added so I can work with setprecision
#include<iomanip>

int main() {
    // Assign a
    // int a = 10;
    int a;
    cin >> a;

    // Assign b
    // int b = 11;
    int b;
    cin >> b;

    // Assign h
    // int h = 3;
    int h;
    cin >> h;

    // Provide area / formula
    double area = 0.5 * (a + b) * h;

    // Output
    cout << "The area of the trapezoid is: " << fixed << setprecision(1) << area << endl;

    // Optional!!
    return 0;
}


