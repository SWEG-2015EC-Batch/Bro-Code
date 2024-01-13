#include <iostream>

using namespace std;

int main() {
    const int rows = 3;
    const int cols = 3;
    int matrix[rows][cols] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  
    for (int i = 0; i < rows; ++i) {
        int rowProduct = 1;
        for (int j = 0; j < cols; ++j) {
            rowProduct *= matrix[i][j];
        }
        cout << "Product of elements in row " << i + 1 << ": " << rowProduct << endl;
    }

  
    for (int j = 0; j < cols; ++j) {
        int colSum = 0;
        for (int i = 0; i < rows; ++i) {
            colSum += matrix[i][j];
        }
        cout << "Sum of elements in column " << j + 1 << ": " << colSum << endl;
    }

    return 0;
}
