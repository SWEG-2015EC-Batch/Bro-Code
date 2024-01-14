// Write C++ program, to read 3*4 2D-array, find and print the sum of even array elements. The  program should also print even array elements and ‘*’ instead of odd numbers in tabular form
#include <iostream>

using namespace std;

int main() {
    const int rows = 3;
    const int cols = 4;
    int array[rows][cols];

    cout << "Enter the elements of the 3x4 array:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }

    int sumEvenElements = 0;

    cout << "\nArray Elements and Sum of Even Elements:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << (array[i][j] % 2 == 0 ? array[i][j] : '*') << "\t";
            if (array[i][j] % 2 == 0) {
                sumEvenElements += array[i][j];
            }
        }
        cout << endl;
    }

    cout << "\nSum of Even Elements: " << sumEvenElements << endl;

    return 0;
}
