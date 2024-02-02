#include <iostream>
#include <string.h>
#define LU 'l'
using namespace std;


int main() {

// cout<<sizeof(char)<<endl;
// cout<<sizeof(signed char)<<endl;
// cout<<sizeof(unsigned char)<<endl<<endl;

// cout<<sizeof(short)<<endl;
// cout<<sizeof(unsigned long int)<<endl;

// cout<<sizeof(long)<<endl;
// cout<<sizeof(signed short int)<<endl;

// cout<<sizeof(unsigned int)<<endl;
// cout<<sizeof(signed int)<<endl<<endl;

// cout<<sizeof(long double)<<endl;
// cout<<sizeof(double)<<endl;
// cout<<sizeof(float)<<endl<<endl;

// cout<<sizeof(bool)<<endl;
// cout<<sizeof(void)<<endl;

// unsigned char a = 'a';
// cout<<a;

// enum Color{MOnday = 1,teusday};
// 
// 
// cout<<Color(1);

// 
// int a = 9, b = 7,c;
// 
// c = b << a;
// 
// cout<<c;

// bitwise opreator


// int a = 9;
// main:
    // cout<<"Ludis";
    // --a;
    // if (a > 0) 
        // goto main;


// int myArray[2][2][2] ={
    // {
        // {1,2,},
        // {3,4},
    // },
    // {
        // {5,6},
        // {7,8},
    // },
// };
// 
// cout<<myArray[0][1][0];

// int const a = 9;
// cout << a;

// char a[3] = "uj";

// cout<<a[0];

// 
// char str1[80] = "Ludis";
// char str2[80] = "leul";
// strcat(str1,str2);
// 
// cout<<strlen(str1);
// cout<<str1;
// cout<<str1>str2;
// int num = 88, item = 100;
// cout << "The address of a is: " << &num << endl;
// cout << "The address of b is: " << &item << endl;
// int *ptr = &item;
// cout << "b" << " " << &item <<endl;
// cout << "p" << " " << *ptr <<endl;


// int value1 = 5, value2 = 15;
// int *p1, *p2;
// p1 = &value1;
// p1 = address of value1
// p2 = &value2;
// p2 = address of value2
// *p1 = 10;
// value pointed to by p1=10
// *p2 = *p1;
// value pointed to by p2= value pointed to by p1
// p1 = p2;

// p1 = p2 (pointer value copied)
// *p1 = 20;
// value pointed to by p1 = 20
// cout << "value1==" << value1 << "/ value2==" << value2<<endl;
// cout << sizeof(p1) <<" "<< sizeof(*p1)<<" "<< sizeof(&p1) << endl;

// int k = 4, *ptr = &k, **ptoptr = &ptr;
// cout << "K = " << k << endl;
// *ptr = k+10;
// cout << "x = " << k << endl;
// *ptoptr = 3;
// cout << "k = " << k << endl;


// int i = 5, j = 10, z = 7, *ptr = &i, **pptr = &ptr;
// cout<<*ptr+4<<endl;
// cout<<*ptr++<<" "<<*ptr<<endl;
// cout<<*(ptr++)<<" "<<*ptr<<endl;
// cout<<*++ptr<<" "<<ptr<<endl;
// cout<<*(++ptr)<<" "<<ptr<<endl;
// cout<<++*ptr<<" "<<ptr<<endl;
// cout<<++(*ptr)<<" "<<ptr<<endl;
// cout<<(*ptr)++<<" "<<ptr<<endl;


//  int const a(10);
// a = 8;
// cout<<a;

// int arr[5];
// cout<<"\nAddress of a[0]: "<<&arr[0];
// cout<<"\nArray Name as pointer: "<<arr;
// cout<<"\n\nAddress of a[1]: "<<&arr[1] <<"\t"<<(arr+1);
// cout<<"\nAddress of a[4]: "<<&arr[4]<<"\t"<<(arr+4);
// int *ptr = arr;
// cout<<"\n\nAddress of array: "<<ptr;

float mark[3][5] = {{10,11,12,13,14},{20,21,22,23,24},
{30,31,32,33,34}};
float *ptr = mark[0];
ptr +=2;
*ptr *= 2;
ptr = *(mark+1)+3;
*ptr += 7.0;
ptr += 4;
*ptr += 8.0;

for (int i = 0; i < 3; ++i){
    for (int j = 0; j < 5; ++j){
        cout<<*(*(mark + i) + j)<<" ";
    }
    cout<<endl;
}

return 0;
}