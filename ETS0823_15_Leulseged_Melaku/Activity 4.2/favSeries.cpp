#include <iostream>
#include <cstring>

using namespace std;

int main() {
    string favoriteProgram1 = "The 100";
    char favoriteProgram2[20]; 
    char favoriteProgram3[20]; 

    
    strcpy(favoriteProgram2, "Blind Spot");
    strcpy(favoriteProgram3, "Game of Thrones");

   
    cout << "My Favorite TV Programs:" << endl;
    cout << "1. " << favoriteProgram1 << endl;
    cout << "2. " << favoriteProgram2 << endl;
    cout << "3. " << favoriteProgram3 << endl;

    return 0;
}
