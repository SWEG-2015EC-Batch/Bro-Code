#include <iostream>
using namespace std;

int main(){
    int temp[8] = {};
    int total = 0;
    for(int i = 0; i < 8; ++i){
        cout << "Enter a number: ";
        cin >> temp[i];
        total += temp[i];
    }
    for(int i = 0; i < 8; ++i){
        cout << temp[i] << " ";
    }
    cout << "\nTotal = " << total;

    return 0;
}