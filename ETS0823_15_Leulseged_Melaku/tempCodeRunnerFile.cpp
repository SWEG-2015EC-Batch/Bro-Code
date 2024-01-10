#include<iostream>
using namespace std;
int main(){

    float ludis=2.67,*ptr,**ptrptr;

    ptr = &ludis;
    ptrptr = &ptr;// cannot store a memory of any variable except pointer; it is a pointer of a pointer

    cout << "Address 1: " << &ludis << endl;
    cout << "Address 2: " << ptr << endl;
    cout << "Address 3: " << ptrptr << endl;
    cout << "Address 4: " << *ptrptr << endl;
 
    cout << "Value 1: " << ludis << endl;
    cout << "Value 2: " << *ptr << endl;
    cout << "Value 3: " << **ptrptr << endl;

    return 0;
}