#include <iostream>

int main() {
    std::cout << "Enter an integer: ";
    int number;
    std::cin >> number;

    int temp = number;
    int divisor = 1;
    while (temp >= 10) {
        temp /= 10;
        divisor *= 10;
    }

    // Extract the number without the first and last digits
    int slicedNumber = (number % divisor) / 10;

    std::cout << "Original number: " << number << std::endl;
    std::cout << "Number without the first and last digits: " << slicedNumber << std::endl;

    return 0;
}
