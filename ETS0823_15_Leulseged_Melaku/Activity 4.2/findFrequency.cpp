#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int vowelCount = 0, consonantCount = 0, digitCount = 0, specialCharCount = 0;

    for (char ch : input) {
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                ++vowelCount;
            } else {
                ++consonantCount;
            }
        } else if (isdigit(ch)) {
            ++digitCount;
        } else if (!isspace(ch)) {
            ++specialCharCount;
        }
    }

    cout << "Frequency of vowels: " << vowelCount << endl;
    cout << "Frequency of consonants: " << consonantCount << endl;
    cout << "Frequency of digits: " << digitCount << endl;
    cout << "Frequency of special characters: " << specialCharCount << endl;

    return 0;
}
