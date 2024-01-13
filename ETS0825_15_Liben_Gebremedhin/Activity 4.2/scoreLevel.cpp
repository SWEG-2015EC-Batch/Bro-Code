#include <iostream>

using namespace std;

int main() {
    const int numExams = 5;
    int scores[numExams] = {85, 70, 60, 45, 30};
    int totalMarks = 0;

   
    for (int i = 0; i < numExams; ++i) {
        totalMarks += scores[i];
    }

  
    cout << "Total Marks: " << totalMarks << endl;
    cout << "Score Level: ";
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
