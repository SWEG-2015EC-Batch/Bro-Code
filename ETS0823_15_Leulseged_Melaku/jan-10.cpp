#include<iostream>
using namespace std;
int main(){
    float mark;
    cout<<"Eneter mark :";
    cin>>mark;
    cout<<"Value: "<<mark<endl;
    cout<<"Address: "<<&mark<<endl;
    cout<<"Address-2: "<<&mark+1<<endl;
    cout<<"Address-3: "<<&mark+2<<endl;
    
    return 0;
}