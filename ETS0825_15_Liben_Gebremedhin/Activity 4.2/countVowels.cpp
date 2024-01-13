#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int vowels = 0, consonants = 0;

    for (char ch : input) {
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                ++vowels;
            } else {
                ++consonants;
            }
        }
    }

    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;

    return 0;
}
