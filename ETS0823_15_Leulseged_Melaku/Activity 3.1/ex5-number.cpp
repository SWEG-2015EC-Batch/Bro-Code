#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int number, originalNumber, choice, count, sum, product, first, last, numDigits, temp, swappedNum, rev, original, numDigitsArmstrong, sumArmstrong, sumStrong, originalStrong, sumPerfect;
    int frequency[10];

    cout << "********** Welcome to Number Manipulation **********\n";
    cout << "Enter an integer: ";
    cin >> number;
    originalNumber = number;  // Store the original number

    do {
        cout << "\n********** Menu **********\n"
             << "1. Reverse the number\n"
             << "2. Count the number of digits\n"
             << "3. Sum of the digits\n"
             << "4. Product of even digits\n"
             << "5. Print first and last digit and find their sum\n"
             << "6. Swap first and last digit\n"
             << "7. Check if the number is a palindrome\n"
             << "8. Find if the number is Armstrong\n"
             << "9. Find if the number is Strong\n"
             << "10. Check if the number is Perfect\n"
             << "11. Print digit frequency\n"
             << "12. Change the number\n"
             << "0. Exit\n"
             << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                rev = 0;
                while (number != 0) {
                    rev = rev * 10 + number % 10;
                    number /= 10;
                }
                cout << "********** Reversed number: " << rev << " **********\n";
                break;
            case 2:
                cout << "********** Number of digits: ";
                count = 0;
                temp = originalNumber;  // Reinitialize temp with the original number
                while (temp != 0) {
                    temp /= 10;
                    count++;
                }
                cout << count << " **********\n";
                break;
            case 3:
                sum = 0;
                temp = number;
                while (temp != 0) {
                    sum += temp % 10;
                    temp /= 10;
                }
                cout << "********** Sum of digits: " << sum << " **********\n";
                break;
            case 4:
                product = 1;
                temp = number;
                while (temp != 0) {
                    int digit = temp % 10;
                    if (digit % 2 == 0) {
                        product *= digit;
                    }
                    temp /= 10;
                }
                cout << "********** Product of even digits: " << product << " **********\n";
                break;
            case 5:
                numDigits = log10(number);
                if (numDigits == 0) {
                    // For 1-digit numbers, first and last are the same
                    first = number;
                    last = number;
                } else {
                    last = number % 10;
                    temp = number / 10;
                    while (temp >= 10) {
                        temp /= 10;
                    }
                    first = temp;
                }
                cout << "********** First digit: " << first << " **********\n";
                cout << "********** Last digit: " << last << " **********\n";
                cout << "********** Sum of first and last digit: " << first + last << " **********\n";
                break;
            case 6:
                numDigits = log10(number);
                if (numDigits == 0) {
                    // For 1-digit numbers, swapping has no effect
                    swappedNum = number;
                } else if (numDigits == 1) {
                    // For 2-digit numbers, swap first and last
                    swappedNum = (number % 10) * 10 + number / 10;
                } else {
                    last = number % 10;
                    temp = number / 10;
                    numDigits = log10(temp);
                    first = temp / pow(10, numDigits);
                    temp %= (int)pow(10, numDigits);
                    swappedNum = last * pow(10, numDigits + 1) + temp * 10 + first;
                }
                cout << "********** Number after swapping first and last digit: " << swappedNum << " **********\n";
                break;
            case 7:
                original = number;
                rev = 0;
                while (number != 0) {
                    rev = rev * 10 + number % 10;
                    number /= 10;
                }
                if (original == rev) {
                    cout << "********** The number is a palindrome **********\n";
                } else {
                    cout << "********** The number is not a palindrome **********\n";
                }
                break;
            case 8:
                original = number;
                sumArmstrong = 0;
                numDigitsArmstrong = log10(number);
                while (number != 0) {
                    int digit = number % 10;
                    sumArmstrong += pow(digit, numDigitsArmstrong + 1);
                    number /= 10;
                }
                if (original == sumArmstrong) {
                    cout << "********** The number is an Armstrong number **********\n";
                } else {
                    cout << "********** The number is not an Armstrong number **********\n";
                }
                break;
            case 9:
                originalStrong = number;
                sumStrong = 0;
                temp = number;
                while (temp != 0) {
                    int digit = temp % 10;
                    int factorial = 1;
                    for (int i = 1; i <= digit; ++i) {
                        factorial *= i;
                    }
                    sumStrong += factorial;
                    temp /= 10;
                }
                if (originalStrong == sumStrong) {
                    cout << "********** The number is a Strong number **********\n";
                } else {
                    cout << "********** The number is not a Strong number **********\n";
                }
                break;
            case 10:
                sumPerfect = 1;
                for (int i = 2; i <= number / 2; ++i) {
                    if (number % i == 0) {
                        sumPerfect += i;
                    }
                }
                if (sumPerfect == number) {
                    cout << "********** The number is a Perfect number **********\n";
                } else {
                    cout << "********** The number is not a Perfect number **********\n";
                }
                break;
            case 11:
                for (int i = 0; i < 10; ++i) {
                    frequency[i] = 0;
                }
                temp = originalNumber;
                while (temp != 0) {
                    int digit = temp % 10;
                    frequency[digit]++;
                    temp /= 10;
                }
                cout << "********** Digit Frequency **********\n";
                for (int i = 0; i < 10; ++i) {
                    cout << "Digit " << i << ": " << frequency[i] << " times\n";
                }
                break;
            case 12:
                cout << "********** Enter a new integer: ";
                cin >> number;
                originalNumber = number;  // Update the original number
                break;
            case 0:
                cout << "********** Exiting the program. **********\n";
                break;
            default:
                cout << "********** Invalid choice. Please enter a valid option. **********\n";
        }
    } while (choice != 0);

    return 0;
}
