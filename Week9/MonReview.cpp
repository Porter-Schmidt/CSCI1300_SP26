#include <iostream>

using namespace std;

// Why use const?
const int CAPACITY = 10;
const int ROWS = 3;
const int COLS = 4;

// 1D Arrays

// Make sure you are starting in main to follow the flow of the code!
// 'arr' got assigned to 'a'. Pass by reference!!
// size got assigned to size which was 5. Pass by value here
// start and step got assigned to 10. Pass by value
void init1D(int arr[], int size, int start, int step) {
    for (int i = 0; i < size; ++i) {
        // Whatever you do to the parameter... you do to the argument
        arr[i] = start + i * step;
        // Ex: arr[0] = 10 + 0 * 10 // 10
    }

    // void - return to main!
}

// arr got assigned to a and size assigned to 5
void print1D(int arr[], int size) {
    // makes it pretty in the terminal
    cout << "[ ";

    // type of error if i <= size?
    for (int i = 0; i < size; ++i) {

        // arr[i] = 10;
        cout << arr[i];

        if (i + 1 < size) {
            cout << ", ";
        }
    }

    cout << " ]" << endl;
    // void - return to main!
}

// 'arr' assigned to a; size to 5 (&!!!); capacity to 10 (Global); index to 2, and value to 25
bool insertInto1D(int arr[], int & size, int capacity, int index, int value) {

    // These are called edge cases
    if (index < 0 || index > size) {
        // this is what ok could be assigned to
        return false; // invalid index
    }

    if (size >= capacity) {
        // this is what ok could be assigned to
        return false; // no room
    }

    for (int i = size - 1; i >= index; --i) {
        arr[i + 1] = arr[i]; // I encourage you to draw out the variable changes
        // [1, 2, 3, 4, 5] --> [1, 2, 3, 3, 4, 5]
    }

    arr[index] = value;
    // [1, 2, 3, 3, 4, 5] --> [1, 2, 25, 3, 4, 5]

    ++size; // What is the purpose of doing this?

    return true;
    // this is what ok could be assigned to
}

void demo1D_insert_example() {
    int a[CAPACITY];
    int size = 5;

    // Calls the init1D function
    // arrays are default pass by reference!
    // Not sure what these arguments are for? 
    // Let's check out the function parameters above
    init1D(a, size, 10, 10); 
    // So array 'a' gets assigned to: 10,20,30,40,50

    cout << "Initial array (size = " << size << "): ";

    // Same thing - follow the code up to functional print1D
    print1D(a, size);

    cout << "Insert 25 at index 2: " << endl;

    // Notice something different with this function call?
    // Left hand side information to store returned information
    // Whoa whoa what is CAPACITY? Where did that come from?
    // Follow the function up to insertInto1D
    bool ok = insertInto1D(a, size, CAPACITY, 2, 25);

    // What is 'ok'?
    if (ok) {
        cout << "Insert succeeded.";
    } else {
        cout << "Insert failed.";
    }

    cout << "Now size = " << size << ", array: ";
    print1D(a, size);

    cout << "Append 99 at end: " << endl;
    insertInto1D(a, size, CAPACITY, size, 99); // append - uses size as index
    print1D(a, size);
}

// 2D Arrays

// *********************
// IMPORTANT NOTE: The cols size has to be included if passing an array as a param
// Short explanation: pointers - more advanced concept not taught in this course
void init2D(int arr[][COLS], int rows, int cols, int start) {
    int v = start;

    // What does pre-increment do here? 
    for (int r = 0; r < rows; ++r) { // Remember - pre or post doesn't matter in a for loop!
        for (int c = 0; c < cols; ++c) { // Remember - pre or post doesn't matter in a for loop!
            arr[r][c] = v++; // Here though, it does matter for the assignment - use then update
        }
    }
}

void print2D(int arr[][COLS], int rows, int cols) {
    for (int r = 0; r < rows; ++r) {
        cout << "[ ";

        for (int c = 0; c < cols; ++c) {
            cout << arr[r][c];

            if (c + 1 < cols) {
                cout << ", ";
            }
        }

        cout << " ]\n";
    }
}

bool set2D(int arr[][COLS], int rows, int cols, int r, int c, int value) {
    if (r < 0 || r >= rows || c < 0 || c >= cols) {
        return false;
    }

    arr[r][c] = value;

    return true;
}

// I encourage you to add comments to help understand what the code is doing for 2D process
void demo2D_set_and_print() {
    int m[ROWS][COLS];

    init2D(m, ROWS, COLS, 1);
    
    print2D(m, ROWS, COLS);

    if (set2D(m, ROWS, COLS, 1, 2, 99)) {
        print2D(m, ROWS, COLS);
    } else {
        cout << "Bad indexes for set2D" << endl;
    }
}

// Easiest to have main at the bottom!

int main() {
    cout << endl << "1D Array: " << endl << endl;

    // Walked through as warm up
    demo1D_insert_example();

    cout << endl << "2D Array: " << endl << endl;

    // Encouraged to read yourself to try to understand the code
    demo2D_set_and_print();

    return 0;
}
