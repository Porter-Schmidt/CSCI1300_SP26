#include <iostream>
using namespace std;

// 1. What is this called? Prototype
// 2. Why do we use it? Ordering of functions
// 3. What is an alternative option? Always keep main at the bottom of the script
int updateScore(int & s);

int main() {
    int userScore = 10;

    // 4. What is happening in this line? We are calling the function updateScore
        // Whatever updateScore returns to main will be stored in 'result'
    // 5. 'userScore' is referred to as what? Argument
    int result = updateScore(userScore);

    cout << "Result: " << result << endl;
    cout << "Final User Score: " << userScore << endl;

    return 0;
}

// 6. 's' is referred to as what? Reference parameter // Note & to pass by ref
int updateScore(int & s) {
    // 7. Implement post increment on the variable s and assign it to the output
    int output = s++; // 

    // 8. Implement pre increment on the variable s
    ++s;
    
    return output;
}