// print the time taken to transfer charcter 

#include<iostream>
using namespace std;
int main()
{
    double characterPerSecond= 960 ;
    double characterAmount= 400000000 ;
    double time= characterAmount/characterPerSecond;
    cout<<"the time taken is "<<time<<"bytes/second"<<endl;;
    return 0;
}