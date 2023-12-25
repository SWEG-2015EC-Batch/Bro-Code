/*
Write array declarations, including initializers, for the following:
a. A list of 10 integer voltages: 89, 75, 82, 93, 78, 95, 81, 88, 77, and 82.
b. A list of five double-precision slopes: 11.62, 13.98, 18.45, 12.68, and 14.76.
c. A list of 15 character codes; the first seven codes are f, j, m, q, t, w, and z.



2. Develop a program that accept the name of the user and then displays the name after
reversing it.
*/
#include<iostream>
using namespace std;
int main(){
    // int voltages[] = {89, 75, 82, 93, 78, 95, 81, 88, 77, 82};
    // double slopes[] = {11.62, 13.98, 18.45, 12.68, 14.76};
    // char codes[] = {"f", "j", "m", "q", "t", "w", "z"};

    string name;

    cout<<"What is your name? ->";
    cin>>name;
    cout<<"reversed ->";
    for(int i=size(name)-1;i>=0;i--){
        cout<<name[i];
    }
    cout<<endl;




    return 0;


}