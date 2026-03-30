#include <iostream>
using namespace std;

// 1. What is this called?
// 2. Why do we use it?
// 3. What is an alternative option?
int updateScore(int & s);

int main() {
    int userScore = 10;

    // 4. What is happening in this line?
    // 5. 'userScore' is referred to as what?
    int result = updateScore(userScore);

    cout << "Result: " << result << endl;
    cout << "Final User Score: " << userScore << endl;

    return 0;
}

// 6. 's' is referred to as what?
int updateScore(int & s) {
    // 7. Implement post increment on the variable s and assign it to the output
    int output = // 

    // 8. Implement pre increment on the variable s
    

    return output;
}