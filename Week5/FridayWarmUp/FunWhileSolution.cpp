#include <iostream>
using namespace std;

// 1. Fill in the _______ type
void startCountdown(int startValue) {
    int counter = startValue;

    // 2. Complete the ________ loop and condition
    // For the condition: We want to keep counting down as long as the counter is greater than 0
    while (counter > 0) {

        // 3. Print the current counter
        cout << counter << "... ";

        // 4. Update the counter so it goes down by 1
        counter--;
    }

    cout << "Liftoff!" << endl;
}

int main() {
    int seconds = 5;

    // 5. Call the function and pass it the argument
    /* TODO */
    startCountdown(seconds);

    return 0;
}