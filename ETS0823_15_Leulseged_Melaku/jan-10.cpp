#include<iostream>
using namespace std;
int main(){

    float mark;
    cout<<"Enter mark :";
    cin>>mark;
    cout<<endl;

    cout<<"Value: "<<endl;
    cout<<"Address: "<< &mark <<endl;
    cout<<"Address-2: "<< &mark+1 <<endl;
    cout<<"Address-3: "<< &mark+2 <<endl;


    return 0;
}
