//Write a program that read a string and count number of vowels and consonants alphabet  present in a string. 
#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string inputString;

    cout << "Enter a string: ";
    getline(cin, inputString);

    int vowels = 0, consonants = 0;

    for (char character : inputString) {
        if (isalpha(character)) {
            char lowercaseChar = tolower(character);
            if (lowercaseChar == 'a' || lowercaseChar == 'e' || lowercaseChar == 'i' || lowercaseChar == 'o' || lowercaseChar == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;

    return 0;
}
