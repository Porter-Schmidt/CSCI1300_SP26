#include <iostream>
using namespace std;

// 1. What is this called? - Prototype
// 2. Why do we use it? - To declare the function before int main()
// 3. What is an alternative option? - Putting the function before int main
int updateScore(int & s);

int main() {
    int userScore = 10;

    // 4. What is happening in this line? - Calling the function
    // 5. 'userScore' is referred to as what? - Argument
    int result = updateScore(userScore); // return 10; result = 10;

    cout << "Result: " << result << endl;
    cout << "Final User Score: " << userScore << endl;

    return 0;
}

// 6. 's' is referred to as what? - Parameter
int updateScore(int & s) {
    // 7. Implement post increment on the variable s and assign it to the output
    int output = s++; // output = 10 // s = 11

    // 8. Implement pre increment on the variable s
    ++s; // s = 12

    return output;
}