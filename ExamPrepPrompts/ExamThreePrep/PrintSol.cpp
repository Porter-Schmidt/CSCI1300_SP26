#include <iostream>
using namespace std;

// TODO: Rewrite the while loop below as a for loop
// The logic should remain the same

void print(string str) {
    // I moved 'int i = 0', 'i < str.length()', and 'i++' into the for loop header.
    // Note: I declare 'i' outside the loop if we still need to print it at the end!
    
    int i; 
    for (i = 0; i < str.length(); i++) {
        if (str[i] == '!') {
            cout << str[i];
        }
    }

    cout << endl;
    cout << "Characters processed: " << i << endl;
}

// I created the main func for you this time :)
// I want you to try to run the code so you can see what it is doing before you try to recreate it with a for loop
// Command reminders for VS code:
    // g++ Print.cpp -o Print.exe
    // ./Print.exe

int main() {
    print("Hello World!"); // Should STILL print '!' once followed by 12 characters processed
    return 0;
}
