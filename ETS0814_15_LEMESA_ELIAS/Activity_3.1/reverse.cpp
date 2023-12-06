#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    int reversedNum = 0;
    int count = 0;
    int sumOfDigits = 0;
    int productOfEven = 1;
    int firstDigit = 0; 
    int lastDigit = 0;

    while (number > 0) {
        int remainder = number % 10;

        if (count == 0) {
            lastDigit = remainder;
        }

        reversedNum = reversedNum * 10 + remainder;
        sumOfDigits += remainder;

        if (remainder % 2 == 0) {
            productOfEven *= remainder;
        }

        number /= 10;
        count++;
    }

   
    int temp = lastDigit;  
    lastDigit = reversedNum % 10;
    reversedNum = reversedNum / 10 * 10 + temp;

    cout << "Reversed number: " << reversedNum << endl;
    cout << "Number of digits: " << count << endl;
    cout << "Sum of digits: " << sumOfDigits << endl;
    cout << "Product of even integers: " << productOfEven << endl;
    cout << "The first digit is: " << firstDigit << endl;
    cout << "The last digit is: " << lastDigit << endl;

    return 0;
}
