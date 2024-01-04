#include<iostream>
#include<string>
using namespace std;
int main(){
    cout<<"How many students do you wanna calculate :";
    int number_of_students;
    cin>>number_of_students;

    if (number_of_students <= 0) {
        cout << "Invalid number of students. Exiting program.\n";
        return 0;
    }

    string name[number_of_students] = {};
    float exam[number_of_students][2] = {};


    for (int i=0;i<=number_of_students;++i){
        cout<<"enter full name :";
        cin.ignore(); 
        getline(cin,name[i]);
        cout<<"enter mid exam :";
        cin>>exam[i][0];
        cout<<"enter final exam :";
        cin>>exam[i][1];
    }
    
    // 11 10 12 14
    cout<<"| full name | mid exam | final exam | total result |";
    for (int i=0; i<= number_of_students;++i){
        cout<<name[i];
    }


    return 0;
}