#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;


int main() {
    char letter;
    
    cout << "Enter the first letter of the company:" << endl;
    cin >> letter;
    
    switch (letter) {
        case 'B':
            cout << "Automobile manufacturer chosen: BMW" << endl;
            break;
        case 'V':
            cout << "Automobile manufacturer chosen: Volkswagen" << endl;
            break;
        case 'H':
            cout << "Automobile manufacturer chosen: Honda" << endl;
            break;
        case 'T':
            cout << "Automobile manufacturer chosen: Tesla" << endl;
            break;
        default:
            cout << "Automobile manufacturer chosen: Invalid" << endl;
    }
    
    
}