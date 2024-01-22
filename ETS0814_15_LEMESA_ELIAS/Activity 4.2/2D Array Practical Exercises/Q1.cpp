//Write a program that checks whether two one dimensional arrays of the same size are  identical (have the same elements) or not. 
#include<iostream>
using namespace std;
int main(){
    int count,c = 0;
    cout<<"how many numbers do you want to import in each array? ->";
    cin>>count;
    int a[count] = {}, b[count] = {};

    cout<<"Array 1:\n";
    for(int i = 0; i < count; i++){
        cout<<"enter element "<<i+1<<" ->";
        cin>>a[i];
    }

    cout<<"\n\nArray 2:\n";
    for(int i = 0; i < count; i++){
        cout<<"enter element "<<i+1<<" ->";
        cin>>b[i];
    }

    for(int i = 0; i < count; i++){
        if(a[i] != b[i]){
            c += 1;
        }
    }
    if(c == 0){
        cout<<"The 2 arrays have the same elements\n";
    }
    else{
        cout<<"The 2 arrays have different elements\n";
    }
    return 0;
}