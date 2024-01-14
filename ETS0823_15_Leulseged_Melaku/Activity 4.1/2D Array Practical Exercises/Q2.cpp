// Write a C++ program to that accepts a two-dimensional array and displays the multiplication  of row elements and the sum of column elements. 
#include <iostream>

using namespace std;

int main() {
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of columns: ";
    cin >> cols;

    int array[rows][cols];

    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }

    cout << "\nMultiplication of row elements:\n";
    for (int i = 0; i < rows; ++i) {
        int rowProduct = 1;
        for (int j = 0; j < cols; ++j) {
            rowProduct *= array[i][j];
        }
        cout << "Row " << i << ": " << rowProduct << endl;
    }

    cout << "\nSum of column elements:\n";
    for (int j = 0; j < cols; ++j) {
        int colSum = 0;
        for (int i = 0; i < rows; ++i) {
            colSum += array[i][j];
        }
        cout << "Column " << j << ": " << colSum << endl;
    }

    return 0;
}
