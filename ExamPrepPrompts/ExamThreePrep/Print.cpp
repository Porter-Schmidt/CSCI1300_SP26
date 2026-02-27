#include <iostream>
using namespace std;

// TODO: Rewrite the while loop below as a for loop
// The logic should remain the same

void print(string str) {
    // Change this while loop to a for loop!
    int i = 0;
    while (i < str.length()) {
        if (str[i] == '!') {
            cout << str[i];
        }
        i++;
    }
    cout << endl;
    cout << "Characters processed: " << i << endl;
}

// I created the main func for you this time :)
// I want you to try to run the code so you can see what it is doing before you try to recreate it with a for loop
// Command reminders for VS code:
    // g++ Print.cpp -o Print.exe
        // MAC Users: g++ Print.cpp -o Print.out
    // ./Print.exe
        // MAC Users: ./Print.out

int main() {
    print("Hello World!"); // Should print '!' once followed by 12 characters processed
    return 0;
}
