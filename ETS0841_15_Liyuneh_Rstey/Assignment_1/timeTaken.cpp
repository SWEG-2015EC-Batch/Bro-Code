// print the time taken to transfer charcter 

#include<iostream>
using namespace std;
int main()
{
    double characterPerSecond= 960 ;
   
    double sizeOfFile, time;
     cout<<"Enter the size of the file: ";
    cin>>sizeOfFile;
    time= sizeOfFile/characterPerSecond;
    cout<<"the time taken is "<<time<<"second"<<endl;
    return 0;
}
