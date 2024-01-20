#include <iostream>

using namespace std;

const int MAX_STUDENTS = 5; // You can change this to the desired number of students

int main() {
    int totalMarks[MAX_STUDENTS];

    // Input total marks for each student
    cout << "Enter total marks for " << MAX_STUDENTS << " students:\n";
    for (int i = 0; i < MAX_STUDENTS; ++i) {
        cout << "Enter total marks for student " << (i + 1) << ": ";
        cin >> totalMarks[i];
    }

    // Print the result in tabular format
    cout << "\nResult:\n";
    cout << "-----------------------------------\n";
    cout << "Student | Total Marks | Score Level\n";
    cout << "-----------------------------------\n";

    for (int i = 0; i < MAX_STUDENTS; ++i) {
        string scoreLevel;

        if (totalMarks[i] >= 80) {
            scoreLevel = "Excellent";
        } else if (totalMarks[i] >= 60) {
            scoreLevel = "Very Good";
        } else if (totalMarks[i] >= 50) {
            scoreLevel = "Fair";
        } else if (totalMarks[i] >= 40) {
            scoreLevel = "Poor";
        } else {
            scoreLevel = "Fail";
        }

        cout << "   " << (i + 1) << "    |      " << totalMarks[i] << "     |     " << scoreLevel << "\n";
    }

    cout << "-----------------------------------\n";

    return 0;
}
