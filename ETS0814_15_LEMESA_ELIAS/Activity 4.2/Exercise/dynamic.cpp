#include <iostream>
#include <cstring>

using namespace std;

int main() {
    // Task a: Read a person's full name and print a welcome message

    // Dynamic memory allocation for the full name
    char* fullName = new char[100]; // Assuming the name won't exceed 100 characters2

    cout << "Enter your full name: ";
    cin.getline(fullName, 100); // Read the full name

    cout << "Welcome, " << fullName << "!" << endl;

    // Release the allocated memory
    delete[] fullName;

    // Task b: Read a list of numbers, find the mean, and print it

    int n;
    cout << "Enter the number of elements in the list: ";
    cin >> n;

    // Dynamic memory allocation for the array of numbers
    double* numbers = new double[n];

    cout << "Enter the list of numbers, separated by spaces: ";
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i]; // Read each number
    }

    // Calculate the mean
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += numbers[i];
    }
    double mean = sum / n;

    cout << "The mean of the numbers is: " << mean << endl;

    // Release the allocated memory
    delete[] numbers;

    return 0;
}
