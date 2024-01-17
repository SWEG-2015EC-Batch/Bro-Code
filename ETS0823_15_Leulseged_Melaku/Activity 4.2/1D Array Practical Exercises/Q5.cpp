// Design a program that read total mark of a students’ and print the score level with the mark in tabular  format. Score status level for score >=80 Excellent, >=60 Very Good, >= 50 Fair, >=40 poor and <40 Fail.
#include<iostream>
using namespace std;
int main(){
    int count;
    cout<<"How many scores do you plan to add? ->";
    cin>>count;
    float score[count];

    for (int i = 1; i <= count; i++){
        cout<<"Enter score "<<i<<" ->";
        cin>>score[i-1];
    }

    // score >=80 Excellent, >=60 Very Good, >= 50 Fair, >=40 poor and <40 Fail
    cout<<"|\tscore\t|\tstatus\t\t|\tval\t|\n";
    for (int i = 0; i < count; i++){
        cout<<"|\t"<<score[i]<<"\t|";
        if (score[i] >= 80){
            cout<<"\tExcellent\t|";
            cout<<"\t>=80\t|\n";
        }
        else if (score[i] >= 60){
            cout<<"\tVery Good\t|";
            cout<<"\t>=60\t|\n";
        }
        else if (score[i] >= 50){
            cout<<"\tFair\t\t|";
            cout<<"\t>=50\t|\n";
        }
        else if (score[i] >= 40){
            cout<<"\tPoor\t\t|";
            cout<<"\t>=40\t|\n";
        }
        else{
            cout<<"\tFail\t\t|";
            cout<<"\t<=40\t|\n";
        }
    }
    return 0;
}