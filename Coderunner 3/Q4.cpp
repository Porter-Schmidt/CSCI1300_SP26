#include <iostream>
using namespace std;

// Paste only the function required and main().
// Header files: iostream have been included, please do not paste that in the answer box

#include <iostream>
using namespace std;

double calculateRoomArea(double length, double width);

int main () {
    double l, w;

    cout << "Enter the length of the room in ft:" << endl;
    cin >> l;

    cout << "Enter the width of the room in ft:" << endl;
    cin >> w;

    double area = calculateRoomArea(l, w);

    if (area == -1) {
        cout << "Length or width is invalid. Area cannot be calculated." << endl;
    } else {
        cout << "The area is: " << area  << " sq ft." << endl;
    }
}

double calculateRoomArea(double length, double width){
    if (length > 0 && width > 0) {
        return length * width;
    } else {
        return -1;
    }
}