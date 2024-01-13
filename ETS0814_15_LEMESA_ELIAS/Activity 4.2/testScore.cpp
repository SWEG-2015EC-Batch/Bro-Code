#include <iostream>
#include <cstring>

using namespace std;

int main() {
    const char correctAnswers[] = "CBDCAABDCB"; 
    char studentAnswers[11]; 
    int score = 0;

    cout << "Enter your answers (A, B, C, or D) for 10 questions: ";
    cin >> studentAnswers;

   
    for (int i = 0; i < 10; ++i) {
        if (toupper(studentAnswers[i]) == correctAnswers[i]) {
            score++;
        }
    }

   
    cout << "Test Score: " << score << "/10" << endl;
    cout << "Marked Student Answers: " << studentAnswers << endl;

    return 0;
}
