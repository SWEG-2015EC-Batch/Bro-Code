// Write a program that store a list of number and print the even numbers in the array in reverse order they  are entered. 
#include<iostream>
using namespace std;
int main(){
    int count;
    cout<<"How many numbers do you want to input ->";
    cin>>count;
    int num[count] = {};
    int condition = 0;
    for(int i = 0; i < count; i++){
        cout<<"Enter integer no"<<i+1<<" ->";
        cin>>num[i];
    }
    cout<<"The even numbers in reverse are :\n{";
    for(int i = count-1; i >= 0; i--){
        if(num[i] % 2 == 0){
            cout<<num[i]<<", ";
        }
    }
    cout<<"}\n";
    return 0;
}