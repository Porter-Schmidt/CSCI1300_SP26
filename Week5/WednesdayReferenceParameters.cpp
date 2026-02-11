// The goal of this walk through is to showcase the difference
// Between pass by value and pass by reference

#include <iostream>
using namespace std;

// PASS BY VALUE - NO '&'
// Think of score1 as a copy
// Analogy: playerScore is the PDF/argument that you sent to a friend
// You still have the original PDF, your friend now has a copy called score1, that does not change your original PDF
int updateScore(int score1) {
    score1 = score1 + 10; // Note that we changed the parameter!
    return score1;
}

// // PASS BY REFERENCE - YES '&' - The only difference in this function is the addition of '&'!!!
// // Think of score1 as the same as the argument playerScore - not a copy
// // Analogy: playerScore is a shared Google Doc that you share with a friend
// // Any changes your friend makes to the Google Doc, shows up in your version as well
// int updateScore(int & score1) {
//     score1 = score1 + 10; // Whatever you do to the parameter - you do to the argument
//     return score1;
// }

int main() {
    int playerScore = 50;

    int newScore = updateScore(playerScore); // playerScore is the argument

    cout << "PASS BY VALUE" << endl;
    cout << "Player's score is: " << playerScore << endl; // 50
    cout << "The new score is: " << newScore << endl; // 60

    return 0;
}