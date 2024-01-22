// Write a program to store exam scores (test, assignment, quiz, project and final). The  program should determine and print the score level alongside with the total mark in tabular  format. Score status level for score >=80 Excellent, >=60 Very Good, >= 50 Fair, >=40 poor  and <40 Fail. 
#include <iostream>

using namespace std;

int main() {
    const int numSubjects = 5;
    int scores[numSubjects];
    string subjectNames[numSubjects] = {"Test", "Assi..", "Quiz", "Project", "Final"};

    // Input scores for each subject
    cout << "Enter scores for each subject:\n";
    for (int i = 0; i < numSubjects; ++i) {
        cout << subjectNames[i] << ": ";
        cin >> scores[i];
    }

    // Calculate total mark
    int totalMark = 0;
    for (int i = 0; i < numSubjects; ++i) {
        totalMark += scores[i];
    }

    // Determine and print score level
    string scoreLevel;
    if (totalMark >= 80) {
        scoreLevel = "Excellent";
    } else if (totalMark >= 60) {
        scoreLevel = "Very Good";
    } else if (totalMark >= 50) {
        scoreLevel = "Fair";
    } else if (totalMark >= 40) {
        scoreLevel = "Poor";
    } else {
        scoreLevel = "Fail";
    }

    // Display the results in tabular format
    cout << "\nSubject\t\t\tScore\n";
    for (int i = 0; i < numSubjects; ++i) {
        cout << subjectNames[i] << "\t\t\t" << scores[i] << endl;
    }

    cout << "\nTotal Mark: " << totalMark << endl;
    cout << "Score Level: " << scoreLevel << endl;

    return 0;
}
