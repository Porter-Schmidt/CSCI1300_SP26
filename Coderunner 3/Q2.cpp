#include <iostream>
using namespace std;

// DO NOT include the above statements in your answer here
// only paste in your main() function
int main() {
    int cat;

    cout << "Select a category: (1)Brass (2)Woodwind (3)Percussion" << endl;
    cin >> cat;

    switch (cat) {
        case 1: {  // Brass
            cout << "Select an instrument: (1)Trumpet (2)Trombone" << endl;
            int instr1;
            cin >> instr1;

            switch (instr1) {
                case 1:
                    cout << "Your instrument will be $570." << endl;
                    break;
                case 2:
                    cout << "Your instrument will be $500." << endl;
                    break;
                default:
                    cout << "Please enter a valid input." << endl;
            }
            break;
        }

        case 2: {  // Woodwind
            cout << "Select an instrument: (1)Flute (2)Saxophone" << endl;
            int instr2;
            cin >> instr2;

            switch (instr2) {
                case 1:
                    cout << "Your instrument will be $425." << endl;
                    break;
                case 2:
                    cout << "Your instrument will be $225." << endl;
                    break;
                default:
                    cout << "Please enter a valid input." << endl;
            }
            break;
        }

        case 3: {  // Percussion
            cout << "Select an instrument: (1)Snare Drum (2)Cymbals" << endl;
            int instr3;
            cin >> instr3;

            switch (instr3) {
                case 1:
                    cout << "Your instrument will be $275." << endl;
                    break;
                case 2:
                    cout << "Your instrument will be $350." << endl;
                    break;
                default:
                    cout << "Please enter a valid input." << endl;
            }
            break;
        }
        default:
            cout << "Please enter a valid input." << endl;
    }
    
    return 0;
}
