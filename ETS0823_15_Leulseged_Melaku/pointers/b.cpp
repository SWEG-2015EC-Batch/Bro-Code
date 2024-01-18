// 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"How Many Students? ";
    cin>>n;
    int *marks = new int[n];
    cout<<"INput grade for students\n";
    for (int i = 0; i < n; i++){
        cout<< (i + 1) << ":";
        cin>>marks[i];
    }
        
    return 0;
}