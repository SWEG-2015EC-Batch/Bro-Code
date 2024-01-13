#include <iostream>
#include <climits>

using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    char maxChar = '\0', minChar = '\0';
    int maxFreq = 0, minFreq = INT_MAX;

    for (char ch = 'a'; ch <= 'z'; ++ch) {
        int currentFreq = 0;

        for (char inputChar : input) {
            if (tolower(inputChar) == ch) {
                currentFreq++;
            }
        }

        if (currentFreq > 0) {
            if (currentFreq > maxFreq) {
                maxFreq = currentFreq;
                maxChar = ch;
            }

            if (currentFreq < minFreq) {
                minFreq = currentFreq;
                minChar = ch;
            }
        }
    }

    cout << "Character with the largest frequency: " << maxChar << " (Frequency: " << maxFreq << ")" << endl;
    cout << "Character with the smallest frequency: " << minChar << " (Frequency: " << minFreq << ")" << endl;

    return 0;
}
