#include <iostream>

using namespace std;

int main() {
    int totalMarks;
    cout << "Enter total marks: ";
    cin >> totalMarks;

    cout << "Score level: ";
    if (totalMarks >= 80) {
        cout << "Excellent";
    } else if (totalMarks >= 60) {
        cout << "Very Good";
    } else if (totalMarks >= 50) {
        cout << "Fair";
    } else if (totalMarks >= 40) {
        cout << "Poor";
    } else {
        cout << "Fail";
    }

    cout << endl;

    return 0;
}
