// Write an application that inputs a line of text, and tokenizes it. Use space characters as  delimiters.
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    string inputLine;

    cout << "Enter a line of text: ";
    getline(cin, inputLine);

    // Using stringstream to tokenize the input line
    stringstream ss(inputLine);
    vector<string> tokens;
    string token;

    while (ss >> token) {
        tokens.push_back(token);
    }

    // Display the tokens
    cout << "Tokens separated by spaces:\n";
    for (const string& t : tokens) {
        cout << t << endl;
    }

    return 0;
}
