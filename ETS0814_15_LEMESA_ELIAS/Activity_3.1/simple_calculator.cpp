#include <iostream>
using namespace std;

int main() {
    float kutir;
    char operation;
    float witet;

    cout << "Enter the first kutir: ";
    cin >> witet;

    do {
        cout << "Enter the operation (+, -, *, /, =) or '0' to exit: ";
        cin >> operation;

        switch (operation) {
            case '0':
                break;
            case '=':
                cout << "Current result is: " << witet << endl;
                break;
            default:
                cout << "Enter the next kutir: ";
                cin >> kutir;

                switch (operation) {
                    case '+':
                        witet += kutir;
                        break;
                    case '-':
                        witet -= kutir;
                        break;
                    case '*':
                        witet *= kutir;
                        break;
                    case '/':
                        if (kutir != 0) {
                            witet /= kutir;
                        } else {
                            cout << "Division by zero is Undefined." << endl;
                        }
                        break;
                    default:
                        cout << "Enter a valid operation" << endl;
                        break;
                }
                break;
        }
    } while (operation != '0');

    cout << "The final result is: " << witet << endl;

    return 0;
}
