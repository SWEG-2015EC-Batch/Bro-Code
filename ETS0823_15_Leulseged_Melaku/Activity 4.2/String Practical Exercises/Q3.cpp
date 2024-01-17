// Write a program to remove non-alphabet character from string 
#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string inputString;

    cout << "Enter a string: ";
    getline(cin, inputString);

    string resultString;

    for (char character : inputString) {
        if (isalpha(character)) {
            resultString += character;
        }
    }

    cout << "String after removing non-alphabetic characters: " << resultString << endl;

    return 0;
}
