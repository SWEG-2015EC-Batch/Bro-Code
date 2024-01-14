// Write a program to input eight integer numbers into an array named temp. As each number is input, add  the number into a total. After all numbers are input, display the number and their average. 
#include<iostream>
using namespace std;
int main(){
    int temp[8];
    int total = 0;

    //accepting the numbers
    for(int i = 1; i <= 8; i++){
        cout<<"Enter number "<<i<<" ->";
        cin>>temp[i-1];
        total += temp[i-1];
    }

    //printing the numbers
    cout<<"The inserted numbers are:\n\t";
    for(int i = 0; i < 8; i++){
        cout<<temp[i]<<", ";
    }
    cout<<"\nAnd their total sum is :"<<total;
    cout<<"\nAnd their average is :"<<total/8<<endl;

    return 0;
}