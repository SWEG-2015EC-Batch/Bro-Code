#include <iostream>

using namespace std;

int main() {
    int mainChoice;
    int subChoice;
    int rows;

    do {
        cout << "Select a main pattern (1-3, 0 to exit):" << endl;
        cout << "1. Rectangle" << endl;
        cout << "2. Half Pyramid" << endl;
        cout << "3. Full Pyramid" << endl;
        cout << "0. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> mainChoice;

        switch (mainChoice) {
            case 1:
                cout << "Enter number of rows and columns for the rectangle: ";
                cin >> rows;
                cout << "Do you want the rectangle to be hollow? (1 for yes, 0 for no): ";
                cin >> subChoice;
                for (int i = 1; i <= rows; ++i) {
                    for (int j = 1; j <= rows; ++j) {
                        if (subChoice == 1 && i > 1 && i < rows && j > 1 && j < rows) {
                            cout << " ";
                        } else {
                            cout << "*";
                        }
                    }
                    cout << endl;
                }
                break;
            case 2:
                cout << "Enter number of rows for the half pyramid: ";
                cin >> rows;
                cout << "Do you want the half pyramid to be hollow? (1 for yes, 0 for no): ";
                cin >> subChoice;
                for (int i = 1; i <= rows; ++i) {
                    for (int j = 1; j <= i; ++j) {
                        if (subChoice == 1 && i > 1 && j < i) {
                            cout << " ";
                        } else {
                            cout << "*";
                        }
                    }
                    cout << endl;
                }
                break;
            case 3:
                cout << "Enter number of rows for the full pyramid: ";
                cin >> rows;
                cout << "Do you want the full pyramid to be hollow? (1 for yes, 0 for no): ";
                cin >> subChoice;
                cout << "Do you want to invert the full pyramid? (1 for yes, 0 for no): ";
                cin >> subChoice;
                for (int i = 1; i <= rows; ++i) {
                    for (int j = 1; j <= rows - i; ++j) {
                        cout << " ";
                    }
                    for (int k = 1; k <= 2 * i - 1; ++k) {
                        if (subChoice == 1 && i < rows && (k > 1 && k < 2 * i - 1)) {
                            cout << " ";
                        } else {
                            cout << "*";
                        }
                    }
                    cout << endl;
                }
                break;
            case 0:
                cout << "Exiting the program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a number between 0 and 3." << endl;
        }

    } while (mainChoice != 0);

    return 0;
}
