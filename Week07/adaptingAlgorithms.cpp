#include <iostream>
using namespace std;

// Find the minimum value in the array
double findMinimum(double arr[], int size) {
    double minVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal) minVal = arr[i];
    }
    return minVal;
}

// Find the index of a value using linear search
int findIndex(double arr[], int size, double value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) return i;
    }
    return -1; // not found
}

// Remove element at a given index (preserving order)
void removeAtIndex(double arr[], int &size, int index) {
    for (int i = index + 1; i < size; i++) {
        arr[i - 1] = arr[i];
    }
    size--;
}

// Sum all elements in the array
double sumArray(double arr[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) sum += arr[i];
    return sum;
}

int main() {
    double scores[] = {8, 7, 8.5, 9.5, 7, 4, 10};
    int size = 7;

    // Step 1: find the minimum score
    double minScore = findMinimum(scores, size);
    cout << "Lowest score: " << minScore << endl;

    // Step 2: find its index
    int minIndex = findIndex(scores, size, minScore);
    cout << "Index of lowest score: " << minIndex << endl;

    // Step 3: remove the lowest score
    removeAtIndex(scores, size, minIndex);
    cout << "Scores after dropping the lowest: ";
    for (int i = 0; i < size; i++) cout << scores[i] << " ";
    cout << endl;

    // Step 4: compute final score
    double finalScore = sumArray(scores, size);
    cout << "Final quiz score: " << finalScore << endl;

    return 0;
}