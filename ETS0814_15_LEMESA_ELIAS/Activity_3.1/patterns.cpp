#include <iostream>
using namespace std;

int main() {
    int number;
    int num2;
    cout << "Enter a number: ";
    cin >> number;
    num2 = number * 2 - 1;  
    for (int i = 1; i <= number; i++) {
       
        for (int j = 1; j <= number - i; j++) {
            cout << " ";
        }

        
        for (int k = 1; k <= num2; k++) {
            cout << "*";
        }

        
        cout << "\n";

       
        num2 -= 2;
    }

    for (int i = 2; i <= number; i++) {
       
        for (int j = 1; j <= i - 1; j++) {
            cout << " ";
        }

      
        for (int k = 1; k <= num2 + 2; k++) {
            cout << "*";
        }

       
        cout << "\n";

       
        num2 += 2;
    }

    return 0;
}
