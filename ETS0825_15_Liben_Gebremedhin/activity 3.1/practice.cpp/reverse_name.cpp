#include <iostream>
using namespace std;
int main(){
    string name;
    cout << "Enter your name: ";
    cin >> name; //ludis

    int count = 0;
    while(true){
        if(isalpha(name[count])){
            count++;
        }
        else{
            break;
        }
    }

    for(int i = count; i >= 0; --i){
        cout << name[i];
    }
}