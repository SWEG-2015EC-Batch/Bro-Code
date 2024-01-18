// 
#include<iostream>
using namespace std;
int main(){
    float a = 2.3;
    float *b = &a;
    *b = 4.3;
    cout<<*b<<" "<<a;
    return 0;
}