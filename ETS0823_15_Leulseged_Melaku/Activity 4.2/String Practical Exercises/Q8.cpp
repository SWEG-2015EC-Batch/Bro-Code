// Write an application that inputs a line of text and outputs the text twice, once in all uppercase and once in all lowercase letters. 
#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string inputText;

    cout << "Enter a line of text: ";
    getline(cin, inputText);

    // Output the text in all uppercase
    cout << "Text in all uppercase: ";
    for (char character : inputText) {
        cout << char(toupper(character));
    }
    cout << endl;

    // Output the text in all lowercase
    cout << "Text in all lowercase: ";
    for (char character : inputText) {
        cout << char(tolower(character));
    }
    cout << endl;

    return 0;
}
