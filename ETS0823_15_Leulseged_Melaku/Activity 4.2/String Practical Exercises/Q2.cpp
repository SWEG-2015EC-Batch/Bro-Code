//Design a program to check either the word is palindrome or not using loop. 
#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string word;

    cout << "Enter a word: ";
    cin >> word;

    // Remove non-alphabetic characters and convert to lowercase
    string cleanWord;
    for (char character : word) {
        if (isalpha(character)) {
            cleanWord += tolower(character);
        }
    }

    // Check if the cleaned word is a palindrome
    bool isPalindrome = true;
    int length = cleanWord.length();

    for (int i = 0; i < length / 2; ++i) {
        if (cleanWord[i] != cleanWord[length - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "The word is a palindrome." << endl;
    } else {
        cout << "The word is not a palindrome." << endl;
    }

    return 0;
}
