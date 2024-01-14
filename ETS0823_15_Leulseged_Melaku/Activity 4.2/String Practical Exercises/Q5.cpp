// Write a program that find the frequency of vowel, consonant, digit and special character  
#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string inputString;

    cout << "Enter a string: ";
    getline(cin, inputString);

    int vowels = 0, consonants = 0, digits = 0, specialCharacters = 0;

    for (char character : inputString) {
        if (isalpha(character)) {
            char lowercaseChar = tolower(character);
            if (lowercaseChar == 'a' || lowercaseChar == 'e' || lowercaseChar == 'i' ||
                lowercaseChar == 'o' || lowercaseChar == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (isdigit(character)) {
            digits++;
        } else if (!isspace(character)) {
            specialCharacters++;
        }
    }

    cout << "Frequency of vowels: " << vowels << endl;
    cout << "Frequency of consonants: " << consonants << endl;
    cout << "Frequency of digits: " << digits << endl;
    cout << "Frequency of special characters: " << specialCharacters << endl;

    return 0;
}
