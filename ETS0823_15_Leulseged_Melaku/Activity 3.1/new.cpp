#include<iostream>
using namespace std;
int main(){
    for(int i=0; i<=8-1; i++){
                for(int space=1; space<=8-i-1; space++)
                 cout<<" ";
                for(int j=0; j<=i; j++){
                    cout<<"*"<<" ";
                } 
                cout<<endl;
             }
    return 0;
}