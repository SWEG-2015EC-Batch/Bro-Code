#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string input;
    cout << "Enter a line of text: ";
    getline(cin, input);

    // Convert to uppercase
    for (char& ch : input) {
        ch = toupper(ch);
    }
    cout << "Uppercase: " << input << endl;

    // Convert to lowercase
    for (char& ch : input) {
        ch = tolower(ch);
    }
    cout << "Lowercase: " << input << endl;

    return 0;
}
