#include <iostream>
#include <string>
using namespace std;

int main() {
    // string text = "balloon";

    // int length = text.length();

    // for (int i = 0; i < length - 1; i++) {
    //     for (int j = i + 1; j < i + 2; j++) {
    //         cout << text[i] << " and " << text[j] << endl;
    //     }
    // }

    int value = 0;
    cout << "Post Incremement" << endl;
    while (value++ < 5) {
        cout << "Value is: " << value << endl;
    }

    int value2 = 0;
    cout << "Pre Incremement" << endl;
    while (++value2 < 5) {
        cout << "Value is: " << value2 << endl;
    }
}
