#include <iostream>
#include <cstring>

using namespace std;

int main() {
    const char correctPassword[] = "correctpassword"; 

    char userPassword[15]; 
   
    cout << "Enter the password: ";
    cin >> userPassword;

   
    if (strcmp(userPassword, correctPassword) == 0) {
        cout << "Access granted. Welcome!" << endl;
    } else {
        cout << "Access denied. Incorrect password." << endl;
    }

    return 0;
}
