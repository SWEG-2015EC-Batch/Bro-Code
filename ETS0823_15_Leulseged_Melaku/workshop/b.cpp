#include <iostream>

using namespace std;

int main() {
    // Input a string
    cout << "Enter a string: ";
    string input;
    getline(cin, input);

    const int ASCII_SIZE = 256; // Assuming ASCII characters
    int count[ASCII_SIZE] = {0};

    char firstFrequent = '\0';
    char firstNonFrequent = '\0';

    for (char ch : input) {
        if (ch != ' ') { // Exclude spaces
            if (count[ch] == 0) {
                // First time appearance
                count[ch] = 1;
            } else if (count[ch] == 1) {
                // Second time appearance
                firstFrequent = ch;
            }
        }
    }

    // Find the first non-frequent character based on the order of appearance
    for (char ch : input) {
        if (ch != ' ' && count[ch] == 1) {
            firstNonFrequent = ch;
            break; // Break after finding the first non-frequent character
        }
    }

    // Output the results
    cout << "\nHi " << input << ", the first frequent character is: " << firstFrequent << endl;
    cout << "And the first non-frequent character is: " << firstNonFrequent << endl;

    return 0;
}
