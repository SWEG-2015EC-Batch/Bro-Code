// Design a program to find the frequency of characters within string and display character with  largest and smallest frequency respectively. 
#include <iostream>
#include <climits>
#include <cctype>

using namespace std;

int main() {
    const int numChars = 128; // Assuming ASCII characters
    string inputString;

    cout << "Enter a string: ";
    getline(cin, inputString);

    int charFrequency[numChars] = {0};

    for (char character : inputString) {
        if (isalpha(character)) {
            char lowercaseChar = tolower(character);
            charFrequency[lowercaseChar]++;
        }
    }

    char maxChar = ' ';
    char minChar = ' ';
    int maxFrequency = 0;
    int minFrequency = INT_MAX;

    for (int i = 0; i < numChars; ++i) {
        if (charFrequency[i] > 0) {
            char currentChar = static_cast<char>(i);

            if (charFrequency[i] > maxFrequency) {
                maxFrequency = charFrequency[i];
                maxChar = currentChar;
            }

            if (charFrequency[i] < minFrequency) {
                minFrequency = charFrequency[i];
                minChar = currentChar;
            }
        }
    }

    cout << "Character with the largest frequency: " << maxChar << " (Frequency: " << maxFrequency << ")\n";
    cout << "Character with the smallest frequency: " << minChar << " (Frequency: " << minFrequency << ")\n";

    return 0;
}
