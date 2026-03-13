// You are in charge of the space cargo logisitics!
#include <iostream>
#include <string>
using namespace std;


// Define the following structs with their members:
    // Captain: string name, and int license
    // Ship: string shipName, double fuel, and Captain pilot

struct Captain {
    string name;
    int license;
};
struct Ship {
    string shipName;
    double fuel;
    Captain pilot;
};

// Create a print function (I recommend doing after main)
// Print out all of the ships with captains that have int license > 5

void print(Ship boats[], int size);
// Create a main function
// Should have an array of three ships
    // Each ship should have a captain and fuel
    // You can name the ships and captains whatever you choose
    // The captains should have int license 2, 6, and 19
    // The fuel should have doubles 9.8, 10.0, and 2.3
// Call the print func
// return 0

int main() {
    Ship fleet[3];

    fleet[0].shipName = "Boat 1";
    fleet[0].fuel = 9.8;
    fleet[0].pilot = {"Mark", 2};

    fleet[1].shipName = "Boat 2";
    fleet[1].fuel = 10.0;
    fleet[1].pilot = {"Johnathin", 6};

    fleet[2].shipName = "Boat 4";
    fleet[2].fuel = 2.3;
    fleet[2].pilot = {"Keith", 19};

    print(fleet, 3);

    return 0;
}

void print(Ship boats[], int size) {
    for (int i = 0; i < size; i++) {
        if (boats[i].pilot.license > 5) {
            cout << "Ship name: " << boats[i].shipName << endl;
            cout << "Ship fuel: " << boats[i].fuel << endl;
            cout << "Ship pilot name: " << boats[i].pilot.name << endl;
            cout << "Pilot license level: " << boats[i].pilot.license << endl;
            cout << endl;
        }
    }
}