// Write a program to input the following values in an array named volts: 11.95, 16.32, 12.15, 8.22, 15.98,  26.22, 13.54, 6.45, and 17.59. After the data has been entered, have your program display it three column  in table form: 
#include<iostream>
using namespace std;
int main(){
    float volts[9] = {11.95, 16.32, 12.15, 8.22, 15.98,  26.22, 13.54, 6.45, 17.59};
    for (int i = 1; i <= 9; i++){
        if (i % 3 == 0){
            cout<<endl;
        }
        cout<<volts[i]<<", ";
    }
    return 0;
}