#include <iostream>
// #include // Part 1: For File I/O Streams
// #include // Part 2: For getline()
// #include // Part 2: For helper functions like isupper() or isdigit()
// #include // Part 3: For stream manipulators like setw()

using namespace std;

void part1() {
    cout << "PART 1 - Review" << endl;
    cout << "---------------" << endl;

    // Step 1: Open the input file "input.txt"


    // Step 2: Check if the file opened (Print an error if not)


    // Step 3: Close the file


    cout << endl;
}

void part2() {
    cout << "PART 2 - Reading Input" << endl;
    cout << "----------------------" << endl;

    // Step 1: Open the input file input2.txt


    // Step 2: Read and print each line from the file
    cout << "Printing lines from input.txt: " << endl;
    string line;
    // TODO


    // Reset the file to read from the beginning again (Completed)
    // Does anyone know why I am closing and reopening the files?
    inFile.close();
    inFile.open("input.txt");
    if (!inFile.is_open()) {
        cout << "Error reopening input.txt!" << endl;
        return;
    }


    // Step 3: Read and print each word from the file (Not each line)
    cout << endl << "Printing individual words from input.txt: " << endl;
    string word;
    // TODO


    // Reset the file to read from the beginning again (Completed)
    inFile.close();
    inFile.open("input2.txt");
    if (!inFile.is_open()) {
        cout << "Error reopening input2.txt!" << endl;
        return;
    }


    // Step 4: Read and print each character individually
    cout << "Read each character from input2.txt: " << endl;
    char ch;
    // TODO


    // Reset the file to read from the beginning again (Completed)
    inFile.close();
    inFile.open("input2.txt");
    if (!inFile.is_open()) {
        cout << "Error reopening input2.txt!" << endl;
        return;
    }


    // Step 5: Count and print all uppercase letters
    cout << endl << "Count uppercase letters: " << endl;
    char character;
    int upperCount = 0;
    // TODO 
    cout << endl << "Total uppercase letters: " << upperCount << endl;


    // Reset the file to read from the beginning again (Completed)
    inFile.close();
    inFile.open("input2.txt");
    if (!inFile.is_open()) {
        cout << "Error reopening input2.txt!" << endl;
        return;
    }


    // Step 6: Read using a delimiter (comma) and print each section
    cout << endl << "Read with a comma delimiter: " << endl;
    string line;
    char delimiter = ',';
    // TODO


}

void part3() {
    cout << "PART 3 - Writing Output" << endl;
    cout << "-----------------------" << endl;

    // Step 1: Open output.txt for writing (Without appending)


    // Step 2: Write a line to the file


    // Step 3: Close the file


    // Step 4: Open output.txt again (Without appending)
    // This is to show we can overwrite


    // Step 5: Write a line to the file (This will overwrite your original line)


    // Step 6: Close the file again


    // Step 7: Open output.txt in append mode and add more lines


    // Step 8: Demonstrate string manipulator with setw


    // Step 9: Don't forget to close the file

}

int main() {
    cout << "The start of the script: " << endl;

    part1(); // Calling func part1 to execute

    cout << "Part 1 executed and we returned to main" << endl << endl;

    // part2(); // Calling func part2 to execute

    cout << "Part 2 executed and we returned to main" << endl << endl;

    // part3(); // Calling func part3 to execute 

    cout << "Part 3 executed and we returned to main" << endl << endl;
}