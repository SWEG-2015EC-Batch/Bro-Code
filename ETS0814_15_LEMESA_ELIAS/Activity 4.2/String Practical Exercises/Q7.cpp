//Write a program that accept name of persons and put them in alphabetical order.
#include <iostream>

using namespace std;

int main() {
    const int maxNames = 100; // Maximum number of names
    string names[maxNames];
    int numNames;

    cout << "Enter the number of names: ";
    cin >> numNames;

    cin.ignore(); // Consume the newline character

    // Input names
    for (int i = 0; i < numNames; ++i) {
        cout << "Enter name " << i + 1 << ": ";
        getline(cin, names[i]);
    }


    for (int i = 0; i < numNames - 1; ++i) {
        for (int j = 0; j < numNames - i - 1; ++j) {
            if (names[j] > names[j + 1]) {
                // Swap names[j] and names[j + 1]
                string temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }

    // Display names in alphabetical order
    cout << "\nNames in alphabetical order:\n";
    for (int i = 0; i < numNames; ++i) {
        cout << names[i] << endl;
    }

    return 0;
}
