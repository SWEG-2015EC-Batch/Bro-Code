#include <iostream>

using namespace std;

int main() {
    const int size = 5;
    int numbers[size];

    
    cout << "Enter " << size << " numbers:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> numbers[i];
    }

    cout << "Even numbers in reverse order:" << endl;
    for (int i = size - 1; i >= 0; --i) {
        if (numbers[i] % 2 == 0) {
            cout << numbers[i] << " ";
        }
    }

    return 0;
}
