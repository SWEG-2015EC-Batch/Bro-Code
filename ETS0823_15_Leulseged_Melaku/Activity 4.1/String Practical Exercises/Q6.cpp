// Design a program to find the frequency of characters within string and display character with  largest and smallest frequency respectively. 
#include <iostream>
#include <unordered_map>
#include <cctype>

using namespace std;

int main() {
    string inputString;

    cout << "Enter a string: ";
    getline(cin, inputString);

    unordered_map<char, int> charFrequency;

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

    for (const auto& entry : charFrequency) {
        if (entry.second > maxFrequency) {
            maxFrequency = entry.second;
            maxChar = entry.first;
        }

        if (entry.second < minFrequency) {
            minFrequency = entry.second;
            minChar = entry.first;
        }
    }

    cout << "Character with the largest frequency: " << maxChar << " (Frequency: " << maxFrequency << ")\n";
    cout << "Character with the smallest frequency: " << minChar << " (Frequency: " << minFrequency << ")\n";

    return 0;
}
