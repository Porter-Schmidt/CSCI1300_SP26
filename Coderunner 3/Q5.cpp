#include <iostream>
#include <iomanip>
using namespace std;

// Paste only the function required and main().
// Header files: iostream have been included, please do not paste that in the answer box


double calculateSowingTime(double area, char machine_type);

int main() {
    double area;
    char machine;

    cout << "Enter area of the farmland in sq ft:" << endl;
    cin >> area;

    cout << "Enter the type of sowing machine to be used:" << endl;
    cin >> machine;

    double time = calculateSowingTime(area, machine);
    
    if (time == -1) {
        cout << "Area or machine type is invalid. Time cannot be calculated." << endl;
    } else {
        cout << "The time taken is: " << time << " minutes." << endl;
    }
}

double calculateSowingTime(double area, char machine_type) {
    if (area <= 0) {
        return -1;
    }

    switch (machine_type) {
        case 'W':
            return area * (12.0 / 8.0);
        case 'X':
            return area * (10.0 / 3.0);
        case 'Y':
            return area * (7.0 / 2.0);
        case 'Z':
            return area * (8.0 / 7.0);
        default:
            return -1;
    }
}