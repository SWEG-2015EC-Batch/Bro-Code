#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;

    bool isPalindrome = true;
    int length = word.length();

    for (int i = 0; i < length / 2; ++i) {
        if (tolower(word[i]) != tolower(word[length - i - 1])) {
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
