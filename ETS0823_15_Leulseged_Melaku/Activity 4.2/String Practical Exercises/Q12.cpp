// Design a program that store an answer sheet for a test containing 10 multiple choice questions. The program should accept the student answer, and print the test score along with the marked student answer.
#include <iostream>
#include <string>

using namespace std;

int main() {
    const int numQuestions = 10;
    string correctAnswers = "ABCDABCDAB";

    string studentAnswers;

    cout << "Enter the student's answers for the 10 questions (use capital letters): ";
    cin >> studentAnswers;

    // Validate input length
    if (studentAnswers.length() != numQuestions) {
        cout << "Invalid input. Please provide answers for all " << numQuestions << " questions.\n";
        return 1;
    }

    int score = 0;
    string markedAnswers;

    // Check each answer and calculate the score
    for (int i = 0; i < numQuestions; ++i) {
        markedAnswers += studentAnswers[i]; // Store the marked answers

        if (studentAnswers[i] == correctAnswers[i]) {
            score++;
        }
    }

    // Display the results
    cout << "\nTest Score: " << score << " out of " << numQuestions << "\n";
    cout << "Marked Answers: " << markedAnswers << "\n";

    return 0;
}
