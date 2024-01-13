#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    const int maxSize = 100; 
    string names[maxSize];

    int numNames;
    cout << "Enter the number of names: ";
    cin >> numNames;

    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

    if (numNames > maxSize) {
        cout << "Number of names exceeds the maximum size." << endl;
        return 1;
    }

    for (int i = 0; i < numNames; ++i) {
        cout << "Enter name " << i + 1 << ": ";
        getline(cin, names[i]);
    }

    sort(names, names + numNames);

    cout << "Names in alphabetical order:" << endl;
    for (int i = 0; i < numNames; ++i) {
        cout << names[i] << endl;
    }

    return 0;
}
