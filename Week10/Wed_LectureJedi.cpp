/* Empty ready for lecture script */

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

class Jedi {
    public:
        // TODO: Constructors

        // Setters
        void setTrain(double hours);

        void helperFunction();
    private:
        string name;
        int hit_points;
        int mana;
        int attack_strength;
        int defense_strength;
};

// TODO

// TODO

/* Modifies private variables based on the number of hours
the Jedi has trained for */
void Jedi::setTrain(double hours) {
    if (hours <= 0) {
        cout << name << " must train for positive hours." << endl;
        return;
    }

    if (mana < hours * 2) {
        cout << name << " is too tired to train that long." << endl;
        return;
    }

    cout << name << " trains for " << hours << " hours." << endl;

    mana -= hours * 2;
    attack_strength += hours * 2;
    defense_strength += hours * 2;
}

/* A helper function specifically to show implicit/explicit params 
when calling one member func from another */
void Jedi::helperFunction() {
    setTrain(5);
}

int main() {
    // TODO Rand()
    srand(time(0));

    /* A key part of what we are talking about today
    How to correctly initialize an instance of a class */
    Jedi obiwan("Obi-Wan", 100, 60, 12, 10);
    Jedi obiwan2;

    // obiwan implicit parameter
    // 5 explicit param
    obiwan.setTrain(5);

    return 0;
}
