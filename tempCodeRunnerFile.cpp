#include<iostream>
using namespace std;
int main(){
    char input;
    cout<<"enter something: ";
    cin>>input;
     if(isdigit(input)){
       if(input%2==0){
        cout<<" it is even";
       } else{
        cout<<" it is odd";
       }
     } else if(isalpha(input)){
        if(islower(input)){
            cout<<" it is a lower case\n ";
        } else{
            cout<<" it is an upper case \n";
        }
        input= toupper(input);
       if(input=='A'||input=='E'||input=='I'||input=='O'||input=='U'){
        cout<<" it is vowel ";
       } else{
        cout<<" it is consenant ";
       }
     } else{ 
        cout<<" it is a special charcter ";
     }
      return 0;
}