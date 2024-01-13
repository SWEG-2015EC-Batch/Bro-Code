#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string input;
    cout << "Enter a line of text: ";
    getline(cin, input);

    istringstream iss(input);
    string token;

    while (iss >> token) {
        cout << "Token: " << token << endl;
    }

    return 0;
}
