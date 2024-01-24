#include<iostream>

using namespace std;

int main(){ 
int number = 12345,rev;
    rev = 0;
    while (number != 0) {
        rev = rev * 10 + number % 10;// 51 1234
        number /= 10;
    }
cout << "********** Reversed number: " << rev << " **********\n";

    return 0;
}