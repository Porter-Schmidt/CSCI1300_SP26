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

// Create a print function (I recommend performing this after writing main)
// Print out all of the ships with captains that have int license > 5
void print(Ship fleet[], int size) {
    for (int i = 0; i < size; i++) {
        if (fleet[i].pilot.license > 5) {
            cout << "Ship: " << fleet[i].shipName << endl;
            cout << "Pilot: " << fleet[i].pilot.name << endl;
            cout << "License Level: " << fleet[i].pilot.license << endl << endl;
        }
    }
}

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

    // Ship 1 - Star Trek
    fleet[0].shipName = "Voyager";
    fleet[0].fuel = 9.8;
    fleet[0].pilot = {"Janeway", 2};

    // Ship 2 - Halo
    fleet[1].shipName = "Pillar of Autumn";
    fleet[1].fuel = 10.0;
    fleet[1].pilot.name = "Keyes";
    fleet[1].pilot.license = 6;

    // Ship 3 - Star Wars
    fleet[2].shipName = "Millennium Falcon";
    fleet[2].fuel = 2.3;
    fleet[2].pilot = {"Solo", 19};

    print(fleet, 3);

    return 0;
}