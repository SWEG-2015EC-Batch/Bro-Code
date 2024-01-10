#include<iostream>
using namespace std;
int main(){

    float ludis=2.67,*ptr;

    ptr = &ludis;

    cout << "Address 1: " << &ludis << endl;
    cout << "Address 2: " << ptr << endl;
    cout << "Address 3: " << &ptr << endl;
 
    cout << "Value 1: " << ludis << endl;
    cout << "Value 2: " << *ptr << endl;

    return 0;
}

// * dereference opreator
/*
    - for creating a pointer
    - for indirectly accessing
*/


// address of opreator
/*
    - to get an address of a particular address of memory
    - declare a reference variable
*/