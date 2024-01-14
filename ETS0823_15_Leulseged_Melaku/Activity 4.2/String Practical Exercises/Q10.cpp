// Write a program that stores a password in a character array called pass. The program then ask users for the password and check whether they typed the proper password or not. 
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    const int maxPasswordLength = 20;
    char pass[maxPasswordLength];

    // Set the password
    cout << "Set your password: ";
    cin.getline(pass, maxPasswordLength);

    // Ask users for the password
    cout << "Enter your password: ";
    char inputPassword[maxPasswordLength];
    cin.getline(inputPassword, maxPasswordLength);

    // Check if the entered password matches the stored password
    if (strcmp(pass, inputPassword) == 0) {
        cout << "Password is correct. Welcome!\n";
    } else {
        cout << "Incorrect password. Access denied.\n";
    }

    return 0;
}
