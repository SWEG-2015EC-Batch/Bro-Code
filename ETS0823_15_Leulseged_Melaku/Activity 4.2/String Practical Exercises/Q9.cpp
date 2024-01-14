// Write a program to store and print the names of your two favorite television programs. Initialize one of the strings (assign it the first program’s name) at the time you declare the array. Initialize the second value in the body of the program with the strcpy() function. 
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    // Initialize the first program's name at the time of declaration
    char favoriteProgram1[] = "Vikings";

    // Initialize the second program's name using strcpy()
    char favoriteProgram2[50]; // Assuming a maximum length of 50 characters for the program name
    strcpy(favoriteProgram2, "Game of Thrones");

    // Print the names of the favorite television programs
    cout << "My Two Favorite Television Programs:\n";
    cout << "1. " << favoriteProgram1 << endl;
    cout << "2. " << favoriteProgram2 << endl;

    return 0;
}
