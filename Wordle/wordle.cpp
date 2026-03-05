// Plan
//  Add word bank for random word
//  Add allowed guesses to user can't type random shit

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    string word = "break";
    string guess;
    int attempts = 0;

    string green = "🟩";
    string yellow = "🟨"; 
    string grey = "⚪️";

    string prints[6];

    cout << "Enter a 5 letter word to start" << endl;
    cout << "Type 'end' to give up" << endl;

    while (attempts <= 6 && guess != word) {
        cin >> guess;
        if (guess == "end") {
            break;
        }
        if (guess.length() == 5){
            // Gray & Green
            for (int i = 0; i < 5; i++) {
                if (guess[i] != word[i]) {
                    prints[i] = grey;
                } else {
                    prints[i] = green;
                }
            }
            // Yellow
            for (int r = 0; r < 5; r++) {
                for (int c = 0; c < 5; c++) {
                    if (guess[c] == word[r] && r != c) {
                        prints[c] = yellow;
                    }
                }
            }
            for (int i = 0; i < 5; i++) {
                cout << prints[i];
            }
            cout << endl;
            attempts++;
        } else {
            cout << "Enter a valid word" << endl;
        }
    }
    if (guess == word) {
        cout << "You got the word!" << endl;
        cout << "Total guesses: " << attempts << endl;
    } else {
        cout << "The word was: " << word << endl;
    }
}

bool check(string guess) {
    bool works = false;
    fstream inFile;
    inFile.open("allowedWords.txt");

    return works;
}

string newWord() {
    fstream inFile;
    inFile.open("wordBank.txt");
    string word = "";

    return word;
}